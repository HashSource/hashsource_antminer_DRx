int sub_15F3C()
{
  int result; // r0
  char v1[2044]; // [sp+4h] [bp-808h] BYREF
  pthread_t v2[2]; // [sp+804h] [bp-8h] BYREF

  sub_2FE30(&unk_73CF0);
  result = pthread_create(v2, 0, (void *(*)(void *))sub_1D548, 0);
  if ( result )
  {
    strcpy(v1, "Failed to create restart thread");
    sub_3F1C0(3, v1, 1);
    sub_132C4(1);
  }
  return result;
}
