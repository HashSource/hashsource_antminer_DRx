int __fastcall sub_21778(int result, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r2
  int v8; // r1
  const char *v9; // r6
  const char *v10; // r7
  const char *v11; // r0
  int v12; // r3

  v2 = *(_DWORD **)(result + 40);
  v3 = result;
  if ( v2 != a2
    && (!a2 || (*(_DWORD *)(result + 52) & 0x10) == 0 || (a2[35] & 0x100) == 0 || *(_BYTE *)(result + 47) != 3) )
  {
    if ( !v2 )
    {
LABEL_16:
      *(_DWORD *)(v3 + 40) = a2;
      if ( a2 )
      {
        v12 = a2[46];
        *(_DWORD *)(v3 + 8) = a2[45];
        a2[45] = v3;
        a2[46] = v12 + 1;
      }
      return result;
    }
    v5 = v2[45];
    --v2[46];
    if ( v5 == result )
    {
      v7 = v2 + 45;
    }
    else
    {
      if ( !v5 || (v6 = *(_DWORD *)(v5 + 8)) == 0 )
      {
LABEL_13:
        v9 = (const char *)sub_50CD0(result + 12);
        v10 = (const char *)sub_50CD0(*(_DWORD *)(v3 + 40) + 20);
        if ( a2 )
          v11 = (const char *)sub_50CD0(a2 + 5);
        else
          v11 = "(none)";
        result = sub_4FE78(6, "%s interface %s -> %s", v9, v10, v11);
        goto LABEL_16;
      }
      while ( v6 != result )
      {
        v5 = v6;
        v6 = *(_DWORD *)(v6 + 8);
        if ( !v6 )
          goto LABEL_13;
      }
      v7 = (_DWORD *)(v5 + 8);
    }
    v8 = *v7;
    *v7 = *(_DWORD *)(*v7 + 8);
    *(_DWORD *)(v8 + 8) = 0;
    goto LABEL_13;
  }
  return result;
}
