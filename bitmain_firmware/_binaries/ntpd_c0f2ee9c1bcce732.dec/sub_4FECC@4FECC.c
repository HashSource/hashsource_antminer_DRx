char *__fastcall sub_4FECC(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  int v3; // r4
  char *v4; // r3
  int v5; // r12
  int v6; // r6
  int v7; // r4
  int v8; // r12
  int v9; // r2
  unsigned int v11; // r2

  v1 = 7 * dword_C9B0C;
  dword_C9B0C = ((_BYTE)dword_C9B0C + 1) & 7;
  v2 = 4 * v1;
  v3 = a1[1];
  v4 = (char *)&unk_C9B10 + v2;
  v5 = a1[2];
  v6 = a1[3];
  *(_DWORD *)v4 = *a1;
  *((_DWORD *)v4 + 1) = v3;
  *((_DWORD *)v4 + 2) = v5;
  *((_DWORD *)v4 + 3) = v6;
  v7 = a1[5];
  v8 = a1[6];
  *((_DWORD *)v4 + 4) = a1[4];
  *((_DWORD *)v4 + 5) = v7;
  *((_DWORD *)v4 + 6) = v8;
  v9 = *(unsigned __int16 *)((char *)&unk_C9B10 + v2);
  if ( v9 == 2 )
  {
    v11 = bswap32(*((_DWORD *)v4 + 1));
    if ( (v11 & 0xE0000000) == 0xC0000000 )
    {
      v11 &= 0xFFFFFF00;
    }
    else if ( (v11 & 0xC0000000) == 0x80000000 )
    {
      v11 = HIWORD(v11) << 16;
    }
    *((_DWORD *)v4 + 1) = bswap32(v11);
    return (char *)&unk_C9B10 + v2;
  }
  else
  {
    if ( v9 != 10 )
    {
      sub_4FE78(3, "netof unknown AF %d", v9);
      exit(1);
    }
    v4[16] = 0;
    v4[17] = 0;
    v4[18] = 0;
    v4[19] = 0;
    v4[20] = 0;
    v4[21] = 0;
    v4[22] = 0;
    v4[23] = 0;
    return (char *)&unk_C9B10 + v2;
  }
}
