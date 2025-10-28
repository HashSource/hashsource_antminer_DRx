bool __fastcall sub_2D164(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r3
  unsigned __int8 *v6; // r1
  int v7; // r12
  int v8; // r12
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
LABEL_21:
    if ( a3 )
      return 0;
    return v3 == 0;
  }
  if ( !a3 )
    return v3 == 0;
  v4 = a2[1];
  if ( a2[1] )
  {
    v5 = dword_6740C[v3];
    v6 = a2 + 2;
    v7 = dword_6740C[v4];
    if ( (v7 | v5) < 0 )
    {
LABEL_13:
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
        return 0;
      strcpy(v10, "hex2bin scan failed");
      sub_3F178(3, v10, 0);
      return 0;
    }
    while ( 1 )
    {
      *a1++ = v7 | (16 * v5);
      --a3;
      v3 = *v6;
      if ( !*v6 )
        goto LABEL_21;
      if ( !a3 )
        return v3 == 0;
      v8 = v6[1];
      if ( !v6[1] )
        break;
      v5 = dword_6740C[v3];
      v6 += 2;
      v7 = dword_6740C[v8];
      if ( (v7 | v5) < 0 )
        goto LABEL_13;
    }
  }
  if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
    return 0;
  strcpy(v10, "hex2bin str truncated");
  sub_3F178(3, v10, 0);
  return 0;
}
