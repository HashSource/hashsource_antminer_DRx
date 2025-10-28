void error_set(json_error_t *error, const lex_t *lex, const char *msg, ...)
{
  char v5[159]; // [sp+10h] [bp+8h] BYREF
  char v6; // [sp+AFh] [bp+A7h]
  char s[160]; // [sp+B0h] [bp+A8h] BYREF
  __gnuc_va_list arg; // [sp+150h] [bp+148h]
  const char *v9; // [sp+154h] [bp+14Ch]
  char v10[4]; // [sp+158h] [bp+150h]
  int v11; // [sp+15Ch] [bp+154h]
  int v12; // [sp+160h] [bp+158h]
  int v13; // [sp+164h] [bp+15Ch]
  const char *varg_r2; // [sp+170h] [bp+168h]
  va_list varg_r3; // [sp+174h] [bp+16Ch] BYREF

  va_start(varg_r3, msg);
  varg_r2 = msg;
  v13 = -1;
  v12 = -1;
  v11 = 0;
  *(_DWORD *)v10 = s;
  if ( error )
  {
    va_copy(arg, varg_r3);
    vsnprintf(s, 0xA0u, varg_r2, varg_r3);
    s[159] = 0;
    if ( lex )
    {
      v9 = (const char *)strbuffer_value((int)lex + 40);
      v13 = *((_DWORD *)lex + 6);
      v12 = *((_DWORD *)lex + 7);
      v11 = *((_DWORD *)lex + 9);
      if ( v9 && *v9 )
      {
        if ( *((_DWORD *)lex + 11) <= 0x14u )
        {
          snprintf(v5, 0xA0u, "%s near '%s'", s, v9);
          v6 = 0;
          *(_DWORD *)v10 = v5;
        }
      }
      else if ( *((_DWORD *)lex + 5) == -2 )
      {
        *(_DWORD *)v10 = s;
      }
      else
      {
        snprintf(v5, 0xA0u, "%s near end of file", s);
        v6 = 0;
        *(_DWORD *)v10 = v5;
      }
    }
    jsonp_error_set(error, v13, v12, v11, "%s", *(const char **)v10);
  }
}
