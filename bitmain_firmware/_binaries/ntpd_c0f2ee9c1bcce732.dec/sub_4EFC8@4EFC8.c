int __fastcall sub_4EFC8(int a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int *a7, unsigned int *a8)
{
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r7
  unsigned int v11; // r0
  unsigned int v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r0
  unsigned int v17; // r7

  v8 = 24 * (a1 - 1) + a2 + a5;
  v9 = *a7;
  v10 = 60 * (60 * v8 + a3) + a4;
  if ( !*a7 )
  {
    v9 = sub_4EF18(a6);
    *a7 = v9;
  }
  v11 = v10 + v9;
  v12 = a6 + 14400;
  if ( v11 < a6 + 14400 && v11 > a6 - 14400 )
  {
    *a8 = v11;
    return 1;
  }
  else
  {
    v13 = sub_4EF18(a6);
    if ( *a7 == v13 || (*a8 = v13 + v10, v12 <= v13 + v10) || v13 + v10 <= a6 - 14400 )
    {
      if ( a6 - v13 > (unsigned int)&loc_2A2FC + 3
        || (v14 = sub_4EF18(v13 - 172800), *a7 == v14)
        || (v15 = v10 + v14, v12 <= v10 + v14)
        || v15 <= a6 - 14400 )
      {
        v16 = sub_4EF18(a6 + 172800);
        if ( *a7 == v16 )
          return 0;
        v17 = v16 + v10;
        if ( v12 <= v17 || v17 <= a6 - 14400 )
        {
          return 0;
        }
        else
        {
          *a7 = v16;
          *a8 = v17;
          return 1;
        }
      }
      else
      {
        *a7 = v14;
        *a8 = v15;
        return 1;
      }
    }
    else
    {
      *a7 = v13;
      return 1;
    }
  }
}
