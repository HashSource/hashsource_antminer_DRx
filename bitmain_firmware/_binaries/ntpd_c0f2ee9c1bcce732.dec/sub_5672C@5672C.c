int __fastcall sub_5672C(_DWORD *a1, unsigned int a2)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r2
  unsigned int v5; // r3

  if ( *a1 == 2 )
  {
    if ( a2 <= 0x20 )
    {
      v3 = a1 + 1;
      v4 = 4;
      goto LABEL_9;
    }
    return 41;
  }
  if ( *a1 != 10 )
    return 27;
  if ( a2 > 0x80 )
    return 41;
  v3 = a1 + 1;
  v4 = 16;
LABEL_9:
  v5 = a2 >> 3;
  if ( (a2 & 7) == 0 )
    goto LABEL_10;
  if ( (*((unsigned __int8 *)v3 + (a2 >> 3)) & (255 >> (a2 & 7))) == 0 )
  {
    ++v5;
LABEL_10:
    result = memcmp((char *)v3 + v5, &unk_6F304, v4 - v5);
    if ( !result )
      return result;
  }
  return 25;
}
