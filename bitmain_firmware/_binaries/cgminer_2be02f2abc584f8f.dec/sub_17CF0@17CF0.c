void __fastcall __noreturn sub_17CF0(int a1, int a2)
{
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( pthread_create(newthread, 0, (void *(*)(void *))sub_E5FC, 0) )
    exit(1);
  if ( a2 )
    sub_17CA0(0);
  else
    sub_1567C();
  if ( dword_73ED8 > 0 )
  {
    kill(dword_73ED8, 15);
    dword_73ED8 = 0;
  }
  pthread_cancel(newthread[0]);
  exit(a1);
}
