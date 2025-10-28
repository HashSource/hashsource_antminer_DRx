int __fastcall sub_28324(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v4; // r3
  unsigned int v5; // r4
  int result; // r0
  unsigned __int8 *v7; // r1
  int v8; // r3
  int v9; // r6
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  if ( *a2 )
  {
    if ( !a3 )
      return 0;
    if ( !a2[1] )
    {
LABEL_16:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        strcpy(v10, "hex2bin str truncated");
        sub_343C4(3, v10, 0);
      }
      return 0;
    }
    v4 = dword_5142C[a2[1]];
    v5 = dword_5142C[*a2];
    result = (v4 >> 31) | (v5 >> 31);
    if ( result )
    {
LABEL_11:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        strcpy(v10, "hex2bin scan failed");
        sub_343C4(3, v10, 0);
        return 0;
      }
      return 0;
    }
    v7 = a2 + 4;
    while ( 1 )
    {
      --a3;
      *a1++ = v4 | (16 * v5);
      v8 = *(v7 - 2);
      if ( !*(v7 - 2) )
        break;
      if ( !a3 )
        return result;
      v9 = *(v7 - 1);
      v7 += 2;
      if ( !v9 )
        goto LABEL_16;
      v5 = dword_5142C[v8];
      v4 = dword_5142C[v9];
      if ( ((v5 | v4) & 0x80000000) != 0 )
        goto LABEL_11;
    }
  }
  result = 1;
  if ( a3 )
    return 0;
  return result;
}
