char *__fastcall sub_2D67C(char *s)
{
  size_t v2; // r0
  char *v3; // r0
  char *v4; // r7
  char *v5; // r5
  char *i; // r4
  int v7; // r2
  int v8; // t1
  char *v10; // r3
  char sa[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !s )
  {
    v10 = (char *)malloc(7u);
    if ( !v10 )
    {
      snprintf(sa, 0x800u, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3742);
      sub_343C4(3, sa, 1);
      sub_26B0C(1);
    }
    strcpy(v10, "(null)");
  }
  v2 = strlen(s);
  v3 = (char *)malloc(4 * v2 + 5);
  v4 = v3;
  if ( !v3 )
  {
    snprintf(sa, 0x800u, "Failed to malloc txt in %s %s():%d", "util.c", "str_text", 3749);
    sub_343C4(3, sa, 1);
    sub_26B0C(1);
  }
  v5 = s - 1;
  for ( i = v3; ; i += 4 )
  {
    while ( 1 )
    {
      v8 = (unsigned __int8)*++v5;
      v7 = v8;
      if ( (unsigned int)(v8 - 32) > 0x5E )
        break;
      *i++ = v7;
    }
    sprintf(i, "0x%02x", v7);
    if ( !*v5 )
      break;
  }
  i[4] = 0;
  return v4;
}
