int __fastcall sub_3EAA0(int a1, int a2)
{
  int v3; // r5
  int v5; // r4
  int v6; // r1
  _BOOL4 v7; // r12
  int v8; // r3
  _DWORD *v9; // r4
  _BYTE *v10; // r5
  int result; // r0

  v3 = *(_DWORD *)(a2 + 60);
  v5 = *(_DWORD *)(v3 + 28);
  if ( (*(_BYTE *)(v3 + 752) & 2) == 0 && *(_DWORD *)(v5 + 20) <= (unsigned int)dword_CB548 )
  {
    *(_DWORD *)(v5 + 24) = 1;
    v8 = dword_7CF4C;
    *(_DWORD *)(v5 + 12) = -1;
    if ( v8 )
      puts("arc: sending resync command (h\\r).");
    sub_4FE78(5, "ARCRON: unit %d: sending resync command", a1);
    sub_3E9A8((_BYTE *)v5, "h\r");
    *(_DWORD *)(v5 + 20) = dword_CB548 + 3420;
  }
  v6 = *(_DWORD *)(v5 + 12);
  v7 = v6 <= 2;
  if ( v6 == -1 )
    v7 = 0;
  if ( v7 )
  {
    if ( dword_7CF4C )
      printf("arc: clock quality %d too poor.\n", v6);
    *(_DWORD *)(v3 + 168) = 0;
    return sub_27040(a2, 3);
  }
  else
  {
    v9 = *(_DWORD **)(a2 + 60);
    v10 = (_BYTE *)v9[7];
    if ( dword_7CF4C )
      printf("arc: unit %d: requesting time.\n", a1);
    result = sub_3E9A8(v10, "o\r");
    if ( result )
    {
      ++v9[190];
    }
    else
    {
      if ( dword_7CF4C )
        printf("arc: unit %d: problem sending", a1);
      v9[42] = 0;
      return sub_27040(a2, 3);
    }
  }
  return result;
}
