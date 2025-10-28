_DWORD *frontend_runtime_ckb()
{
  _DWORD *result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // lr
  int v4; // r12

  result = calloc(1u, 0x54u);
  LOWORD(v1) = 18340;
  LOWORD(v2) = 19456;
  HIWORD(v1) = (unsigned int)&off_32218 >> 16;
  HIWORD(v2) = (unsigned int)&loc_32678 >> 16;
  *result = v1;
  LOWORD(v3) = 17084;
  result[1] = v2;
  LOWORD(v4) = 16836;
  LOWORD(v1) = -2768;
  LOWORD(v2) = -6248;
  HIWORD(v3) = (unsigned int)&locret_31D30 >> 16;
  HIWORD(v4) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v1) = (unsigned int)json_object_iter >> 16;
  HIWORD(v2) = (unsigned int)&loc_3C290 >> 16;
  result[2] = v3;
  LOWORD(v3) = -5560;
  result[3] = v4;
  LOWORD(v4) = -2720;
  result[4] = v1;
  result[5] = v2;
  LOWORD(v2) = -864;
  HIWORD(v3) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3D054 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D794 >> 16;
  result[6] = v3;
  LOWORD(v3) = -4888;
  result[7] = v4;
  LOWORD(v4) = -3452;
  result[8] = 262232;
  LOWORD(v1) = -808;
  result[9] = v2;
  LOWORD(v2) = -1720;
  HIWORD(v3) = (unsigned int)&loc_3C7DC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D7CC >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D43C >> 16;
  result[10] = v3;
  LOWORD(v3) = -7120;
  result[11] = v4;
  result[12] = v1;
  result[13] = v2;
  HIWORD(v3) = (unsigned int)&def_3BA28 >> 16;
  result[14] = v3;
  result[15] = 357144;
  result[16] = 357128;
  result[17] = 357148;
  return result;
}
