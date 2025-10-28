void __fastcall sub_42960(_DWORD *a1)
{
  _DWORD **v1; // r6
  int v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // t1

  v1 = (_DWORD **)(a1 + 2);
  v3 = *a1 - 1;
  if ( (int)*a1 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v1++;
        v4 = v5;
        --v3;
        if ( *v5 == 6 )
          break;
        free(v4);
        if ( v3 == -1 )
          goto LABEL_6;
      }
      sub_42960(v4[2]);
      free(v4);
    }
    while ( v3 != -1 );
  }
LABEL_6:
  free(a1);
}
