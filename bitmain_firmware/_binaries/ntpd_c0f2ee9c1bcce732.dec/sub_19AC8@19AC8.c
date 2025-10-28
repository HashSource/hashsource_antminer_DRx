int __fastcall sub_19AC8(int a1, int a2)
{
  _WORD *v2; // r4
  int result; // r0

  v2 = off_7954C;
  result = strtol(*(const char **)(a2 + 24), 0, 10);
  v2[199] = result;
  return result;
}
