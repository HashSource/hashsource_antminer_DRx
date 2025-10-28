int __fastcall sub_48494(_DWORD *a1, char *a2, int a3)
{
  bool v3; // zf
  _BOOL4 v5; // r3
  int v6; // r2
  int result; // r0
  int v8; // r3
  int v9; // r3

  if ( !a3 )
    return -1;
  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( v3 )
    goto LABEL_9;
  v5 = a3 == (_DWORD)a1;
  if ( *a1 )
    v5 = 1;
  if ( v5 || (v6 = a1[7], a1[7] = v6 + 1, (result = sub_465BC(a1 + 2, a2, v6, a3)) != 0) )
  {
LABEL_9:
    v8 = *(_DWORD *)(a3 + 4);
    if ( v8 != -1 )
    {
      v9 = v8 - 1;
      *(_DWORD *)(a3 + 4) = v9;
      if ( !v9 )
        sub_482FC((char *)a3);
    }
    return -1;
  }
  return result;
}
