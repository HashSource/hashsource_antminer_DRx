int __fastcall sub_227C8(int a1)
{
  double v1; // d0
  signed int v3; // r6
  int v4; // r5
  int v5; // r0

  if ( *(_BYTE *)(a1 + 67) == 3 )
  {
    v3 = *(unsigned __int8 *)(a1 + 69);
  }
  else
  {
    v3 = *(unsigned __int8 *)(a1 + 69);
    if ( v3 >= dword_7FB08 && v3 < dword_7A2A0 )
    {
      v4 = 0;
      goto LABEL_5;
    }
  }
  v4 = 512;
LABEL_5:
  if ( (*(_DWORD *)(a1 + 52) & 8) == 0 )
  {
    sub_22758();
    if ( v1 >= dbl_7A2A8 + (double)(1 << *(_BYTE *)(a1 + 48)) * dbl_7A1C0 )
      v4 |= 0x400u;
  }
  if ( (unsigned int)v3 > 1
    && ((v5 = *(_DWORD *)(a1 + 40)) != 0 && (*(_DWORD *)(v5 + 140) & 0x100) == 0
     || (v5 = sub_15BD4((const struct sockaddr *)(a1 + 12))) != 0)
    && *(_DWORD *)(a1 + 88) == *(_DWORD *)(v5 + 148) )
  {
    v4 |= 0x800u;
  }
  if ( !*(_BYTE *)(a1 + 106) || (*(_DWORD *)(a1 + 52) & 0x200) != 0 )
    v4 |= 0x1000u;
  *(_DWORD *)(a1 + 108) = v4 | *(_DWORD *)(a1 + 108) & 0xFFFFE1FF;
  return v4;
}
