int __fastcall sub_174F4(int a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int v4; // t1

  if ( dword_72EF0 <= 0 )
    return sub_17490(a1);
  v1 = dword_732EC;
  v2 = *(_DWORD *)dword_732EC;
  if ( *(_DWORD *)(*(_DWORD *)dword_732EC + 4) != a1 )
  {
    v3 = 0;
    while ( ++v3 != dword_72EF0 )
    {
      v4 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      v2 = v4;
      if ( *(_DWORD *)(v4 + 4) == a1 )
        return v2;
    }
    return sub_17490(a1);
  }
  return v2;
}
