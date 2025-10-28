int __fastcall sub_5B5B4(int a1, int a2, int a3)
{
  const char *v3; // r1
  int v6; // r0

  v3 = *(const char **)(a2 + 1580);
  if ( v3 && strcmp((const char *)(a3 + 16), v3) )
    return 1;
  v6 = *(_DWORD *)(a1 + 1132);
  if ( v6 )
  {
    memcpy((void *)(v6 + 1368), (const void *)(a3 + 1398), 0x5CFu);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private");
    return 3;
  }
}
