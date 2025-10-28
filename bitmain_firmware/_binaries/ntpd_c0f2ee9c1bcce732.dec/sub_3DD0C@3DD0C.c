unsigned int __fastcall sub_3DD0C(int a1, size_t a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r0
  unsigned int result; // r0

  v2 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(v2 + 28);
  v5 = *(_DWORD *)(v2 + 20);
  ++*(_DWORD *)(v2 + 760);
  *(_DWORD *)(v4 + 8) = 0;
  if ( write(v5, "TQ", 2u) != 2 )
    sub_27040(a2, 3);
  if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
    return sub_27040(a2, 1);
  sub_276A0(a2);
  result = sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
  if ( dword_7CF4C )
    return printf("arbiter: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
  return result;
}
