char *__fastcall sub_502A0(int *a1, int a2)
{
  int v4; // r3
  bool v5; // cc
  char *v6; // r5
  int v7; // r1
  unsigned int v8; // r6
  _DWORD *v9; // r12

  if ( !dword_C9AF4 )
    sub_4F7C0();
  v4 = 5 * dword_CB86C;
  v5 = dword_CB86C + 1 <= 199;
  if ( dword_CB86C + 1 <= 199 )
    ++dword_CB86C;
  v6 = (char *)&unk_CB870 + 16 * v4;
  if ( !v5 )
    dword_CB86C = 0;
  memset(v6, 0, 0x50u);
  v7 = a2;
  v8 = a1[1] / 0x418937u;
  v9 = (_DWORD *)sub_500F4(*a1, v7);
  if ( v9 )
    snprintf(
      v6,
      0x50u,
      "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03lu",
      *a1,
      a1[1],
      off_6DBD0[v9[6]],
      off_7BE70[v9[4]],
      v9[3],
      v9[5] + 1900,
      v9[2],
      v9[1],
      *v9,
      v8);
  else
    snprintf(v6, 0x50u, "%08lx.%08lx  --- --- -- ---- --:--:--", *a1, a1[1]);
  return v6;
}
