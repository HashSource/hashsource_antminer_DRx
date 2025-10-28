_BYTE *__fastcall sub_5DBB4(unsigned int *a1)
{
  _BYTE *result; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  for ( result = (_BYTE *)sub_5D7D8(a1, &v3); result && *result == 45; result = (_BYTE *)sub_5D878((int)result, a1, &v3) )
    ;
  return result;
}
