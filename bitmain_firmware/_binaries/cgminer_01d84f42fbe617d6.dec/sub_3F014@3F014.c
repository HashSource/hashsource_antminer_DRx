int __fastcall sub_3F014(int a1)
{
  int v1; // r4
  char *v2; // r7
  char v3; // r6
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r12
  int v8; // t1

  v1 = 4;
  v2 = (char *)&unk_63178 + 8 * a1;
  v3 = aBitmainL3Detec_0[a1 + 1604];
  while ( 1 )
  {
    sub_3EF84(v3, 28, 0);
    sub_2B21C();
    v4 = 805863;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(unsigned __int8 *)++v4;
      if ( v8 == 1 )
      {
        ++v7;
        if ( *(_DWORD *)&v2[v5] == 1 )
          ++v6;
      }
      v5 += 24;
    }
    while ( v5 != 96 );
    if ( v7 == v6 )
      break;
    if ( !--v1 )
      return -1;
  }
  return 0;
}
