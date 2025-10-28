unsigned __int16 *__fastcall sub_1CE84(int a1, char a2)
{
  char v3; // r7
  unsigned __int16 *result; // r0
  struct tm *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  int v8; // r0
  FILE *v9; // r0
  FILE *v10; // r6
  const char *v11; // r0
  size_t v12; // r0
  size_t v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  time_t timer; // [sp+Ch] [bp-428h] BYREF
  char v18[16]; // [sp+10h] [bp-424h] BYREF
  char src[128]; // [sp+20h] [bp-414h] BYREF
  char dest[128]; // [sp+A0h] [bp-394h] BYREF
  char s[128]; // [sp+120h] [bp-314h] BYREF
  char v22[144]; // [sp+1A0h] [bp-294h] BYREF
  char file[516]; // [sp+230h] [bp-204h] BYREF

  v3 = a2 & 0x80;
  result = *(unsigned __int16 **)"savedconfig=";
  strcpy(v18, "savedconfig=");
  if ( a2 < 0 )
  {
    strcpy(src, "saveconfig prohibited by restrict ... nomodify");
    sub_19D60(src, 0x2Eu, 0);
    sub_19AF8(0);
    v7 = (const char *)sub_50CD0(a1 + 8);
    return (unsigned __int16 *)sub_4FE78(5, "saveconfig from %s rejected due to nomodify restriction", v7);
  }
  else if ( dword_C9CBC )
  {
    if ( dword_7D3A8 != dword_7D3A4 )
    {
      strncpy(dest, (const char *)dword_7D3A4, 0x80u);
      dest[127] = v3;
      time(&timer);
      v5 = localtime(&timer);
      if ( !strftime(s, 0x80u, dest, v5) )
        strncpy(s, dest, 0x80u);
      s[127] = 0;
      if ( strchr(s, 92) || strchr(s, 47) )
      {
        strcpy(src, "saveconfig does not allow directory in filename");
        sub_19D60(src, 0x2Fu, 0);
        sub_19AF8(0);
        v6 = (const char *)sub_50CD0(a1 + 8);
        return (unsigned __int16 *)sub_4FE78(5, "saveconfig with path from %s rejected", v6);
      }
      else
      {
        snprintf(file, 0x200u, "%s%s", (const char *)dword_C9CBC, s);
        v8 = open(file, 577, 384);
        if ( v8 == -1 || (v9 = fdopen(v8, "w"), (v10 = v9) == 0) )
        {
          snprintf(src, 0x80u, "Unable to save configuration to file %s", s);
          v15 = (const char *)sub_50CD0(a1 + 8);
          sub_4FE78(3, "saveconfig %s from %s failed", s, v15);
        }
        else
        {
          if ( sub_D3E0(v9, 1) == -1 )
          {
            snprintf(src, 0x80u, "Unable to save configuration to file %s", s);
            v16 = (const char *)sub_50CD0(a1 + 8);
            sub_4FE78(3, "saveconfig %s from %s failed", s, v16);
          }
          else
          {
            snprintf(src, 0x80u, "Configuration saved to %s", s);
            v11 = (const char *)sub_50CD0(a1 + 8);
            sub_4FE78(5, "Configuration saved to %s (requested by %s)", file, v11);
            snprintf(v22, 0x8Du, "%s%s", v18, s);
            v12 = strlen(v22);
            sub_1CE68((unsigned __int8 *)v22, v12 + 1, 1);
          }
          fclose(v10);
        }
        v13 = strlen(src);
        sub_19D60(src, v13, 0);
        return sub_19AF8(0);
      }
    }
  }
  else
  {
    strcpy(src, "saveconfig prohibited, no saveconfigdir configured");
    sub_19D60(src, 0x32u, 0);
    sub_19AF8(0);
    v14 = (const char *)sub_50CD0(a1 + 8);
    return (unsigned __int16 *)sub_4FE78(5, "saveconfig from %s rejected, no saveconfigdir", v14);
  }
  return result;
}
