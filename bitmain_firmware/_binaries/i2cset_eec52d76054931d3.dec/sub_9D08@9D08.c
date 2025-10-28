int __fastcall sub_9D08(int a1, char *s, size_t maxlen, int a4)
{
  char *v6; // r5
  int v8; // r5
  int *v10; // r0
  int *v11; // r7
  bool v12; // zf
  FILE *v13; // r8
  char *v14; // r0
  FILE *v15; // r4
  char *v16; // r0

  v6 = &s[maxlen];
  snprintf(s, maxlen, "/dev/i2c/%d", a1);
  *(v6 - 1) = 0;
  v8 = open(s, 2);
  if ( v8 < 0 )
  {
    v10 = _errno_location();
    v11 = v10;
    v12 = *v10 == 2;
    if ( *v10 != 2 )
      v12 = *v10 == 20;
    if ( v12 )
    {
      sprintf(s, "/dev/i2c-%d", a1);
      v8 = open(s, 2);
    }
    if ( ((a4 == 0) & ((unsigned int)v8 >> 31)) != 0 )
    {
      if ( *v11 == 2 )
      {
        v15 = (FILE *)stderr;
        v16 = strerror(2);
        fprintf(v15, "Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\n", a1, a1, v16);
      }
      else
      {
        v13 = (FILE *)stderr;
        v14 = strerror(*v11);
        fprintf(v13, "Error: Could not open file `%s': %s\n", s, v14);
        if ( *v11 == 13 )
          fwrite("Run as root?\n", 1u, 0xDu, (FILE *)stderr);
      }
    }
  }
  return v8;
}
