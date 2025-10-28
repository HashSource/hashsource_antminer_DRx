int __fastcall sub_1E888(int a1, int a2)
{
  int v4; // r6
  int v5; // r1
  int *v7; // r0
  int *v8; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: %s%d: invalid nonce - HW error",
      "inc_hw_errors_with_diff",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_343C4(3, s, 0);
    if ( pthread_mutex_lock(&stru_73A00) )
    {
LABEL_8:
      v7 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v7,
        "cgminer.c",
        "inc_hw_errors_with_diff",
        8854);
      goto LABEL_9;
    }
  }
  else if ( pthread_mutex_lock(&stru_73A00) )
  {
    goto LABEL_8;
  }
  v4 = *(_DWORD *)(a1 + 36);
  v5 = *(_DWORD *)(v4 + 44) + a2;
  dword_72D08 += a2;
  *(_DWORD *)(v4 + 44) = v5;
  if ( pthread_mutex_unlock(&stru_73A00) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "inc_hw_errors_with_diff",
      8857);
LABEL_9:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  off_6CB70();
  return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
}
