void sub_11918()
{
  int v0; // r7
  int *v1; // r6
  int v2; // r8
  int *v3; // r3
  unsigned int v4; // r4
  int v5; // t1
  unsigned int v6; // r2
  int v7; // t1
  int v8; // r5
  int v9; // r1
  int v10; // r1
  int v11; // r10
  int v12; // r8
  int v13; // r6
  _DWORD *v14; // t1
  char v15[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = dword_802C8;
  if ( dword_802C8 <= 0 )
  {
    v4 = 1;
  }
  else
  {
    v1 = (int *)dword_80568;
    v2 = dword_80568 + 4 * dword_802C8;
    v3 = (int *)dword_80568;
    v4 = -1;
    do
    {
      v5 = *v3++;
      v6 = *(_DWORD *)(v5 + 56);
      if ( v6 && v4 >= v6 )
        v4 = v6;
    }
    while ( v3 != (int *)v2 );
    if ( v4 == -1 )
    {
      v4 = 1;
    }
    else
    {
      do
      {
        v7 = *v1++;
        v8 = *(_DWORD *)(v7 + 56);
        if ( v8 )
        {
          sub_5E8C0(v8, v4);
          if ( v9 )
          {
            do
              sub_5E8C0(v8, --v4);
            while ( v10 );
          }
        }
      }
      while ( (int *)v2 != v1 );
    }
    v11 = dword_79450;
    v12 = dword_80568 - 4;
    v13 = 0;
    do
    {
      v14 = *(_DWORD **)(v12 + 4);
      v12 += 4;
      v14[16] = sub_5E818(v14[16] * v11, v4);
      v14[15] = sub_5E818(v14[14], v4);
      ++v13;
    }
    while ( v13 < v0 );
  }
  dword_79450 = v4;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v15, 0x800u, "Global quota greatest common denominator set to %lu", v4);
    sub_3F178(7, v15, 0);
  }
}
