int __fastcall sub_36D08(_BYTE *a1, unsigned int a2)
{
  char v2; // r9
  unsigned __int8 v3; // r6
  int v5; // r2
  int result; // r0
  int v7; // lr
  int v8; // r7
  int v9; // r12
  unsigned int v10; // r5
  unsigned int v11; // r3
  unsigned __int8 v12; // r3
  int v13; // r4

  if ( !a2 )
    return 31;
  v2 = 1;
  v3 = 0;
  LOBYTE(v5) = 0;
  result = 1;
  v7 = 1;
  v8 = 1;
  v9 = 1;
  v10 = 128;
  while ( 1 )
  {
    v5 = (unsigned __int8)(v5 + 1);
    ++v3;
    v11 = *a1 & v10;
    v10 >>= 1;
    if ( v11 )
      v12 = v2 ^ 1;
    else
      v12 = v2;
    if ( v5 == 8 )
    {
      ++a1;
      LOBYTE(v5) = 0;
      v10 = 128;
    }
    v13 = (unsigned __int8)(v12 ^ v8);
    v2 = result;
    if ( v3 >= a2 )
      break;
    result = v7;
    v8 = v9;
    v7 = v13;
    v9 = v12;
  }
  if ( result )
    result = 16;
  if ( v7 )
    result = (unsigned __int8)result | 8;
  if ( v12 != v8 )
    result = (unsigned __int8)result | 4;
  if ( !v9 )
  {
    if ( !v12 )
      return result;
    return (unsigned __int8)result | 1;
  }
  result = (unsigned __int8)result | 2;
  if ( v12 )
    return (unsigned __int8)result | 1;
  return result;
}
