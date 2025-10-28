int __fastcall sub_18AE8(int a1, int a2)
{
  int v4; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s%d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_38438(3, s, 0);
  }
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("inc_hw_errors_with_diff", 8311);
  v4 = dword_63E44;
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 44) += a2;
  dword_63E44 = v4 + a2;
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("inc_hw_errors_with_diff", 8314);
  off_60178();
  return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
}
