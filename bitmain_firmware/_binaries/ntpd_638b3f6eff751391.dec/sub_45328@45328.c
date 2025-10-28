int __fastcall sub_45328(int a1)
{
  int v2; // r0
  void *v3; // r2
  void **v5[2]; // [sp+0h] [bp-14h] BYREF
  int v6; // [sp+8h] [bp-Ch]
  int v7; // [sp+Ch] [bp-8h]

  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  do
  {
    v5[0] = 0;
    v5[1] = 0;
    v6 = 2;
    v7 = 0;
    v2 = sub_42F48(a1, v5);
    v3 = &loc_40020;
    if ( v2 == -1 )
      break;
    if ( v2 == 1 )
      return 0;
  }
  while ( (v6 & (unsigned int)&loc_20020) != 0x20000 && (_UNKNOWN *)(v6 & (unsigned int)&loc_40020) != &loc_40020
       || !sub_429C8(a1, v5) );
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    (*(void (__fastcall **)(int, int, void *))(a1 + 84))(a1, 1, v3);
  return -1;
}
