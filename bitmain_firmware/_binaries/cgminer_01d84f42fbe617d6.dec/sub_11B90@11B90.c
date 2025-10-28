int __fastcall sub_11B90(int a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // t1

  if ( dword_63740 <= 0 )
    return sub_B410(a1);
  v1 = dword_639E0;
  v2 = *(_DWORD *)dword_639E0;
  if ( *(_DWORD *)(*(_DWORD *)dword_639E0 + 4) != a1 )
  {
    v3 = 0;
    while ( ++v3 != dword_63740 )
    {
      v4 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      v2 = v4;
      if ( *(_DWORD *)(v4 + 4) == a1 )
        return v2;
    }
    return sub_B410(a1);
  }
  return v2;
}
