void __fastcall sub_1D394(void **a1)
{
  void **v2; // r4
  __int16 v3; // r3

  if ( a1 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x80) == 0 )
    {
      v2 = a1 + 2;
      do
      {
        free(*(v2 - 1));
        v3 = *((_WORD *)v2 + 1);
        v2 += 2;
      }
      while ( (v3 & 0x80) == 0 );
    }
    free(a1);
  }
}
