char *__fastcall sub_50CD0(unsigned __int16 *a1)
{
  int v2; // r3
  bool v3; // cc
  char *v4; // r4
  int v5; // r3

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
