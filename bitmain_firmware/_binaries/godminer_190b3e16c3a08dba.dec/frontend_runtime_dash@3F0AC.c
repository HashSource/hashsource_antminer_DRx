void *frontend_runtime_dash()
{
  int v0; // r12
  __int64 v1; // r2
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  LOWORD(v0) = 9376;
  LOWORD(v1) = 10492;
  WORD2(v1) = 8120;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  WORD1(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v1) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v2) = 7872;
  LOWORD(v3) = -11608;
  dword_17AAD8 = v0;
  qword_17AADC = v1;
  HIWORD(v2) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -15088;
  LOWORD(v1) = -14400;
  WORD2(v1) = -11560;
  dword_17AAE4 = v2;
  dword_17AAE8 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D054 >> 16;
  LOWORD(v2) = -4128;
  LOWORD(v3) = -7616;
  dword_17AAEC = v0;
  HIWORD(v2) = (unsigned int)&loc_3ED60 >> 16;
  qword_17AAF0 = v1;
  HIWORD(v3) = (unsigned int)&loc_3DFBC >> 16;
  LOWORD(v0) = -13728;
  LOWORD(v1) = -12292;
  WORD2(v1) = -7508;
  dword_17AAF8 = v2;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_17AAFC = v3;
  WORD1(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3E028 >> 16;
  LOWORD(v2) = -8372;
  LOWORD(v3) = -15960;
  dword_17AB00 = v0;
  qword_17AB04 = v1;
  HIWORD(v2) = (unsigned int)&loc_3DCC8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  LOWORD(v0) = -6752;
  LOWORD(v1) = -7200;
  WORD2(v1) = -7352;
  HIWORD(v0) = (unsigned int)&loc_4FF98 >> 16;
  WORD1(v1) = (unsigned int)&loc_4FDD8 >> 16;
  HIWORD(v1) = (unsigned int)&loc_4FD40 >> 16;
  dword_17AB0C = v2;
  dword_17AB10 = v3;
  *(_QWORD *)&dword_17AB18 = v1;
  dword_17AB14 = v0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_17AAD8, 0x54u);
}
