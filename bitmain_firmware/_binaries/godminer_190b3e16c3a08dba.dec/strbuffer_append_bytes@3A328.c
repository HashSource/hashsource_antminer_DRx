int __fastcall strbuffer_append_bytes(const void **a1, void *src, size_t n)
{
  unsigned int v4; // r3
  _BYTE *v7; // r0
  const void *v8; // r8
  unsigned int v9; // r3
  unsigned int v10; // r0
  void *v11; // r6
  void *v12; // r0
  const void *v13; // r2
  char *v15; // r5

  v4 = (unsigned int)a1[2];
  v7 = a1[1];
  if ( v4 - (unsigned int)v7 > n )
  {
    v8 = *a1;
LABEL_10:
    memcpy(&v7[(_DWORD)v8], src, n);
    v13 = *a1;
    v15 = (char *)a1[1] + n;
    a1[1] = v15;
    v15[(_DWORD)v13] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= (unsigned int)v7 )
  {
    v9 = 2 * v4;
    v10 = (unsigned int)&v7[n + 1];
    v11 = (void *)(v10 < v9 ? v9 : v10);
    v12 = jsonp_malloc(v11);
    v8 = v12;
    if ( v12 )
    {
      memcpy(v12, *a1, (size_t)a1[1]);
      jsonp_free((void *)*a1);
      v7 = a1[1];
      *a1 = v8;
      a1[2] = v11;
      goto LABEL_10;
    }
  }
  return -1;
}
