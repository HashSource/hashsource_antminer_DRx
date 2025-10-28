int *__fastcall sub_E72C(int a1, _DWORD *a2, int a3)
{
  int v4; // r3
  int *v5; // r5
  int v6; // r3
  int v7; // r8

  v4 = dword_21334;
  v5 = off_21330;
  if ( dword_21334 )
    v4 = dword_21334 + 5 * (off_21338 - off_21330);
  *(off_21330 - 1) = v4;
  if ( a3 <= 7 )
  {
    fprintf((FILE *)stderr, "random: not enough state (%ld bytes); ignored.\n", a3);
    return 0;
  }
  else if ( a3 <= 31 )
  {
    dword_21334 = 0;
    dword_2133C = 0;
    dword_21340 = 0;
    off_21330 = a2 + 1;
    off_21348 = (int (*)[128])(a2 + 1);
    sub_E660(a1);
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
        dword_2133C = 15;
        dword_21334 = 2;
        v6 = 15;
        dword_21340 = 1;
      }
      else if ( a3 > 255 )
      {
        v7 = 4;
        dword_2133C = 63;
        dword_21334 = 4;
        v6 = 63;
        dword_21340 = 1;
      }
      else
      {
        dword_21334 = 3;
        v7 = 3;
        dword_21340 = 3;
        v6 = 31;
        dword_2133C = 31;
      }
    }
    else
    {
      dword_2133C = 7;
      v6 = 7;
      v7 = 1;
      dword_21334 = 1;
      dword_21340 = 3;
    }
    off_21330 = a2 + 1;
    off_21348 = (int (*)[128])&a2[v6 + 1];
    sub_E660(a1);
    *a2 = 5 * (off_21338 - (a2 + 1)) + v7;
    return v5 - 1;
  }
}
