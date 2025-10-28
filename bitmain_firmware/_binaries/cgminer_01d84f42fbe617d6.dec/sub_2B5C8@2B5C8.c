char *__fastcall sub_2B5C8(char *s1, int a2)
{
  const char *v2; // r4
  int v5; // r5
  size_t v6; // r6
  char *v7; // r0
  char *v8; // r8
  char *v9; // r0
  const char *v10; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = "http:";
  v5 = 0;
  v6 = 5;
  *(_DWORD *)(a2 + 184) = 0;
  while ( strncmp(s1, v2, v6) )
  {
    ++v5;
    v2 = (&off_51BA4)[2 * v5];
    if ( !v2 )
      return s1;
    v6 = strlen((&off_51BA4)[2 * v5]);
  }
  v7 = strchr(s1, 124);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v9 = (char *)malloc(v7 - s1 + 1 - v6);
    *(_DWORD *)(a2 + 184) = v9;
    if ( !v9 )
    {
      snprintf(s, 0x800u, "Failed to malloc rpc_proxy in %s %s():%d", "util.c", "get_proxy", 819);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    v10 = &s1[v6];
    s1 = v8 + 1;
    strcpy(v9, v10);
    sub_2B43C(*(const char **)(a2 + 184), (_DWORD *)(a2 + 596), (char **)(a2 + 600));
    *(_DWORD *)(a2 + 180) = dword_51788[2 * v5 + 264];
  }
  return s1;
}
