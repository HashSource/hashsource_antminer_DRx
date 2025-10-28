int sub_145EC()
{
  int v0; // r4
  int v1; // r0

  sub_140C0((pthread_mutex_t *)dword_73E64, "cgminer.c", "total_staged", 3245);
  if ( dword_73E68 )
    v0 = *(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12);
  else
    v0 = 0;
  v1 = sub_1412C((pthread_mutex_t *)dword_73E64, "cgminer.c", "total_staged", 3247);
  off_72D00(v1);
  return v0;
}
