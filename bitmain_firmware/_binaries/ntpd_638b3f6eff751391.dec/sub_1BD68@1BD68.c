unsigned __int16 *__fastcall sub_1BD68(int a1, int a2)
{
  unsigned int v4; // r12
  unsigned __int16 *result; // r0
  unsigned int v6; // r1
  char v7; // r3
  char v8; // r3
  int v9; // r2
  int v10; // r1
  unsigned int v11; // r10
  unsigned int v12; // r8
  __int16 v13; // r3
  signed int v14; // r10
  unsigned int v15; // r2
  unsigned int v16; // r8
  int v17; // r9
  unsigned int v18; // r0
  __int16 *v19; // r3
  int v20; // r2
  __int16 *v21; // r8

  if ( dword_7CF4C > 2 )
    puts("in process_control()");
  v4 = *(_DWORD *)(a1 + 88);
  result = *(unsigned __int16 **)(a1 + 64);
  v6 = v4;
  dword_7D188 = a1 + 8;
  dword_7D18C = (int)result;
  ++dword_CAAA0;
  if ( v4 <= 0xB
    || (v7 = *(_BYTE *)(a1 + 93), (v7 & 0xE0) != 0)
    || (v9 = *(unsigned __int16 *)(a1 + 100), *(_WORD *)(a1 + 100)) )
  {
    if ( dword_7CF4C > 0 )
    {
      result = (unsigned __int16 *)puts("invalid format in control packet");
      v6 = *(_DWORD *)(a1 + 88);
    }
    if ( v6 <= 0xB )
      ++dword_CAAD8;
    v8 = *(_BYTE *)(a1 + 93);
    if ( v8 < 0 )
      ++dword_CAA9C;
    if ( (v8 & 0x20) != 0 )
      ++dword_CAABC;
    if ( (v8 & 0x40) != 0 )
      ++dword_CAACC;
    if ( *(_WORD *)(a1 + 100) )
      ++dword_CAAC8;
  }
  else
  {
    v10 = (*(unsigned __int8 *)(a1 + 92) >> 3) & 7;
    byte_7D3AE = (*(_BYTE *)(a1 + 92) >> 3) & 7;
    result = (unsigned __int16 *)(v10 - 1);
    if ( (unsigned int)(v10 - 1) > 3 )
    {
      if ( dword_7CF4C > 0 )
        result = (unsigned __int16 *)printf("unknown version %d in control packet\n", v10);
      ++dword_CAB78;
      return result;
    }
    v11 = *(unsigned __int16 *)(a1 + 102);
    v12 = *(unsigned __int16 *)(a1 + 98);
    byte_7D178 = v7;
    v13 = *(_WORD *)(a1 + 94);
    word_7CF78 = v9;
    dword_7D17C = v9;
    byte_7CF74 = (byte_CB4B0 << 6) | 6 | (8 * v10);
    byte_7D180 = v9;
    byte_7D181 = v9;
    v14 = (unsigned __int16)(((_WORD)v11 << 8) | (v11 >> 8));
    dword_7D184 = v9;
    byte_7D3AF = v9;
    dword_7CF70 = v9;
    dword_7D190 = v9;
    word_7CF7A = v12;
    dword_7CF6C = (int)&unk_7CF80;
    word_7D3AC = ((_WORD)v12 << 8) | (v12 >> 8);
    word_7CF76 = v13;
    dword_7D194 = (int)&unk_7D154;
    if ( (v4 & 3) != 0 && dword_7CF4C > 2 )
    {
      printf("Control packet length %d unrounded\n", v4);
      v4 = *(_DWORD *)(a1 + 88);
    }
    if ( v14 > (int)(v4 - 12) || (v4 & 3) != 0 )
    {
      result = sub_1B684(2);
      ++dword_CAAC4;
      return result;
    }
    v15 = (v14 + 19) & 0xFFFFFFF8;
    v16 = v4 - v15;
    if ( v4 - v15 - 4 <= 0x14 )
    {
      v17 = a1 + 92;
      if ( dword_CB46C )
      {
        v18 = bswap32(*(_DWORD *)(v17 + v15));
        byte_7D181 = 1;
        dword_7D184 = v18;
        if ( dword_7CF4C > 2 )
          printf("recv_len %d, properlen %d, wants auth with keyid %08x, MAC length=%d\n", v4, v15, v18, v4 - v15);
        if ( sub_4E030() )
        {
          if ( sub_4E4E4(dword_7D184, a1 + 92, *(_DWORD *)(a1 + 88) - v16, v16) )
          {
            if ( dword_7CF4C > 2 )
              puts("authenticated okay");
            byte_7D3AF = 1;
          }
          else
          {
            if ( dword_7CF4C > 2 )
              puts("authentication failed");
            dword_7D184 = 0;
          }
        }
        else if ( dword_7CF4C > 2 )
        {
          printf("invalid keyid %08x\n", dword_7D184);
        }
      }
    }
    else
    {
      v17 = a1 + 92;
    }
    dword_7D3A4 = a1 + 104;
    dword_7D3A8 = v17 + v14 + 12;
    if ( word_7A0F0 == -1 )
    {
LABEL_42:
      ++dword_CAAA4;
      return sub_1B684(3);
    }
    if ( word_7A0F0 != (unsigned __int8)byte_7D178 )
    {
      v19 = (__int16 *)&unk_7A0F8;
      while ( 1 )
      {
        v20 = *v19;
        v21 = v19;
        v19 += 4;
        if ( v20 == -1 )
          goto LABEL_42;
        if ( v20 == (unsigned __int8)byte_7D178 )
          goto LABEL_44;
      }
    }
    v21 = &word_7A0F0;
LABEL_44:
    if ( dword_7CF4C > 2 )
      printf("opcode %d, found command handler\n", (unsigned __int8)byte_7D178);
    if ( v21[1] != 1 || byte_7D3AF && dword_7D184 == dword_CAAB0 )
      return (unsigned __int16 *)(*((int (__fastcall **)(int, int))v21 + 1))(a1, a2);
    else
      return sub_1B684(1);
  }
  return result;
}
