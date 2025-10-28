int sub_1B73C()
{
  int result; // r0
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  sub_2A69C(&unk_6DB7C);
  result = pthread_create(newthread, 0, (void *(*)(void *))sub_20DD8, 0);
  if ( result )
    sub_1B70C();
  return result;
}
