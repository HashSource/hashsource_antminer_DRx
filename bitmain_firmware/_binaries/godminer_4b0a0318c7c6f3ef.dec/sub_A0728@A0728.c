int __fastcall sub_A0728(int a1, int a2)
{
  int v2; // r6
  int v4; // r5
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  _DWORD *v7; // r6
  int v8; // r3
  int v9; // r4
  int v12; // [sp+40h] [bp-105Ch] BYREF
  int v13; // [sp+44h] [bp-1058h]
  _DWORD v14[2]; // [sp+48h] [bp-1054h] BYREF
  int v15; // [sp+50h] [bp-104Ch]
  int v16; // [sp+54h] [bp-1048h]
  _DWORD v17[7]; // [sp+58h] [bp-1044h] BYREF
  int v18; // [sp+74h] [bp-1028h]
  _DWORD v19[7]; // [sp+78h] [bp-1024h] BYREF
  int v20; // [sp+94h] [bp-1008h]
  char v21[4100]; // [sp+98h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 352);
  v4 = 0;
  v15 = 1572865;
  v14[1] = 0;
  v14[0] = 0;
  LOWORD(v5) = (unsigned __int16)&g_zc;
  v16 = 0;
  v12 = 0;
  v6 = calloc(12 * v2, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 296))(a1, v14, v2, v6, &v12);
  if ( v12 > 0 )
  {
    v7 = v6;
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
    do
    {
      while ( 1 )
      {
        ++v4;
        if ( *((_WORD *)v7 + 3) == 24 )
          break;
        v7 += 3;
        if ( v12 <= v4 )
          goto LABEL_7;
      }
      V_LOCK();
      v7 += 3;
      V_INT((int)v17, "chain", *(int *)(a1 + 256));
      logfmt_raw(
        v21,
        0x1000u,
        0,
        v18,
        v17[0],
        v17[1],
        v17[2],
        v17[3],
        v17[4],
        v17[5],
        v17[6],
        v18,
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v7 - 8),
        *((unsigned __int16 *)v7 - 3),
        *(v7 - 3),
        *(v7 - 3));
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/./backend/chip_setting.c",
        152,
        "ChipSetting_pll_sel_LTC_1489",
        28,
        352,
        20,
        v21);
    }
    while ( v12 > v4 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v8 = *v6;
  HIBYTE(v13) = *v6;
  BYTE2(v13) = BYTE1(v8);
  BYTE1(v13) = BYTE2(v8);
  LOBYTE(v13) = HIBYTE(v8);
  free(v6);
  v15 = 1572865;
  v14[0] = v13 & 0xFFFFFFFB | (4 * (_BYTE)a2) & 4;
  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    "set pll sel %u %08x",
    a2,
    v14[0]);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/./backend/chip_setting.c",
    152,
    "ChipSetting_pll_sel_LTC_1489",
    28,
    364,
    40,
    v21);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v14);
  usleep(0x2710u);
  return v9;
}
