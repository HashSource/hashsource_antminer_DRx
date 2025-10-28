int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  _DWORD *v2; // r10
  int v3; // r9
  int v5; // r6
  int v6; // r5
  int v7; // r2
  int v9; // [sp+18h] [bp-102Ch]
  int v10; // [sp+28h] [bp-101Ch]
  unsigned int v12; // [sp+30h] [bp-1014h]
  char v13; // [sp+3Bh] [bp-1009h] BYREF
  __int16 v14; // [sp+3Ch] [bp-1008h] BYREF
  unsigned __int16 v15; // [sp+3Eh] [bp-1006h] BYREF
  char v16[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v2) = 20532;
  v10 = 0;
  v12 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v3 = 900;
  else
    v3 = a2;
  HIWORD(v2) = 27;
  v5 = 80;
  if ( v12 > 0xB4 )
    goto LABEL_12;
  while ( 1 )
  {
    LOBYTE(v6) = 4;
    v15 = 0;
    while ( 1 )
    {
      v13 = -1;
      sub_D24D8(a1, v5, 0, &v13, 1);
      usleep((__useconds_t)&stru_186A0);
      v14 = v3;
      sub_D24D8(a1, v5, 33, (char *)&v14, 2);
      usleep((__useconds_t)&loc_30D40);
      sub_D29D8(a1, v5, &v15);
      v7 = v15;
      if ( v15 >= v3 - 9 && v15 <= v3 + 9 )
        break;
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, 1542460, v3, v15);
      V_UNLOCK();
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        165,
        "ISL_set_voltage_dynamic",
        23,
        181,
        60,
        v16);
      usleep((__useconds_t)&loc_30D40);
      v6 = (unsigned __int8)(v6 - 1);
      if ( !v6 )
      {
        v7 = v15;
        break;
      }
    }
    v9 = v7;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "Set one chain ISL: domain addr = %x set vol %d, get vol %d", v5, a2, v9);
    V_UNLOCK();
    ++v10;
    zlog(
      *v2,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "set_chain_isl_voltage",
      21,
      215,
      60,
      v16);
    if ( v10 == 3 )
      return 1;
    v5 = (unsigned __int8)aPqt[v10];
    if ( v12 > 0xB4 )
    {
LABEL_12:
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, 1542408, 810, 990, 900);
      V_UNLOCK();
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        165,
        "ISL_set_voltage_dynamic",
        23,
        154,
        60,
        v16);
    }
  }
}
