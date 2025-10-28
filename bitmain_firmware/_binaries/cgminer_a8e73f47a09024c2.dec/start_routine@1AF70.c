void *__fastcall start_routine(_DWORD *a1)
{
  pthread_t v2; // r0
  int *v3; // r0
  int *v4; // r0
  int v5; // r5
  int *v6; // r0
  int *v7; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( !*((_BYTE *)a1 + 107) )
  {
    v2 = pthread_self();
    pthread_detach(v2);
  }
  while ( !sub_15960(a1, 0) )
  {
    sub_19EC8((int)a1);
    sleep(5u);
  }
  sub_149B0((int)a1, (_BYTE *)a1 + 98);
  sub_14764((int)a1, (_BYTE *)a1 + 97);
  if ( pthread_mutex_lock(&stru_80BB8) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "test_pool_thread", 10621);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v4 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v4, "cgminer.c", "test_pool_thread", 10621);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( byte_7C3B8 )
  {
    v5 = 0;
  }
  else
  {
    dword_7AECC = (int)a1;
    v5 = *a1;
    if ( *a1 )
      v5 = 1;
    byte_7C3B8 = 1;
  }
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v6 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v6,
      "cgminer.c",
      "test_pool_thread",
      10629);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock(&stru_80BB8) )
  {
    v7 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v7,
      "cgminer.c",
      "test_pool_thread",
      10629);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  if ( v5 && byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Switching to pool %d %s - first alive pool", *a1, (const char *)a1[43]);
    sub_3F178(7, s, 0);
  }
  sub_15148((int)a1);
  sub_199D4(0);
  *((_BYTE *)a1 + 292) = 0;
  return 0;
}
