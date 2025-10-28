int sub_448AC(int result, _DWORD *a2, const char *a3, ...)
{
  int v3; // r5
  const char *v5; // r0
  int v6; // r10
  int v7; // r6
  int v8; // r8
  char *v9; // r3
  char s[160]; // [sp+10h] [bp-144h] BYREF
  char v11[159]; // [sp+B0h] [bp-A4h] BYREF
  char v12; // [sp+14Fh] [bp-5h]
  const char *varg_r2; // [sp+170h] [bp+1Ch]
  va_list varg_r3; // [sp+174h] [bp+20h] BYREF

  va_start(varg_r3, a3);
  varg_r2 = a3;
  v3 = result;
  if ( result )
  {
    vsnprintf(s, 0xA0u, varg_r2, varg_r3);
    s[159] = 0;
    if ( a2 )
    {
      v5 = (const char *)sub_45F0C(a2 + 10);
      v6 = a2[6];
      v7 = a2[7];
      v8 = a2[9];
      if ( v5 && *v5 )
      {
        if ( a2[11] <= 0x14u )
        {
          snprintf(v11, 0xA0u, "%s near '%s'", s, v5);
          v9 = v11;
          v12 = 0;
        }
        else
        {
          v9 = s;
        }
      }
      else
      {
        v9 = s;
        if ( a2[5] != -2 )
        {
          snprintf(v11, 0xA0u, "%s near end of file", s);
          v9 = v11;
          v12 = 0;
        }
      }
    }
    else
    {
      v7 = -1;
      v9 = s;
      v8 = 0;
      v6 = -1;
    }
    return sub_47910(v3, v6, v7, v8, (char *)"%s", v9);
  }
  return result;
}
