void __noreturn sub_4BCCC()
{
  int v0; // r3
  int v1; // r9
  int v2; // r5
  _BYTE *v3; // r2
  _BYTE *v4; // r6
  unsigned int v5; // r4
  int v6; // r3
  unsigned int v7; // r11
  int v8; // r5
  unsigned int v9; // r4
  char *v10; // r10
  int v11; // r7
  char *v12; // r3
  unsigned int v13; // r4
  int v14; // r2
  int v15; // r5
  int j; // r4
  int v17; // t1
  int v18; // [sp+18h] [bp-82Ch]
  int i; // [sp+18h] [bp-82Ch]
  int v20; // [sp+1Ch] [bp-828h]
  int v21; // [sp+20h] [bp-824h]
  double *v22; // [sp+20h] [bp-824h]
  char s[2040]; // [sp+28h] [bp-81Ch] BYREF
  struct timeval v24; // [sp+828h] [bp-1Ch] BYREF
  struct timeval v25; // [sp+830h] [bp-14h] BYREF
  int v26; // [sp+838h] [bp-Ch] BYREF
  int v27; // [sp+83Ch] [bp-8h]

  v26 = 0;
  v27 = 0;
  sub_2FE30(&v25);
  sub_2FE30(&v24);
  sub_2FAE0(&v26, &v25);
  sub_2FAE0(&dword_75D00, &v24);
  while ( 1 )
  {
    sub_2FE30(&v25);
    sub_2FE30(&v24);
    v0 = v25.tv_sec - v26;
    if ( v25.tv_usec - v27 < 0 )
      --v0;
    if ( v0 > 120 )
    {
      v20 = 603403;
      v18 = 603403;
      v1 = 0;
      v2 = 0;
      v21 = 0;
      do
      {
        v3 = (_BYTE *)(v18 + 1);
        v18 = (int)v3;
        v4 = v3;
        if ( *v3 )
        {
          v21 += (unsigned __int8)v3[1860];
          if ( v3[1860] )
          {
            v5 = 0;
            do
            {
              v6 = *(_DWORD *)((char *)&unk_93504 + 216 * v1 + 4 * v5 + 626);
              v2 += v6;
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(s, 0x800u, "%s: chain %d asic %d asic_nonce_num %d", "check_miner_status", v1, v5, v6);
                sub_3F1C0(7, s, 0);
              }
              ++v5;
            }
            while ( (unsigned __int8)v4[1860] > v5 );
          }
        }
        ++v1;
      }
      while ( v1 != 4 );
      if ( v21 )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "%s: avg_num %d asic_num %d", "check_miner_status", v2, v21);
          sub_3F1C0(7, s, 0);
        }
        v7 = (unsigned int)sub_59EE8(v2, v21) >> 3;
      }
      else
      {
        v7 = 1;
      }
      v22 = (double *)&unk_75C28;
      for ( i = 0; i != 4; ++i )
      {
        if ( *(_BYTE *)++v20 )
        {
          if ( *(_BYTE *)(v20 + 1860) )
          {
            v8 = 0;
            v9 = 0;
            v10 = (char *)&unk_93504 + 70 * i;
            v11 = 54 * i;
            do
            {
              if ( (v9 & 7) == 0 )
              {
                if ( v8 + v9 > 0x46 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v8 + v9);
                  sub_3F1C0(3, s, 0);
                }
                v10[v8 + 1490 + v9] = 32;
                ++v8;
              }
              if ( v7 >= *(_DWORD *)((char *)&unk_93504 + 4 * v11 + 4 * v9 + 626) )
              {
                if ( v8 + v9 > 0x46 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v8 + v9);
                  sub_3F1C0(3, s, 0);
                }
                v10[v8 + 1490 + v9] = 111;
              }
              else
              {
                if ( v8 + v9 > 0x46 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v8 + v9);
                  sub_3F1C0(3, s, 0);
                }
                v10[v8 + 1490 + v9] = 111;
              }
              if ( v9 > 0x46 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
              {
                snprintf(s, 0x800u, "asic num err![%d]", v9);
                sub_3F1C0(3, s, 0);
              }
              v12 = (char *)&unk_93504 + 4 * v11 + 4 * v9 + 624;
              *((_WORD *)v12 + 1) = 0;
              *((_WORD *)v12 + 2) = 0;
              ++v9;
            }
            while ( *(unsigned __int8 *)(v20 + 1860) > v9 );
            v13 = v9 + v8;
            if ( v13 > 0x46 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
            {
              snprintf(s, 0x800u, "asic num err![%d]", v13);
              sub_3F1C0(3, s, 0);
            }
          }
          else
          {
            v13 = 0;
          }
          *((_BYTE *)&unk_93504 + 70 * i + v13 + 1490) = 0;
          byte_78C0C = *v22 / 1000000.0 / 10.0 < (double)((unsigned __int8)byte_93C79 * 54
                                                                                      * (unsigned __int16)word_93C81)
                                               * 0.8
                    && !byte_75C20;
        }
        ++v22;
      }
      sub_2FAE0(&v26, &v25);
    }
    if ( (unsigned int)dword_93C61 <= 0x64 )
    {
      byte_78C0D = 0;
      byte_78C0E = 0;
    }
    else if ( (unsigned __int8)++byte_78C0D <= 2u )
    {
      if ( !byte_75C20 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
      {
        snprintf(s, 0x800u, "Temperature is higher than 85'C for %d time", (unsigned __int8)byte_78C0D);
        sub_3F1C0(3, s, 0);
      }
    }
    else
    {
      byte_78C0E = 1;
      if ( !byte_75C20 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
      {
        snprintf(s, 0x800u, "%s: the temperature is too high, close PIC and need reboot!!!", "check_miner_status");
        sub_3F1C0(3, s, 0);
      }
    }
    v14 = v24.tv_sec - dword_75D00;
    if ( v24.tv_usec - dword_75D04 < 0 )
      --v14;
    if ( v14 <= 120 )
    {
      byte_78C0F = 0;
    }
    else
    {
      byte_78C0F = 1;
      if ( !byte_75C20 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(
          s,
          0x800u,
          "%s: We have lost internet for %d seconds, so don't send work to hashboard anymore",
          "check_miner_status",
          v14);
        sub_3F1C0(7, s, 0);
      }
    }
    byte_78C10 = 0;
    if ( byte_78C0C || byte_78C0F || byte_78C0E || byte_78BD8 )
      break;
    byte_75C20 = 0;
    if ( byte_78C11 )
    {
      byte_75C20 = 1;
LABEL_103:
      sub_4B4D0(1);
      sub_4B834(100);
      goto LABEL_102;
    }
    sub_4B4D0(0);
    sub_4BAAC();
LABEL_102:
    sub_2FF20();
  }
  if ( !byte_78C11 && byte_78C0E )
  {
    byte_75C20 = 1;
    byte_78C11 = 1;
    v15 = 603403;
    for ( j = 0; j != 4; ++j )
    {
      v17 = *(unsigned __int8 *)++v15;
      if ( v17 == 1 )
      {
        pthread_mutex_lock(&stru_75D80);
        sub_451BC((unsigned __int8)j);
        pthread_mutex_unlock(&stru_75D80);
      }
    }
  }
  goto LABEL_103;
}
