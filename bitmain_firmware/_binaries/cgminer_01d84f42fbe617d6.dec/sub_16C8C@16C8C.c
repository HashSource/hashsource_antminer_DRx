int __fastcall sub_16C8C(int a1, int a2, int a3, int a4)
{
  int result; // r0
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  sub_2B13C(&unk_611B4, a2, a3, a4);
  result = pthread_create(newthread, 0, sub_22EC4, 0);
  if ( result )
    sub_B498();
  return result;
}
