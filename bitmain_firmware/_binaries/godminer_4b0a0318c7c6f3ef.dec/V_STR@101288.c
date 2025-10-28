_DWORD *__fastcall V_STR(_DWORD *a1, char *s, const char *a3)
{
  size_t v6; // r7

  ++dword_1B5044;
  v6 = strlen(s);
  a1[6] = strlen(a3);
  *a1 = s;
  a1[1] = v6;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  a1[7] = 0;
  a1[4] = a3;
  return a1;
}
