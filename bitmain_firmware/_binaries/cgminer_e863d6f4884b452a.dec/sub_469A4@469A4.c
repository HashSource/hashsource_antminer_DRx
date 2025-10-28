int sub_469A4(int result, int a2, const char *a3, ...)
{
  int v4; // r5
  const char *v5; // r0
  __int64 v6; // kr00_8
  int v7; // r9
  char s[160]; // [sp+10h] [bp-168h] BYREF
  char v9[159]; // [sp+B0h] [bp-C8h] BYREF
  char v10; // [sp+14Fh] [bp-29h]
  va_list arg; // [sp+174h] [bp-4h] BYREF

  va_start(arg, a3);
  if ( result )
  {
    v4 = result;
    vsnprintf(s, 0xA0u, a3, arg);
    s[159] = 0;
    if ( a2 )
    {
      v5 = (const char *)sub_478EC(a2 + 40);
      v6 = *(_QWORD *)(a2 + 24);
      v7 = *(_DWORD *)(a2 + 36);
      if ( v5 && *v5 )
      {
        if ( *(_DWORD *)(a2 + 44) <= 0x14u )
        {
          snprintf(v9, 0xA0u, "%s near '%s'", s, v5);
          v10 = 0;
        }
      }
      else if ( *(_DWORD *)(a2 + 20) != -2 )
      {
        snprintf(v9, 0xA0u, "%s near end of file", s);
        v10 = 0;
      }
    }
    else
    {
      v7 = 0;
      v6 = -1;
    }
    return sub_48A60(v4, v6, SHIDWORD(v6), v7, (char)"%s");
  }
  return result;
}
