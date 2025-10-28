int __fastcall sub_3F8F8(int a1, size_t a2)
{
  int v2; // r4
  int result; // r0
  char v5; // r2

  v2 = *(_DWORD *)(a2 + 60);
  result = write(*(_DWORD *)(v2 + 20), "\r*toc\r", 6u);
  if ( result == 6 )
  {
    v5 = *(_BYTE *)(v2 + 752);
    ++*(_DWORD *)(v2 + 760);
    if ( (v5 & 2) == 0 )
      result = sub_4CBA8(v2 + 216);
  }
  else
  {
    result = sub_27040(a2, 3);
  }
  if ( *(int *)(a2 + 116) <= 0 )
  {
    if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
    {
      return sub_27040(a2, 1);
    }
    else
    {
      result = sub_276A0(a2);
      *(_DWORD *)(a2 + 116) = 5;
    }
  }
  return result;
}
