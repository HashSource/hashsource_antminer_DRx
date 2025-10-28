char *__fastcall sub_2D5D8(char *a1, char *s)
{
  char *v4; // r4
  size_t v5; // r0
  size_t v6; // r4
  char *v7; // r0
  size_t v8; // r0
  char *v9; // r0
  char sa[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = a1;
  v5 = strlen(s);
  if ( !v5 )
    return v4;
  v6 = v5;
  v7 = a1;
  if ( a1 )
    v7 = (char *)strlen(a1);
  v8 = (size_t)&v7[v6 + 1];
  if ( v8 << 30 )
    v8 = (v8 & 0xFFFFFFFC) + 4;
  v9 = (char *)malloc(v8);
  v4 = v9;
  if ( !v9 )
  {
    snprintf(sa, 0x800u, "Failed to malloc in %s %s():%d", "util.c", "realloc_strcat", 3717);
    sub_343C4(3, sa, 1);
    sub_26B0C(1);
  }
  if ( a1 )
  {
    sprintf(v9, "%s%s", a1, s);
    free(a1);
    return v4;
  }
  strcpy(v9, s);
  return v4;
}
