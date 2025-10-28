bool __fastcall hs_hex_decode(_BYTE *a1, int a2)
{
  int v2; // r2
  char v3; // lr
  int v4; // r5
  int v5; // r12
  int v6; // t1
  char v7; // r3
  int v8; // t1

  if ( !a1 )
    return 1;
  v2 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 1;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = v2 - 48;
    if ( (unsigned __int8)(v2 - 48) > 9u )
      break;
LABEL_12:
    if ( (v5 & 1) != 0 )
    {
      v3 |= v7;
      if ( a2 )
        *(_BYTE *)(a2 + v4) = v3;
      ++v5;
      v6 = (unsigned __int8)*++a1;
      v2 = v6;
      ++v4;
      if ( !v6 )
        return (v5 & 1) == 0;
    }
    else
    {
      v8 = (unsigned __int8)*++a1;
      v2 = v8;
      ++v5;
      v3 = 16 * v7;
      if ( !v8 )
        return (v5 & 1) == 0;
    }
  }
  if ( (unsigned int)(v2 - 65) <= 5 )
  {
    v7 = v2 - 55;
    goto LABEL_12;
  }
  if ( (unsigned int)(v2 - 97) <= 5 )
  {
    v7 = v2 - 87;
    goto LABEL_12;
  }
  return 0;
}
