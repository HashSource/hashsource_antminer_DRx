int __fastcall set_frequency_by_temp_single_kas(int a1, int a2, int a3)
{
  int v3; // s0
  int v6; // r4
  int v7; // r5
  int v8; // r0

  v6 = 44 * a3;
  v7 = *(_DWORD *)(a1 + 376) * a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 552) + 44 * a3 + 20));
  sub_924E0(a1, a2, 0, (unsigned __int8)v7);
  v8 = *(_DWORD *)(a1 + 552) + v6;
  *(_DWORD *)(v8 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 20));
  return 0;
}
