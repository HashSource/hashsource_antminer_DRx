const char *__fastcall sub_1B36C(char *s)
{
  int v2; // r5
  char *v3; // r6
  char *v4; // r0
  char *v5; // r0

  if ( dword_7535C )
    return "Use only user + pass or userpass, but not both";
  if ( dword_75360 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_75364 > dword_791E8 )
    sub_1B088();
  v2 = *(_DWORD *)(dword_79488 + 4 * (dword_75364 - 1));
  v3 = _strdup(s);
  sub_58A4C(s, v2 + 176);
  v4 = strtok(v3, ":");
  *(_DWORD *)(v2 + 180) = v4;
  if ( !v4 )
    return "Failed to find : delimited user info";
  v5 = strtok(0, ":");
  *(_DWORD *)(v2 + 184) = v5;
  if ( !v5 )
    *(_DWORD *)(v2 + 184) = calloc(1u, 1u);
  return 0;
}
