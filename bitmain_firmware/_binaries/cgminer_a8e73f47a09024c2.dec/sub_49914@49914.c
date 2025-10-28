int __fastcall sub_49914(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  int v5; // r1
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r6
  int v9; // r4
  int v11; // r3
  int v12; // r2
  unsigned int v13; // r7
  int v14; // r4

  v5 = a2[2];
  if ( *a1 != *a2 || a1[1] != a2[1] || a1[3] != a2[3] || (v6 = v5, v5 + 2 != a3) )
  {
    puts("power reply data error:");
    v8 = a3;
    if ( a3 )
    {
      v9 = 0;
      do
        printf("%02x ", a2[v9++]);
      while ( (unsigned __int16)v9 < v8 );
    }
    goto LABEL_11;
  }
  if ( v5 > 2 )
  {
    v11 = 2;
    LOWORD(v7) = 0;
    do
    {
      v7 = (unsigned __int16)(v7 + a2[v11]);
      v11 = (unsigned __int16)(v11 + 1);
    }
    while ( v6 > v11 );
  }
  else
  {
    v7 = 0;
  }
  v12 = (unsigned __int16)(a2[a3 - 2] + (a2[a3 - 1] << 8));
  if ( v7 != v12 )
  {
    printf("power reply crc error, crc %04x != crc_reply %04x:\n", v7, v12);
    v13 = a3;
    if ( a3 )
    {
      v14 = 0;
      do
        printf("%02x ", a2[v14++]);
      while ( (unsigned __int16)v14 < v13 );
    }
LABEL_11:
    putchar(10);
    return 0;
  }
  return 1;
}
