const char *__fastcall sub_1B54C(char *s)
{
  int v2; // r5
  char *v3; // r6
  char *v4; // r0
  char *v5; // r0

  if ( dword_7C3BC )
    return "Use only user + pass or userpass, but not both";
  if ( dword_7C3C0 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_7C3C4 > dword_802C8 )
    sub_1B268();
  v2 = *(_DWORD *)(dword_80568 + 4 * (dword_7C3C4 - 1));
  v3 = _strdup(s);
  sub_5D37C(s, v2 + 176);
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
