int sub_1611C()
{
  int result; // r0
  char v1[2044]; // [sp+4h] [bp-808h] BYREF
  pthread_t v2[2]; // [sp+804h] [bp-8h] BYREF

  sub_30050(&unk_7AD50);
  result = pthread_create(v2, 0, (void *(*)(void *))sub_1D740, 0);
  if ( result )
  {
    strcpy(v1, "Failed to create restart thread");
    sub_3F178(3, v1, 1);
    sub_134A4(1);
  }
  return result;
}
