int __fastcall packet_2_nonce_dash(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  if ( *(char *)(a2 + 9) < 0 )
    return sub_67E78(a1, a2, a3, a4, a5, a6, a7);
  else
    return 10;
}
