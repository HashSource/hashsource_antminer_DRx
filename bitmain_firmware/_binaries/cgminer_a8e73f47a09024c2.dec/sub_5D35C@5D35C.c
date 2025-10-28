int __fastcall sub_5D35C(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_5D2D0(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
