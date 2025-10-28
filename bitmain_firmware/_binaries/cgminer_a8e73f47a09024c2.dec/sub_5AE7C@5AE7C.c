int __fastcall sub_5AE7C(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r3
  int v8; // r3

  sub_5A0CC(a1, a3);
  if ( (a2 & 4) != 0 || (a1[13] & 0xFFFFFFDF) == 0x5B )
  {
    v6 = sub_5A9BC(a1, a2, a3);
    if ( v6 )
    {
      if ( (a2 & 2) != 0 || (sub_5A0CC(a1, a3), !a1[13]) )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = a1[9];
      }
      else
      {
        sub_59BD0(a3, a1, "end of file expected");
        v7 = *(_DWORD *)(v6 + 4);
        if ( v7 == -1 )
        {
          return 0;
        }
        else
        {
          v8 = v7 - 1;
          *(_DWORD *)(v6 + 4) = v8;
          if ( !v8 )
            sub_5C394(v6);
          return 0;
        }
      }
    }
  }
  else
  {
    sub_59BD0(a3, a1, "'[' or '{' expected");
    return 0;
  }
  return v6;
}
