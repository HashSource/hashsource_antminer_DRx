int __fastcall sub_8E8C(unsigned int a1, _BYTE *a2)
{
  int result; // r0

  a2[1] = a1;
  result = (a1 >> 8) & 0x7F;
  *a2 = result;
  return result;
}
