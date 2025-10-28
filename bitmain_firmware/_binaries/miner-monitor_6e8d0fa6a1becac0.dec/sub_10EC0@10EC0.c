char *__fastcall sub_10EC0(int a1, int a2, int a3)
{
  _DWORD *v5; // r4
  char *v6; // r5
  char *result; // r0
  int v8; // r1
  int v9; // r2

  v5 = malloc(8u);
  if ( !v5 )
    exit(0);
  v6 = (char *)malloc(0x100Fu);
  strcpy(v6 + 3, (const char *)(a1 + 3));
  result = strcpy(v6 + 4104, (const char *)(a1 + 4104));
  v8 = *(_DWORD *)(a3 + 4);
  *v5 = v6;
  v9 = dword_1D440;
  v5[1] = v8;
  *(_DWORD *)(a3 + 4) = v5;
  dword_1D440 = v9 + 1;
  if ( v9 + 1 > 20 )
    return (char *)puts("L_cmd is full!");
  return result;
}
