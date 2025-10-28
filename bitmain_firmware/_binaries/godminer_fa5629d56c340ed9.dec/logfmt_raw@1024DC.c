int logfmt_raw(char *a1, size_t n, int a3, ...)
{
  char *v3; // r9
  int v4; // r5
  const char **v5; // r4
  int v6; // r6
  unsigned int v7; // r8
  int *v8; // r12
  int v9; // r11
  const char *v10; // r8
  int result; // r0
  const char *v12; // r1
  char *v13; // r12
  double v14; // [sp+30h] [bp-1014h]
  char s[4096]; // [sp+40h] [bp-1004h] BYREF
  va_list va; // [sp+106Ch] [bp+28h] BYREF

  va_start(va, a3);
  v3 = a1;
  memset(a1, 0, n);
  memset(s, 0, sizeof(s));
  if ( dword_1B6164 <= 0 )
  {
    va_copy(v5, va);
  }
  else
  {
    v4 = 0;
    va_copy(v5, va);
    v6 = 0;
    while ( 2 )
    {
      v7 = ((unsigned int)v5 + 7) & 0xFFFFFFF8;
      v5 = (const char **)(v7 + 32);
      v8 = (int *)(v7 + 16);
      v9 = *(_DWORD *)(v7 + 8);
      v10 = *(const char **)v7;
      result = *v8;
      v14 = *(double *)v8;
      switch ( v9 )
      {
        case 0:
          if ( strchr((const char *)LODWORD(v14), 32)
            || !strcmp((const char *)LODWORD(v14), "true") && strlen((const char *)LODWORD(v14)) == 4 )
          {
            v6 += sprintf(&v3[v6], "%s=\"%s\" ", v10, (const char *)LODWORD(v14));
          }
          else
          {
            v6 += sprintf(&v3[v6], "%s=%s ", v10, (const char *)LODWORD(v14));
          }
          goto LABEL_5;
        case 1:
          v6 += sprintf(&v3[v6], "%s=%lf ", v10, v14);
          goto LABEL_5;
        case 2:
          v13 = "false";
          if ( LOBYTE(v14) )
            v13 = "true";
          v6 += sprintf(&v3[v6], "%s=%s ", v10, v13);
          goto LABEL_5;
        case 3:
          v6 += sprintf(&v3[v6], "%s=%lld ", v10, HIDWORD(v14), v14);
LABEL_5:
          if ( dword_1B6164 > ++v4 )
            continue;
          v3 += v6;
          break;
        default:
          return result;
      }
      break;
    }
  }
  vsprintf(s, *v5, v5 + 1);
  if ( strchr(s, 32) )
    LOWORD(v12) = -17160;
  else
    LOWORD(v12) = -17148;
  HIWORD(v12) = 23;
  result = sprintf(v3, v12, s);
  dword_1B6164 = 0;
  return result;
}
