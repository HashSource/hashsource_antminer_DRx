int __fastcall sub_45F28(const void **a1, void *src, size_t n)
{
  size_t v4; // r3
  int v6; // r0
  char *v8; // r6
  unsigned int v9; // r0
  size_t v10; // r8
  char *v11; // r0
  char *v12; // r2
  size_t v13; // r5

  v4 = (size_t)a1[1];
  v6 = (int)a1[2];
  if ( v6 - v4 > n )
  {
    v8 = (char *)*a1;
LABEL_10:
    memcpy(&v8[v4], src, n);
    v12 = (char *)*a1;
    v13 = (size_t)a1[1] + n;
    a1[1] = (const void *)v13;
    v12[v13] = 0;
    return 0;
  }
  if ( v6 >= 0 && n != -1 && v4 <= -2 - n )
  {
    v9 = 2 * v6;
    v10 = v4 + 1 + n;
    if ( v10 < v9 )
      v10 = v9;
    v11 = (char *)sub_45DE4(v10);
    v8 = v11;
    if ( v11 )
    {
      memcpy(v11, *a1, (size_t)a1[1]);
      sub_45E0C((void *)*a1);
      v4 = (size_t)a1[1];
      *a1 = v8;
      a1[2] = (const void *)v10;
      goto LABEL_10;
    }
  }
  return -1;
}
