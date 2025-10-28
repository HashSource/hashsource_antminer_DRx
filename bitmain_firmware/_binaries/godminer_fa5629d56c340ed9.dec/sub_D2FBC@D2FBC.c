int __fastcall sub_D2FBC(int result, _DWORD *a2, int a3, int *a4)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r8
  int v6; // r9
  int v7; // r5
  int i; // r6

  v4 = a2;
  v5 = (_DWORD *)(result + 4);
  v6 = result;
  v7 = a3;
  for ( i = a3 + 1; v4 != v5; v4 = (_DWORD *)v4[1] )
  {
    if ( !v4[3] )
      v7 = i++;
    result = sub_D2FBC(v6, (_DWORD *)*v4, v7, a4);
  }
  if ( *a4 == -1 )
    *a4 = i;
  return result;
}
