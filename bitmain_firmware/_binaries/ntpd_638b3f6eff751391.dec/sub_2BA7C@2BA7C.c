unsigned __int16 *__fastcall sub_2BA7C(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int v8; // r9
  unsigned int v9; // r4
  unsigned __int16 *result; // r0

  v8 = dword_7A198;
  if ( (((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFFu) > 1 )
  {
    sub_4FE78(3, "setclr_flags: err_nitems > 1");
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v9 = bswap32(*(_DWORD *)(a3 + 8));
  if ( (v9 & 0xFFFFFF00) != 0 )
  {
    sub_4FE78(3, "setclr_flags: extra flags: %#x", v9 & 0xFFFFFF00);
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  if ( (v9 & 1) != 0 )
  {
    sub_26A68(1, a4, 0);
    if ( (v9 & 2) == 0 )
    {
LABEL_5:
      if ( (v9 & 4) == 0 )
        goto LABEL_6;
      goto LABEL_22;
    }
  }
  else if ( (v9 & 2) == 0 )
  {
    goto LABEL_5;
  }
  sub_26A68(12, a4, 0);
  if ( (v9 & 4) == 0 )
  {
LABEL_6:
    if ( (v9 & 8) == 0 )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_22:
  sub_26A68(8, a4, 0);
  if ( (v9 & 8) == 0 )
  {
LABEL_7:
    if ( (v9 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_24;
  }
LABEL_23:
  sub_26A68(9, a4, 0);
  if ( (v9 & 0x10) == 0 )
  {
LABEL_8:
    if ( (v9 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_25;
  }
LABEL_24:
  sub_26A68(10, a4, 0);
  if ( (v9 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v9 & 0x40) == 0 )
      goto LABEL_10;
LABEL_26:
    sub_26A68(3, a4, 0);
    if ( (v9 & 0x80) == 0 )
      goto LABEL_11;
    goto LABEL_27;
  }
LABEL_25:
  sub_26A68(11, a4, 0);
  if ( (v9 & 0x40) != 0 )
    goto LABEL_26;
LABEL_10:
  if ( (v9 & 0x80) == 0 )
    goto LABEL_11;
LABEL_27:
  sub_26A68(13, a4, 0);
LABEL_11:
  result = sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  if ( v8 )
  {
    if ( !dword_7A198 )
      return (unsigned __int16 *)sub_20854((_QWORD *)0xB);
  }
  else if ( dword_7A198 )
  {
    return (unsigned __int16 *)sub_20854((_QWORD *)2);
  }
  return result;
}
