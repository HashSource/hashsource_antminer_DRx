int sub_14840()
{
  int v0; // r0

  sub_142A0((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "wake_gws", 5514);
  pthread_cond_signal(&stru_802D0);
  v0 = sub_1430C((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "wake_gws", 5516);
  return off_79D40(v0);
}
