int __fastcall sub_2BEA8(pthread_mutex_t *a1, char *a2, int a3)
{
  int v6; // r7
  int v7; // r5
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_63928 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "SEND: %s", a2);
    sub_38438(7, s, 0);
  }
  if ( pthread_mutex_lock(a1 + 28) )
    sub_B7D8("stratum_send", 1770);
  if ( a1[26].__size[9] )
  {
    v7 = sub_2918C((int)a1, a2, a3);
    v6 = v7 == 0;
  }
  else
  {
    v6 = (unsigned __int8)a1[26].__size[9];
    v7 = 3;
  }
  if ( pthread_mutex_unlock(a1 + 28) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v9, "util.c", "stratum_send", 1773);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  off_60178();
  if ( v7 == 2 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(s, "Failed to send in stratum_send");
      sub_38438(7, s, 0);
      sub_2B7C0(a1);
      return v6;
    }
    goto LABEL_21;
  }
  if ( v7 != 3 )
  {
    if ( v7 != 1 )
      return v6;
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "Write select failed on pool %d sock", a1->__lock);
      sub_38438(7, s, 0);
    }
LABEL_21:
    sub_2B7C0(a1);
    return v6;
  }
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(s, "Stratum send failed due to no pool stratum_active");
    sub_38438(7, s, 0);
  }
  return v6;
}
