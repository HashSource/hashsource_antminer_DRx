int __fastcall sub_27B0C(pthread_rwlock_t *a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r0
  int result; // r0

  a1[1].__lock = 0;
  sub_16198(&stru_808A8, "cgminer.c", "enable_device", 11001);
  v2 = dword_807D0;
  v3 = dword_7C580;
  a1->__lock = dword_7C580;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  dword_7C580 = v3 + 1;
  v4 = sub_13B94(&stru_808A8, "cgminer.c", "enable_device", 11003);
  off_79D40(v4);
  if ( byte_80978 )
    dword_7C584 += a1[4].__nr_writers_queued;
  else
    dword_80D98 += a1[4].__nr_writers_queued;
  result = sub_13A48(a1 + 10, "cgminer.c", "enable_device", 11010);
  a1[11].__lock = 0;
  return result;
}
