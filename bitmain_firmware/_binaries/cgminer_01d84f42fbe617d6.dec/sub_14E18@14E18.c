void sub_14E18()
{
  int v0; // r7
  unsigned int v1; // r4
  int v2; // r10
  int v3; // r8
  int *v4; // r6
  int *v5; // r3
  int v6; // t1
  unsigned int v7; // r2
  int v8; // t1
  int v9; // r5
  int v10; // r8
  int v11; // r6
  int v12; // r10
  _DWORD *v13; // t1
  int v14; // r1
  char v15[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_63740;
  if ( dword_63740 <= 0 )
  {
    v1 = 1;
  }
  else
  {
    v1 = -1;
    v2 = dword_639E0;
    v3 = dword_639E0 + 4 * dword_63740;
    v4 = (int *)dword_639E0;
    v5 = (int *)dword_639E0;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 56);
      if ( v7 && v1 >= v7 )
        v1 = v7;
    }
    while ( v5 != (int *)v3 );
    if ( v1 == -1 )
    {
      v1 = 1;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v8 = *v4++;
          v9 = *(_DWORD *)(v8 + 56);
          if ( v9 )
            break;
          if ( v4 == (int *)v3 )
            goto LABEL_13;
        }
        while ( 1 )
        {
          sub_48F68(v9, v1);
          if ( !v14 )
            break;
          --v1;
        }
      }
      while ( v4 != (int *)v3 );
    }
LABEL_13:
    v10 = v2 - 4;
    v11 = 0;
    v12 = dword_5F890;
    do
    {
      v13 = *(_DWORD **)(v10 + 4);
      v10 += 4;
      ++v11;
      v13[16] = sub_48EC0(v13[16] * v12, v1);
      v13[15] = sub_48EC0(v13[14], v1);
    }
    while ( v11 < v0 );
  }
  dword_5F890 = v1;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v15, 0x800u, "Global quota greatest common denominator set to %lu", v1);
    sub_38438(7, v15, 0);
  }
}
