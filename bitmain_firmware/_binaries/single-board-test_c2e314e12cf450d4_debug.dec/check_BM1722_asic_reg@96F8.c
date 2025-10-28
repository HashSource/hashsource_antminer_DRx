unsigned int __fastcall check_BM1722_asic_reg(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  int v4; // r2
  __int16 v5; // r1
  int v6; // r0
  _DWORD s[2]; // [sp+8h] [bp+8h] BYREF
  unsigned int v13; // [sp+10h] [bp+10h]
  unsigned int v14; // [sp+14h] [bp+14h]
  unsigned int i; // [sp+18h] [bp+18h]
  unsigned int v16; // [sp+1Ch] [bp+1Ch]

  s[0] = 0;
  LOWORD(s[1]) = 0;
  BYTE2(s[1]) = 0;
  v16 = 0;
  v13 = 0;
  i = 0;
  v14 = 0x80000000;
  clear_register_value_buf();
  get_BM1722_asic_register(a1, a2, a3, a4);
  if ( !a3 )
    *((_BYTE *)&cgpu + a1 + 1049784) = 0;
  while ( v16 <= 2 )
  {
    usleep(0xC350u);
    pthread_mutex_lock(&reg_mutex);
    v13 = *(_DWORD *)(reg_value_buf + 8);
    pthread_mutex_unlock(&reg_mutex);
    if ( v13 )
    {
      v16 = 0;
      for ( i = 0; i < v13; ++i )
      {
        pthread_mutex_lock(&reg_mutex);
        if ( a1 == *(unsigned __int8 *)(reg_value_buf + 10 * *(_DWORD *)(reg_value_buf + 4) + 25) )
        {
          memset(s, 0, 7u);
          v4 = reg_value_buf + 10 * *(_DWORD *)(reg_value_buf + 4) + 16;
          s[0] = *(_DWORD *)v4;
          v5 = *(_WORD *)(v4 + 4);
          LOBYTE(v4) = *(_BYTE *)(v4 + 6);
          LOWORD(s[1]) = v5;
          BYTE2(s[1]) = v4;
          if ( CRC5((unsigned __int8 *)s, 0x33u) == *(unsigned __int8 *)(reg_value_buf
                                                                       + 10 * *(_DWORD *)(reg_value_buf + 4)
                                                                       + 24) )
          {
            if ( !a3 )
              ++*((_BYTE *)&cgpu + a1 + 1049784);
            v14 = _byteswap_ulong(*(_DWORD *)(reg_value_buf + 10 * (*(_DWORD *)(reg_value_buf + 4))++ + 16));
            --*(_DWORD *)(reg_value_buf + 8);
            if ( *(_DWORD *)(reg_value_buf + 4) == 513 )
              *(_DWORD *)(reg_value_buf + 4) = 0;
            pthread_mutex_unlock(&reg_mutex);
          }
          else
          {
            ++*(_DWORD *)(reg_value_buf + 4);
            --*(_DWORD *)(reg_value_buf + 8);
            if ( *(_DWORD *)(reg_value_buf + 4) == 513 )
              *(_DWORD *)(reg_value_buf + 4) = 0;
            v6 = CRC5((unsigned __int8 *)s, 0x33u);
            printf(
              "%s: crc is 0x%x, but it should be 0x%x\n",
              "check_BM1722_asic_reg",
              v6,
              *(unsigned __int8 *)(reg_value_buf + 10 * *(_DWORD *)(reg_value_buf + 4) + 24));
            pthread_mutex_unlock(&reg_mutex);
          }
        }
        else
        {
          ++*(_DWORD *)(reg_value_buf + 4);
          --*(_DWORD *)(reg_value_buf + 8);
          if ( *(_DWORD *)(reg_value_buf + 4) == 513 )
            *(_DWORD *)(reg_value_buf + 4) = 0;
          printf(
            "%s: the return data is from chain%d, but it should be from chain%d\n",
            "check_BM1722_asic_reg",
            *(unsigned __int8 *)(reg_value_buf + 10 * *(_DWORD *)(reg_value_buf + 4) + 25),
            a1);
          pthread_mutex_unlock(&reg_mutex);
        }
      }
    }
    else
    {
      ++v16;
    }
  }
  v16 = 0;
  if ( !a3 )
  {
    if ( *((unsigned __int8 *)&cgpu + a1 + 1049784) > (unsigned int)dword_3367C8 )
      dword_3367C8 = *((unsigned __int8 *)&cgpu + a1 + 1049784);
    printf("%s: chain J%d has %d ASIC\n", "check_BM1722_asic_reg", a1 + 1, *((unsigned __int8 *)&cgpu + a1 + 1049784));
  }
  clear_register_value_buf();
  return v14;
}
