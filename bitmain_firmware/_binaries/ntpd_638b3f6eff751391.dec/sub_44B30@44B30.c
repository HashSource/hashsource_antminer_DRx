char *__fastcall sub_44B30(char *a1, int a2)
{
  const char *v2; // r1
  const char *v4; // r4
  unsigned int v5; // r2
  char *v6; // r0
  char *v7; // r5
  size_t v8; // r8
  _BYTE *v9; // r6

  v2 = (const char *)(a2 + 1);
  do
  {
    v4 = v2++;
    v5 = *(unsigned __int8 *)v4;
  }
  while ( v5 <= 0x7F && (dword_69A0C[v5] & 0x500) != 0 );
  v6 = strchr(v4, 62);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 - v4;
    v7 = v6 + 1;
    v9 = sub_44484(v6 - v4 + 1);
    memcpy(v9, v4, v8);
    v9[v8] = 0;
    sub_423AC(a1, v9);
    free(v9);
  }
  return v7;
}
