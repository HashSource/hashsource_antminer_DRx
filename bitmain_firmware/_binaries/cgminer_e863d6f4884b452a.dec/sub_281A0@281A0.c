int __fastcall sub_281A0(int a1, char a2)
{
  pthread_mutex_t *v2; // r5
  int v5; // r0

  v2 = (pthread_mutex_t *)(a1 + 12);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_28044("tq_freezethaw", 1246);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  v5 = sub_280C0(v2, "tq_freezethaw", 1249);
  return off_6CB70(v5);
}
