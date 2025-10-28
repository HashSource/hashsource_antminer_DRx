char *__fastcall sub_ECA8(unsigned __int16 *a1)
{
  int v2; // r3
  bool v3; // cc
  char *v4; // r4
  int v5; // r3

  if ( !dword_23FD0 )
    sub_DAE4();
  v2 = 5 * dword_241DC;
  v3 = dword_241DC + 1 <= 199;
  if ( dword_241DC + 1 <= 199 )
    ++dword_241DC;
  v4 = (char *)&unk_241E0 + 16 * v2;
  if ( !v3 )
    dword_241DC = 0;
  memset(v4, 0, 0x50u);
  if ( !a1 )
  {
    strncpy(v4, "(null)", 0x50u);
    return v4;
  }
  v5 = *a1;
  if ( v5 == 2 )
  {
LABEL_11:
    inet_ntop(2, a1 + 2, v4, 0x50u);
    return v4;
  }
  if ( v5 == 10 )
  {
    inet_ntop(10, a1 + 4, v4, 0x50u);
    return v4;
  }
  else
  {
    if ( !*a1 )
      goto LABEL_11;
    snprintf(v4, 0x50u, "(socktoa unknown family %d)", v5);
    return v4;
  }
}
