int __fastcall sub_56AB0(int a1, void *src, size_t n)
{
  int v6; // r2
  size_t v7; // r0
  size_t v8; // r7
  unsigned int v9; // r2
  void *v10; // r0
  void *v11; // r8
  size_t v12; // r5

  v6 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v6 - v7 > n )
    goto LABEL_9;
  if ( v6 >= 0 && n != -1 && v7 <= -2 - n )
  {
    v8 = v7 + 1 + n;
    v9 = 2 * v6;
    if ( v8 < v9 )
      v8 = v9;
    v10 = sub_56978(v8);
    v11 = v10;
    if ( v10 )
    {
      memcpy(v10, *(const void **)a1, *(_DWORD *)(a1 + 4));
      sub_569A0(*(void **)a1);
      *(_DWORD *)a1 = v11;
      *(_DWORD *)(a1 + 8) = v8;
LABEL_9:
      memcpy((void *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)), src, n);
      v12 = n + *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = v12;
      *(_BYTE *)(*(_DWORD *)a1 + v12) = 0;
      return 0;
    }
  }
  return -1;
}
