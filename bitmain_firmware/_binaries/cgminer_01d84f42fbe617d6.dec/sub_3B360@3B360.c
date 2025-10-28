int __fastcall sub_3B360(_BYTE *a1, int a2)
{
  int v2; // r5
  int v3; // r3
  char v4; // r8
  int v5; // r9
  int v6; // r6
  char v7; // r7
  unsigned __int8 v8; // r12
  unsigned int v9; // r2
  int v10; // r4
  unsigned __int8 v11; // r8
  int v12; // r10
  int result; // r0

  if ( a2 )
  {
    v2 = 1;
    LOBYTE(v3) = 0;
    v4 = 1;
    v5 = 1;
    v6 = 1;
    v7 = 1;
    v8 = 0;
    v9 = 128;
    while ( 1 )
    {
      ++v8;
      v3 = (unsigned __int8)(v3 + 1);
      if ( ((unsigned __int8)v9 & *a1) != 0 )
        LOBYTE(v10) = v7 ^ 1;
      else
        LOBYTE(v10) = v7;
      v9 >>= 1;
      v10 = (unsigned __int8)v10;
      if ( v3 == 8 )
        ++a1;
      v11 = v4 ^ v10;
      if ( v3 == 8 )
      {
        LOBYTE(v3) = 0;
        v9 = 128;
      }
      v12 = v11;
      v7 = v6;
      v4 = v2;
      if ( v8 == a2 )
        break;
      v6 = v5;
      v2 = (unsigned __int8)v10;
      v5 = v12;
    }
    if ( !v6 )
    {
      result = 0;
      goto LABEL_15;
    }
  }
  else
  {
    v10 = 1;
    v2 = 1;
    v12 = 1;
    v5 = 1;
  }
  result = 16;
LABEL_15:
  if ( v5 )
    result = (unsigned __int8)result | 8;
  if ( v12 )
    result = (unsigned __int8)result | 4;
  if ( v2 )
    result = (unsigned __int8)result | 2;
  if ( v10 )
    return (unsigned __int8)result | 1;
  return result;
}
