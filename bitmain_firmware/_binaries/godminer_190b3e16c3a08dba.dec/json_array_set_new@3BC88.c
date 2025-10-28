int __fastcall json_array_set_new(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  _BOOL4 v4; // r3
  unsigned int *v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r1
  int v9; // r3
  unsigned int v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r3
  unsigned int *v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r1
  _DWORD *v16; // [sp+4h] [bp-14h]

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_6;
  v4 = a3 == a1;
  if ( *a1 != 1 )
    v4 = 1;
  if ( v4 || a1[3] <= a2 )
  {
LABEL_6:
    if ( a3[1] != -1 )
    {
      v6 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v7 = __ldrex(v6);
        v8 = v7 - 1;
      }
      while ( __strex(v8, v6) );
      if ( !v8 )
        json_delete(a3);
    }
    return -1;
  }
  else
  {
    v9 = a1[4];
    v10 = 4 * a2;
    v11 = *(_DWORD **)(v9 + 4 * a2);
    v12 = (_DWORD *)(v9 + 4 * a2);
    if ( v11 && v11[1] != -1 )
    {
      v13 = v11 + 1;
      __dmb(0xBu);
      do
      {
        v14 = __ldrex(v13);
        v15 = v14 - 1;
      }
      while ( __strex(v15, v13) );
      if ( !v15 )
      {
        v16 = a3;
        json_delete(v11);
        a3 = v16;
      }
      v12 = (_DWORD *)(a1[4] + v10);
    }
    *v12 = a3;
    return 0;
  }
}
