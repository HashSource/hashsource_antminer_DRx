int __fastcall sub_41118(int a1)
{
  int v2; // r4
  const void *v3; // r1

  sub_40FF0();
  v2 = 0;
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60DFC, 1u);
  do
  {
    v3 = (const void *)(a1 + v2++);
    write(dword_C54A6, v3, 1u);
  }
  while ( v2 != 16 );
  return pthread_mutex_unlock(&stru_63214);
}
