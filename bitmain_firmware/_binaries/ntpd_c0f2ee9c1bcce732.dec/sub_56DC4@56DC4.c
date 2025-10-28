const char *__fastcall sub_56DC4(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r3
  const char *v7; // r4

  sub_56D1C();
  if ( dword_C9C6C++ != 0 )
    sub_516D8("./../lib/isc/result.c", 178, "((*((&lock)))++ == 0 ? 0 : 34) == 0");
  v6 = dword_C9C70;
  if ( !dword_C9C70 )
    goto LABEL_7;
  while ( *(_DWORD *)v6 > a1 || a1 > *(_DWORD *)(v6 + 4) )
  {
    v6 = *(_DWORD *)(v6 + 24);
    if ( !v6 )
      goto LABEL_7;
  }
  v7 = sub_55CA4(
         *(_DWORD **)(v6 + 12),
         *(_DWORD *)(v6 + 16),
         a1 - *(_DWORD *)v6 + 1,
         *(const char **)(*(_DWORD *)(v6 + 8) + 4 * (a1 - *(_DWORD *)v6)));
  if ( !v7 )
LABEL_7:
    v7 = sub_55CA4((_DWORD *)dword_C9C48, 3, 1, "(result code text not available)", a4);
  if ( --dword_C9C6C )
    sub_516D8("./../lib/isc/result.c", 201, "(--(*((&lock))) == 0 ? 0 : 34) == 0");
  return v7;
}
