int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char *v3; // r9
  int v4; // r5
  int v5; // r6
  int v6; // t1
  int v8; // [sp+10h] [bp-1038h]
  unsigned __int16 v10; // [sp+1Eh] [bp-102Ah] BYREF
  char v11[4136]; // [sp+20h] [bp-1028h] BYREF

  if ( a3 <= 2 )
    return 0;
  v3 = "QT";
  v4 = a2 - 2;
  v5 = 80;
  v8 = a2 + 4;
  while ( 1 )
  {
    v10 = 0;
    sub_BB334(a1, v5, &v10);
    *(_WORD *)(v4 + 2) = v10;
    v4 += 2;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, 1434612, v5, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v11);
    if ( v4 == v8 )
      break;
    v6 = (unsigned __int8)*v3++;
    v5 = v6;
  }
  return 1;
}
