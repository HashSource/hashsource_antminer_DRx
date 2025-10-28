unsigned __int8 __cdecl CRC5(unsigned __int8 *ptr, unsigned __int8 len)
{
  _BYTE v4[5]; // [sp+Ch] [bp+Ch]
  int v5; // [sp+14h] [bp+14h]
  char v6; // [sp+18h] [bp+18h]
  bool v7; // [sp+1Bh] [bp+1Bh]
  unsigned __int8 v8; // [sp+1Ch] [bp+1Ch]
  char v9; // [sp+1Dh] [bp+1Dh]
  unsigned __int8 v10; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v5 = 16843009;
  v6 = 1;
  v10 = 0x80;
  v9 = 0;
  for ( i = 0; i < (unsigned int)len; ++i )
  {
    v7 = (v10 & *ptr) != 0;
    v4[0] = v7 ^ v6;
    v4[1] = v5;
    v4[2] = v7 ^ v6 ^ BYTE1(v5);
    *(_WORD *)&v4[3] = HIWORD(v5);
    v10 >>= 1;
    if ( ++v9 == 8 )
    {
      v10 = 0x80;
      v9 = 0;
      ++ptr;
    }
    v5 = *(_DWORD *)v4;
    v6 = v4[4];
  }
  v8 = 0;
  if ( v6 )
    v8 = 16;
  if ( HIBYTE(v5) )
    v8 |= 8u;
  if ( BYTE2(v5) )
    v8 |= 4u;
  if ( BYTE1(v5) )
    v8 |= 2u;
  if ( (_BYTE)v5 )
    v8 |= 1u;
  return v8;
}
