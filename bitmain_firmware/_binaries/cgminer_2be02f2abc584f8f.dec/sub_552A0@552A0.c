int sub_552A0(int result, _DWORD *a2, const char *a3, ...)
{
  int v4; // r5
  const char *v5; // r0
  int v6; // r8
  int v7; // r6
  int v8; // r7
  char *v9; // r2
  char v10[159]; // [sp+Ch] [bp-144h] BYREF
  char v11; // [sp+ABh] [bp-A5h]
  char s[160]; // [sp+ACh] [bp-A4h] BYREF
  va_list v13; // [sp+14Ch] [bp-4h]
  const char *varg_r2; // [sp+168h] [bp+18h]
  va_list varg_r3; // [sp+16Ch] [bp+1Ch] BYREF

  va_start(varg_r3, a3);
  varg_r2 = a3;
  v4 = result;
  if ( result )
  {
    va_copy(v13, varg_r3);
    vsnprintf(s, 0xA0u, varg_r2, varg_r3);
    s[159] = 0;
    if ( a2 )
    {
      v5 = (const char *)sub_56A94(a2 + 10);
      v6 = a2[6];
      v7 = a2[7];
      v8 = a2[9];
      if ( v5 && *v5 )
      {
        if ( a2[11] <= 0x14u )
        {
          snprintf(v10, 0xA0u, "%s near '%s'", s, v5);
          v11 = 0;
          v9 = v10;
        }
        else
        {
          v9 = s;
        }
      }
      else if ( a2[5] == -2 )
      {
        v9 = s;
      }
      else
      {
        snprintf(v10, 0xA0u, "%s near end of file", s);
        v11 = 0;
        v9 = v10;
      }
    }
    else
    {
      v9 = s;
      v8 = 0;
      v7 = -1;
      v6 = -1;
    }
    return sub_5891C(v4, v6, v7, v8, "%s", v9);
  }
  return result;
}
