int __fastcall sub_15BD4(const struct sockaddr *a1)
{
  int v2; // r4
  int v3; // r6
  const char *v4; // r0
  int *v6; // r3
  const char *v7; // r0

  v2 = sub_13E90(a1, 128, 0);
  if ( v2 )
  {
    if ( dword_7CF4C > 3 )
    {
      v3 = *(_DWORD *)(v2 + 16);
      v4 = (const char *)sub_50CD0(a1);
      printf("Found interface #%d %s for address %s\n", v3, (const char *)(v2 + 104), v4);
    }
    return v2;
  }
  else
  {
    if ( dword_7CF4C > 3 )
    {
      v7 = (const char *)sub_50CD0(a1);
      printf("Found no interface for address %s - returning wildcard\n", v7);
    }
    if ( a1->sa_family == 2 )
      v6 = &dword_CA608;
    else
      v6 = &dword_CA644;
    return *v6;
  }
}
