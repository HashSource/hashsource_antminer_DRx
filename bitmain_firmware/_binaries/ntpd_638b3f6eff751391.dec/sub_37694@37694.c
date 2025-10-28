int __fastcall sub_37694(int result, int a2)
{
  int v3; // r4
  int v4; // r7
  int v5; // r5
  int v6; // r3
  const char *v7; // r2

  v3 = *(_DWORD *)(a2 + 60);
  v4 = result;
  v5 = *(_DWORD *)(v3 + 28);
  v6 = *(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(v3 + 760);
  if ( v6 > 0 )
    result = sub_27040(a2, 1);
  *(_DWORD *)(v5 + 4) = 2;
  if ( dword_7CF4C )
  {
    v7 = "event";
    if ( (*(_BYTE *)(v3 + 752) & 2) != 0 )
      v7 = "synchronous packet";
    result = printf("palisade_poll: unit %d: polling %s\n", v4, v7);
  }
  if ( (*(_BYTE *)(v3 + 752) & 2) == 0 )
  {
    if ( *(_DWORD *)(v5 + 140) == 1 )
    {
      result = write(*(_DWORD *)(*(_DWORD *)(a2 + 60) + 20), "SPSTAT\r\n", 8u);
      if ( result >= 0 )
      {
        dword_CB594 = 1;
        return result;
      }
      sub_4FE78(3, "Palisade(%d) write: %m:", v4);
    }
    result = sub_3751C(v3);
    if ( result < 0 )
      return sub_27040(a2, 3);
  }
  return result;
}
