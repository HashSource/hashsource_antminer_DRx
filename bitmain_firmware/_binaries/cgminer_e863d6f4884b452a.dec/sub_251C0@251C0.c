int __fastcall sub_251C0(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  void **v8; // r4
  _BOOL4 v9; // r5
  int v10; // r3
  int v12; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v8 = (void **)sub_1B0EC();
  sub_19F60((int)v8, a2, a4);
  v9 = sub_1B33C(v8, a3);
  if ( v9 )
  {
    sub_1EC3C(a1, (int)v8);
    if ( dword_6DC8C && byte_6F390 )
      sub_16D28((int)v8, a3);
    v10 = sub_2A0C0(v8 + 61, v8 + 53);
    if ( v10 )
    {
      v9 = v10;
      sub_24A24((int)v8);
      return v9;
    }
    sub_19F2C(v8);
    free(v8);
    if ( !byte_6FA71 )
      return v9;
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
      return (unsigned __int8)byte_6FA71;
    v12 = (unsigned __int8)byte_6FA71;
    snprintf(
      s,
      0x800u,
      "%s %d: Share above target",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_343C4(7, s, 0);
    return v12;
  }
  else
  {
    sub_19F2C(v8);
    free(v8);
    sub_1C5E4(a1);
    return 0;
  }
}
