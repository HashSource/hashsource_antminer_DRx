int sub_147CC()
{
  int v0; // r4
  int v1; // r0

  sub_142A0((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "total_staged", 3247);
  if ( dword_7AEC8 )
    v0 = *(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 12);
  else
    v0 = 0;
  v1 = sub_1430C((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "total_staged", 3249);
  off_79D40(v1);
  return v0;
}
