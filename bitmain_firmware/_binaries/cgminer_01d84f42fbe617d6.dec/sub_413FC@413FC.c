int __fastcall sub_413FC(int a1)
{
  int v2; // r4
  const void *v3; // r1

  sub_40FF0();
  v2 = 0;
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E1C, 1u);
  do
  {
    v3 = (const void *)(a1 + v2++);
    write(dword_C54A6, v3, 1u);
    usleep(0x1388u);
  }
  while ( v2 != 6 );
  pthread_mutex_unlock(&stru_63214);
  return usleep((__useconds_t)&unk_7A120);
}
