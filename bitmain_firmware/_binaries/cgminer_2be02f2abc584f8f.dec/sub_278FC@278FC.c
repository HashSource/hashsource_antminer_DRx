int __fastcall sub_278FC(pthread_rwlock_t *a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r0
  int result; // r0

  a1[1].__lock = 0;
  sub_15FB8(&stru_797C8, "cgminer.c", "enable_device", 11026);
  v2 = dword_796F0;
  v3 = dword_75528;
  a1->__lock = dword_75528;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  dword_75528 = v3 + 1;
  v4 = sub_139B4(&stru_797C8, "cgminer.c", "enable_device", 11028);
  off_72D00(v4);
  if ( byte_79898 )
    dword_7552C += a1[4].__nr_writers_queued;
  else
    dword_79CB8 += a1[4].__nr_writers_queued;
  result = sub_13868(a1 + 10, "cgminer.c", "enable_device", 11035);
  a1[11].__lock = 0;
  return result;
}
