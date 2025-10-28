const char *__fastcall sub_442F0(const char *a1)
{
  const unsigned __int16 **v2; // r0
  const char *v3; // r3
  const unsigned __int16 *v4; // r5
  const char *v5; // r4
  size_t v6; // r0
  const char *v7; // r3

  v2 = _ctype_b_loc();
  v3 = a1;
  v4 = *v2;
  do
    v5 = v3++;
  while ( (v4[*(unsigned __int8 *)v5] & 0x2000) != 0 );
  v6 = strlen(v5);
  v7 = &v5[v6];
  if ( &v5[v6] > v5 )
  {
    do
    {
      if ( (v4[*((unsigned __int8 *)v7 - 1)] & 0x2000) == 0 )
        break;
      --v7;
    }
    while ( v7 != v5 );
  }
  *v7 = 0;
  return v5;
}
