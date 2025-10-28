bool __fastcall sub_30BA0(pthread_mutex_t *a1, char *a2, int a3)
{
  pthread_mutex_t *v6; // r6
  int *v7; // r0
  int v8; // r4
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v6 = a1 + 30;
  if ( pthread_mutex_lock(a1 + 30) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "util.c", "stratum_send", 1902);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( a1[26].__size[17] )
    v8 = sub_2C9FC((int)a1, a2, a3);
  else
    v8 = 3;
  if ( pthread_mutex_unlock(v6) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v9, "util.c", "stratum_send", 1905);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  off_72D00(0);
  switch ( v8 )
  {
    case 2:
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Failed to send in stratum_send");
        sub_3F1C0(7, s, 0);
      }
      goto LABEL_16;
    case 3:
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Stratum send failed due to no pool stratum_active");
        sub_3F1C0(7, s, 0);
      }
      break;
    case 1:
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "Write select failed on pool %d sock", a1->__lock);
        sub_3F1C0(7, s, 0);
      }
LABEL_16:
      sub_304C4(a1);
      break;
  }
  return v8 == 0;
}
