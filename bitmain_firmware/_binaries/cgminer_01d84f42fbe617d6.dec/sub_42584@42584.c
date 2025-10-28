int __fastcall sub_42584(int a1)
{
  int *v1; // r12
  int *v2; // r6
  int *v3; // r5
  int v5; // r0
  int *v6; // lr
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int *v12; // r2
  unsigned int v13; // r3
  int v14; // t1
  int v15; // r3
  int v16; // r2
  int v17; // r2
  int v18; // r1
  int v19; // r5
  int v20; // r6
  int v21; // t1
  int v22; // r6
  int i; // r5
  int v24; // t1
  int v25; // r5
  int v26; // r6
  int v27; // t1
  int v28; // r10
  unsigned __int8 *v29; // r6
  char v30; // r8
  int v31; // r5
  int v32; // t1
  int v34; // r1
  const char *v35; // r2
  int v36; // r3
  char v37; // r6
  unsigned int v38; // r5
  int v39; // r5
  unsigned int v40; // r3
  int v41; // r9
  int v42; // r1
  int v44; // r4
  int v45; // r5
  char *v46; // r6
  int v47; // r4
  char *v48; // r9
  char *v49; // r10
  int v50; // r6
  int v51; // r6
  int v52; // [sp+8h] [bp-854h]
  int v53; // [sp+Ch] [bp-850h]
  _DWORD v54[9]; // [sp+10h] [bp-84Ch] BYREF
  int v55; // [sp+34h] [bp-828h] BYREF
  int v56; // [sp+38h] [bp-824h]
  int v57; // [sp+3Ch] [bp-820h]
  int v58; // [sp+40h] [bp-81Ch]
  int v59; // [sp+44h] [bp-818h]
  int v60; // [sp+48h] [bp-814h]
  int v61; // [sp+4Ch] [bp-810h]
  int v62; // [sp+50h] [bp-80Ch]
  int v63; // [sp+54h] [bp-808h] BYREF
  char s[2040]; // [sp+58h] [bp-804h] BYREF

  v1 = (int *)(a1 + 767);
  v2 = (int *)(a1 + 799);
  v3 = v54;
  do
  {
    v5 = *v1;
    v6 = v3;
    v7 = v1[1];
    v3 += 4;
    v8 = v1[2];
    v9 = v1[3];
    v1 += 4;
    *v6 = v5;
    v6[1] = v7;
    v6[2] = v8;
    v6[3] = v9;
  }
  while ( v1 != v2 );
  *v3 = *v1;
  v55 = v54[0];
  v56 = v54[1];
  v57 = v54[2];
  v58 = v54[3];
  v59 = v54[4];
  v60 = v54[5];
  v61 = v54[6];
  v62 = v54[7];
  strcpy((char *)&dword_62E48, "1.0.1.3");
  v63 = v54[8];
  sub_3DA40(100);
  v10 = (unsigned __int8)v55;
  if ( (unsigned __int8)v55 != 81 )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return -1;
    snprintf(
      s,
      0x800u,
      "%s: config_parameter.token_type != 0x%x, it is 0x%x",
      "bitmain_L3_init",
      81,
      (unsigned __int8)v55);
    sub_38438(7, s, 0);
    return -1;
  }
  v12 = &v55;
  v13 = 255;
  while ( 1 )
  {
    v13 = (unsigned __int16)(*(_WORD *)&aBitmainL3Detec_0[2 * (v10 ^ (v13 >> 8)) + 928] ^ ((_WORD)v13 << 8));
    if ( v12 == (int *)((char *)&v63 + 1) )
      break;
    v14 = *((unsigned __int8 *)v12 + 1);
    v12 = (int *)((char *)v12 + 1);
    v10 = v14;
  }
  if ( HIWORD(v63) != v13 )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return -2;
    snprintf(
      s,
      0x800u,
      "%s: config_parameter.crc = 0x%x, but we calculate it as 0x%x",
      "bitmain_L3_init",
      HIWORD(v63),
      v13);
    sub_38438(7, s, 0);
    return -2;
  }
  v15 = 0;
  do
  {
    v16 = v15 + 46;
    ++v15;
    v17 = a1 + 4 * v16;
    v18 = *(_DWORD *)(v17 + 8);
    *(_BYTE *)(v17 + 7) = 0;
    *(_DWORD *)(v17 + 8) = v18 & 0xFF000000;
  }
  while ( v15 != 128 );
  v19 = 0;
  v52 = 805859;
  sub_3F17C(a1);
  sub_2B21C();
  sub_41A58(a1);
  sub_2B21C();
  v20 = 805859;
  do
  {
    v21 = *(unsigned __int8 *)++v20;
    if ( v21 == 1 )
    {
      pthread_mutex_lock(&stru_63120);
      if ( ioctl(*(_DWORD *)(a1 + 187), 0x703u, *(int *)((char *)&unk_557AC + v19) >> 1) < 0
        && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(s, 0x800u, "ioctl error @ line %d", 3443);
        sub_38438(3, s, 0);
      }
      sub_40F64();
      pthread_mutex_unlock(&stru_63120);
    }
    v19 += 4;
  }
  while ( v19 != 16 );
  v22 = 805859;
  sub_2B21C();
  for ( i = 0; i != 16; i += 4 )
  {
    v24 = *(unsigned __int8 *)++v22;
    if ( v24 == 1 )
    {
      pthread_mutex_lock(&stru_63120);
      if ( ioctl(*(_DWORD *)(a1 + 187), 0x703u, *(int *)((char *)&unk_557AC + i) >> 1) < 0
        && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(s, 0x800u, "ioctl error @ line %d", 3457);
        sub_38438(3, s, 0);
      }
      sub_40ED8();
      pthread_mutex_unlock(&stru_63120);
    }
  }
  sub_2B21C();
  dword_C4BC8 = (int)calloc(1u, 0x40u);
  if ( sub_2F0EC(dword_C4BC8, 0, (void *(*)(void *))sub_3B0EC, (void *)dword_C4BC8) )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return -3;
    snprintf(s, 0x800u, "%s: create thread error for pic_heart_beat_func", "bitmain_L3_init");
LABEL_34:
    sub_38438(7, s, 0);
    return -3;
  }
  v25 = 0;
  v26 = 805859;
  pthread_detach(*(_DWORD *)(dword_C4BC8 + 12));
  do
  {
    v27 = *(unsigned __int8 *)++v26;
    if ( v27 == 1 )
    {
      pthread_mutex_lock(&stru_63120);
      if ( ioctl(*(_DWORD *)(a1 + 187), 0x703u, *(int *)((char *)&unk_557AC + v25) >> 1) < 0
        && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(s, 0x800u, "ioctl error @ line %d", 3536);
        sub_38438(3, s, 0);
      }
      sub_3DDB8(1);
      pthread_mutex_unlock(&stru_63120);
    }
    v25 += 4;
  }
  while ( v25 != 16 );
  sub_2B21C();
  sub_3A268();
  sub_3A268();
  sub_2B21C();
  sub_3F3B8(a1, v56);
  sub_2B21C();
  sub_3C69C();
  sub_2B21C();
  dword_6A4B4 = (int)calloc(1u, 0x40u);
  if ( sub_2F0EC(dword_6A4B4, 0, (void *(*)(void *))sub_3C6D4, (void *)dword_6A4B4) )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return -3;
    snprintf(s, 0x800u, "%s: create thread error for bitmain_scanreg", "bitmain_L3_init");
    goto LABEL_34;
  }
  pthread_detach(*(_DWORD *)(dword_6A4B4 + 12));
  sub_2B21C();
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(s, "send cmd to get chip address");
    sub_38438(5, s, 0);
  }
  v28 = 0;
  while ( 1 )
  {
    byte_63174 = 1;
    sub_3EF84(0, 0, 1);
    v29 = (unsigned __int8 *)&unk_C4BE4;
    sleep(2u);
    v30 = 0;
    v31 = 0;
    byte_63174 = 0;
    do
    {
      v32 = *v29++;
      if ( v32 == 1 )
      {
        v34 = 2048;
        v35 = "Chain %d ASIC %d !!!";
        if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
        {
          snprintf(s, 0x800u, "Chain %d ASIC %d !!!", v31, v29[2173]);
          sub_38438(5, s, 0);
        }
        v36 = v29[2173];
        if ( v36 == 72 )
        {
          v29[3] = 1;
        }
        else
        {
          v29[3] = 0;
          ++v28;
        }
        if ( v36 == 72 )
        {
          v35 = (const char *)&unk_6322C;
        }
        else
        {
          v34 = (int)&unk_6322C;
          v30 = 1;
        }
        if ( v36 == 72 )
          v35[v31] = 0;
        else
          *(_BYTE *)(v31 + v34) = 1;
      }
      ++v31;
    }
    while ( v31 != 4 );
    if ( v28 > 5 || !(v30 & 1) )
      break;
    if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
    {
      strcpy(s, "Need to recheck asic num !!!");
      sub_38438(5, s, 0);
    }
    byte_C5462 = 0;
    byte_C5463 = 0;
    byte_C5464 = 0;
    byte_C5465 = 0;
    sub_42010();
  }
  if ( access("/usr/bin/need_reboot", 0) != -1 )
    system("rm /usr/bin/need_reboot");
  byte_C548B = 12;
  sub_3FB04();
  sub_2B21C();
  sub_3EF84(0, 0, 1);
  sub_2B21C();
  v37 = v57;
  if ( (v57 & 8) != 0 )
  {
    word_C5492 = v59;
    sub_4022C((unsigned __int16)v59);
    sprintf(byte_C5494, "%u", (unsigned __int16)word_C5492);
  }
  sub_2B21C();
  v38 = BYTE2(v58);
  byte_C5490 = (v57 & 2) != 0;
  byte_C5491 = BYTE2(v58);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s: fan_eft : %d  fan_pwm : %d", "bitmain_L3_init", (v57 & 2) != 0, BYTE2(v58));
    sub_38438(7, s, 0);
  }
  if ( (v37 & 2) != 0 && v38 <= 0x64 )
    sub_3DA40(v38);
  else
    sub_3DB30();
  if ( (v37 & 4) != 0 )
  {
    if ( HIWORD(v60) )
    {
      LODWORD(flt_C4BEC) = HIBYTE(v60) + 1000 * BYTE2(v60);
    }
    else
    {
      if ( byte_632F0 || (v39 = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 4 )
      {
        snprintf(s, 0x800u, "frequency = '%d'", (unsigned __int16)word_C5492);
        sub_38438(5, s, 0);
        v39 = (unsigned __int8)byte_632F0;
      }
      v40 = (unsigned int)(268435456.0
                         / (double)sub_48F88(256, (unsigned __int8)byte_C548C)
                         / (double)(1000000 * (unsigned __int16)word_C5492)
                         * 0.95
                         * 2500.0);
      LODWORD(flt_C4BEC) = v40;
      if ( v39 || byte_630C0 || dword_60964 > 4 )
      {
        snprintf(s, 0x800u, "dev.timeout = %d", v40);
        sub_38438(5, s, 0);
      }
    }
  }
  sub_40128();
  sub_406DC();
  sub_3FFAC();
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(s, "send cmd to open block");
    sub_38438(5, s, 0);
  }
  sub_3FE10(0, 0, 1u);
  sub_40D00(0xFFu);
  sub_2B21C();
  dword_6A4B0 = (int)calloc(1u, 0x40u);
  if ( sub_2F0EC(dword_6A4B0, 0, (void *(*)(void *))sub_3A788, (void *)dword_6A4B0) )
    goto LABEL_111;
  dword_66EAC = (int)calloc(1u, 0x40u);
  if ( sub_2F0EC(dword_66EAC, 0, (void *(*)(void *))sub_3F0B0, (void *)dword_66EAC) )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return -7;
    snprintf(s, 0x800u, "%s: create thread for read temp", "bitmain_L3_init");
    sub_38438(7, s, 0);
    return -7;
  }
  pthread_detach(*(_DWORD *)(dword_66EAC + 12));
  sleep(2u);
  dword_65E48 = (int)calloc(1u, 0x40u);
  if ( sub_2F0EC(dword_65E48, 0, (void *(*)(void *))sub_3DE5C, (void *)dword_65E48) )
  {
LABEL_111:
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "%s: create thread for check miner_status", "bitmain_L3_init");
      sub_38438(7, s, 0);
    }
    return -5;
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_65E48 + 12));
    dword_65E3C = (int)calloc(1u, 0x40u);
    if ( sub_2F0EC(dword_65E3C, 0, (void *(*)(void *))sub_3F138, (void *)dword_65E3C) )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "%s: create thread for get hashrate from asic failed", "bitmain_L3_init");
        sub_38438(7, s, 0);
        return -6;
      }
      else
      {
        return -6;
      }
    }
    else
    {
      v41 = 0;
      pthread_detach(*(_DWORD *)(dword_65E3C + 12));
      do
      {
        v42 = v52 + 1;
        if ( *(unsigned __int8 *)++v52 )
        {
          v44 = *(unsigned __int8 *)(v42 + 2174);
          if ( *(_BYTE *)(v42 + 2174) )
          {
            v45 = 0;
            v53 = v41;
            v46 = (char *)&unk_C4BCC + 288 * v41 + 644;
            v47 = 0;
            v48 = (char *)&unk_C4BCC + 88 * v41;
            v49 = v46;
            do
            {
              if ( (v47 & 7) == 0 )
              {
                v50 = v47 + v45;
                if ( v47 + v45 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
                {
                  snprintf(s, 0x800u, "offset[%d] ERR", v47 + v45);
                  sub_38438(3, s, 0);
                }
                ++v45;
                v48[v50 + 1800] = 32;
              }
              v51 = v47 + v45;
              if ( v47 + v45 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
              {
                snprintf(s, 0x800u, "offset[%d] ERR", v47 + v45);
                sub_38438(3, s, 0);
              }
              ++v47;
              v48[v51 + 1800] = 111;
              *((_DWORD *)v49 + 1) = 0;
              v49 += 4;
            }
            while ( *(unsigned __int8 *)(v52 + 2174) > v47 );
            v44 = v45 + v47;
            v41 = v53;
            if ( v44 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
            {
              snprintf(s, 0x800u, "offset[%d] ERR", v44);
              sub_38438(3, s, 0);
            }
          }
          *((_BYTE *)&unk_C4BCC + 88 * v41 + v44 + 1800) = 0;
        }
        ++v41;
      }
      while ( v41 != 4 );
      byte_63150 = 1;
      return 0;
    }
  }
}
