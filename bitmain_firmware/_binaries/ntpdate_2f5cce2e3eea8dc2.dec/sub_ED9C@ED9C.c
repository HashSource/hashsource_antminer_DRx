char *__fastcall sub_ED9C(struct sockaddr *a1)
{
  int v2; // r3
  bool v3; // cc
  char *v4; // r4
  socklen_t v5; // r1

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
  if ( a1->sa_family == 2 )
    v5 = 16;
  else
    v5 = 28;
  if ( getnameinfo(a1, v5, v4, 0x50u, 0, 0, 0) )
    return sub_ECA8(&a1->sa_family);
  else
    return v4;
}
