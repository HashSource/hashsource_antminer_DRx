int __fastcall sub_2CA18(int result)
{
  int v1; // r4
  int v2; // r3
  unsigned int v3; // r12
  int v4; // r3
  int v5; // r2
  int v6; // r5
  int v7; // r7
  int v8; // r10
  int v9; // r3
  int i; // r2
  char v11; // r0
  _BYTE v12[20]; // [sp+0h] [bp-14h] BYREF

  v1 = result;
  v2 = *(unsigned __int16 *)result;
  if ( v2 != 2 )
    result = 0;
  ++dword_7FFC0;
  if ( v2 != 2 )
  {
    if ( v2 != 10 )
      return result;
LABEL_16:
    if ( *(unsigned __int8 *)(v1 + 8) != 255 )
    {
      v6 = dword_CB53C;
      v7 = (unsigned __int16)((*(_WORD *)(v1 + 2) << 8) | HIBYTE(*(_WORD *)(v1 + 2)));
      if ( dword_CB53C )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)v6;
          if ( v6 == *(_DWORD *)v6 )
            off_7C9FC("ntp_restrict.c", 291, 2, "next != res");
          v9 = v6;
          for ( i = 0; i != 16; ++i )
          {
            v11 = *(_BYTE *)(v9 + 28);
            ++v9;
            v12[i] = v11 & *(_BYTE *)(v1 + i + 8);
          }
          if ( !memcmp(v12, (const void *)(v6 + 12), 0x10u) && ((*(_WORD *)(v6 + 10) & 0x2000) == 0 || v7 == 123) )
            break;
          v6 = v8;
          if ( !v8 )
            goto LABEL_25;
        }
        ++*(_DWORD *)(v6 + 4);
        if ( (int *)v6 == &dword_7FF90 )
        {
          ++dword_7FFC4;
          return *(unsigned __int16 *)(v6 + 8);
        }
      }
      else
      {
LABEL_25:
        v6 = 0;
        ++MEMORY[4];
      }
      ++dword_7FFC8;
      return *(unsigned __int16 *)(v6 + 8);
    }
    return 1;
  }
  v3 = bswap32(*(_DWORD *)(v1 + 4));
  if ( (v3 & 0xF0000000) == 0xE0000000 )
    return 1;
  v4 = dword_CB538;
  if ( !dword_CB538 )
  {
LABEL_30:
    v4 = 0;
    ++MEMORY[4];
LABEL_14:
    ++dword_7FFC8;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v5 = *(_DWORD *)v4;
    if ( *(_DWORD *)(v4 + 12) == (v3 & *(_DWORD *)(v4 + 16))
      && ((*(_WORD *)(v4 + 10) & 0x2000) == 0
       || (unsigned __int16)((*(_WORD *)(v1 + 2) << 8) | HIBYTE(*(_WORD *)(v1 + 2))) == 0x7B) )
    {
      break;
    }
    v4 = *(_DWORD *)v4;
    if ( !v5 )
      goto LABEL_30;
  }
  ++*(_DWORD *)(v4 + 4);
  if ( (int *)v4 != &dword_7FF64 )
    goto LABEL_14;
  ++dword_7FFC4;
LABEL_15:
  result = *(unsigned __int16 *)(v4 + 8);
  if ( *(_WORD *)v1 == 10 )
    goto LABEL_16;
  return result;
}
