char *__fastcall sub_285D4(int a1, char **a2)
{
  char *v4; // r12
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _DWORD *v8; // r6
  _DWORD *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  char *result; // r0

  if ( *(_DWORD *)a1 )
    sub_285D4();
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *a2 + 24;
  v9 = *a2 + 40;
  *v8 = *(_DWORD *)(a1 + 12);
  v8[1] = v5;
  v8[2] = v6;
  v8[3] = v7;
  v10 = *(_DWORD *)(a1 + 28);
  v11 = *(_DWORD *)(a1 + 32);
  v12 = *(_DWORD *)(a1 + 36);
  v13 = *(_DWORD *)(a1 + 40);
  *((_DWORD *)v4 + 4) = 1;
  *v9 = v10;
  v9[1] = v11;
  v9[2] = v12;
  v9[3] = v13;
  v14 = (*(unsigned __int16 *)(a1 + 8) << 8) | HIBYTE(*(unsigned __int16 *)(a1 + 8));
  v15 = (*(unsigned __int16 *)(a1 + 10) << 8) | HIBYTE(*(unsigned __int16 *)(a1 + 10));
  *((_DWORD *)v4 + 2) = bswap32(*(_DWORD *)(a1 + 4));
  *((_WORD *)v4 + 6) = v14;
  *((_WORD *)v4 + 7) = v15;
  result = sub_2824C();
  *a2 = result;
  return result;
}
