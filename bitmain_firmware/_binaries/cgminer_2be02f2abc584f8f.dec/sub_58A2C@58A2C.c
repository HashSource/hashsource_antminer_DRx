int __fastcall sub_58A2C(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_589A0(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
