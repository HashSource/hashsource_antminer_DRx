int __fastcall packet_2_nonce_kda(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  if ( *(char *)(a2 + 10) < 0 )
    return sub_98F10(a1, a2, a3, a4, a5, a6, a7);
  else
    return 10;
}
