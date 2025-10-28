void *__fastcall sub_588E0(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  size_t v6; // r5
  void *result; // r0
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r3

  if ( !a1 || *(_DWORD *)a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      249,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 12) - v5;
  result = memmove(*(void **)(a1 + 4), (const void *)(*(_DWORD *)(a1 + 4) + v5), v6);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 12) = v6;
  if ( v9 <= v8 )
    v10 = 0;
  else
    v10 = v9 - v8;
  *(_DWORD *)(a1 + 20) = v10;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
