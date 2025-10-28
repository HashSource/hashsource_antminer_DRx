ssize_t __fastcall sub_388AC(ssize_t result, char *s)
{
  int v2; // r5
  int v3; // r4
  size_t v5; // r7

  v2 = result;
  v3 = *(_DWORD *)(result + 60);
  if ( (*(_BYTE *)(v3 + 752) & 1) == 0 )
  {
    v5 = strlen(s);
    sub_387C8(v2, (int)"Send '%s'\n", s);
    result = write(*(_DWORD *)(v3 + 20), s, v5);
    if ( result == v5 )
      ++*(_DWORD *)(v3 + 760);
    else
      return sub_27040(v2, 3);
  }
  return result;
}
