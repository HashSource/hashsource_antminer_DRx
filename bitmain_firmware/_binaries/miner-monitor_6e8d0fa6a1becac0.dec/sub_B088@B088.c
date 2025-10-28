int sub_B088()
{
  char *v0; // r4
  size_t v1; // r10
  char *v2; // r5
  const char *i; // r0
  char *v4; // r4
  FILE *v5; // r0
  int v6; // r0
  int v8; // r0
  __pid_t v9; // r0
  __pid_t v10; // r0

  if ( !access(off_1B2F8, 0) )
  {
    v5 = fopen(off_1B2F8, "w");
    dword_1C3C8 = (int)v5;
    if ( v5 )
    {
      v6 = fileno(v5);
      if ( !flock(v6, 6) )
      {
        v10 = getpid();
        fprintf((FILE *)dword_1C3C8, "The thread executing miner-monitor:%d", v10);
        puts("exist,write and lock!");
        return 1;
      }
      v5 = (FILE *)dword_1C3C8;
    }
    fclose(v5);
    return 0;
  }
  v0 = off_1B2F8;
  v1 = strlen(off_1B2F8);
  v2 = (char *)malloc(v1);
  memcpy(v2, v0, v1 + 1);
  for ( i = v2 + 1; ; i = v4 + 1 )
  {
    v4 = strchr(i, 47);
    if ( !v4 )
      break;
    *v4 = 0;
    if ( access(v2, 0) )
      mkdir(v2, 0x1FFu);
    *v4 = 47;
  }
  dword_1C3C8 = (int)fopen(off_1B2F8, "w");
  if ( !dword_1C3C8 )
    return 1;
  puts("created!");
  if ( !dword_1C3C8 )
    return 1;
  v8 = fileno((FILE *)dword_1C3C8);
  if ( flock(v8, 2) )
    return 1;
  v9 = getpid();
  fprintf((FILE *)dword_1C3C8, "The thread executing miner-monitor:%d", v9);
  puts("locked!");
  return 1;
}
