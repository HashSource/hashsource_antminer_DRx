int __fastcall sub_D3190(int a1, int a2, _BYTE *a3)
{
  int v3; // r1
  int v4; // r4
  _BYTE *v5; // r5
  int v6; // r12
  unsigned int v7; // r3
  char v8; // lr
  unsigned int v9; // r3
  unsigned int v10; // r3
  char v11; // lr

  v3 = 2 * a2;
  if ( v3 <= 0 )
  {
    *a3 = 0;
    return 1;
  }
  else
  {
    v4 = 0;
    v5 = a3 - 1;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *(unsigned __int8 *)(a1 + v4);
        if ( (v6 & 1) != 0 )
          break;
        v10 = v9 >> 4;
        ++v6;
        v11 = v10 + 87;
        if ( v10 <= 9 )
          v11 = v10 + 48;
        *++v5 = v11;
        if ( v3 == v6 )
          goto LABEL_10;
      }
      v7 = v9 & 0xF;
      ++v6;
      v8 = v7 + 87;
      if ( v7 <= 9 )
        v8 = v7 + 48;
      ++v4;
      *++v5 = v8;
    }
    while ( v3 != v6 );
LABEL_10:
    a3[v3] = 0;
    return 1;
  }
}
