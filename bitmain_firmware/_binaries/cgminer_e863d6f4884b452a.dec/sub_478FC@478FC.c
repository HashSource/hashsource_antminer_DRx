int __fastcall sub_478FC(const void **a1, void *src, size_t n)
{
  unsigned int v4; // r3
  size_t v7; // r0
  char *v8; // r8
  unsigned int v9; // r3
  void *v10; // r6
  char *v11; // r0
  char *v12; // r2
  size_t v14; // r5

  v4 = (unsigned int)a1[2];
  v7 = (size_t)a1[1];
  if ( v4 - v7 > n )
  {
    v8 = (char *)*a1;
LABEL_9:
    memcpy(&v8[v7], src, n);
    v12 = (char *)*a1;
    v14 = (size_t)a1[1] + n;
    a1[1] = (const void *)v14;
    v12[v14] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= v7 )
  {
    v9 = 2 * v4;
    v10 = (void *)(n + 1 + v7);
    if ( (unsigned int)v10 < v9 )
      v10 = (void *)v9;
    v11 = (char *)sub_47850(v10);
    v8 = v11;
    if ( v11 )
    {
      memcpy(v11, *a1, (size_t)a1[1]);
      sub_47860((void *)*a1);
      v7 = (size_t)a1[1];
      *a1 = v8;
      a1[2] = v10;
      goto LABEL_9;
    }
  }
  return -1;
}
