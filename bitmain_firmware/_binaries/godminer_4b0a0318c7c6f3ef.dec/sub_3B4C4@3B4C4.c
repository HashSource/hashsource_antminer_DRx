void *__fastcall sub_3B4C4(int a1, int **a2, int a3)
{
  int v6; // lr
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r3
  int v15; // r5
  unsigned int *v17; // r3
  unsigned int v18; // r2

  sub_3A520((_DWORD *)a1);
  v6 = *(unsigned __int8 *)(a1 + 36);
  v7 = v6 == 63;
  if ( v6 != 63 )
    v7 = v6 == 42;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(a1 + 28);
    v9 = *(_DWORD *)(a1 + 32);
    v10 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 44) = v8;
    *(_DWORD *)(a1 + 48) = v9;
    *(_DWORD *)(a1 + 52) = v10;
    v11 = *(_DWORD *)(a1 + 12);
    v12 = *(_DWORD *)(a1 + 16);
    v13 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 28) = v11;
    *(_DWORD *)(a1 + 32) = v12;
    *(_DWORD *)(a1 + 36) = v13;
  }
  v14 = (*a2)++;
  v15 = *v14;
  if ( *v14 )
  {
    if ( !a3 || *(_DWORD *)(v15 + 4) == -1 )
      return (void *)*v14;
    v17 = (unsigned int *)(v15 + 4);
    do
      v18 = __ldrex(v17);
    while ( __strex(v18 + 1, v17) );
    __dmb(0xBu);
    return (void *)v15;
  }
  else
  {
    if ( v6 == 42 )
      return (void *)*v14;
    if ( v6 == 63 )
    {
      return json_null();
    }
    else
    {
      sub_3A4C0((int *)a1, "<args>", 12, "NULL object");
      *(_DWORD *)(a1 + 76) = 1;
      return 0;
    }
  }
}
