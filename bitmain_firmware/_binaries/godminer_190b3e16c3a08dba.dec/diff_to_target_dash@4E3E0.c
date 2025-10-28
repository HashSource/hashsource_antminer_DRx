int __fastcall diff_to_target_dash(unsigned __int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // r0
  double v5; // d8
  __int64 v6; // kr00_8
  double v7; // r0
  double v8; // d8
  __int64 v9; // kr08_8
  double v10; // r0
  unsigned __int64 v11; // r0
  unsigned __int64 v12; // r0
  unsigned __int64 v13; // r2
  _QWORD v15[2]; // [sp+10h] [bp-1004h] BYREF
  unsigned __int64 v16; // [sp+20h] [bp-FF4h]
  unsigned __int64 v17; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v15, 0x1000u, 0, 1267980);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/dash/dash_dhash_common.c",
      166,
      "diff_to_target_dash",
      19,
      58,
      20,
      v15);
    v3 = 4294901760LL;
    v11 = 0;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(2.69595353e67 / v1 * 1.59309191e-58);
    LODWORD(v4) = sub_12E0FC(v3);
    v5 = 2.69595353e67 / v1 - v4 * 6.27710174e57;
    v6 = (unsigned __int64)(v5 * 2.93873588e-39);
    LODWORD(v7) = sub_12E0FC(v6);
    v8 = v5 - v7 * 3.40282367e38;
    v9 = (unsigned __int64)(v8 * 5.42101086e-20);
    LODWORD(v10) = sub_12E0FC(v9);
    v11 = (unsigned __int64)(v8 - v10 * 1.84467441e19);
  }
  v17 = v3;
  v16 = v6;
  v15[1] = v9;
  v15[0] = v11;
  *a1 = v11;
  a1[1] = v9;
  v12 = v16;
  v13 = v17;
  a1[2] = v16;
  a1[3] = v13;
  return v12;
}
