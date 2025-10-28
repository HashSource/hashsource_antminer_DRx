int __fastcall sub_11DA8(int result)
{
  int v1; // r4
  int *v2; // r2
  int v3; // r12
  int v4; // r3
  int v5; // t1

  v1 = *(_DWORD *)(result + 156);
  if ( dword_63740 > 0 )
  {
    v2 = (int *)dword_639E0;
    v3 = dword_639E0 + 4 * dword_63740;
    do
    {
      while ( 1 )
      {
        v5 = *v2++;
        v4 = v5;
        if ( !*(_BYTE *)(v5 + 97) && *(_DWORD *)(v4 + 100) == 1 && (!*(_BYTE *)(v4 + 632) || *(_BYTE *)(v4 + 633)) )
          break;
        if ( v2 == (int *)v3 )
          goto LABEL_11;
      }
      if ( *(_DWORD *)(v4 + 156) < v1 )
      {
        result = v4;
        v1 = *(_DWORD *)(v4 + 156);
      }
    }
    while ( v2 != (int *)v3 );
LABEL_11:
    v1 = *(_DWORD *)(result + 156);
  }
  *(_DWORD *)(result + 156) = v1 + 1;
  return result;
}
