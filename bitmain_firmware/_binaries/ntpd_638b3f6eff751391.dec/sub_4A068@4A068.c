char *__fastcall sub_4A068(void *src)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r0

  v2 = (_DWORD *)*((_DWORD *)src + 20);
  if ( !v2 )
  {
    v4 = sub_44484((*((_DWORD *)src + 25) << 6) + 132);
    v2 = v4;
    if ( !v4 )
    {
      fprintf((FILE *)stderr, off_7B8A4[0]);
      exit(1);
    }
    *((_DWORD *)src + 20) = v4;
  }
  memcpy(v2, src, 0x84u);
  memcpy(v2 + 33, *((const void **)src + 17), v2[25] << 6);
  return sub_44D6C((char *)src);
}
