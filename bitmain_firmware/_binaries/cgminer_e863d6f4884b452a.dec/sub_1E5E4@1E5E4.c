const char *__fastcall sub_1E5E4(char *s)
{
  int v2; // r3
  int v3; // r6
  char *v4; // r4
  char *v5; // r0
  char *v6; // r4
  char *v7; // r0

  if ( dword_6DD50 || dword_6DD54 )
    return "Use only user + pass or userpass, but not both";
  v2 = dword_6DD58 + 1;
  dword_6DD58 = v2;
  if ( v2 > dword_72EF0 )
  {
    sub_1E3F0();
    v2 = dword_6DD58;
  }
  v3 = *(_DWORD *)(dword_732EC + 4 * (v2 + 0x3FFFFFFF));
  v4 = _strdup(s);
  sub_48B74(s, v3 + 176);
  v5 = v4;
  v6 = "Failed to find : delimited user info";
  v7 = strtok(v5, ":");
  *(_DWORD *)(v3 + 180) = v7;
  if ( v7 )
  {
    v6 = strtok(0, ":");
    *(_DWORD *)(v3 + 184) = v6;
    if ( v6 )
      return 0;
    *(_DWORD *)(v3 + 184) = calloc(1u, 1u);
  }
  return v6;
}
