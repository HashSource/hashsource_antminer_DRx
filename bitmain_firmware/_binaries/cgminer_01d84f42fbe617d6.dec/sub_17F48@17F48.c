int sub_17F48()
{
  int v0; // r5
  int v1; // r3

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_612C8) )
    sub_B4E4("total_staged", 2905);
  if ( dword_612CC )
    v1 = *(_DWORD *)(dword_612CC + 344);
  else
    v0 = 0;
  if ( dword_612CC )
    v0 = *(_DWORD *)(v1 + 12);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("total_staged", 2907);
  off_60178();
  return v0;
}
