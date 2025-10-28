void __fastcall __noreturn sub_17ED0(int a1, int a2)
{
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( pthread_create(newthread, 0, (void *(*)(void *))sub_E7C4, 0) )
    exit(1);
  if ( a2 )
    sub_17E80(0);
  else
    sub_1585C();
  if ( dword_7AF38 > 0 )
  {
    kill(dword_7AF38, 15);
    dword_7AF38 = 0;
  }
  pthread_cancel(newthread[0]);
  exit(a1);
}
