unsigned __int16 *__fastcall sub_2C094(unsigned __int16 *a1, int a2, int a3)
{
  char v7; // r2
  char v8; // r3

  if ( (((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFFu) <= 1 )
  {
    v7 = *(_BYTE *)(a3 + 2);
    v8 = *(_BYTE *)(a3 + 3);
    dword_CAAB0 = bswap32(*(_DWORD *)(a3 + 8));
    return sub_286DC(a1, a2, v7, v8, 0);
  }
  else
  {
    sub_4FE78(3, "set_control_keyid: err_nitems > 1");
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
}
