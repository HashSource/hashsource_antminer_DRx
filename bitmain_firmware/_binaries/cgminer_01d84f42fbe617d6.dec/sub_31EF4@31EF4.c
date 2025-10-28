unsigned __int8 **__fastcall sub_31EF4(unsigned __int8 **result, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  int v3; // r2
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // r2
  unsigned __int8 *v6; // r3

  v2 = *result;
  v3 = **result;
  if ( **result )
  {
    while ( v3 != 44 )
    {
      if ( v3 == 92 && (v4 = v2 + 1, v2[1]) )
        *result = v4;
      else
        v4 = *result;
      v5 = *a2;
      v2 = v4 + 1;
      *v5 = *v4;
      *a2 = v5 + 1;
      *result = v4 + 1;
      v3 = v4[1];
      if ( !v4[1] )
        goto LABEL_11;
    }
    *result = v2 + 1;
  }
LABEL_11:
  v6 = *a2;
  *v6 = 0;
  *a2 = v6 + 1;
  return result;
}
