int __fastcall sub_41784(_BYTE *a1, int a2)
{
  int v2; // r5
  char v3; // r7
  int v4; // r9
  int v5; // r8
  char v6; // r6
  int v7; // r3
  unsigned int v8; // r4
  int v9; // r2
  int v10; // r12
  int v11; // r10
  int result; // r0

  if ( a2 )
  {
    v2 = 1;
    v3 = 1;
    v4 = 1;
    v5 = 1;
    v6 = 1;
    LOBYTE(v7) = 0;
    v8 = 128;
    LOBYTE(v9) = 0;
    while ( 1 )
    {
      LOBYTE(v10) = ((unsigned __int8)v8 & *a1) != 0 ? v6 ^ 1 : v6;
      v10 = (unsigned __int8)v10;
      v11 = (unsigned __int8)(v10 ^ v3);
      v7 = (unsigned __int8)(v7 + 1);
      if ( v7 == 8 )
      {
        ++a1;
        LOBYTE(v7) = 0;
        v8 = 128;
      }
      else
      {
        v8 >>= 1;
      }
      v9 = (unsigned __int8)(v9 + 1);
      v6 = v5;
      v3 = v2;
      if ( v9 == a2 )
        break;
      v2 = (unsigned __int8)v10;
      v5 = v4;
      v4 = v11;
    }
    if ( !v5 )
    {
      result = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = 1;
    v2 = 1;
    v11 = 1;
    v4 = 1;
  }
  result = 16;
LABEL_16:
  if ( v4 )
    result |= 8u;
  if ( v11 )
    result |= 4u;
  if ( v2 )
    result |= 2u;
  if ( v10 )
    return result | 1;
  return result;
}
