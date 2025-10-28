void __noreturn sub_50E24()
{
  int v0; // r3
  int v1; // r11
  int v2; // r10
  int v3; // r6
  char *v4; // r5
  unsigned int v5; // r4
  int v6; // r3
  int v7; // t1
  unsigned int v8; // r11
  _BYTE *v9; // lr
  _BYTE *v10; // r9
  char *v11; // r5
  int v12; // r6
  unsigned int v13; // r4
  char *v14; // r8
  unsigned int v15; // r4
  int v16; // r2
  unsigned int v17; // r3
  struct tm *v18; // r0
  FILE *v19; // r0
  FILE *v20; // r4
  int v21; // r4
  int v22; // r3
  int v23; // r3
  int v24; // [sp+24h] [bp-840h]
  int i; // [sp+24h] [bp-840h]
  int v26; // [sp+28h] [bp-83Ch]
  double *v27; // [sp+2Ch] [bp-838h]
  time_t timer; // [sp+3Ch] [bp-828h] BYREF
  char s[2048]; // [sp+40h] [bp-824h] BYREF
  _DWORD v30[2]; // [sp+840h] [bp-24h] BYREF
  struct timeval v31; // [sp+848h] [bp-1Ch] BYREF
  struct timeval v32; // [sp+850h] [bp-14h] BYREF
  int v33; // [sp+858h] [bp-Ch] BYREF
  int v34; // [sp+85Ch] [bp-8h]

  v33 = 0;
  v34 = 0;
  sub_30050(&v32);
  sub_30050(&v31);
  sub_2FD00(&v33, &v32);
  sub_2FD00(&dword_7CDB8, &v31);
  sub_2FD00(v30, &v31);
  while ( 1 )
  {
    sub_30050(&v32);
    sub_30050(&v31);
    v0 = v32.tv_sec - v33;
    if ( v32.tv_usec - v34 < 0 )
      --v0;
    if ( v0 > 120 )
    {
      v26 = 736019;
      v1 = 736019;
      v2 = 0;
      v3 = 0;
      v24 = 0;
      do
      {
        if ( *(_BYTE *)++v1 )
        {
          v24 += *(unsigned __int8 *)(v1 + 2114);
          if ( *(_BYTE *)(v1 + 2114) )
          {
            v4 = (char *)&unk_B3AFC + 288 * v2 + 532;
            v5 = 0;
            do
            {
              v7 = *((_DWORD *)v4 + 1);
              v4 += 4;
              v6 = v7;
              v3 += v7;
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                snprintf(s, 0x800u, "%s: chain %d asic %d asic_nonce_num %d", "check_miner_status", v2, v5, v6);
                sub_3F178(7, s, 0);
              }
              ++v5;
            }
            while ( *(unsigned __int8 *)(v1 + 2114) > v5 );
          }
        }
        ++v2;
      }
      while ( v2 != 4 );
      if ( v24 )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "%s: avg_num %d asic_num %d", "check_miner_status", v3, v24);
          sub_3F178(7, s, 0);
        }
        v8 = (unsigned int)sub_5E818(v3, v24) >> 3;
      }
      else
      {
        v8 = 1;
      }
      v27 = (double *)&unk_7CCE0;
      for ( i = 0; i != 4; ++i )
      {
        v9 = (_BYTE *)(v26 + 1);
        v26 = (int)v9;
        v10 = v9;
        if ( *v9 )
        {
          if ( v9[2114] )
          {
            v11 = (char *)&unk_B3AFC + 288 * i + 532;
            v12 = 0;
            v13 = 0;
            v14 = (char *)&unk_B3AFC + 88 * i;
            do
            {
              if ( (v13 & 7) == 0 )
              {
                if ( v12 + v13 > 0x58 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v12 + v13);
                  sub_3F178(3, s, 0);
                }
                v14[v12 + 1688 + v13] = 32;
                ++v12;
              }
              if ( v8 >= *((_DWORD *)v11 + 1) )
              {
                if ( v12 + v13 > 0x58 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v12 + v13);
                  sub_3F178(3, s, 0);
                }
                v14[v12 + 1688 + v13] = 120;
              }
              else
              {
                if ( v12 + v13 > 0x58 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v12 + v13);
                  sub_3F178(3, s, 0);
                }
                v14[v12 + 1688 + v13] = 111;
              }
              if ( v13 > 0x58 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
              {
                snprintf(s, 0x800u, "asic num err![%d]", v13);
                sub_3F178(3, s, 0);
              }
              *((_DWORD *)v11 + 1) = 0;
              v11 += 4;
              ++v13;
            }
            while ( (unsigned __int8)v10[2114] > v13 );
            v15 = v13 + v12;
            if ( v15 > 0x58 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
            {
              snprintf(s, 0x800u, "asic num err![%d]", v15);
              sub_3F178(3, s, 0);
            }
          }
          else
          {
            v15 = 0;
          }
          *((_BYTE *)&unk_B3AFC + 88 * i + v15 + 1688) = 0;
          byte_7FD50 = *v27 / 1000000.0 / 10.0 < (double)((unsigned __int16)word_B4383
                                                        * 72
                                                        * (unsigned __int16)word_B438F)
                                               * 0.8
                    && !byte_7CCD8;
        }
        ++v27;
      }
      sub_2FD00(&v33, &v32);
    }
    if ( (unsigned int)dword_B436B <= 0x64 )
    {
      byte_7FD51 = 0;
      byte_7FD52 = 0;
    }
    else if ( (unsigned __int8)++byte_7FD51 <= 2u )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "Temperature is higher than %d'C for %d time", 100, (unsigned __int8)byte_7FD51);
        sub_3F178(3, s, 0);
      }
    }
    else
    {
      byte_7FD52 = 1;
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "%s: the temperature is too high, close PIC and need reboot!!!", "check_miner_status");
        sub_3F178(3, s, 0);
      }
    }
    v16 = v31.tv_sec - dword_7CDB8;
    if ( v31.tv_usec - dword_7CDBC < 0 )
      --v16;
    if ( v16 <= 120 )
    {
      byte_7FD53 = 0;
    }
    else
    {
      byte_7FD53 = 1;
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(
          s,
          0x800u,
          "%s: We have lost internet for %d seconds, so don't send work to hashboard anymore",
          "check_miner_status",
          v16);
        sub_3F178(3, s, 0);
      }
    }
    if ( (unsigned __int8)byte_B435D <= 1u )
    {
      v21 = 1;
    }
    else
    {
      v17 = (int)((unsigned __int64)(9726449019400LL * (unsigned __int8)byte_B435B) >> 32) >> 6;
      if ( dword_B432E[0] < v17 )
      {
        v21 = 2;
      }
      else if ( v17 > dword_B4332 )
      {
        v21 = 3;
      }
      else
      {
        if ( byte_B435B != 100 )
          goto LABEL_130;
        if ( dword_B432E[0] <= 0x102Bu )
        {
          v21 = 4;
        }
        else
        {
          if ( (unsigned int)dword_B4332 > 0x102B )
          {
LABEL_130:
            dword_7FD4C = 0;
LABEL_139:
            byte_7FD54 = 0;
            goto LABEL_114;
          }
          v21 = 4;
        }
      }
    }
    v22 = ++dword_7FD4C;
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "fan_error_num:%d ret:%d fan_num %d pwm_percent %d fan_speed_value[0] %d fan_speed_value[1] %d",
        v22,
        v21,
        (unsigned __int8)byte_B435D,
        (unsigned __int8)byte_B435B,
        dword_B432E[0],
        dword_B4332);
      sub_3F178(7, s, 0);
    }
    if ( dword_7FD4C <= 15 )
      goto LABEL_139;
    byte_7FD54 = 1;
    switch ( v21 )
    {
      case 1:
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(s, 0x800u, "Fan Err! Disable PIC! Fan num is %d", (unsigned __int8)byte_B435D);
          sub_3F178(3, s, 0);
        }
        break;
      case 2:
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan1 speed is too low %d pwm %d ",
            dword_B432E[0],
            (unsigned __int8)byte_B435B);
          sub_3F178(3, s, 0);
        }
        break;
      case 3:
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan2 speed is too low %d pwm %d ",
            dword_B4332,
            (unsigned __int8)byte_B435B);
          sub_3F178(3, s, 0);
        }
        break;
      case 4:
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan1:%d Fan2:%d pwm %d",
            dword_B432E[0],
            dword_B4332,
            (unsigned __int8)byte_B435B);
          sub_3F178(3, s, 0);
        }
        break;
    }
LABEL_114:
    if ( byte_7FD50 || byte_7FD53 || byte_7FD52 || byte_7FD54 || byte_7FCB0 )
    {
      if ( !byte_7FD55 && (byte_7FD52 || byte_7FD54) )
      {
        byte_7CCD8 = 1;
        byte_7FD55 = 1;
        sub_47F68();
        sub_4939C();
        if ( (unsigned int)dword_7A9C4 > 1 )
        {
          time(&timer);
          v18 = localtime(&timer);
          strftime(s, 0x1Au, "%Y-%m-%d %H:%M:%S", v18);
          v19 = fopen(off_7A9C8, "a+");
          v20 = v19;
          if ( v19 )
          {
            fprintf(
              v19,
              "%s %s: power off, high temp %d fan err %d\n",
              s,
              "check_miner_status",
              (unsigned __int8)byte_7FD52,
              (unsigned __int8)byte_7FD54);
            fflush(v20);
            fclose(v20);
            sub_50DAC(off_7A9C8);
          }
        }
      }
      goto LABEL_142;
    }
    byte_7CCD8 = 0;
    if ( byte_7FD55 )
    {
      byte_7CCD8 = 1;
LABEL_142:
      sub_4DF7C(1);
      sub_4E244(100);
      goto LABEL_129;
    }
    sub_4DF7C(0);
    v23 = v32.tv_sec - v30[0];
    if ( v32.tv_usec - v30[1] < 0 )
      --v23;
    if ( v23 > 3 )
    {
      sub_4ED20();
      sub_2FD00(v30, &v32);
    }
LABEL_129:
    sub_30140();
  }
}
