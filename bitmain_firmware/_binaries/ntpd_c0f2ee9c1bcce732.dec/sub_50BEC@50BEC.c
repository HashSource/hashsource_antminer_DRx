char *__fastcall sub_50BEC(int a1)
{
  int v2; // r3
  bool v3; // cc
  char *v4; // r4
  unsigned int v6; // r5
  int v7; // r3

  if ( !dword_C9AF4 )
    sub_4F7C0();
  v2 = 5 * dword_CB86C;
  v3 = dword_CB86C + 1 <= 199;
  if ( dword_CB86C + 1 <= 199 )
    ++dword_CB86C;
  v4 = (char *)&unk_CB870 + 16 * v2;
  if ( !v3 )
    dword_CB86C = 0;
  memset(v4, 0, 0x50u);
  if ( *(_WORD *)a1 == 2 )
  {
    v6 = bswap32(*(_DWORD *)(a1 + 4));
    if ( HIWORD(v6) << 16 == 2139029504 )
    {
      v7 = sub_57EC0(BYTE1(v6));
      if ( v7 )
        snprintf(v4, 0x50u, "%s(%lu)", v7, (unsigned __int8)v6);
      else
        snprintf(v4, 0x50u, "REFCLK(%lu,%lu)", BYTE1(v6), (unsigned __int8)v6);
    }
  }
  return v4;
}
