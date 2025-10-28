int __fastcall sub_2F864(int a1, size_t a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 60);
  v7 = 4;
  if ( ioctl(*(_DWORD *)(v2 + 20), 0x5417u, &v7) < 0 )
    sub_27040(a2, 3);
  sub_4CBA8(v2 + 216);
  if ( write(*(_DWORD *)(v2 + 20), "T", 1u) != 1 )
    sub_27040(a2, 3);
  result = ioctl(*(_DWORD *)(v2 + 20), 0x5416u, &v7);
  if ( *(int *)(a2 + 116) <= 0 )
  {
    if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
    {
      return sub_27040(a2, 1);
    }
    else
    {
      v5 = *(_DWORD *)(v2 + 220);
      *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
      *(_DWORD *)(v2 + 212) = v5;
      sub_276A0(a2);
      result = sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
      if ( dword_7CF4C )
        result = printf("heath: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
      v6 = *(_DWORD *)(v2 + 760);
      *(_DWORD *)(a2 + 116) = 60;
      *(_DWORD *)(v2 + 760) = v6 + 1;
    }
  }
  return result;
}
