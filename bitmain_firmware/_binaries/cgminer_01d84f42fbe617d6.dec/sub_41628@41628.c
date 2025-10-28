int __fastcall sub_41628(int a1, const void *a2)
{
  int v4; // r4
  void *v5; // r1

  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E30, 1u);
  write(dword_C54A6, a2, 1u);
  pthread_mutex_unlock(&stru_63214);
  v4 = 0;
  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E34, 1u);
  do
  {
    v5 = (void *)(a1 + v4++);
    read(dword_C54A6, v5, 1u);
  }
  while ( v4 != 16 );
  pthread_mutex_unlock(&stru_63214);
  return usleep((__useconds_t)&unk_7A120);
}
