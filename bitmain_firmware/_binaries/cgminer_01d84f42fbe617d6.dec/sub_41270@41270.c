int sub_41270()
{
  sub_40FF0();
  printf("\n--- %s\n", "pic_reset");
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E0C, 1u);
  pthread_mutex_unlock(&stru_63214);
  return usleep((__useconds_t)&unk_927C0);
}
