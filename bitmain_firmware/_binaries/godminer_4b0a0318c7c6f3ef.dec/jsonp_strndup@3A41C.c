_BYTE *__fastcall jsonp_strndup(const void *a1, size_t a2)
{
  _BYTE *v2; // r5
  _BYTE *v5; // r0

  v2 = (_BYTE *)(a2 + 1);
  if ( a2 != -1 )
  {
    v5 = (_BYTE *)off_193440(a2 + 1);
    v2 = v5;
    if ( v5 )
    {
      memcpy(v5, a1, a2);
      v2[a2] = 0;
    }
  }
  return v2;
}
