int __fastcall sub_4879C(char *a1, char *a2)
{
  _BOOL4 v4; // r5
  int v5; // r3
  int v7; // r3
  int v8; // r3

  if ( !a2 )
    return -1;
  if ( !a1 )
    goto LABEL_8;
  v4 = a2 == a1;
  if ( *(_DWORD *)a1 != 1 )
    v4 = 1;
  if ( !v4 && sub_47D6C((int)a1, 1, 1) )
  {
    v5 = *((_DWORD *)a1 + 3);
    *(_DWORD *)(*((_DWORD *)a1 + 4) + 4 * v5) = a2;
    *((_DWORD *)a1 + 3) = v5 + 1;
    return 0;
  }
  else
  {
LABEL_8:
    v7 = *((_DWORD *)a2 + 1);
    if ( v7 != -1 )
    {
      v8 = v7 - 1;
      *((_DWORD *)a2 + 1) = v8;
      if ( !v8 )
        sub_482FC(a2);
    }
    return -1;
  }
}
