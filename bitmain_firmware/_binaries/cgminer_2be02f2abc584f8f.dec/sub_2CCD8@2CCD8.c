int __fastcall sub_2CCD8(int a1, char a2)
{
  pthread_mutex_t *v4; // r7
  int v5; // r0

  v4 = (pthread_mutex_t *)(a1 + 12);
  sub_2BFDC((pthread_mutex_t *)(a1 + 12), "util.c", "tq_freezethaw", 1246);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  v5 = sub_2C048(v4, "util.c", "tq_freezethaw", 1249);
  return off_72D00(v5);
}
