int __fastcall sub_149B0(int a1, _BYTE *a2)
{
  pthread_mutex_t *v3; // r6
  int v4; // r8
  int v5; // r0

  v3 = (pthread_mutex_t *)(a1 + 196);
  sub_142A0((pthread_mutex_t *)(a1 + 196), "cgminer.c", "pool_tset", 1034);
  v4 = (unsigned __int8)*a2;
  *a2 = 1;
  v5 = sub_1430C(v3, "cgminer.c", "pool_tset", 1037);
  off_79D40(v5);
  return v4;
}
