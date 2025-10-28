int __fastcall sub_9BA80(int a1, char a2, int a3)
{
  float v3; // s0
  __int16 v5; // r3
  char v6; // r1
  int v7; // r4
  int v9; // [sp+24h] [bp-104Ch]
  unsigned int v10; // [sp+3Ch] [bp-1034h] BYREF
  _DWORD v11[2]; // [sp+40h] [bp-1030h] BYREF
  int v12; // [sp+48h] [bp-1028h]
  int v13; // [sp+4Ch] [bp-1024h]
  _DWORD v14[7]; // [sp+50h] [bp-1020h] BYREF
  int v15; // [sp+6Ch] [bp-1004h]
  char v16[4096]; // [sp+70h] [bp-1000h] BYREF

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 452) * a2;
  v12 = 0;
  v11[1] = 0;
  v13 = 0;
  v10 = 0;
  v11[0] = 0;
  if ( !a3 )
    v5 = 8;
  BYTE1(v12) = v6;
  if ( a3 )
  {
    if ( a3 == 1 )
      HIWORD(v12) = 12;
  }
  else
  {
    HIWORD(v12) = v5;
  }
  sub_9B55C(&v10);
  v11[0] = v10;
  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "set freq: %.2f, expected freq: %.2f",
    v9,
    v3,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_one_asic_freq_KS5_2382",
    34,
    836,
    20,
    v16);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v11);
  usleep(0x2710u);
  return v7;
}
