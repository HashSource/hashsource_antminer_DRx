int sub_3C338()
{
  int v0; // r11
  int i; // r9
  unsigned __int8 *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // t1
  char *v7; // r0
  char v8; // r2
  _WORD *v9; // r3
  char v10; // lr
  char v11; // lr
  char v12; // r12
  _WORD *v13; // r1
  char v14; // t1
  _WORD *v15; // r0
  int v16; // r12
  unsigned int v17; // r1
  int v18; // t1
  unsigned int v19; // r12
  int v20; // r0
  unsigned int v21; // r1
  int v22; // t1
  int v23; // r0
  int v24; // [sp+Ch] [bp-860h]
  _WORD v25[44]; // [sp+10h] [bp-85Ch] BYREF
  char s[2040]; // [sp+68h] [bp-804h] BYREF

  sub_2B13C(&stru_65E40);
  byte_630F8 = 1;
  if ( byte_C548D )
  {
    v0 = 0;
    v24 = 0;
    do
    {
      for ( i = 0; i != 48; ++i )
      {
        v2 = (_BYTE *)(&dword_C4BE0 + 3);
        v3 = 4992 * v24 + 104 * i;
        v4 = 805836;
        do
        {
          v5 = *++v2;
          if ( v5 == 1 )
          {
            sub_2B21C();
            memset(v25, 0, 0x56u);
            v7 = (char *)&dword_6A4B8[2] + v3 + 3;
            v8 = *v7;
            v9 = v25;
            v10 = *((_BYTE *)&dword_6A4B8[2] + v3);
            LOBYTE(v25[1]) = *(_DWORD *)((char *)dword_6A4B8 + v3);
            LOBYTE(v25[2]) = v10;
            v11 = *((_BYTE *)&dword_6A4B8[2] + v3 + 1);
            HIBYTE(v25[3]) = v8;
            v12 = *((_BYTE *)&dword_6A4B8[2] + v3 + 2);
            v13 = (_WORD *)((char *)&v25[3] + 1);
            HIBYTE(v25[2]) = v11;
            LOBYTE(v25[3]) = v12;
            qmemcpy(v25, "!T", 2);
            do
            {
              v14 = *++v7;
              *((_BYTE *)v13 + 1) = v14;
              v13 = (_WORD *)((char *)v13 + 1);
            }
            while ( v13 != (_WORD *)((char *)&v25[41] + 1) );
            v15 = v25;
            v16 = 33;
            v17 = 0xFFFF;
            while ( 1 )
            {
              v17 = (unsigned __int16)(*(_WORD *)&aBitmainL3Detec_0[2 * (v16 ^ (v17 >> 8)) + 928] ^ ((_WORD)v17 << 8));
              if ( v15 == (_WORD *)((char *)&v25[41] + 1) )
                break;
              v18 = *((unsigned __int8 *)v15 + 1);
              v15 = (_WORD *)((char *)v15 + 1);
              v16 = v18;
            }
            v19 = v17 >> 8;
            v20 = 33;
            v21 = 0xFFFF;
            while ( 1 )
            {
              LOWORD(v21) = *(_WORD *)&aBitmainL3Detec_0[2 * (v20 ^ (v21 >> 8)) + 928] ^ ((_WORD)v21 << 8);
              if ( v9 == (_WORD *)((char *)&v25[41] + 1) )
                break;
              v22 = *((unsigned __int8 *)v9 + 1);
              v9 = (_WORD *)((char *)v9 + 1);
              v20 = v22;
            }
            v23 = *(_DWORD *)(v4 + 8);
            v25[42] = v19 | ((_WORD)v21 << 8);
            if ( sub_3BBBC(v23, v25, 0x56u) != 86 )
            {
              tcflush(*(_DWORD *)(v4 + 8), 2);
              if ( sub_3BBBC(*(_DWORD *)(v4 + 8), v25, 0x56u) != 86 )
              {
                tcflush(*(_DWORD *)(v4 + 8), 2);
                if ( sub_3BBBC(*(_DWORD *)(v4 + 8), v25, 0x56u) != 86 )
                  perror("Send work error!");
              }
            }
            ++v0;
          }
          v4 += 4;
        }
        while ( v2 != (unsigned __int8 *)&unk_C4BE7 );
      }
      ++v24;
    }
    while ( (unsigned __int8)byte_C548D > v24 );
  }
  else
  {
    v0 = 0;
  }
  sub_2B21C();
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(s, 0x800u, "send_work : %d ", v0);
    sub_38438(5, s, 0);
  }
  return 0;
}
