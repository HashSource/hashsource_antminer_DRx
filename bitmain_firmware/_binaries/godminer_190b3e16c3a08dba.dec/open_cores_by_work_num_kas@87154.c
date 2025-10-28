int __fastcall open_cores_by_work_num_kas(int a1)
{
  char *v2; // r8
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r2
  _DWORD v13[8]; // [sp+10h] [bp-1020h] BYREF
  char v14[1024]; // [sp+30h] [bp-1000h] BYREF
  char v15; // [sp+430h] [bp-C00h] BYREF

  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s...", "open_cores_by_work_num_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "open_cores_by_work_num_kas",
    26,
    716,
    20,
    v14);
  memcpy(
    v14,
    "ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d304538f55a2595ec9fd64fe3c70b2e579f1490e8eb12ec48a70ee"
    "501bf2930097045d377c49bb1c0e655a091dc7c79d5c133ad1d7144019a1f460d1e5d49bab6304856cb540073d8cf3af0773bc7c065a702b8879"
    "33e7151ff49cec6ce4944c1f04a96035d0965fef04d7d744a67aeccb544a7610909ba9406ec1f748b4bd328404c4de9eefc1093f302f8f6bfd00"
    "674432cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a"
    "8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e"
    "543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3"
    "a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56"
    "745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912"
    "c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas",
    sizeof(v14));
  sub_828BC(a1, 29, 0);
  v2 = v14;
  v3 = calloc(1u, 0x50u);
  do
  {
    v4 = 1;
    str2hex((int)v13, (int)v2, 64);
    memset(v3, 0, 0x50u);
    v5 = v13[1];
    v6 = v13[2];
    v7 = v13[3];
    v3[4] = v13[0];
    v3[5] = v5;
    v3[6] = v6;
    v3[7] = v7;
    v8 = v13[5];
    v9 = v13[6];
    v10 = v13[7];
    v3[8] = v13[4];
    v3[9] = v8;
    v3[10] = v9;
    v3[11] = v10;
    do
    {
      v11 = v4++;
      sub_828BC(a1, 29, v11);
      push_work_base(a1, (int)v3);
      usleep((__useconds_t)&loc_30D40);
    }
    while ( v4 != 65 );
    v2 += 64;
  }
  while ( v2 != &v15 );
  free(v3);
  return 0;
}
