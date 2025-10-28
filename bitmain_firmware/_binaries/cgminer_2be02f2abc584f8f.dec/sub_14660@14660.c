int sub_14660()
{
  int v0; // r0

  sub_140C0((pthread_mutex_t *)dword_73E64, "cgminer.c", "wake_gws", 5512);
  pthread_cond_signal(&stru_791F0);
  v0 = sub_1412C((pthread_mutex_t *)dword_73E64, "cgminer.c", "wake_gws", 5514);
  return off_72D00(v0);
}
