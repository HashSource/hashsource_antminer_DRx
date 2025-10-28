int __fastcall sub_10DDC(int a1, int a2)
{
  const char *v3; // r6
  int v4; // r4

  v3 = (const char *)(a1 + 4104);
  while ( 1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( !v4 || !strcmp((const char *)(*(_DWORD *)v4 + 4104), v3) )
      break;
    a2 = v4;
  }
  return a2;
}
