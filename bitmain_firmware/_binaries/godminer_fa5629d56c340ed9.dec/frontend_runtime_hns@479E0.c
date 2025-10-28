void *frontend_runtime_hns()
{
  int v0; // r12
  __int64 v1; // r2
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  LOWORD(v0) = 18340;
  LOWORD(v1) = 19456;
  WORD2(v1) = 17084;
  HIWORD(v0) = (unsigned int)&off_32218 >> 16;
  WORD1(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v1) = (unsigned int)&locret_31D30 >> 16;
  LOWORD(v2) = 16836;
  LOWORD(v3) = -2768;
  dword_197648 = v0;
  qword_19764C = v1;
  HIWORD(v2) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v3) = (unsigned int)json_object_iter >> 16;
  LOWORD(v0) = -6248;
  LOWORD(v1) = -5560;
  WORD2(v1) = 25768;
  dword_197654 = v2;
  dword_197658 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v1) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v2) = 27236;
  LOWORD(v3) = 25712;
  dword_19765C = v0;
  HIWORD(v2) = (unsigned int)&loc_42614 >> 16;
  qword_197660 = v1;
  HIWORD(v3) = (unsigned int)&loc_42020 >> 16;
  LOWORD(v0) = -4888;
  LOWORD(v1) = -3452;
  WORD2(v1) = 27496;
  dword_197668 = v2;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_19766C = v3;
  WORD1(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_42718 >> 16;
  LOWORD(v2) = 26480;
  LOWORD(v3) = -7120;
  dword_197670 = v0;
  qword_197674 = v1;
  HIWORD(v2) = (unsigned int)&loc_42320 >> 16;
  HIWORD(v3) = (unsigned int)&def_3BA28 >> 16;
  LOWORD(v0) = -28488;
  LOWORD(v1) = -28600;
  WORD2(v1) = -28580;
  HIWORD(v0) = (unsigned int)&loc_50F20 >> 16;
  WORD1(v1) = (unsigned int)&loc_50EB0 >> 16;
  HIWORD(v1) = (unsigned int)&loc_50EC4 >> 16;
  dword_19767C = v2;
  dword_197680 = v3;
  *(_QWORD *)&dword_197688 = v1;
  dword_197684 = v0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_197648, 0x54u);
}
