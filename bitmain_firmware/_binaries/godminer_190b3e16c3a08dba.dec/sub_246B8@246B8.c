_DWORD *__fastcall sub_246B8(_DWORD *result, const char **a2)
{
  bool v2; // zf
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  char *v6; // r0
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r0
  _DWORD v10[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[4]; // [sp+10h] [bp-10h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = result == 0;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  if ( !v2 )
  {
    v4 = result;
    v5 = json_object();
    v6 = BUFX_strdup("S");
    json_object_set_new(v5, "STATUS", v6);
    v7 = json_integer(dword_179E88);
    json_object_set_new(v5, "when", v7);
    snprintf((char *)v10, 0x10u, "%s", *a2);
    v8 = BUFX_strdup((char *)v10);
    json_object_set_new(v5, "Msg", v8);
    snprintf((char *)v11, 0x10u, "%s", a2[1]);
    v9 = BUFX_strdup((char *)v11);
    json_object_set_new(v5, "api_version", v9);
    return (_DWORD *)json_object_set_new(v4, "STATUS", v5);
  }
  return result;
}
