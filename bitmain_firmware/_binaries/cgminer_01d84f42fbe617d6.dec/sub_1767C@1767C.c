const char *__fastcall sub_1767C(char *s)
{
  int v2; // r3
  int v3; // r4
  char *v4; // r6
  char *v5; // r0
  char *v6; // r5
  int v7; // r3
  void *v8; // r0

  if ( dword_612B8 || dword_612BC )
    return "Use only user + pass or userpass, but not both";
  v2 = dword_612C0 + 1;
  dword_612C0 = v2;
  if ( v2 > dword_63740 )
  {
    sub_1746C();
    v2 = dword_612C0;
  }
  v3 = *(_DWORD *)(dword_639E0 + 4 * (v2 - 1));
  v4 = _strdup(s);
  sub_47A4C(s, v3 + 168);
  v5 = strtok(v4, ":");
  *(_DWORD *)(v3 + 172) = v5;
  if ( !v5 )
    return "Failed to find : delimited user info";
  v6 = strtok(0, ":");
  *(_DWORD *)(v3 + 176) = v6;
  if ( v6 )
    return 0;
  v8 = calloc(1u, 1u);
  v7 = 0;
  *(_DWORD *)(v3 + 176) = v8;
  return (const char *)v7;
}
