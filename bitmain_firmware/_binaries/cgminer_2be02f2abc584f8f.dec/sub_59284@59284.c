_BYTE *__fastcall sub_59284(unsigned int *a1)
{
  _BYTE *result; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  for ( result = (_BYTE *)sub_58EA8(a1, &v3); result && *result == 45; result = (_BYTE *)sub_58F48((int)result, a1, &v3) )
    ;
  return result;
}
