int __fastcall diff_to_be256_target_base(int a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  unsigned __int64 v5; // r0
  double v6; // r0
  double v7; // d8
  unsigned __int64 v8; // r0
  double v9; // r0
  double v10; // d8
  unsigned __int64 v11; // r0
  double v12; // r0
  unsigned __int64 v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned __int64 v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v20; // [sp+10h] [bp-1004h] BYREF
  unsigned int v21; // [sp+14h] [bp-1000h]
  unsigned int v22; // [sp+18h] [bp-FFCh]
  unsigned int v23; // [sp+1Ch] [bp-FF8h]
  unsigned __int64 v24; // [sp+20h] [bp-FF4h]
  unsigned int v25; // [sp+28h] [bp-FECh]
  unsigned int v26; // [sp+2Ch] [bp-FE8h]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v20, 0x1000u, 0, 1267980);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/base_common.c",
      155,
      "diff_to_be256_target_base",
      25,
      169,
      20,
      &v20);
  }
  else
  {
    v4 = v2 / v1;
  }
  v5 = (unsigned __int64)(v4 * 1.59309191e-58);
  v20 = bswap32(HIDWORD(v5));
  v21 = bswap32(v5);
  LODWORD(v6) = sub_12E0FC(v5);
  v7 = v4 - v6 * 6.27710174e57;
  v8 = (unsigned __int64)(v7 * 2.93873588e-39);
  v23 = bswap32(v8);
  v22 = bswap32(HIDWORD(v8));
  LODWORD(v9) = sub_12E0FC(v8);
  v10 = v7 - v9 * 3.40282367e38;
  v11 = (unsigned __int64)(v10 * 5.42101086e-20);
  v24 = _byteswap_uint64(v11);
  LODWORD(v12) = sub_12E0FC(v11);
  v13 = (unsigned __int64)(v10 - v12 * 1.84467441e19);
  v26 = bswap32(v13);
  v25 = bswap32(HIDWORD(v13));
  HIDWORD(v13) = v21;
  v14 = v22;
  v15 = v23;
  *(_DWORD *)a1 = v20;
  *(_DWORD *)(a1 + 4) = HIDWORD(v13);
  *(_DWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 12) = v15;
  v16 = v24;
  v17 = v25;
  v18 = v26;
  *(_QWORD *)(a1 + 16) = v24;
  *(_DWORD *)(a1 + 24) = v17;
  *(_DWORD *)(a1 + 28) = v18;
  return v16;
}
