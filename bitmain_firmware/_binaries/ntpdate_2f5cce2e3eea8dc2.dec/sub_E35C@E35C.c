char *__fastcall sub_E35C(int *a1, int a2)
{
  int v4; // r3
  bool v5; // cc
  char *v6; // r5
  int v7; // r1
  unsigned int v8; // r6
  _DWORD *v9; // r12

  if ( !dword_23FD0 )
    sub_DAE4();
  v4 = 5 * dword_241DC;
  v5 = dword_241DC + 1 <= 199;
  if ( dword_241DC + 1 <= 199 )
    ++dword_241DC;
  v6 = (char *)&unk_241E0 + 16 * v4;
  if ( !v5 )
    dword_241DC = 0;
  memset(v6, 0, 0x50u);
  v7 = a2;
  v8 = a1[1] / 0x418937u;
  v9 = (_DWORD *)sub_E1B0(*a1, v7);
  if ( v9 )
    snprintf(
      v6,
      0x50u,
      "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03lu",
      *a1,
      a1[1],
      off_173F0[v9[6]],
      off_21300[v9[4]],
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
