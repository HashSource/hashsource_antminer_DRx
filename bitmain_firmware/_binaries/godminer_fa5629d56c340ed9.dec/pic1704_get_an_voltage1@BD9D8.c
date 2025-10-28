int __fastcall pic1704_get_an_voltage1(char a1)
{
  int result; // r0
  unsigned int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  result = pic1704_get_single_voltage(a1, &v2);
  if ( (_BYTE)result )
    return sub_BCB30(v2);
  return result;
}
