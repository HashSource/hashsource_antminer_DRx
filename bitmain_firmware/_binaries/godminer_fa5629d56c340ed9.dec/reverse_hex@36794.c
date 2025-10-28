int __fastcall reverse_hex(int result, unsigned int a2)
{
  unsigned int v2; // lr
  _BYTE *v3; // r1
  _BYTE *v4; // lr
  _BYTE *v5; // r3
  char v6; // r2
  char v7; // t1
  char v8; // t1

  v2 = a2 >> 1;
  if ( a2 >> 1 )
  {
    v3 = (_BYTE *)(result + a2);
    v4 = (_BYTE *)(result + v2 - 1);
    v5 = (_BYTE *)(result - 1);
    do
    {
      v7 = *++v5;
      v6 = v7;
      v8 = *--v3;
      *v5 = v8;
      *v3 = v6;
    }
    while ( v5 != v4 );
  }
  return result;
}
