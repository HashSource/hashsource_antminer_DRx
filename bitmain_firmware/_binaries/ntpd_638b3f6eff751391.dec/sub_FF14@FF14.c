_DWORD *__fastcall sub_FF14(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_10D64(16);
  *result = a1;
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}
