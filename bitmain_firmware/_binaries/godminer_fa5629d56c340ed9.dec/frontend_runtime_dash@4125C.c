void *frontend_runtime_dash()
{
  int v0; // r12
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 18340;
  LOWORD(v1) = 19456;
  LOWORD(v2) = 17084;
  HIWORD(v0) = (unsigned int)&off_32218 >> 16;
  HIWORD(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&locret_31D30 >> 16;
  LOWORD(v3) = 16836;
  LOWORD(v4) = -2768;
  dword_1974B8 = v0;
  dword_1974BC = v1;
  HIWORD(v3) = (unsigned int)&loc_31C38 >> 16;
  dword_1974C0 = v2;
  HIWORD(v4) = (unsigned int)json_object_iter >> 16;
  LOWORD(v0) = -6248;
  LOWORD(v1) = -5560;
  LOWORD(v2) = -2720;
  dword_1974C4 = v3;
  dword_1974C8 = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D054 >> 16;
  dword_1974CC = v0;
  dword_1974D0 = v1;
  dword_1974D4 = v2;
  LOWORD(v0) = -4888;
  LOWORD(v1) = -3452;
  dword_1974D8 = 266640;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_1974DC = 263368;
  HIWORD(v1) = (unsigned int)&loc_3CD78 >> 16;
  LOWORD(v4) = -7120;
  dword_1974E0 = v0;
  dword_1974E4 = v1;
  dword_1974E8 = 263476;
  HIWORD(v4) = (unsigned int)&def_3BA28 >> 16;
  dword_1974EC = 262612;
  dword_1974F0 = v4;
  *(_QWORD *)&dword_1974F8 = 0x57330000573C8LL;
  dword_1974F4 = 357768;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, &dword_1974B8, 0x54u);
}
