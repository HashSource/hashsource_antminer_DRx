int __fastcall sub_137A4(unsigned int a1)
{
  int v3; // r3
  int v4; // r4

  sub_136FC();
  if ( dword_24038++ != 0 )
    sub_FFB4("./../lib/isc/result.c", 178, "((*((&lock)))++ == 0 ? 0 : 34) == 0");
  v3 = dword_2403C;
  if ( !dword_2403C )
    goto LABEL_7;
  while ( *(_DWORD *)v3 > a1 || a1 > *(_DWORD *)(v3 + 4) )
  {
    v3 = *(_DWORD *)(v3 + 24);
    if ( !v3 )
      goto LABEL_7;
  }
  v4 = sub_F118(
         *(_DWORD **)(v3 + 12),
         *(_DWORD *)(v3 + 16),
         a1 - *(_DWORD *)v3 + 1,
         *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * (a1 - *(_DWORD *)v3)));
  if ( !v4 )
LABEL_7:
    v4 = sub_F118((_DWORD *)dword_2400C, 3, 1, (int)"(result code text not available)");
  if ( --dword_24038 )
    sub_FFB4("./../lib/isc/result.c", 201, "(--(*((&lock))) == 0 ? 0 : 34) == 0");
  return v4;
}
