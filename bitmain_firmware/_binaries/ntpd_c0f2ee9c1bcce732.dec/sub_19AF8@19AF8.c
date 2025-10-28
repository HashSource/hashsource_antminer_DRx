unsigned __int16 *__fastcall sub_19AF8(int a1)
{
  _BYTE *v2; // r3
  int v3; // r8
  size_t n; // r4
  unsigned __int16 *result; // r0
  int v6; // r7
  int *v7; // r12
  _DWORD *v8; // r6
  int v9; // r12
  unsigned int *v10; // r3
  _BYTE *v11; // r2
  int v12; // r0
  _BYTE *v13; // r2
  int *v14; // r3
  unsigned int v15; // r3
  int v16; // r1
  __int16 v17; // r2
  int *v18; // [sp+Ch] [bp-10h]
  unsigned int v19; // [sp+14h] [bp-8h]

  if ( !a1 && dword_7CF70 )
  {
    v13 = (_BYTE *)dword_7CF6C;
    v2 = (_BYTE *)(dword_7CF6C + 2);
    dword_7CF6C += 2;
    *v13 = 13;
    v13[1] = 10;
  }
  else
  {
    v2 = (_BYTE *)dword_7CF6C;
  }
  v3 = v2 - (_BYTE *)&unk_7CF80;
  n = v2 - (_BYTE *)&unk_7CF80 + 12;
  if ( (n & 3) != 0 )
  {
    do
    {
      ++n;
      *v2++ = 0;
    }
    while ( (n & 3) != 0 );
    dword_7CF6C = (int)v2;
  }
  result = (unsigned __int16 *)BYTE1(v3);
  word_7CF7C = BYTE1(dword_7D17C) | (unsigned __int16)((_WORD)dword_7D17C << 8);
  byte_7CF75 = ~((unsigned int)~(a1 << 25) >> 25) | byte_7D178 & 0x1F;
  word_7CF7E = BYTE1(v3) | (unsigned __int16)((_WORD)v3 << 8);
  if ( byte_7D180 )
  {
    v6 = 0;
    v7 = &dword_CAAAC;
    v8 = &unk_CAADC;
    do
    {
      if ( (*((_BYTE *)v8 + 50) & 1) != 0 )
      {
        v15 = *((unsigned __int16 *)v8 + 24);
        v16 = v8[7];
        byte_7CF74 = (byte_CB4B0 << 6) | 6 | (8 * *((_BYTE *)v8 + 51)) & 0x38;
        v18 = v7;
        word_7CF76 = ((_WORD)v15 << 8) | (v15 >> 8);
        result = sub_154A4((unsigned __int16 *)&unk_CAADC + 26 * v6, v16, -4, &byte_7CF74, n);
        v7 = v18;
        if ( !a1 )
          v17 = *((_WORD *)v8 + 24);
        ++*v18;
        if ( !a1 )
          *((_WORD *)v8 + 24) = v17 + 1;
      }
      ++v6;
      v8 += 13;
    }
    while ( v6 != 3 );
  }
  else
  {
    if ( byte_7D181 && dword_CB46C )
    {
      v9 = dword_7D184;
      v19 = bswap32(dword_7D184);
      if ( (n & 7) != 0 )
      {
        v11 = (_BYTE *)dword_7CF6C;
        do
        {
          ++n;
          *v11 = 0;
          v10 = (unsigned int *)++v11;
        }
        while ( (n & 7) != 0 );
        dword_7CF6C = (int)v10;
      }
      else
      {
        v10 = (unsigned int *)dword_7CF6C;
      }
      *v10 = v19;
      v12 = sub_4E458(v9, &byte_7CF74, n);
      result = sub_154A4((unsigned __int16 *)dword_7D188, dword_7D18C, -5, &byte_7CF74, n + v12);
    }
    else
    {
      result = sub_154A4((unsigned __int16 *)dword_7D188, dword_7D18C, -6, &byte_7CF74, n);
    }
    if ( a1 )
      v14 = &dword_CAAB4;
    else
      v14 = &dword_CAAB8;
    ++*v14;
  }
  dword_7CF6C = (int)&unk_7CF80;
  dword_7D17C += v3;
  return result;
}
