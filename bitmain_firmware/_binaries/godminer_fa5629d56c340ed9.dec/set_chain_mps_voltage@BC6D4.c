int __fastcall set_chain_mps_voltage(int a1, char a2, unsigned int a3, unsigned int a4)
{
  int v4; // r10
  unsigned int v5; // r5
  unsigned int v9; // r2
  bool v10; // cc
  unsigned int v11; // r3
  unsigned int v12; // r1
  int v13; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r2
  unsigned __int16 v18; // [sp+1Ch] [bp-100Ch] BYREF
  unsigned __int16 v19; // [sp+1Eh] [bp-100Ah] BYREF
  _BYTE src[8]; // [sp+20h] [bp-1008h] BYREF
  char v21[4096]; // [sp+28h] [bp-1000h] BYREF

  v5 = a3;
  if ( a3 - 2350 > 0x12C )
  {
    if ( a3 <= 0xA59 )
      v4 = 2350;
    else
      v4 = 2650;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "the mps_voltage_1 value-%d is out of the allowed range(%d-%d)", v4, 2350, 2650);
    v5 = v4;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      282,
      40,
      v21);
  }
  if ( a4 - 2350 > 0x12C )
  {
    if ( a4 <= 0xA59 )
      a4 = 2350;
    else
      a4 = 2650;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "the mps_voltage_2 value-%d is out of the allowed range(%d-%d)", a4, 2350, 2650);
    V_UNLOCK();
    LOBYTE(v4) = a4;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      288,
      40,
      v21);
  }
  get_chain_mps_voltage1(a1, a2, &v18);
  if ( v18 == v5 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "voltage1 is already set to %d", v5);
    V_UNLOCK();
    v15 = 294;
    goto LABEL_25;
  }
  get_chain_mps_voltage2(a1, a2, &v19);
  if ( v19 == a4 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "voltage2 is already set to %d", a4);
    V_UNLOCK();
    v15 = 301;
LABEL_25:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      v15,
      20,
      v21);
    return 0;
  }
  if ( !sub_BC3A0(a1, a2, 0, v19) )
    goto LABEL_23;
  v9 = (unsigned __int8)(a2 - 1);
  v10 = v9 > 3;
  if ( v9 > 3 )
    LOBYTE(v4) = 114;
  v11 = ((int)(v5 - 490) / 10) & 0x1FF;
  v12 = v11 >> 8;
  src[0] = (int)(v5 - 490) / 10;
  if ( v9 <= 3 )
    v11 = (unsigned int)"hex_dump";
  src[1] = v12;
  if ( v9 <= 3 )
    v9 += v11;
  if ( !v10 )
    LOBYTE(v4) = *(_BYTE *)(v9 + 44);
  if ( !sub_BC348(a1, v4, 33, src, 2u) )
    goto LABEL_23;
  if ( !sub_BC3A0(a1, a2, 2, v13) )
    goto LABEL_23;
  src[0] = 32 * ((char)(a4 + 22) / 10);
  if ( !sub_BC348(a1, v4, 13, src, 2u) )
    goto LABEL_23;
  get_chain_mps_voltage1(a1, a2, &v18);
  if ( v18 != v5 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "voltage1 set failed!", v5);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 345;
LABEL_31:
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      v17,
      100,
      v21);
LABEL_23:
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "set_chain_mps_voltage error, fd %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      360,
      100,
      v21);
    return 1;
  }
  get_chain_mps_voltage2(a1, a2, &v19);
  if ( v19 != a4 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "voltage2 set failed!", a4);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 353;
    goto LABEL_31;
  }
  return 0;
}
