char *__fastcall sub_10474(int a1, char *a2)
{
  int v4; // r3
  int v6; // r0
  int v7; // r6
  int v8; // r7

  printf("change->pools_count = %d\n", *(_DWORD *)(a1 + 492));
  v4 = *(_DWORD *)(a1 + 492);
  if ( v4 == 1 )
  {
    v6 = strtol((const char *)a1, 0, 10);
    switch ( v6 )
    {
      case 1:
        strcpy(a2 + 168, (const char *)(a1 + 4));
        strcpy(a2 + 248, (const char *)(a1 + 84));
        strcpy(a2 + 288, (const char *)(a1 + 124));
        break;
      case 2:
        strcpy(a2 + 332, (const char *)(a1 + 4));
        strcpy(a2 + 412, (const char *)(a1 + 84));
        strcpy(a2 + 452, (const char *)(a1 + 124));
        break;
      case 0:
        strcpy(a2 + 4, (const char *)(a1 + 4));
        strcpy(a2 + 84, (const char *)(a1 + 84));
        strcpy(a2 + 124, (const char *)(a1 + 124));
        break;
    }
    return a2;
  }
  if ( v4 == 2 )
  {
    v7 = strtol((const char *)a1, 0, 10);
    v8 = strtol((const char *)(a1 + 164), 0, 10);
    switch ( v7 )
    {
      case 1:
        strcpy(a2 + 168, (const char *)(a1 + 4));
        strcpy(a2 + 248, (const char *)(a1 + 84));
        strcpy(a2 + 288, (const char *)(a1 + 124));
        break;
      case 2:
        strcpy(a2 + 332, (const char *)(a1 + 4));
        strcpy(a2 + 412, (const char *)(a1 + 84));
        strcpy(a2 + 452, (const char *)(a1 + 124));
        break;
      case 0:
        strcpy(a2 + 4, (const char *)(a1 + 4));
        strcpy(a2 + 84, (const char *)(a1 + 84));
        strcpy(a2 + 124, (const char *)(a1 + 124));
        break;
    }
    switch ( v8 )
    {
      case 1:
        strcpy(a2 + 168, (const char *)(a1 + 168));
        strcpy(a2 + 248, (const char *)(a1 + 248));
        strcpy(a2 + 288, (const char *)(a1 + 288));
        break;
      case 2:
        strcpy(a2 + 332, (const char *)(a1 + 168));
        strcpy(a2 + 412, (const char *)(a1 + 248));
        strcpy(a2 + 452, (const char *)(a1 + 288));
        break;
      case 0:
        strcpy(a2 + 4, (const char *)(a1 + 168));
        strcpy(a2 + 84, (const char *)(a1 + 248));
        strcpy(a2 + 124, (const char *)(a1 + 288));
        break;
    }
    return a2;
  }
  if ( v4 != 3 )
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
