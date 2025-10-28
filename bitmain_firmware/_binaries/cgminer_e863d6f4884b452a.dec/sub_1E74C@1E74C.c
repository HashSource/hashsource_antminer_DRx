const char *__fastcall sub_1E74C(const char *a1)
{
  char *v2; // r0
  char *v3; // r4
  size_t v4; // r0
  size_t v5; // r6
  size_t v6; // r0
  size_t v7; // r4
  int v9; // r6
  int v10; // r0
  char *v11; // r1
  _DWORD *v12; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = strchr(a1, 59);
  if ( !v2 )
    return "No semicolon separated quota;URL pair found";
  v3 = v2;
  v4 = strlen(a1);
  *v3 = 0;
  v5 = v4;
  v6 = strlen(a1);
  if ( !v6 )
    return "No parameter for quota found";
  v7 = v6 + 1;
  if ( (int)(v5 - (v6 + 1)) <= 0 )
    return "No parameter for URL found";
  v9 = strtol(a1, 0, 10);
  if ( v9 < 0 )
    return "Invalid negative parameter for quota set";
  v10 = sub_1E6F8();
  v11 = (char *)&a1[v7];
  v12 = (_DWORD *)v10;
  sub_1B200(v10, v11);
  v12[14] = v9;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Setting pool %d to quota %d", *v12, v9);
    sub_343C4(7, s, 0);
  }
  sub_19C74();
  return 0;
}
