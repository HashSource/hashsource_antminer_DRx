int __fastcall open_cores_by_work_num_rvn(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  char *v5; // r9
  void *v6; // r6
  __int64 v7; // kr00_8
  int v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r2
  _DWORD v17[8]; // [sp+18h] [bp-1024h] BYREF
  char v18[1024]; // [sp+38h] [bp-1004h] BYREF
  int v19; // [sp+438h] [bp-C04h] BYREF

  V_LOCK();
  LOWORD(v2) = -8076;
  HIWORD(v2) = (unsigned int)"" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v2, "open_cores_by_work_num_rvn");
  V_UNLOCK();
  LOWORD(v3) = 24916;
  HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v4) = 15232;
  HIWORD(v4) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v3, v4, 171, "open_cores_by_work_num_rvn", 26, 988, 20, v18);
  memcpy(
    v18,
    "ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d304538f55a2595ec9fd64fe3c70b2e579f1490e8eb12ec48a70ee"
    "501bf2930097045d377c49bb1c0e655a091dc7c79d5c133ad1d7144019a1f460d1e5d49bab6304856cb540073d8cf3af0773bc7c065a702b8879"
    "33e7151ff49cec6ce4944c1f04a96035d0965fef04d7d744a67aeccb544a7610909ba9406ec1f748b4bd328404c4de9eefc1093f302f8f6bfd00"
    "674432cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a"
    "8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e"
    "543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3"
    "a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56"
    "745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912"
    "c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_rvn",
    sizeof(v18));
  v5 = v18;
  sub_A55C8(a1, 29, 0);
  v6 = calloc(1u, 0x59u);
  v7 = 0;
  do
  {
    v8 = 1;
    str2hex((int)v17, (int)v5, 64);
    memset(v6, 0, 0x59u);
    v9 = v17[1];
    v10 = v17[2];
    v11 = v17[3];
    *((_DWORD *)v6 + 4) = v17[0];
    *((_DWORD *)v6 + 5) = v9;
    *((_DWORD *)v6 + 6) = v10;
    *((_DWORD *)v6 + 7) = v11;
    v12 = v17[5];
    v13 = v17[6];
    v14 = v17[7];
    *((_DWORD *)v6 + 8) = v17[4];
    *((_DWORD *)v6 + 9) = v12;
    *((_DWORD *)v6 + 10) = v13;
    *((_DWORD *)v6 + 11) = v14;
    *((_QWORD *)v6 + 1) = v7;
    do
    {
      v15 = v8++;
      sub_A55C8(a1, 29, v15);
      push_work_base(a1, (int)v6);
      usleep((__useconds_t)&loc_30D40);
    }
    while ( v8 != 65 );
    v5 += 64;
    v7 += 2;
  }
  while ( &v19 != (int *)v5 );
  free(v6);
  return 0;
}
