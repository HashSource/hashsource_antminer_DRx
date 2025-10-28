bool __fastcall get_server_port_from_url(char *a1, char *a2, _WORD *a3)
{
  char *v6; // r0
  char *v7; // r6
  _BOOL4 v8; // r5
  int v10; // r9
  const char *v11; // r6
  int v12; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    return 0;
  v6 = strchr(a1, 58);
  v7 = v6;
  v8 = a1 != v6;
  if ( !v6 )
    v8 = 0;
  if ( !v8 )
    return 0;
  v10 = v6 - a1;
  strncpy(a2, a1, v6 - a1);
  v11 = v7 + 1;
  a2[v10] = 0;
  if ( v11 - a1 >= strlen(a1) )
    return 0;
  sub_357A8(v11, &v12);
  *a3 = v12;
  return v8;
}
