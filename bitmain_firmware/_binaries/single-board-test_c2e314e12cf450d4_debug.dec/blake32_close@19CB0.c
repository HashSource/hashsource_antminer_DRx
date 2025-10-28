_BYTE *__fastcall blake32_close(_DWORD *a1, char a2, int a3, int a4, unsigned int a5)
{
  _BYTE *result; // r0
  char s[56]; // [sp+14h] [bp+14h] BYREF
  unsigned int v9; // [sp+4Ch] [bp+4Ch] BYREF
  unsigned int v10; // [sp+50h] [bp+50h] BYREF
  int v11; // [sp+54h] [bp+54h]
  int v12; // [sp+58h] [bp+58h]
  int v13; // [sp+5Ch] [bp+5Ch]
  int v14; // [sp+60h] [bp+60h]
  unsigned int v15; // [sp+64h] [bp+64h]
  int v16; // [sp+68h] [bp+68h]
  unsigned int i; // [sp+6Ch] [bp+6Ch]

  v16 = a1[16];
  v15 = 8 * v16 + a3;
  v14 = 128 >> a3;
  s[v16] = (128 >> a3) | a2 & -(128 >> a3);
  v13 = a1[29] + v15;
  v12 = a1[30];
  if ( v16 || a3 )
  {
    if ( a1[29] )
    {
      a1[29] = a1[29] + v15 - 512;
    }
    else
    {
      a1[29] = v15 - 512;
      --a1[30];
    }
  }
  else
  {
    a1[29] = -512;
    a1[30] = -1;
  }
  if ( v15 > 0x1BE )
  {
    memset(&s[v16 + 1], 0, 63 - v16);
    blake32((unsigned int)a1, &s[v16], 64 - v16);
    a1[29] = -512;
    a1[30] = -1;
    memset(s, 0, sizeof(s));
    if ( a5 == 8 )
      s[55] = 1;
    sph_enc32be_aligned(&v9, v12);
    sph_enc32be_aligned(&v10, v13);
    result = (_BYTE *)blake32((unsigned int)a1, s, 0x40u);
  }
  else
  {
    memset(&s[v16 + 1], 0, 55 - v16);
    if ( a5 == 8 )
      s[55] |= 1u;
    sph_enc32be_aligned(&v9, v12);
    sph_enc32be_aligned(&v10, v13);
    result = (_BYTE *)blake32((unsigned int)a1, &s[v16], 64 - v16);
  }
  v11 = a4;
  for ( i = 0; i < a5; ++i )
    result = sph_enc32be((_BYTE *)(v11 + 4 * i), a1[i + 17]);
  return result;
}
