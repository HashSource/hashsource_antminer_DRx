int __fastcall sub_432E0(int a1)
{
  int v2; // r2
  void **v4[2]; // [sp+0h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  while ( 1 )
  {
    v4[0] = 0;
    v4[1] = 0;
    v5 = 4;
    v6 = 0;
    v2 = sub_42F48(a1, v4);
    if ( v2 == -1 )
      break;
    if ( v2 == 1 )
      return 0;
    if ( (v5 & 0x20020) == 0 || (v5 & (unsigned int)&loc_40020) == 0x20 )
      goto LABEL_8;
    if ( (v5 & 0x400020) == 0x400000 || (v5 & 0x800020) == 0x800020 )
    {
      --*((_WORD *)v4[0] + 7);
LABEL_8:
      if ( sub_429C8(a1, v4) )
        break;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    (*(void (__fastcall **)(int, int, int))(a1 + 84))(a1, 1, v2);
  return -1;
}
