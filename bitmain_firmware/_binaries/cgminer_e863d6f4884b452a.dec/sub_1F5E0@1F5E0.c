int __fastcall sub_1F5E0(_DWORD *a1)
{
  _BOOL4 v2; // r5
  int v4; // r5
  pthread_t v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( !*((_BYTE *)a1 + 107) )
  {
    v5 = pthread_self();
    pthread_detach(v5);
  }
  while ( !sub_1C088(a1, 0) )
  {
    sub_1F4FC((int)a1);
    sleep(5u);
  }
  sub_1C040((int)a1, (_BYTE *)a1 + 98);
  sub_1BFF8((int)a1, (_BYTE *)a1 + 97);
  if ( pthread_mutex_lock(&stru_73460) )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "cgminer.c", "test_pool_thread", 10621);
    goto LABEL_14;
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "test_pool_thread", 10621);
    goto LABEL_14;
  }
  v2 = 0;
  if ( !byte_6DDB0 )
  {
    v4 = *a1;
    dword_6DD48 = (int)a1;
    byte_6DDB0 = 1;
    v2 = v4 != 0;
  }
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "test_pool_thread",
      10629);
    goto LABEL_14;
  }
  if ( pthread_mutex_unlock(&stru_73460) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "test_pool_thread",
      10629);
LABEL_14:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  off_6CB70();
  if ( v2 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Switching to pool %d %s - first alive pool", *a1, (const char *)a1[43]);
    sub_343C4(7, s, 0);
  }
  sub_1E240((int)a1);
  sub_1F158(0);
  *((_BYTE *)a1 + 292) = 0;
  return 0;
}
