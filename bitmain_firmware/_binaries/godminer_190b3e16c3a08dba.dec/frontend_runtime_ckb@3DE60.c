_DWORD *frontend_runtime_ckb()
{
  _DWORD *result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // lr
  int v4; // r12

  result = calloc(1u, 0x54u);
  LOWORD(v1) = 9376;
  LOWORD(v2) = 10492;
  HIWORD(v1) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v2) = (unsigned int)&loc_32678 >> 16;
  *result = v1;
  LOWORD(v3) = 8120;
  result[1] = v2;
  LOWORD(v4) = 7872;
  LOWORD(v1) = -11608;
  LOWORD(v2) = -15088;
  HIWORD(v3) = (unsigned int)&loc_31D30 >> 16;
  HIWORD(v4) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D024 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3C290 >> 16;
  result[2] = v3;
  LOWORD(v3) = -14400;
  result[3] = v4;
  LOWORD(v4) = -11560;
  result[4] = v1;
  LOWORD(v1) = -8752;
  result[5] = v2;
  LOWORD(v2) = -9704;
  HIWORD(v3) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3D054 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3DB4C >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D794 >> 16;
  result[6] = v3;
  LOWORD(v3) = -13728;
  result[7] = v4;
  LOWORD(v4) = -12292;
  result[8] = v1;
  LOWORD(v1) = -9648;
  result[9] = v2;
  LOWORD(v2) = -10560;
  HIWORD(v3) = (unsigned int)&loc_3C7DC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D7CC >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D43C >> 16;
  result[10] = v3;
  LOWORD(v3) = -15960;
  result[11] = v4;
  LOWORD(v4) = -7376;
  result[12] = v1;
  LOWORD(v1) = -7392;
  result[13] = v2;
  LOWORD(v2) = -7372;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  HIWORD(v4) = (unsigned int)&loc_4FD28 >> 16;
  HIWORD(v1) = (unsigned int)&loc_4FD18 >> 16;
  HIWORD(v2) = (unsigned int)&loc_4FD2C >> 16;
  result[14] = v3;
  result[15] = v4;
  result[16] = v1;
  result[17] = v2;
  return result;
}
