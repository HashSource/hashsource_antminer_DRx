void __noreturn sub_40760()
{
  unsigned __int8 *v0; // r10
  unsigned int v1; // r3
  int v2; // r2
  int v3; // r1
  int v4; // r1
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r3
  struct tm *v8; // r0
  FILE *v9; // r0
  FILE *v10; // r4
  int v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r6
  int v16; // r8
  unsigned __int8 *v17; // r9
  unsigned __int8 *v19; // r9
  int v20; // r8
  unsigned int v22; // r5
  int v23; // r6
  char *v24; // r10
  unsigned int v25; // r5
  unsigned int *v26; // r7
  unsigned int v27; // r4
  char *v28; // r3
  unsigned int v29; // lr
  unsigned int v30; // r4
  char *v31; // r5
  int v32; // r12
  int v33; // t1
  double v34; // d7
  bool v35; // cc
  int v36; // [sp+28h] [bp-84Ch]
  unsigned __int8 *v37; // [sp+28h] [bp-84Ch]
  unsigned int v38; // [sp+3Ch] [bp-838h]
  time_t timer; // [sp+4Ch] [bp-828h] BYREF
  int v40; // [sp+50h] [bp-824h] BYREF
  int v41; // [sp+54h] [bp-820h]
  struct timeval v42; // [sp+58h] [bp-81Ch] BYREF
  struct timeval v43; // [sp+60h] [bp-814h] BYREF
  _DWORD v44[2]; // [sp+68h] [bp-80Ch] BYREF
  char s[2052]; // [sp+70h] [bp-804h] BYREF

  v40 = 0;
  v41 = 0;
  sub_2A69C(&v42);
  sub_2A69C(&v43);
  sub_2A480(&v40, &v42);
  v0 = (unsigned __int8 *)&unk_71CC8;
  sub_2A480(&dword_6FC2C, &v43);
  sub_2A480(v44, &v43);
  while ( 1 )
  {
    sub_2A69C(&v42);
    sub_2A69C(&v43);
    v7 = v42.tv_sec - v40;
    if ( v42.tv_usec - v41 < 0 )
      --v7;
    if ( v7 > 120 )
    {
      v15 = 0;
      v16 = 0;
      v17 = (unsigned __int8 *)&unk_73EF0;
      v36 = 0;
      do
      {
        if ( *v17++ )
        {
          v29 = v17[2113];
          v36 += v29;
          if ( v17[2113] )
          {
            v30 = 0;
            v31 = (char *)&unk_740EC + 288 * v15;
            do
            {
              v33 = *((_DWORD *)v31 + 1);
              v31 += 4;
              v32 = v33;
              v16 += v33;
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf(s, 0x800u, "%s: chain %d asic %d asic_nonce_num %d", "check_miner_status", v15, v30, v32);
                sub_343C4(7, s, 0);
                v29 = v17[2113];
              }
              ++v30;
            }
            while ( v29 > v30 );
          }
        }
        ++v15;
      }
      while ( v15 != 4 );
      if ( v36 )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(s, 0x800u, "%s: avg_num %d asic_num %d", "check_miner_status", v16, v36);
          sub_343C4(7, s, 0);
        }
        v38 = (unsigned int)sub_49878(v16, v36) >> 3;
      }
      else
      {
        v38 = 1;
      }
      v19 = (unsigned __int8 *)&unk_73EF0;
      v20 = 0;
      v37 = v0;
      do
      {
        if ( *v19++ )
        {
          v22 = v19[2113];
          if ( v19[2113] )
          {
            v23 = 0;
            v24 = (char *)&unk_73ED8 + 88 * v20;
            v25 = 0;
            v26 = (unsigned int *)((char *)&unk_740F0 + 288 * v20);
            do
            {
              v27 = v23 + v25;
              if ( !(v25 << 29) )
              {
                if ( v27 > 0x58 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v23 + v25);
                  sub_343C4(3, s, 0);
                }
                ++v23;
                v28 = &v24[v27];
                v27 = v23 + v25;
                v28[1688] = 32;
              }
              if ( *v26 > v38 )
              {
                if ( v27 > 0x58 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v27);
                  sub_343C4(3, s, 0);
                }
                v24[v27 + 1688] = 111;
              }
              else
              {
                if ( v27 > 0x58 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v27);
                  sub_343C4(3, s, 0);
                }
                v24[v27 + 1688] = 120;
              }
              ++v25;
              *v26++ = 0;
            }
            while ( v19[2113] > v25 );
            v22 = v25 + v23;
            if ( v22 > 0x58 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
            {
              snprintf(s, 0x800u, "asic num err![%d]", v22);
              sub_343C4(3, s, 0);
            }
          }
          v34 = dbl_6FAF0[v20];
          *((_BYTE *)&unk_73ED8 + 88 * v20 + v22 + 1688) = 0;
          v37[3728] = v34 / 1000000.0 / 10.0 < (double)((unsigned __int16)word_7475F * 72 * (unsigned __int16)word_7476B)
                                             * 0.8
                   && !byte_6FAE8;
        }
        ++v20;
      }
      while ( v20 != 4 );
      v0 = v37;
      sub_2A480(&v40, &v42);
    }
    if ( dword_74747[0] > 0x64u )
    {
      v1 = (unsigned __int8)(v0[3729] + 1);
      v2 = (unsigned __int8)byte_73320;
      v0[3729] = v1;
      if ( v1 <= 2 )
      {
        if ( v2 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(s, 0x800u, "Temperature is higher than %d'C for %d time", 100, v1);
          sub_343C4(3, s, 0);
        }
      }
      else
      {
        v0[3730] = 1;
        if ( v2 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(s, 0x800u, "%s: the temperature is too high, close PIC and need reboot!!!", "check_miner_status");
          sub_343C4(3, s, 0);
        }
      }
    }
    else
    {
      v0[3729] = 0;
      v0[3730] = 0;
    }
    v3 = v43.tv_sec - dword_6FC2C;
    if ( v43.tv_usec - dword_6FC30 < 0 )
      --v3;
    if ( v3 > 120 )
    {
      v0[3731] = 1;
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        snprintf(
          s,
          0x800u,
          "%s: We have lost internet for %d seconds, so don't send work to hashboard anymore",
          "check_miner_status",
          v3);
        sub_343C4(3, s, 0);
      }
    }
    else
    {
      v0[3731] = 0;
    }
    v4 = (unsigned __int8)byte_74739;
    if ( (unsigned __int8)byte_74739 <= 1u )
    {
      v12 = 1;
    }
    else
    {
      v5 = 4600 * (unsigned int)(unsigned __int8)byte_74737 / 0x82;
      if ( dword_7470A < v5 )
      {
        v12 = 2;
      }
      else if ( v5 > dword_7470E )
      {
        v12 = 3;
      }
      else
      {
        if ( byte_74737 != 100 )
          goto LABEL_19;
        v35 = (unsigned int)dword_7470A > 0x102B;
        if ( (unsigned int)dword_7470A > 0x102B )
          v35 = (unsigned int)dword_7470E > 0x102B;
        if ( v35 )
        {
LABEL_19:
          *((_DWORD *)v0 + 933) = 0;
LABEL_20:
          v0[3736] = 0;
          goto LABEL_21;
        }
        v12 = 4;
      }
    }
    v13 = (unsigned __int8)byte_6FA71;
    v14 = *((_DWORD *)v0 + 933) + 1;
    *((_DWORD *)v0 + 933) = v14;
    if ( v13 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "fan_error_num:%d ret:%d fan_num %d pwm_percent %d fan_speed_value[0] %d fan_speed_value[1] %d",
        v14,
        v12,
        v4,
        (unsigned __int8)byte_74737,
        dword_7470A,
        dword_7470E);
      sub_343C4(7, s, 0);
      v14 = *((_DWORD *)v0 + 933);
    }
    if ( v14 <= 15 )
      goto LABEL_20;
    v0[3736] = 1;
    switch ( v12 )
    {
      case 3:
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan2 speed is too low %d pwm %d ",
            dword_7470E,
            (unsigned __int8)byte_74737);
          goto LABEL_128;
        }
        break;
      case 4:
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan1:%d Fan2:%d pwm %d",
            dword_7470A,
            dword_7470E,
            (unsigned __int8)byte_74737);
          sub_343C4(3, s, 0);
        }
        break;
      case 2:
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "Fan Err! Disable PIC! Fan1 speed is too low %d pwm %d ",
            dword_7470A,
            (unsigned __int8)byte_74737);
LABEL_128:
          sub_343C4(3, s, 0);
        }
        break;
      default:
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(s, 0x800u, "Fan Err! Disable PIC! Fan num is %d", (unsigned __int8)byte_74739);
          sub_343C4(3, s, 0);
        }
        break;
    }
LABEL_21:
    v6 = v0[3737];
    if ( v0[3728] || v0[3731] )
    {
      if ( !v0[3737] && (v0[3730] || v0[3736]) )
        goto LABEL_38;
      goto LABEL_121;
    }
    if ( v0[3730] || v0[3736] )
    {
      if ( !v0[3737] )
      {
LABEL_38:
        v0[3737] = 1;
        byte_6FAE8 = 1;
        sub_3A550();
        sub_3B2F8();
        if ( (unsigned int)dword_6D7F4 > 1 )
        {
          time(&timer);
          v8 = localtime(&timer);
          strftime(s, 0x1Au, "%Y-%m-%d %H:%M:%S", v8);
          v9 = fopen(off_6D7F8, "a+");
          v10 = v9;
          if ( v9 )
          {
            fprintf(v9, "%s %s: power off, high temp %d fan err %d\n", s, "check_miner_status", v0[3730], v0[3736]);
            fflush(v10);
            fclose(v10);
            sub_40708(off_6D7F8);
          }
        }
      }
LABEL_121:
      sub_3E744(1);
      goto LABEL_28;
    }
    if ( v0[3624] )
      goto LABEL_121;
    byte_6FAE8 = 0;
    if ( v6 )
    {
      byte_6FAE8 = 1;
      sub_3E744(1);
LABEL_28:
      sub_3E808(100);
      goto LABEL_29;
    }
    sub_3E744(0);
    v11 = v42.tv_sec - v44[0];
    if ( v42.tv_usec - v44[1] < 0 )
      --v11;
    if ( v11 > 3 )
    {
      sub_3F138();
      sub_2A480(v44, &v42);
    }
LABEL_29:
    sub_2A7F4();
  }
}
