_DWORD *__fastcall set_dev_invalid_hal(int a1)
{
  int v1; // r1
  _DWORD *result; // r0

  v1 = total_chain;
  result = (_DWORD *)(8 * a1 + 1798008);
  *((_BYTE *)result + 4) = 0;
  total_chain = v1 - 1;
  return result;
}
