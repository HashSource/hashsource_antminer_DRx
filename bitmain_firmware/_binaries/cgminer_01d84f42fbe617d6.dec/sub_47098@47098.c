int __fastcall sub_47098(_DWORD *a1, char *a2, int a3)
{
  bool v4; // zf
  int v5; // r2
  int result; // r0
  int v7; // r3
  int v8; // r3

  if ( !a3 )
    return -1;
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 || *a1 || a1 == (_DWORD *)a3 || (v5 = a1[7], a1[7] = v5 + 1, (result = sub_44304(a1 + 2, a2, v5, a3)) != 0) )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( v7 != -1 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(a3 + 4) = v8;
      if ( !v8 )
        sub_46C5C((void **)a3);
    }
    return -1;
  }
  return result;
}
