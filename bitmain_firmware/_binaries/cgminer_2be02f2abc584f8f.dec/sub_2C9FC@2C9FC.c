int __fastcall sub_2C9FC(int a1, char *s, int a3)
{
  int v5; // r10
  signed int v6; // r9
  unsigned int i; // r3
  ssize_t v9; // r0
  int v10; // [sp+8h] [bp-814h]
  struct timeval timeout; // [sp+10h] [bp-80Ch] BYREF
  _DWORD sa[513]; // [sp+18h] [bp-804h] BYREF

  v5 = *(_DWORD *)(a1 + 588);
  *(_WORD *)&s[strlen(s)] = 10;
  v6 = a3 + 1;
  if ( byte_793D0 && (byte_78D98 || byte_75C08 || dword_734EC > 4) )
  {
    snprintf((char *)sa, 0x800u, "SEND: %s", s);
    sub_3F1C0(5, sa, 0);
  }
  if ( v6 > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      timeout.tv_sec = 1;
      timeout.tv_usec = 0;
      for ( i = 0; ; i = 0 )
      {
        while ( i <= 0x1F )
          sa[i++] = 0;
        sa[v5 / 32] |= 1 << (v5 % 32);
        if ( select(v5 + 1, 0, (fd_set *)sa, 0, &timeout) > 0 )
          break;
        if ( *_errno_location() != 4 )
          return 1;
      }
      v9 = send(*(_DWORD *)(a1 + 588), &s[v10], v6, 0x4000);
      if ( v9 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 2;
        v9 = 0;
      }
      v10 += v9;
      v6 -= v9;
      if ( v6 <= 0 )
        goto LABEL_22;
    }
  }
  v10 = 0;
LABEL_22:
  ++*(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 504) += v10;
  *(_QWORD *)(a1 + 512) += v10;
  return 0;
}
