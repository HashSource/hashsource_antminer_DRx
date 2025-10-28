int __fastcall sub_20E9C(int result)
{
  int v1; // r6
  int *i; // r4
  int v3; // r3
  int v4; // r3

  v1 = result;
  for ( i = (int *)dword_CABE0; i != (int *)&unk_CABDC; i = (int *)i[1] )
  {
    if ( i[15] == v1 )
    {
      v3 = i[2];
      *(_DWORD *)(v3 + 4) = i[1];
      *(_DWORD *)(i[1] + 8) = v3;
      result = sub_20C80(i);
      v4 = dword_7D928;
      dword_7D928 = (int)i;
      *i = v4;
    }
  }
  return result;
}
