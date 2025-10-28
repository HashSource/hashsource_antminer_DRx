void *__fastcall start_routine(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v4; // r5
  int v5; // r5
  pthread_t v7; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !*((_BYTE *)a1 + 107) )
  {
    v7 = pthread_self();
    pthread_detach(v7);
  }
  while ( !sub_182A0(a1, 0, a3) )
  {
    sub_1F5DC((int)a1);
    sleep(5u);
  }
  sub_17E64((int)a1, (_BYTE *)a1 + 98);
  sub_1822C((int)a1, (_BYTE *)a1 + 97);
  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("test_pool_thread", 10012);
  if ( pthread_rwlock_wrlock(&stru_63FC8) )
    sub_B550("test_pool_thread", 10012);
  if ( byte_615C8 )
  {
    v4 = 0;
  }
  else
  {
    v5 = *a1;
    dword_61310 = (int)a1;
    byte_615C8 = 1;
    v4 = v5 != 0;
  }
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("test_pool_thread", 10020);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("test_pool_thread", 10020);
  off_60178();
  if ( v4 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Switching to pool %d %s - first alive pool", *a1, (const char *)a1[41]);
    sub_38438(7, s, 0);
  }
  sub_1F7C4((int)a1);
  sub_195D4(0);
  *((_BYTE *)a1 + 284) = 0;
  return 0;
}
