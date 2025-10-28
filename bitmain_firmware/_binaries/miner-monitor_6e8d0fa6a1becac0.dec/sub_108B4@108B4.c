char *__fastcall sub_108B4(int a1, char *a2)
{
  int v3; // r3
  int v6; // r6
  int v7; // r7
  int v8; // r6

  v3 = *(_DWORD *)(a1 + 492);
  if ( v3 == 1 )
  {
    v6 = 164 * strtol((const char *)a1, 0, 10);
    strcpy(&a2[v6 + 4], (const char *)(a1 + 4));
    strcpy(&a2[v6 + 84], (const char *)(a1 + 84));
    strcpy(&a2[v6 + 124], (const char *)(a1 + 124));
    return a2;
  }
  if ( v3 == 2 )
  {
    v7 = 164 * strtol((const char *)a1, 0, 10);
    v8 = 164 * strtol((const char *)(a1 + 164), 0, 10);
    strcpy(&a2[v7 + 4], (const char *)(a1 + 4));
    strcpy(&a2[v7 + 84], (const char *)(a1 + 84));
    strcpy(&a2[v7 + 124], (const char *)(a1 + 124));
    strcpy(&a2[v8 + 4], (const char *)(a1 + 168));
    strcpy(&a2[v8 + 84], (const char *)(a1 + 248));
    strcpy(&a2[v8 + 124], (const char *)(a1 + 288));
    return a2;
  }
  if ( v3 != 3 )
    return a2;
  strcpy(a2 + 4, (const char *)(a1 + 4));
  strcpy(a2 + 84, (const char *)(a1 + 84));
  strcpy(a2 + 124, (const char *)(a1 + 124));
  strcpy(a2 + 168, (const char *)(a1 + 168));
  strcpy(a2 + 248, (const char *)(a1 + 248));
  strcpy(a2 + 288, (const char *)(a1 + 288));
  strcpy(a2 + 332, (const char *)(a1 + 332));
  strcpy(a2 + 412, (const char *)(a1 + 412));
  strcpy(a2 + 452, (const char *)(a1 + 452));
  return a2;
}
