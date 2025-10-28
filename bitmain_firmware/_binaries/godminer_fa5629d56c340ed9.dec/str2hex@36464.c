int __fastcall str2hex(int a1, int a2, int a3)
{
  char v3; // r5
  char v4; // r6
  int i; // r3
  int v6; // r4
  int v7; // lr

  if ( a3 <= 0 )
    return a3 / 2;
  for ( i = 0; i < a3; i += 2 )
  {
    v6 = *(unsigned __int8 *)(a2 + i);
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned int)(v6 - 97) > 5 )
      {
        if ( (unsigned int)(v6 - 65) <= 5 )
          v3 = v6 - 55;
      }
      else
      {
        v3 = v6 - 87;
      }
    }
    else
    {
      v3 = v6 - 48;
    }
    v7 = *(unsigned __int8 *)(a2 + i + 1);
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned int)(v7 - 97) > 5 )
      {
        if ( (unsigned int)(v7 - 65) <= 5 )
          v4 = v7 - 55;
      }
      else
      {
        v4 = v7 - 87;
      }
    }
    else
    {
      v4 = v7 - 48;
    }
    *(_BYTE *)(a1 + (i >> 1)) = v4 | (16 * v3);
  }
  return a3 / 2;
}
