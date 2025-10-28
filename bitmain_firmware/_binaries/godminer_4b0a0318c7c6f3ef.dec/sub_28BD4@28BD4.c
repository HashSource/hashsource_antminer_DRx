int __fastcall sub_28BD4(_DWORD *a1, const char *a2, int a3, unsigned int a4)
{
  int result; // r0
  const char *v9; // r1
  int v10; // r4
  const char *v11; // r1
  _UNKNOWN **v12; // r8
  const char *v13; // t1
  char *v14; // r0
  char dest[4]; // [sp+4h] [bp-78h] BYREF
  int v16; // [sp+8h] [bp-74h]
  int v17; // [sp+Ch] [bp-70h]
  int v18; // [sp+10h] [bp-6Ch]
  char s[104]; // [sp+14h] [bp-68h] BYREF

  memset(s, 0, 0x64u);
  if ( !a1 || a4 > 2 )
    return -2147483646;
  result = strlen(a2);
  v16 = 0;
  *(_DWORD *)dest = 0;
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)(result - 1) > 0xF )
  {
    if ( a4 )
      return result;
    goto LABEL_23;
  }
  strncpy(dest, a2, result);
  if ( a4 )
  {
    v9 = (const char *)old_cmds;
    if ( !old_cmds )
      return (int)sub_25FCC(a1, 0, 14, "Invalid command");
    v10 = 0;
    while ( strcmp(dest, v9) )
    {
      ++v10;
      v9 = (const char *)*(&old_cmds + 4 * v10);
      if ( !v9 )
        return (int)sub_25FCC(a1, 0, 14, "Invalid command");
    }
    return ((int (__fastcall *)(_DWORD *, _UNKNOWN **, int))(&opt_api_description)[4 * v10 + 4])(
             a1,
             &old_cmds + 4 * v10,
             a3);
  }
  v11 = (const char *)new_cmds;
  if ( !new_cmds )
  {
LABEL_20:
    snprintf(s, 0x64u, "not support (%s)", a2);
    goto LABEL_19;
  }
  v12 = &new_cmds;
  while ( strcmp(dest, v11) )
  {
    v13 = (const char *)v12[3];
    v12 += 3;
    v11 = v13;
    ++a4;
    if ( !v13 )
      goto LABEL_20;
  }
  result = ((int (__fastcall *)(_DWORD *, _UNKNOWN **))(&opt_api_description)[3 * a4 + 67])(a1, &new_cmds + 3 * a4);
  if ( result < 0 )
  {
    if ( result != -2147483646 )
    {
LABEL_19:
      v14 = BUFX_strdup(s);
      return json_object_set_new(a1, "error_message", v14);
    }
LABEL_23:
    strcpy(s, "bad param");
    goto LABEL_19;
  }
  return result;
}
