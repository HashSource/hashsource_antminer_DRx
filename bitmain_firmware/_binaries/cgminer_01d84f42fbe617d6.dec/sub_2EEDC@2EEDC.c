char *__fastcall sub_2EEDC(const char *a1)
{
  const char *v1; // r4
  size_t v2; // r0
  char *v3; // r0
  char *v4; // r6
  char *v5; // r5
  char v6; // r3
  int v7; // r2
  int v8; // t1
  char *v10; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v10 = (char *)malloc(7u);
    if ( !v10 )
    {
      snprintf(s, 0x800u, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3132);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    strcpy(v10, "(null)");
  }
  v2 = strlen(v1);
  v3 = (char *)malloc(4 * v2 + 5);
  v4 = v3;
  if ( !v3 )
  {
    snprintf(s, 0x800u, "Failed to malloc txt in %s %s():%d", "util.c", "str_text", 3139);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v5 = v3;
  do
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)v1++;
      v7 = v8;
      if ( (unsigned int)(v8 - 32) <= 0x5E )
        break;
      sprintf(v5, "0x%02x", v7);
      v6 = *(v1 - 1);
      v5 += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    *v5++ = v7;
    v6 = *(v1 - 1);
  }
  while ( v6 );
LABEL_9:
  *v5 = v6;
  return v4;
}
