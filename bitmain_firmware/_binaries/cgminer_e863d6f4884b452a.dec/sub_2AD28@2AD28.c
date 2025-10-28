int __fastcall sub_2AD28(pthread_mutex_t *a1, char *a2, int a3)
{
  pthread_mutex_t *v3; // r6
  int *v7; // r0
  int result; // r0
  int v9; // r4
  int *v10; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = a1 + 30;
  if ( pthread_mutex_lock(a1 + 30) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v10, "util.c", "stratum_send", 1902);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( !a1[26].__size[17] )
  {
    if ( pthread_mutex_unlock(v3) )
      goto LABEL_4;
    off_6CB70(0);
    goto LABEL_6;
  }
  v9 = sub_276A4((int)a1, a2, a3);
  if ( pthread_mutex_unlock(v3) )
  {
LABEL_4:
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v7, "util.c", "stratum_send", 1905);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  off_6CB70(0);
  if ( v9 == 2 )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(s, "Failed to send in stratum_send");
      sub_343C4(7, s, 0);
      sub_2AC10(a1);
      return 0;
    }
    goto LABEL_20;
  }
  if ( v9 != 3 )
  {
    if ( v9 != 1 )
      return v9 == 0;
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Write select failed on pool %d sock", a1->__lock);
      sub_343C4(7, s, 0);
    }
LABEL_20:
    sub_2AC10(a1);
    return 0;
  }
LABEL_6:
  result = (unsigned __int8)byte_6FA71;
  if ( byte_6FA71 )
  {
    if ( byte_73320 || (result = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 6 )
    {
      strcpy(s, "Stratum send failed due to no pool stratum_active");
      sub_343C4(7, s, 0);
      return 0;
    }
  }
  return result;
}
