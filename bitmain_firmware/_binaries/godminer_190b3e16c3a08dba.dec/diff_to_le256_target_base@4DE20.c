__int64 __fastcall diff_to_le256_target_base(unsigned __int64 *a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  double v5; // r0
  double v6; // d8
  double v7; // r0
  double v8; // d8
  double v9; // r0
  unsigned __int64 v10; // r2
  __int64 result; // r0
  unsigned __int64 v12; // r2
  unsigned __int64 v13; // [sp+10h] [bp-1004h] BYREF
  unsigned __int64 v14; // [sp+18h] [bp-FFCh]
  __int64 v15; // [sp+20h] [bp-FF4h]
  unsigned __int64 v16; // [sp+28h] [bp-FECh]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v13, 0x1000u, 0, 1267980);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/base_common.c",
      155,
      "diff_to_le256_target_base",
      25,
      57,
      20,
      &v13);
  }
  else
  {
    v4 = v2 / v1;
  }
  v16 = (unsigned __int64)(v4 * 1.59309191e-58);
  LODWORD(v5) = sub_12E0FC(v16);
  v6 = v4 - v5 * 6.27710174e57;
  v15 = (unsigned __int64)(v6 * 2.93873588e-39);
  LODWORD(v7) = sub_12E0FC(v15);
  v8 = v6 - v7 * 3.40282367e38;
  v14 = (unsigned __int64)(v8 * 5.42101086e-20);
  LODWORD(v9) = sub_12E0FC(v14);
  v13 = (unsigned __int64)(v8 - v9 * 1.84467441e19);
  v10 = v14;
  *a1 = v13;
  a1[1] = v10;
  result = v15;
  v12 = v16;
  a1[2] = v15;
  a1[3] = v12;
  return result;
}
