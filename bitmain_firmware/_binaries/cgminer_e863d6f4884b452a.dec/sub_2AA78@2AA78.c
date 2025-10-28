char *__fastcall sub_2AA78(char *s1, int a2)
{
  const char *v2; // r4
  int v4; // r5
  size_t v5; // r6
  char *v7; // r0
  char *v8; // r8
  char *v9; // r0
  const char *v10; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = "http:";
  v4 = 0;
  v5 = 5;
  *(_DWORD *)(a2 + 192) = 0;
  while ( strncmp(s1, v2, v5) )
  {
    ++v4;
    v2 = (&off_51848)[2 * v4];
    if ( !v2 )
      return s1;
    v5 = strlen(v2);
  }
  v7 = strchr(s1, 124);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v9 = (char *)malloc(v7 - s1 + 1 - v5);
    *(_DWORD *)(a2 + 192) = v9;
    if ( !v9 )
    {
      snprintf(s, 0x800u, "Failed to malloc rpc_proxy in %s %s():%d", "util.c", "get_proxy", 881);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    v10 = &s1[v5];
    s1 = v8 + 1;
    strcpy(v9, v10);
    sub_2A97C(*(const char **)(a2 + 192), (_DWORD *)(a2 + 604), (char **)(a2 + 608));
    *(_DWORD *)(a2 + 188) = dword_5142C[2 * v4 + 264];
  }
  return s1;
}
