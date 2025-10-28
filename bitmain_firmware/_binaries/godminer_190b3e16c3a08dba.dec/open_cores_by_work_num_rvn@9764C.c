int __fastcall open_cores_by_work_num_rvn(int a1)
{
  _DWORD *v2; // r3
  int v3; // r1
  char *v4; // r9
  void *v5; // r6
  __int64 v6; // kr00_8
  int v7; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r2
  _DWORD v16[8]; // [sp+18h] [bp-1024h] BYREF
  char v17[1024]; // [sp+38h] [bp-1004h] BYREF
  int v18; // [sp+438h] [bp-C04h] BYREF

  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, 1391692, "open_cores_by_work_num_rvn");
  V_UNLOCK();
  LOWORD(v2) = -12376;
  HIWORD(v2) = (unsigned int)&unk_18B290 >> 16;
  LOWORD(v3) = -30960;
  HIWORD(v3) = (unsigned int)"ner-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(*v2, v3, 171, "open_cores_by_work_num_rvn", 26, 742, 20, v17);
  memcpy(
    v17,
    "ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d304538f55a2595ec9fd64fe3c70b2e579f1490e8eb12ec48a70ee"
    "501bf2930097045d377c49bb1c0e655a091dc7c79d5c133ad1d7144019a1f460d1e5d49bab6304856cb540073d8cf3af0773bc7c065a702b8879"
    "33e7151ff49cec6ce4944c1f04a96035d0965fef04d7d744a67aeccb544a7610909ba9406ec1f748b4bd328404c4de9eefc1093f302f8f6bfd00"
    "674432cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a"
    "8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e"
    "543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3"
    "a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56"
    "745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912"
    "c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_rvn",
    sizeof(v17));
  v4 = v17;
  sub_92B4C(a1, 29, 0);
  v5 = calloc(1u, 0x59u);
  v6 = 0;
  do
  {
    v7 = 1;
    str2hex((int)v16, (int)v4, 64);
    memset(v5, 0, 0x59u);
    v8 = v16[1];
    v9 = v16[2];
    v10 = v16[3];
    *((_DWORD *)v5 + 4) = v16[0];
    *((_DWORD *)v5 + 5) = v8;
    *((_DWORD *)v5 + 6) = v9;
    *((_DWORD *)v5 + 7) = v10;
    v11 = v16[5];
    v12 = v16[6];
    v13 = v16[7];
    *((_DWORD *)v5 + 8) = v16[4];
    *((_DWORD *)v5 + 9) = v11;
    *((_DWORD *)v5 + 10) = v12;
    *((_DWORD *)v5 + 11) = v13;
    *((_QWORD *)v5 + 1) = v6;
    do
    {
      v14 = v7++;
      sub_92B4C(a1, 29, v14);
      push_work_base(a1, (int)v5);
      usleep((__useconds_t)&loc_30D40);
    }
    while ( v7 != 65 );
    v4 += 64;
    v6 += 2;
  }
  while ( &v18 != (int *)v4 );
  free(v5);
  return 0;
}
