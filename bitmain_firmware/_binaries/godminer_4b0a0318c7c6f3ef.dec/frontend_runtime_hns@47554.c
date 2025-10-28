void *frontend_runtime_hns()
{
  int v0; // r12
  __int64 v1; // r2
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  LOWORD(v0) = 17212;
  LOWORD(v1) = 18328;
  WORD2(v1) = 15956;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  WORD1(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v1) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v2) = 15708;
  LOWORD(v3) = -3896;
  dword_196638 = v0;
  qword_19663C = v1;
  HIWORD(v2) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -7376;
  LOWORD(v1) = -6688;
  WORD2(v1) = 24604;
  dword_196644 = v2;
  dword_196648 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v1) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v2) = 26072;
  LOWORD(v3) = 24548;
  dword_19664C = v0;
  HIWORD(v2) = (unsigned int)&loc_42614 >> 16;
  qword_196650 = v1;
  HIWORD(v3) = (unsigned int)&loc_42020 >> 16;
  LOWORD(v0) = -6016;
  LOWORD(v1) = -4580;
  WORD2(v1) = 26332;
  dword_196658 = v2;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_19665C = v3;
  WORD1(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)sub_42718 >> 16;
  LOWORD(v2) = 25316;
  LOWORD(v3) = -8248;
  dword_196660 = v0;
  qword_196664 = v1;
  HIWORD(v2) = (unsigned int)&loc_42320 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  LOWORD(v0) = -31528;
  LOWORD(v1) = -31640;
  WORD2(v1) = -31620;
  HIWORD(v0) = (unsigned int)&loc_50F20 >> 16;
  WORD1(v1) = (unsigned int)&loc_50EB0 >> 16;
  HIWORD(v1) = (unsigned int)&loc_50EC4 >> 16;
  dword_19666C = v2;
  dword_196670 = v3;
  *(_QWORD *)&dword_196678 = v1;
  dword_196674 = v0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_196638, 0x54u);
}
