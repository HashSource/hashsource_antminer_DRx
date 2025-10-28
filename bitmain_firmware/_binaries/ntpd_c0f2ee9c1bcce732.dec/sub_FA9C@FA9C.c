_DWORD *__fastcall sub_FA9C(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_10D64(24);
  *result = a1;
  result[2] = a2;
  result[4] = 309;
  return result;
}
