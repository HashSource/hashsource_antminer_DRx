void __fastcall __noreturn sub_1B070(int a1, int a2)
{
  int v4; // r0
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( !pthread_create(newthread, 0, (void *(*)(void *))sub_173E4, 0) )
  {
    if ( a2 )
    {
      v4 = sub_2A69C(&dword_6DB8C);
      if ( !byte_735C4 )
      {
        if ( byte_6F915 )
          sub_1CE6C(v4);
      }
    }
    if ( dword_6DB94 > 0 )
    {
      kill(dword_6DB94, 15);
      dword_6DB94 = 0;
    }
    pthread_cancel(newthread[0]);
    exit(a1);
  }
  exit(1);
}
