void __fastcall __noreturn sub_1C160(int a1, int a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( !pthread_create(newthread, 0, (void *(*)(void *))sub_11854, 0) )
  {
    if ( a2 )
    {
      sub_2B13C(&dword_613E4, v4, v5, v6);
      sub_19060();
      if ( !byte_640B8 && byte_62F60 )
        sub_1AECC();
    }
    else
    {
      sub_19060();
    }
    if ( dword_61418 > 0 )
    {
      kill(dword_61418, 15);
      dword_61418 = 0;
    }
    pthread_cancel(newthread[0]);
    exit(a1);
  }
  exit(1);
}
