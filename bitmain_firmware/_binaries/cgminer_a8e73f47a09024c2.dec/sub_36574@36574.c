const char *__fastcall sub_36574(char *s, int a2)
{
  const char *v2; // r7
  unsigned int v4; // r3
  char *v5; // r4
  char *v6; // r2
  int v7; // r5
  unsigned int v8; // t1
  size_t v9; // r0
  int v10; // r5
  _BYTE *v11; // r0
  _BYTE *i; // r2
  size_t v13; // r0
  unsigned int v14; // r3
  unsigned int v15; // t1
  char sa[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = s;
  v4 = (unsigned __int8)*s;
  if ( !*s )
    return v2;
  v5 = s;
  v6 = s;
  v7 = 0;
  do
  {
    if ( v4 == 61 )
      goto LABEL_11;
    if ( v4 > 0x3D )
    {
      if ( v4 == 92 )
      {
        ++v7;
        goto LABEL_16;
      }
      if ( v4 == 124 )
        goto LABEL_11;
    }
    else
    {
      if ( v4 != 34 )
      {
        if ( v4 != 44 )
          goto LABEL_16;
LABEL_11:
        if ( !a2 )
          ++v7;
        goto LABEL_16;
      }
      if ( a2 )
        ++v7;
    }
LABEL_16:
    v8 = (unsigned __int8)*++v6;
    v4 = v8;
  }
  while ( v8 );
  if ( v7 )
  {
    v9 = strlen(s);
    v10 = v7 + 1;
    v11 = malloc(v10 + v9);
    if ( !v11 )
    {
      v13 = strlen(v2);
      snprintf(sa, 0x800u, "Failed to malloc escape buf %d in %s %s():%d", v10 + v13, "api.c", "escape_string", 835);
      sub_3F178(3, sa, 1);
      sub_134A4(1);
    }
    for ( i = v11; ; ++i )
    {
LABEL_36:
      v15 = (unsigned __int8)*v5++;
      v14 = v15;
      if ( !v15 )
      {
        *i = 0;
        return v11;
      }
      if ( v14 == 61 )
        goto LABEL_28;
      if ( v14 > 0x3D )
        break;
      if ( v14 != 34 )
      {
        if ( v14 != 44 )
          goto LABEL_35;
LABEL_28:
        if ( !a2 )
          *i++ = 92;
        *i++ = *(v5 - 1);
        goto LABEL_36;
      }
      if ( a2 )
        *i++ = 92;
      *i = *(v5 - 1);
    }
    if ( v14 == 92 )
    {
      *i = 92;
      i[1] = *(v5 - 1);
      i += 2;
      goto LABEL_36;
    }
    if ( v14 != 124 )
    {
LABEL_35:
      *i++ = v14;
      goto LABEL_36;
    }
    goto LABEL_28;
  }
  return v2;
}
