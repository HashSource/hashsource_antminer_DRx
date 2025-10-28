int __fastcall set_chain_mps_voltage(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r7
  int v6; // r4
  unsigned __int16 v7; // [sp+16h] [bp-100Eh] BYREF
  _WORD src[4]; // [sp+18h] [bp-100Ch] BYREF
  char v9[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = a2;
  if ( a2 - 2350 > 0x12C )
  {
    if ( a2 <= 0xA59 )
      v4 = 2350;
    else
      v4 = 2650;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1527124, v4, 2350, 2650);
    V_UNLOCK();
    v2 = v4;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      207,
      40,
      v9);
  }
  get_chain_mps_voltage(a1, &v7);
  if ( v7 == v2 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1527184, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      213,
      20,
      v9);
    return 0;
  }
  else if ( sub_BB300(a1, 0)
         && (v6 = (int)(v2 - 490) / 10, src[0] = v6 & 0x1FF, sub_BB2A0(a1, 33, src, 2u))
         && sub_BB300(a1, 2)
         && (src[0] = (32 * v6) & 0x3FE0 | 0xC, sub_BB2A0(a1, 13, src, 2u)) )
  {
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1527220, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      250,
      100,
      v9);
    return 1;
  }
}
