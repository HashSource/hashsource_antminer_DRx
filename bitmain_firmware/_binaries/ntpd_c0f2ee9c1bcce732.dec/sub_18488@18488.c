int __fastcall sub_18488(int result)
{
  int v1; // r12
  int v2; // r2
  int *v3; // r3
  bool v4; // zf
  int v5; // r3
  int v6; // r1
  int v7; // r1
  int v8; // r1

  v2 = result;
  v3 = &dword_CA668;
  if ( dword_794D8 )
  {
    v8 = dword_CA668;
    if ( result == 10 )
    {
      v2 = *(_DWORD *)(dword_CA668 + 8);
      v1 = -1;
    }
    else
    {
      v3 = *(int **)(dword_CA668 + 12);
    }
    if ( result == 10 )
    {
      v3 = *(int **)(dword_CA668 + 16);
      *(_DWORD *)(dword_CA668 + 16) = v1;
      *(_DWORD *)(v8 + 8) = v2 + v1;
    }
    *(_DWORD *)(v8 + 12) = (char *)v3 - 1;
    return ungetc(result, *(FILE **)(v8 + 4));
  }
  else
  {
    v4 = result == 10;
    v5 = dword_CA668;
    if ( result == 10 )
    {
      result = -1;
      v6 = *(_DWORD *)(dword_CA668 + 16);
      v2 = *(_DWORD *)(dword_CA668 + 8) - 1;
    }
    else
    {
      v6 = *(_DWORD *)(dword_CA668 + 12);
    }
    if ( v4 )
    {
      *(_DWORD *)(dword_CA668 + 8) = v2;
      *(_DWORD *)(v5 + 12) = v6;
    }
    v7 = v6 - 1;
    if ( v4 )
      *(_DWORD *)(v5 + 16) = result;
    *(_DWORD *)(v5 + 12) = v7;
    --dword_CA570;
  }
  return result;
}
