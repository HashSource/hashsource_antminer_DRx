const char *__fastcall sub_304EC(const char *a1, int a2)
{
  int v4; // r5
  const char *v5; // r4
  size_t v6; // r6
  char *v7; // r0
  char *v8; // r4
  void *v9; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = 0;
  *(_DWORD *)(a2 + 192) = 0;
  v5 = "http:";
  while ( 1 )
  {
    v6 = strlen(v5);
    if ( !strncmp(a1, v5, v6) )
      break;
    ++v4;
    v5 = (&off_67828)[2 * v4];
    if ( !v5 )
      return a1;
  }
  v7 = strchr(a1, 124);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v9 = malloc(v7 - a1 + 1 - v6);
    *(_DWORD *)(a2 + 192) = v9;
    if ( !v9 )
    {
      snprintf(s, 0x800u, "Failed to malloc rpc_proxy in %s %s():%d", "util.c", "get_proxy", 881);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    strcpy(*(char **)(a2 + 192), &a1[v6]);
    sub_30358(*(const char **)(a2 + 192), (_DWORD *)(a2 + 604), (char **)(a2 + 608));
    *(_DWORD *)(a2 + 188) = dword_6740C[2 * v4 + 264];
    return v8 + 1;
  }
  return a1;
}
