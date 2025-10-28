_DWORD *__fastcall sub_FAC4(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_10D64(24);
  *result = a1;
  result[2] = a3 | (a2 << 16);
  result[4] = 309;
  return result;
}
