int *__fastcall sub_50670(int a1, _DWORD *a2, int a3)
{
  int v4; // r3
  int *v5; // r5
  int v6; // r3
  int v7; // r8

  v4 = dword_7BEA4;
  v5 = off_7BEA0;
  if ( dword_7BEA4 )
    v4 = dword_7BEA4 + 5 * (off_7BEA8 - off_7BEA0);
  *(off_7BEA0 - 1) = v4;
  if ( a3 <= 7 )
  {
    fprintf((FILE *)stderr, "random: not enough state (%ld bytes); ignored.\n", a3);
    return 0;
  }
  else if ( a3 <= 31 )
  {
    dword_7BEA4 = 0;
    dword_7BEAC = 0;
    dword_7BEB0 = 0;
    off_7BEA0 = a2 + 1;
    off_7BEB8 = a2 + 1;
    sub_505A4(a1);
    *a2 = 0;
    return v5 - 1;
  }
  else
  {
    if ( a3 > 63 )
    {
      if ( a3 <= 127 )
      {
        v7 = 2;
        dword_7BEAC = 15;
        dword_7BEA4 = 2;
        v6 = 15;
        dword_7BEB0 = 1;
      }
      else if ( a3 > 255 )
      {
        v7 = 4;
        dword_7BEAC = 63;
        dword_7BEA4 = 4;
        v6 = 63;
        dword_7BEB0 = 1;
      }
      else
      {
        dword_7BEA4 = 3;
        v7 = 3;
        dword_7BEB0 = 3;
        v6 = 31;
        dword_7BEAC = 31;
      }
    }
    else
    {
      dword_7BEAC = 7;
      v6 = 7;
      v7 = 1;
      dword_7BEA4 = 1;
      dword_7BEB0 = 3;
    }
    off_7BEA0 = a2 + 1;
    off_7BEB8 = &a2[v6 + 1];
    sub_505A4(a1);
    *a2 = 5 * (off_7BEA8 - (a2 + 1)) + v7;
    return v5 - 1;
  }
}
