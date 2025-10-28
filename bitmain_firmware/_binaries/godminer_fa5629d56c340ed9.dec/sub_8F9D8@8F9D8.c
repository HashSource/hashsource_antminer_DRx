int __fastcall sub_8F9D8(int a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r11
  _DWORD *v5; // r9
  _DWORD *v6; // r6
  int v7; // r3
  int v8; // r4
  int v11; // [sp+48h] [bp-105Ch] BYREF
  int v12; // [sp+4Ch] [bp-1058h]
  _DWORD v13[2]; // [sp+50h] [bp-1054h] BYREF
  int v14; // [sp+58h] [bp-104Ch]
  int v15; // [sp+5Ch] [bp-1048h]
  _DWORD v16[7]; // [sp+60h] [bp-1044h] BYREF
  int v17; // [sp+7Ch] [bp-1028h]
  _DWORD v18[7]; // [sp+80h] [bp-1024h] BYREF
  int v19; // [sp+9Ch] [bp-1008h]
  char v20[4100]; // [sp+A0h] [bp-1004h] BYREF

  v5 = *(_DWORD **)(a1 + 356);
  v3 = 0;
  v14 = 1835009;
  v13[1] = 0;
  v13[0] = 0;
  v15 = 0;
  v11 = 0;
  v4 = calloc(12 * (_DWORD)v5, 1u);
  (*(void (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int *))(a1 + 300))(a1, v13, v5, v4, &v11);
  LOWORD(v5) = (unsigned __int16)&g_zc;
  if ( v11 > 0 )
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
        if ( v11 <= v3 )
          goto LABEL_7;
      }
      V_LOCK();
      v6 += 3;
      V_INT((int)v16, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v20,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
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
        "ChipSetting_pll_sel_HNS_2130",
        28,
        352,
        20,
        v20);
    }
    while ( v11 > v3 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v7 = *v4;
  HIBYTE(v12) = *v4;
  BYTE2(v12) = BYTE1(v7);
  BYTE1(v12) = BYTE2(v7);
  LOBYTE(v12) = HIBYTE(v7);
  free(v4);
  v14 = 1835009;
  v13[0] = v12 & 0xFFFFFFFB | (4 * (_BYTE)a2) & 4;
  V_LOCK();
  V_INT((int)v18, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v20,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "set pll sel %u %08x",
    a2,
    v13[0]);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pll_sel_HNS_2130",
    28,
    364,
    40,
    v20);
  v8 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v13);
  usleep(0x2710u);
  return v8;
}
