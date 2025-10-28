int __fastcall sub_97208(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  int v6; // r4
  unsigned int v8; // [sp+3Ch] [bp-1038h] BYREF
  _DWORD v9[2]; // [sp+40h] [bp-1034h] BYREF
  int v10; // [sp+48h] [bp-102Ch]
  int v11; // [sp+4Ch] [bp-1028h]
  _DWORD v12[7]; // [sp+50h] [bp-1024h] BYREF
  int v13; // [sp+6Ch] [bp-1008h]
  char v14[4100]; // [sp+70h] [bp-1004h] BYREF

  v3 = 0;
  v10 = 0;
  v9[1] = 0;
  v11 = 0;
  v8 = 0;
  v9[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v10) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v10) = 12;
  }
  else
  {
    HIWORD(v10) = v3;
  }
  sub_9685C(&v8);
  v9[0] = v8;
  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v2,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_KDA_2110",
    25,
    814,
    40,
    v14);
  if ( v2 <= 0.0 )
    v6 = -1;
  else
    v6 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v9);
  usleep(0x2710u);
  return v6;
}
