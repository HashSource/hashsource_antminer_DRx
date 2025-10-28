void *frontend_runtime_hns()
{
  int v0; // r12
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 9376;
  LOWORD(v1) = 10492;
  LOWORD(v2) = 8120;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v3) = 7872;
  LOWORD(v4) = -11608;
  dword_17AC14 = v0;
  dword_17AC18 = v1;
  HIWORD(v3) = (unsigned int)&loc_31C38 >> 16;
  dword_17AC1C = v2;
  HIWORD(v4) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -15088;
  LOWORD(v1) = -14400;
  LOWORD(v2) = 8952;
  dword_17AC20 = v3;
  dword_17AC24 = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v3) = 10420;
  LOWORD(v4) = 8896;
  dword_17AC28 = v0;
  HIWORD(v3) = (unsigned int)&loc_42614 >> 16;
  dword_17AC2C = v1;
  HIWORD(v4) = (unsigned int)&loc_42020 >> 16;
  dword_17AC30 = v2;
  LOWORD(v0) = -13728;
  LOWORD(v1) = -12292;
  LOWORD(v2) = 10680;
  dword_17AC34 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_17AC38 = v4;
  HIWORD(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42718 >> 16;
  LOWORD(v3) = 9664;
  LOWORD(v4) = -15960;
  dword_17AC3C = v0;
  dword_17AC40 = v1;
  HIWORD(v3) = (unsigned int)&loc_42320 >> 16;
  dword_17AC44 = v2;
  HIWORD(v4) = (unsigned int)&loc_3BF28 >> 16;
  dword_17AC48 = v3;
  dword_17AC4C = v4;
  *(_QWORD *)&dword_17AC54 = 0x4F4CC0004F4B8LL;
  dword_17AC50 = 324904;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, &dword_17AC14, 0x54u);
}
