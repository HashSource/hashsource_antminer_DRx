int __fastcall sub_52D44(char *a1)
{
  _DWORD *v2; // r5
  char *v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r8
  int v11; // r5
  int v12; // r3
  int v13; // r5
  unsigned int v14; // r0
  char *v15; // r2
  int j; // r3
  int i; // r12
  int v18; // r0
  int v19; // r5
  int v20; // r8
  int v21; // r6
  int k; // r5
  int v23; // t1
  int v24; // r7
  int v25; // r6
  int m; // r5
  int v27; // t1
  int v28; // r0
  char *v29; // r3
  int v30; // r10
  int v31; // r7
  int v32; // r6
  int v33; // r5
  int v34; // t1
  int v35; // r3
  int v36; // r9
  int v37; // r11
  int v38; // r3
  int v39; // r9
  int v40; // r0
  int v41; // r7
  int v42; // r3
  int v43; // t1
  int v44; // r6
  unsigned int v45; // r0
  int n; // r3
  int v47; // t1
  char s[2012]; // [sp+24h] [bp-860h] BYREF
  unsigned __int16 v50; // [sp+826h] [bp-5Eh] BYREF
  int v51; // [sp+828h] [bp-5Ch] BYREF
  const char *v52; // [sp+82Ch] [bp-58h]
  int v53; // [sp+830h] [bp-54h]
  int v54; // [sp+834h] [bp-50h]
  int v55; // [sp+838h] [bp-4Ch]
  int v56; // [sp+83Ch] [bp-48h]
  int v57; // [sp+840h] [bp-44h]
  int v58; // [sp+844h] [bp-40h]
  int v59; // [sp+848h] [bp-3Ch]
  int v60; // [sp+84Ch] [bp-38h]
  int v61; // [sp+850h] [bp-34h]
  _DWORD v62[12]; // [sp+854h] [bp-30h] BYREF

  v2 = v62;
  v3 = a1 + 4882;
  do
  {
    v4 = *((_DWORD *)v3 + 1);
    v5 = *((_DWORD *)v3 + 2);
    v6 = *((_DWORD *)v3 + 3);
    *v2 = *(_DWORD *)v3;
    v2[1] = v4;
    v2[2] = v5;
    v2[3] = v6;
    v3 += 16;
    v2 += 4;
  }
  while ( v3 != a1 + 4914 );
  v7 = *((_DWORD *)v3 + 1);
  v8 = *((_DWORD *)v3 + 2);
  *v2 = *(_DWORD *)v3;
  v2[1] = v7;
  v2[2] = v8;
  v50 = 0;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    strcpy(s, "bitmain_dcr_init");
    sub_3F178(4, s, 0);
  }
  v51 = v62[0];
  v52 = (const char *)v62[1];
  v53 = v62[2];
  v54 = v62[3];
  v55 = v62[4];
  v56 = v62[5];
  v57 = v62[6];
  v58 = v62[7];
  v59 = v62[8];
  v60 = v62[9];
  v61 = v62[10];
  strcpy((char *)&dword_7C9EC, "1.1.6");
  dword_9A550 = open("/sys/class/gpio/gpio941/value", 2);
  dword_9A5C4 = open("/sys/class/gpio/gpio942/value", 2);
  sub_43864();
  v9 = sub_437FC(0);
  sub_43828(0, v9 | 0x20000000);
  sub_438C0(26);
  *(_DWORD *)((char *)&word_B4383 + 1) = *(_DWORD *)((_BYTE *)&word_B4383 + 1) & 0xFF0000FF | 0x100;
  if ( dword_802C8 <= 0 )
    goto LABEL_20;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *(_DWORD *)(dword_80568 + 4 * v11);
    if ( **(_BYTE **)(v12 + 172) )
    {
      if ( **(_BYTE **)(v12 + 180) )
      {
        ++v10;
      }
      else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        strcpy(s, "Blank worker exists.\n");
        sub_3F178(3, s, 0);
      }
    }
    ++v11;
  }
  while ( v11 < dword_802C8 );
  if ( !v10 )
  {
LABEL_20:
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      strcpy(s, "No valid pools, please configure them first!\n");
      sub_3F178(3, s, 0);
    }
    return -1;
  }
  sub_4E330();
  if ( (unsigned __int8)v51 != 81 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return -1;
    snprintf(
      s,
      0x800u,
      "%s: config_parameter.token_type != 0x%x, it is 0x%x",
      "bitmain_dcr_init",
      81,
      (unsigned __int8)v51);
    sub_3F178(3, s, 0);
    return -1;
  }
  v14 = sub_432E4(0xFFu, (unsigned __int8 *)&v51, 42);
  if ( HIWORD(v61) != v14 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return -2;
    snprintf(
      s,
      0x800u,
      "%s: config_parameter.crc = 0x%x, but we calculate it as 0x%x",
      "bitmain_dcr_init",
      HIWORD(v61),
      v14);
    sub_3F178(3, s, 0);
    return -2;
  }
  for ( i = 0; i != 4; ++i )
  {
    for ( j = 0; j != 128; ++j )
    {
      v15 = &a1[512 * i + 176 + 4 * j];
      *((_WORD *)v15 + 3) = 0;
      *((_WORD *)v15 + 4) = 0;
    }
  }
  sub_4E5B4((int)a1);
  sub_4383C();
  sub_30140();
  sub_49768();
  sub_49278();
  sub_47D74();
  sub_47E68();
  v18 = sub_48138();
  v13 = v18;
  if ( v18 != -3 )
  {
    if ( (v53 & 0x20) != 0 )
    {
      word_B43A3 = HIWORD(v55);
      v19 = sub_4A798();
      sub_4A73C(v19);
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        snprintf(s, 0x800u, "%s, dev.voltage=%d, pic_voltage=%d", "bitmain_dcr_init", (unsigned __int16)word_B43A3, v19);
        sub_3F178(5, s, 0);
      }
      sub_30140();
    }
    sub_30140();
    v20 = 736019;
    v21 = 736019;
    for ( k = 0; k != 4; ++k )
    {
      v23 = *(unsigned __int8 *)++v21;
      if ( v23 == 1 )
        sub_4F17C((unsigned __int8)k);
    }
    v24 = 736019;
    v25 = 0;
    for ( m = 0; m != 4; ++m )
    {
      v27 = *(unsigned __int8 *)++v24;
      if ( v27 == 1 )
      {
        v28 = sub_4EF04((unsigned __int8)m);
        v29 = (char *)&dword_B3AFC[v25];
        *((_DWORD *)v29 + 1) = v28 != 255;
      }
      ++v25;
    }
    v30 = (unsigned __int16)word_B43A3;
    v31 = 736019;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      v34 = *(unsigned __int8 *)++v31;
      if ( v34 == 1 && dword_B3AFC[v33 + 1] == 1 )
      {
        if ( (unsigned __int16)v55 == 450 )
        {
          v38 = byte_9A5D4[v32 + 2];
          v39 = 10 * v38;
          v37 = 10 * v38;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "chain %d read out low power voltage data %d voltagge %d",
              v33,
              byte_9A5D4[v32 + 2],
              10 * v38);
            sub_3F178(5, s, 0);
          }
          if ( (unsigned int)(v39 - 800) > 0x28 )
            goto LABEL_72;
        }
        else
        {
          v35 = byte_9A5D4[v32 + 4];
          v36 = 10 * v35;
          v37 = 10 * v35;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(s, 0x800u, "chain %d read out voltage data %d voltagge %d", v33, byte_9A5D4[v32 + 4], 10 * v35);
            sub_3F178(5, s, 0);
          }
          if ( (unsigned int)(v36 - 870) > 0x32 )
            goto LABEL_72;
        }
        if ( v30 < v37 )
          v30 = v37;
      }
LABEL_72:
      ++v33;
      v32 += 6;
      if ( v33 == 4 )
      {
        if ( v30 != (unsigned __int16)word_B43A3 )
        {
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "adjust_voltage %f dev %d max %d",
              (double)v30 / 100.0,
              (unsigned __int16)word_B43A3,
              v30);
            sub_3F178(5, s, 0);
          }
          v40 = sub_4A798();
          sub_4A73C(v40);
          sub_30140();
        }
        sub_48048();
        sub_43850();
        sub_30140();
        sub_4DCE8((int)a1, v52);
        v13 = sub_52B60();
        sub_30140();
        sub_4FA0C();
        sub_30140();
        if ( v13 != -4 )
        {
          sub_4C768(1);
          sub_30140();
          v41 = 3;
          do
          {
            byte_7FD56 = 0;
            v42 = 736019;
            while ( 1 )
            {
              v43 = *(unsigned __int8 *)++v42;
              if ( v43 == 1 && *(_BYTE *)(v42 + 2114) != 72 )
                break;
              if ( v42 == 736023 )
                goto LABEL_87;
            }
            byte_7FD56 = 1;
            sub_4FA44((int)a1);
            --v41;
          }
          while ( v41 );
LABEL_87:
          sub_4D748();
          sub_4CA68();
          sub_4C768(0);
          sub_4D180(40);
          word_B4383 = 276;
          if ( (v53 & 0x10) != 0 )
          {
            word_B438F = v55;
            if ( (_WORD)v55 )
            {
              sub_4D05C((unsigned __int16)v55);
            }
            else
            {
              sub_48CA8(&v50);
              word_B438F = v50;
              sub_4D05C(v50);
            }
            sprintf(byte_B4391, "%u", (unsigned __int16)word_B438F);
          }
          sub_4B404(v60);
          sub_4B2C4(1);
          sub_4C668();
          byte_B438A = (v53 & 2) != 0;
          byte_B438B = BYTE2(v54);
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(s, 0x800u, "%s: fan_eft: %d  fan_pwm : %d", "bitmain_dcr_init", (v53 & 2) != 0, BYTE2(v54));
            sub_3F178(5, s, 0);
          }
          if ( byte_B438A && (unsigned __int8)byte_B438B <= 0x64u )
            sub_4E244((unsigned __int8)byte_B438B);
          else
            sub_4ED20();
          if ( (v53 & 4) != 0 )
          {
            v44 = (unsigned __int16)word_B438F;
            v45 = sub_5E818(0x7FFFFF, (unsigned __int16)word_B438F);
            dword_B3B1C = (unsigned int)((double)v45 * 0.7);
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
            {
              snprintf(s, 0x800u, "frequency = '%d timeout %d'", v44, (unsigned int)((double)v45 * 0.7));
              sub_3F178(5, s, 0);
            }
          }
          sub_4D3A4();
          v13 = sub_50B18();
          if ( v13 != -8 )
          {
            sleep(1u);
            v13 = sub_52C44();
            if ( v13 != -7 )
            {
              v13 = sub_51C08(a1);
              if ( v13 != -5 )
              {
                v13 = sub_51D04();
                if ( v13 != -6 )
                {
                  sub_4D3D8();
                  for ( n = 0; n != 4; ++n )
                  {
                    v47 = *(unsigned __int8 *)++v20;
                    if ( v47 == 1 )
                      byte_7CDB0[n] = 1;
                  }
                  return 0;
                }
              }
            }
          }
        }
        return v13;
      }
    }
  }
  return v13;
}
