int __fastcall sub_10DCC(int a1, int a2)
{
  _DWORD *v3; // r4
  int v5; // r8
  _DWORD *v6; // r7

  v3 = *(_DWORD **)(a1 + 4);
  v5 = a2 - 8;
  if ( v3 )
  {
    v6 = 0;
    while ( (*(int (__fastcall **)(int, _DWORD *))a1)(a2, v3 + 2) > 0 )
    {
      v6 = v3;
      if ( !*v3 )
        goto LABEL_10;
      v3 = (_DWORD *)*v3;
    }
    if ( !v6 )
    {
      v3 = *(_DWORD **)(a1 + 4);
      goto LABEL_12;
    }
    v3 = v6;
LABEL_10:
    *(_DWORD *)(a2 - 8) = *v3;
    *v3 = v5;
  }
  else
  {
LABEL_12:
    *(_DWORD *)(a2 - 8) = v3;
    *(_DWORD *)(a1 + 4) = v5;
  }
  ++*(_DWORD *)(a1 + 8);
  return a1;
}
