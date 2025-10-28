_BYTE *__fastcall sub_5DC10(int a1, unsigned int *a2)
{
  _BYTE *result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 1;
  for ( result = (_BYTE *)sub_5D878(a1, a2, &v4); result && *result == 45; result = (_BYTE *)sub_5D878(
                                                                                               (int)result,
                                                                                               a2,
                                                                                               &v4) )
    ;
  return result;
}
