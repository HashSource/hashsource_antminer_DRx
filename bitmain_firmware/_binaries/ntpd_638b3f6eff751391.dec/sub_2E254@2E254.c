int __fastcall sub_2E254(_BYTE *a1)
{
  int v1; // r1
  char v2; // r3
  _BYTE *v4; // r0
  unsigned int v5; // r4
  unsigned int i; // r2
  char v7; // r1

  v1 = *(unsigned __int16 *)a1;
  v2 = 37 * *a1 + a1[1];
  if ( v1 == 2 )
  {
    v4 = a1 + 4;
    v5 = 4;
  }
  else
  {
    if ( v1 != 10 )
      return v2 & 0x7F;
    v4 = a1 + 8;
    v5 = 16;
  }
  for ( i = 0; i < v5; ++i )
  {
    v7 = v4[i];
    v2 = v7 + 37 * v2;
  }
  return v2 & 0x7F;
}
