void __fastcall sub_3D090(int a1, int a2)
{
  if ( !*(_BYTE *)(a2 + 59) || *(_BYTE *)(a2 + 59) == 1 && (!dword_CB470 || a2 == dword_CB470) )
    *(_BYTE *)(*(_DWORD *)(a2 + 60) + 752) |= 1u;
}
