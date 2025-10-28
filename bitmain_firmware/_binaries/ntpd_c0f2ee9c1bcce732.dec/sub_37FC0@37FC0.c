int __fastcall sub_37FC0(int a1, size_t a2)
{
  int v2; // r4
  _DWORD *v4; // r3
  int v5; // r0
  int result; // r0
  int v7; // r3

  v2 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD **)(v2 + 28);
  v5 = *(_DWORD *)(v2 + 20);
  *v4 = 0;
  v4[1] = v2 + 40;
  result = write(v5, "QTQDQMT", 6u);
  if ( result != 6 )
    result = sub_27040(a2, 3);
  if ( *(int *)(a2 + 116) <= 0 )
  {
    if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
    {
      return sub_27040(a2, 1);
    }
    else
    {
      sub_276A0(a2);
      result = sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
      if ( dword_7CF4C )
        result = printf("pst: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
      v7 = *(_DWORD *)(v2 + 760);
      *(_DWORD *)(a2 + 116) = 60;
      *(_DWORD *)(v2 + 760) = v7 + 1;
    }
  }
  return result;
}
