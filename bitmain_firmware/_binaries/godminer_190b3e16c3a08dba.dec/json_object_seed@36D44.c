int __fastcall json_object_seed(int result)
{
  int v1; // r1
  unsigned __int8 v2; // r2
  int v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r5
  ssize_t v7; // r7
  int v8; // r5
  struct timeval v9; // [sp+0h] [bp-Ch] BYREF

  if ( !hashtable_seed )
  {
    v1 = result;
    result = 1;
    do
      v2 = __ldrex((unsigned __int8 *)&unk_17AAD4);
    while ( __strex(1u, (unsigned __int8 *)&unk_17AAD4) );
    if ( v2 )
    {
      do
      {
        result = sched_yield();
        v3 = hashtable_seed;
        __dmb(0xBu);
      }
      while ( !v3 );
    }
    else
    {
      if ( !v1 )
      {
        LOWORD(v4) = 8432;
        HIWORD(v4) = (unsigned int)" already Running on this machine" >> 16;
        v5 = open64(v4);
        v6 = v5;
        if ( v5 == -1 || (v7 = read(v5, &v9, 4u), close(v6), v7 != 4) )
        {
          gettimeofday(&v9, 0);
          v8 = v9.tv_usec ^ v9.tv_sec;
          result = getpid();
          v1 = result ^ v8;
        }
        else
        {
          result = LOBYTE(v9.tv_sec);
          v1 = HIBYTE(v9.tv_sec) | ((BYTE2(v9.tv_sec) | ((BYTE1(v9.tv_sec) | (LOBYTE(v9.tv_sec) << 8)) << 8)) << 8);
        }
        if ( !v1 )
          v1 = 1;
      }
      __dmb(0xBu);
      hashtable_seed = v1;
    }
  }
  return result;
}
