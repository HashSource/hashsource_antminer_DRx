void *__fastcall sub_26294(_DWORD *a1, int a2, int a3, const char *a4)
{
  void *result; // r0
  bool v9; // zf
  _DWORD *v10; // r9
  _DWORD *v11; // r6
  __int16 v12; // r3
  char *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  const char *v16; // r2
  _DWORD *v17; // r3
  char *v18; // r0
  char *v19; // r0
  _DWORD *v20; // r0
  __int16 v21; // [sp+4h] [bp-38h] BYREF
  char s[48]; // [sp+8h] [bp-34h] BYREF

  v21 = 0;
  result = memset(s, 0, sizeof(s));
  v9 = a4 == 0;
  if ( a4 )
    v9 = a1 == 0;
  if ( !v9 )
  {
    v10 = json_array();
    v11 = json_object();
    if ( a2 )
      v12 = 83;
    else
      v12 = 69;
    v21 = v12;
    v13 = BUFX_strdup((char *)&v21);
    json_object_set_new(v11, "STATUS", v13);
    v14 = json_integer(dword_196868);
    json_object_set_new(v11, "When", v14);
    v15 = json_integer(a3);
    json_object_set_new(v11, "Code", v15);
    if ( a3 == 7 )
      LOWORD(v17) = 27248;
    else
      LOWORD(v16) = -21600;
    if ( a3 == 7 )
    {
      HIWORD(v17) = 25;
      snprintf(s, 0x30u, a4, *v17);
    }
    else
    {
      HIWORD(v16) = 22;
      snprintf(s, 0x30u, v16, a4);
    }
    v18 = BUFX_strdup(s);
    json_object_set_new(v11, "Msg", v18);
    v19 = BUFX_strdup(opt_api_description);
    json_object_set_new(v11, "Description", v19);
    json_array_append_new(v10, v11);
    result = (void *)json_object_set_new(a1, "STATUS", v10);
    if ( !a2 )
    {
      v20 = json_integer(1);
      return (void *)json_object_set_new(a1, "id", v20);
    }
  }
  return result;
}
