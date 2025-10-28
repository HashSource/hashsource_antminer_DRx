int __fastcall set_voltage_by_steps(int a1, int a2, unsigned int a3)
{
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r6
  signed int v10; // r8
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "set_voltage_by_steps to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_by_steps",
      20,
      468,
      40,
      v12);
    if ( byte_197B10 )
      v5 = dword_197B2C;
    else
      v5 = sub_5DAF0();
    v6 = a1 - v5;
    if ( a1 != v5 )
    {
      LOWORD(v7) = -13107;
      if ( a3 >= 0x64 )
        v8 = 100;
      else
        v8 = a3;
      HIWORD(v7) = -13108;
      v9 = (unsigned int)((v8 * (unsigned __int64)v7) >> 32) >> 3;
      if ( v6 < 0 )
        v9 = -v9;
      v10 = abs32(v9);
      while ( (int)abs32(v6) > v10 )
      {
        v5 += v9;
        v6 -= v9;
        sub_5DBF4(v5);
      }
      if ( a1 != v5 )
        sub_5DBF4(a1);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_by_steps",
      20,
      464,
      100,
      v12);
    return -1;
  }
}
