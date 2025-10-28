char *__fastcall sub_4A1E4(int a1)
{
  _DWORD *v2; // r5

  v2 = *(_DWORD **)(a1 + 80);
  if ( !v2 )
  {
    fprintf((FILE *)stderr, off_7B980[0]);
    exit(1);
  }
  *(_DWORD *)(a1 + 80) = 0;
  sub_4A118(a1);
  memcpy((void *)a1, v2, 0x84u);
  memcpy(*(void **)(a1 + 68), v2 + 33, v2[25] << 6);
  *(_DWORD *)(a1 + 80) = v2;
  return sub_44D6C((char *)a1);
}
