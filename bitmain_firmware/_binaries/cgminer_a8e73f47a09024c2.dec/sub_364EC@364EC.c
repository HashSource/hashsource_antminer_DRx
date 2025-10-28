int __fastcall sub_364EC(int result, unsigned __int8 **a2, _BYTE **a3)
{
  unsigned __int8 *v3; // r3
  int v4; // r12
  unsigned __int8 *v5; // r4
  _BYTE *v6; // r12
  _BYTE *v7; // r3

  v3 = *a2;
  v4 = **a2;
  if ( **a2 )
  {
    if ( v4 == result )
    {
LABEL_8:
      if ( v4 )
        *a2 = v3 + 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v4 == 92 && v3[1] )
          *a2 = v3 + 1;
        v5 = *a2;
        v3 = *a2 + 1;
        v6 = *a3;
        *v6 = **a2;
        *a3 = v6 + 1;
        *a2 = v3;
        v4 = v5[1];
        if ( !v5[1] )
          break;
        if ( v4 == result )
          goto LABEL_8;
      }
    }
  }
  v7 = *a3;
  *v7 = 0;
  *a3 = v7 + 1;
  return result;
}
