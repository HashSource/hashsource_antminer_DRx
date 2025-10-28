unsigned __int8 *__fastcall sub_89EC(unsigned __int8 *a1)
{
  const unsigned __int16 **v2; // r0
  unsigned __int8 *v3; // r3
  const unsigned __int16 *v4; // r1
  const unsigned __int16 **v5; // r6
  unsigned __int8 *v6; // r4
  unsigned int i; // r0

  v2 = _ctype_b_loc();
  v3 = a1;
  v4 = *v2;
  v5 = v2;
  do
    v6 = v3++;
  while ( (v4[*v6] & 0x2000) != 0 );
  for ( i = _rawmemchr(v6, v4[*v6] & 0x2000); i > (unsigned int)v6; --i )
  {
    if ( ((*v5)[*(unsigned __int8 *)(i - 1)] & 0x2000) != 0 )
      *(_BYTE *)(i - 1) = 0;
  }
  return v6;
}
