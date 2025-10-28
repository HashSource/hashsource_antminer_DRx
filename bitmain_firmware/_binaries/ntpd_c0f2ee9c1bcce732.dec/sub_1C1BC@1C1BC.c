int __fastcall sub_1C1BC(int a1)
{
  int v1; // r2
  __int16 v2; // r3

  v1 = *(_DWORD *)(a1 + 52);
  v2 = *(unsigned __int8 *)(a1 + 104);
  if ( (v1 & 2) == 0 )
    v2 |= 0x80u;
  if ( *(_DWORD *)(a1 + 100) )
    v2 |= 0x40u;
  if ( (v1 & 4) != 0 )
    v2 |= 0x20u;
  if ( *(_BYTE *)(a1 + 106) )
    v2 |= 0x10u;
  if ( (*(_BYTE *)(a1 + 56) & 0x16) != 0 )
    v2 |= 8u;
  return *(_BYTE *)(a1 + 57) & 0xF | (unsigned __int8)(16 * *(_BYTE *)(a1 + 58)) | (unsigned __int16)(v2 << 8);
}
