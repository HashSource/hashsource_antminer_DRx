int __fastcall sub_BB88(const char *a1)
{
  size_t v1; // r0
  char v3[132]; // [sp+0h] [bp-84h] BYREF

  snprintf(v3, 0x80u, "settimeofday=\"%s\"", a1);
  v1 = strlen(v3);
  return sub_1CE68(v3, v1 + 1, 1);
}
