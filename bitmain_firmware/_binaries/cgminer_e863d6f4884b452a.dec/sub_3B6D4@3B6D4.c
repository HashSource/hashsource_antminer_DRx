int __fastcall sub_3B6D4(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r4
  int v7; // t1
  int v9; // r2
  int v10; // r1
  int v11; // r3
  __int16 v12; // r0
  int v13; // r2
  unsigned __int8 *v14; // r5
  unsigned __int8 *v15; // r4
  int v16; // t1

  if ( *a1 != *a2 || a1[1] != a2[1] || a1[3] != a2[3] || (v9 = a2[2], v9 + 2 != a3) )
  {
    puts("power reply data error:");
    if ( (_WORD)a3 )
    {
      v5 = &a2[(unsigned __int16)(a3 - 1)];
      v6 = a2 - 1;
      do
      {
        v7 = *++v6;
        printf("%02x ", v7);
      }
      while ( v5 != v6 );
    }
    goto LABEL_6;
  }
  if ( a2[2] > 2u )
  {
    v11 = 2;
    LOWORD(v10) = 0;
    do
    {
      v12 = a2[v11];
      v11 = (unsigned __int16)(v11 + 1);
      v10 = (unsigned __int16)(v10 + v12);
    }
    while ( v9 > v11 );
  }
  else
  {
    v10 = 0;
  }
  v13 = (unsigned __int16)(a2[a3 - 2] + (a2[a3 - 1] << 8));
  if ( v13 != v10 )
  {
    printf("power reply crc error, crc %04x != crc_reply %04x:\n", v10, v13);
    if ( (_WORD)a3 )
    {
      v14 = &a2[(unsigned __int16)(a3 - 1)];
      v15 = a2 - 1;
      do
      {
        v16 = *++v15;
        printf("%02x ", v16);
      }
      while ( v15 != v14 );
    }
LABEL_6:
    putchar(10);
    return 0;
  }
  return 1;
}
