void *__fastcall abin2hex(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r8
  int v6; // r4
  const char *v7; // r7
  int v8; // r6
  char *v9; // r5
  int v10; // t1
  char *v11; // r0

  v4 = malloc(2 * a2 + 1);
  v5 = v4;
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = a1 - 1;
      LOWORD(v7) = 25440;
      v8 = v6 + a2;
      v9 = (char *)v4;
      do
      {
        v10 = *(unsigned __int8 *)++v6;
        v11 = v9;
        HIWORD(v7) = (unsigned int)&unk_174D40 >> 16;
        v9 += 2;
        sprintf(v11, v7, v10);
      }
      while ( v6 != v8 );
    }
  }
  else
  {
    set_miner_6060info_malloc_failed_err(1);
  }
  return v5;
}
