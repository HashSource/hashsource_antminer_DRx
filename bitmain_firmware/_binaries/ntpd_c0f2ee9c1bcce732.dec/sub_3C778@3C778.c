unsigned int __fastcall sub_3C778(int a1, size_t a2)
{
  int v3; // r4
  bool v4; // zf
  int v5; // r3
  int v6; // r2
  unsigned int result; // r0

  v3 = *(_DWORD *)(a2 + 60);
  v4 = (*(_BYTE *)(v3 + 752) & 8) == 0;
  v5 = *(_DWORD *)(v3 + 28);
  ++*(_DWORD *)(v3 + 760);
  v6 = *(_DWORD *)(v3 + 180);
  if ( !v4 && v6 < *(unsigned __int8 *)(v5 + 12) )
  {
    *(_BYTE *)(v5 + 13) = 15;
    v6 = *(_DWORD *)(v3 + 180);
  }
  *(_BYTE *)(v5 + 12) = v6;
  if ( *(_DWORD *)(v3 + 200) == *(_DWORD *)(v3 + 204) )
    return sub_27040(a2, 1);
  sub_276A0(a2);
  result = sub_2DDBC(a2 + 12, (const char *)(v3 + 40));
  if ( dword_7CF4C )
    return printf("wwvb: timecode %d %s\n", *(_DWORD *)(v3 + 168), (const char *)(v3 + 40));
  return result;
}
