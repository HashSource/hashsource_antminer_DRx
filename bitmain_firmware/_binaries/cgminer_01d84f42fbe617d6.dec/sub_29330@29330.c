int __fastcall sub_29330(int a1, char a2)
{
  pthread_mutex_t *v2; // r5

  v2 = (pthread_mutex_t *)(a1 + 12);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_B7D8("tq_freezethaw", 1148);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  sub_29110(v2, "tq_freezethaw", 1151);
  return off_60178();
}
