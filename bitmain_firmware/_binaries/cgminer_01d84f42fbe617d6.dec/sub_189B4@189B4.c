int __fastcall sub_189B4(int a1)
{
  int v2; // r1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s %d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_38438(7, s, 1);
  }
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("inc_hw_errors", 8298);
  v2 = dword_63E44;
  ++*(_DWORD *)(*(_DWORD *)(a1 + 36) + 44);
  dword_63E44 = v2 + 1;
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("inc_hw_errors", 8301);
  off_60178();
  return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
}
