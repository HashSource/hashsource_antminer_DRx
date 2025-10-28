char *__fastcall sub_4F4E8(const char *a1)
{
  size_t v2; // r4
  char *v3; // r6

  v2 = strlen(a1) + 1;
  v3 = sub_4F478(0, v2, 0, 0);
  memcpy(v3, a1, v2);
  return v3;
}
