int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  const char *v2; // r1
  int *v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char v8[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = 2188;
  LOWORD(v1) = 1552;
  LOWORD(v2) = -9676;
  HIWORD(v0) = (unsigned int)"Skip DOAROA LOG" >> 16;
  HIWORD(v1) = (unsigned int)"iner" >> 16;
  HIWORD(v2) = (unsigned int)"32cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
  sprintf(v8, v2, v1, v0);
  strcpy(g_miner_compiletime, v8);
  LOWORD(v3) = 1564;
  HIWORD(v3) = (unsigned int)"f %s" >> 16;
  result = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  *(_DWORD *)g_miner_type = result;
  *(_DWORD *)&g_miner_type[4] = v5;
  *(_DWORD *)&g_miner_type[8] = v6;
  *(_DWORD *)&g_miner_type[12] = v7;
  return result;
}
