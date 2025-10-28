int __fastcall expandArray(int result, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r11
  int v7; // r1
  int v8; // r6
  unsigned int v9; // r4
  unsigned int v10; // lr
  int v11; // t1
  _BYTE *v12; // r3
  unsigned int v13; // r1
  _BYTE *v14; // r12
  unsigned int v15; // r2
  char v16; // r3
  int v17; // [sp+4h] [bp-18h]
  int v19; // [sp+10h] [bp-Ch]
  int v20; // [sp+14h] [bp-8h]

  v6 = a6 + ((a5 + 7) >> 3);
  if ( a2 )
  {
    v7 = result + a2;
    v8 = 0;
    --result;
    v17 = v7 - 1;
    v19 = a3 + v6;
    v9 = 0;
    v10 = 0;
    v20 = a3 + a6;
    do
    {
      while ( 1 )
      {
        v11 = *(unsigned __int8 *)++result;
        v10 += 8;
        v9 = v11 | (v9 << 8);
        if ( a5 <= v10 )
          break;
        if ( result == v17 )
          return result;
      }
      v10 -= a5;
      if ( a6 )
      {
        v12 = (_BYTE *)(a3 + v8);
        do
          *v12++ = 0;
        while ( (_BYTE *)(v20 + v8) != v12 );
      }
      if ( a6 < v6 )
      {
        v13 = v10 + 8 * (((a5 + 7) >> 3) + 0x1FFFFFFF);
        v14 = (_BYTE *)(a3 + a6 + v8);
        do
        {
          v15 = v9 >> v13;
          v16 = v13 - v10;
          v13 -= 8;
          *v14++ = v15 & ((unsigned int)~(-1 << a5) >> v16);
        }
        while ( (_BYTE *)(v19 + v8) != v14 );
      }
      v8 += v6;
    }
    while ( result != v17 );
  }
  return result;
}
