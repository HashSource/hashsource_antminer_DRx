int __fastcall set_frequency_by_temp_single_ks5(int a1, int a2, int a3)
{
  int v3; // s0
  char v5; // r5
  int v7; // r4
  int v8; // r0

  v5 = a3;
  v7 = 44 * a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 552) + 44 * a3 + 20));
  sub_9BA80(a1, v5, a2);
  v8 = *(_DWORD *)(a1 + 552) + v7;
  *(_DWORD *)(v8 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 20));
  return 0;
}
