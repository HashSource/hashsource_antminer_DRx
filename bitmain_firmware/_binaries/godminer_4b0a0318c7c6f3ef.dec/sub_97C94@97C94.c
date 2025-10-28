int __fastcall sub_97C94(int a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r11
  _DWORD *v5; // r9
  _DWORD *v6; // r6
  int v7; // r3
  __int16 v8; // kr00_2
  int v9; // r4
  int v12; // [sp+48h] [bp-105Ch] BYREF
  int v13; // [sp+4Ch] [bp-1058h]
  _DWORD v14[2]; // [sp+50h] [bp-1054h] BYREF
  int v15; // [sp+58h] [bp-104Ch]
  int v16; // [sp+5Ch] [bp-1048h]
  _DWORD v17[7]; // [sp+60h] [bp-1044h] BYREF
  int v18; // [sp+7Ch] [bp-1028h]
  _DWORD v19[7]; // [sp+80h] [bp-1024h] BYREF
  int v20; // [sp+9Ch] [bp-1008h]
  char v21[4100]; // [sp+A0h] [bp-1004h] BYREF

  v5 = *(_DWORD **)(a1 + 352);
  v3 = 0;
  v15 = 1835009;
  v14[1] = 0;
  v14[0] = 0;
  v16 = 0;
  v12 = 0;
  v4 = calloc(12 * (_DWORD)v5, 1u);
  (*(void (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int *))(a1 + 296))(a1, v14, v5, v4, &v12);
  LOWORD(v5) = (unsigned __int16)&g_zc;
  if ( v12 > 0 )
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
    v6 = v4;
    do
    {
      while ( 1 )
      {
        ++v3;
        if ( *((_WORD *)v6 + 3) == 28 )
          break;
        v6 += 3;
        if ( v12 <= v3 )
          goto LABEL_7;
      }
      V_LOCK();
      v6 += 3;
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
        *((unsigned __int8 *)v6 - 8),
        *((unsigned __int16 *)v6 - 3),
        *(v6 - 3));
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_pll_sel_KDA_2110",
        28,
        352,
        20,
        v21);
    }
    while ( v12 > v3 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v7 = *v4;
  v8 = *v4;
  BYTE2(v13) = HIBYTE(v8);
  HIBYTE(v13) = v8;
  BYTE1(v13) = BYTE2(v7);
  LOBYTE(v13) = HIBYTE(v7);
  free(v4);
  v15 = 1835009;
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
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pll_sel_KDA_2110",
    28,
    364,
    40,
    v21);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v14);
  usleep(0x2710u);
  return v9;
}
