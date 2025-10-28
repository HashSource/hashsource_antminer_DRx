char *__fastcall sub_2854C(int a1, char **a2)
{
  char *v4; // r3
  int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r12
  unsigned int v8; // r2
  unsigned int v9; // lr
  char *result; // r0

  if ( *(_DWORD *)a1 )
    sub_2854C();
  v4 = *a2;
  v5 = dword_7FF54;
  *(_DWORD *)*a2 = bswap32(*(_DWORD *)(a1 + 12));
  v6 = *(unsigned __int16 *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 )
    *((_DWORD *)v4 + 4) = 0;
  v8 = *(unsigned __int16 *)(a1 + 10);
  v9 = *(_DWORD *)(a1 + 16);
  *((_WORD *)v4 + 6) = ((_WORD)v6 << 8) | (v6 >> 8);
  *((_DWORD *)v4 + 1) = bswap32(v9);
  *((_DWORD *)v4 + 2) = bswap32(v7);
  *((_WORD *)v4 + 7) = ((_WORD)v8 << 8) | (v8 >> 8);
  result = sub_2824C();
  *a2 = result;
  return result;
}
