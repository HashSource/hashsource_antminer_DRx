int __fastcall packet_2_nonce_hns(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  if ( *(char *)(a2 + 11) < 0 )
    return sub_90D64(a1, a2, a3, a4, a5, a6, a7);
  else
    return 10;
}
