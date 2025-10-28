bool __fastcall sub_295B8(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r12
  unsigned __int8 *v5; // r1
  int v6; // r3
  int v7; // r12
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v3 = *a2;
  if ( !*a2 )
    return a3 == 0;
  if ( a3 )
  {
    v4 = a2[1];
    if ( a2[1] )
    {
      v5 = a2 + 2;
      while ( 1 )
      {
        v6 = dword_51788[v3];
        v7 = dword_51788[v4];
        if ( (v7 | v6) < 0 )
          break;
        --a3;
        *a1++ = v7 | (16 * v6);
        v3 = *v5;
        if ( !*v5 )
          return a3 == 0;
        if ( !a3 )
          return 0;
        v4 = v5[1];
        v5 += 2;
        if ( !v4 )
          goto LABEL_11;
      }
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        strcpy(v9, "hex2bin scan failed");
        sub_38438(3, v9, 0);
        return 0;
      }
    }
    else
    {
LABEL_11:
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        strcpy(v9, "hex2bin str truncated");
        sub_38438(3, v9, 0);
      }
    }
  }
  return 0;
}
