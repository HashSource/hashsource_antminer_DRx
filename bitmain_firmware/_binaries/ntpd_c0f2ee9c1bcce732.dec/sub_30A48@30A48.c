int __fastcall sub_30A48(int a1, size_t a2)
{
  int v2; // r4
  int result; // r0

  v2 = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
    return sub_27040(a2, 1);
  result = sub_276A0(a2);
  if ( (*(_BYTE *)(v2 + 752) & 8) == 0 )
  {
    result = sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
    if ( dword_7CF4C )
      result = printf("irig %s\n", (const char *)(v2 + 40));
  }
  ++*(_DWORD *)(v2 + 760);
  return result;
}
