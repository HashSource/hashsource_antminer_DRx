void __fastcall hashtable_iter_set(int a1, int a2)
{
  _DWORD *v3; // r0
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r2

  v3 = *(_DWORD **)(a1 + 12);
  if ( !v3 )
    goto LABEL_6;
  if ( v3[1] == -1 )
    goto LABEL_6;
  v4 = v3 + 1;
  __dmb(0xBu);
  do
  {
    v5 = __ldrex(v4);
    v6 = v5 - 1;
  }
  while ( __strex(v6, v4) );
  if ( v6 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 12) = a2;
  }
  else
  {
    json_delete(v3);
    *(_DWORD *)(a1 + 12) = a2;
  }
}
