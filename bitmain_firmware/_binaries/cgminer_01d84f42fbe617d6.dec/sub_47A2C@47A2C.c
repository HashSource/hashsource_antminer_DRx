int __fastcall sub_47A2C(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_47998(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
