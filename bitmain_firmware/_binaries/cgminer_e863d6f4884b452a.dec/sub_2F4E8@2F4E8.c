int __fastcall sub_2F4E8(unsigned __int8 **a1, int *a2)
{
  _BYTE *v2; // r2
  int v3; // r3
  _BYTE *v4; // r2
  bool v5; // zf
  _BYTE *v6; // r3
  _BYTE *v7; // r3
  int result; // r0

  v2 = *a1;
  v3 = **a1;
  if ( **a1 )
  {
    while ( v3 != 44 )
    {
      v5 = v3 == 92;
      v6 = v2;
      if ( v5 && v2[1] )
        v6 = v2 + 1;
      *a1 = v6 + 1;
      v4 = (_BYTE *)(*a2)++;
      *v4 = *v6;
      v2 = *a1;
      v3 = **a1;
      if ( !**a1 )
        goto LABEL_10;
    }
    *a1 = v2 + 1;
  }
LABEL_10:
  v7 = (_BYTE *)*a2;
  result = *a2 + 1;
  *a2 = result;
  *v7 = 0;
  return result;
}
