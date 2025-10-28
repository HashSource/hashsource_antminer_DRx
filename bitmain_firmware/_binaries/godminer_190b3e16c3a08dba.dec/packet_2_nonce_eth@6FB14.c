int __fastcall packet_2_nonce_eth(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  if ( *(_BYTE *)(a2 + 2) != 32 )
    return 10;
  if ( *(_BYTE *)(a1 + 230) || *(_BYTE *)(a1 + 229) )
    return sub_6F874(a1, a2, a3, a4, a5, a6, a7);
  return 14;
}
