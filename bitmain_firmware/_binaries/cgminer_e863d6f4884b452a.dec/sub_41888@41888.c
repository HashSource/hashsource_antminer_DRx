int __fastcall sub_41888(int a1)
{
  int *v1; // r12
  int *v3; // r7
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  int *v7; // r6
  int v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r5
  int *v18; // r0
  unsigned int v19; // r3
  int i; // r2
  int v21; // t1
  int j; // r5
  int v23; // r2
  int v24; // r3
  int v25; // r3
  double v26; // d7
  bool v27; // nf
  int v28; // r0
  unsigned __int8 *v29; // r6
  int v30; // t1
  unsigned __int8 *v31; // r7
  int k; // r5
  int v33; // t1
  unsigned __int8 *v34; // r10
  int v35; // r5
  int v36; // t1
  double v37; // d7
  bool v38; // nf
  int v39; // r5
  unsigned __int8 *v40; // r3
  int v41; // t1
  char v42; // r6
  int v43; // r0
  int v44; // r7
  int m; // r5
  int v46; // r0
  int n; // r5
  int v48; // r0
  int v49; // r2
  int v50; // r5
  int v51; // r0
  unsigned __int8 *v52; // r6
  int ii; // r5
  int v54; // t1
  int v55; // r3
  unsigned __int8 *v56; // r0
  int v57; // t1
  unsigned __int8 *v58; // r3
  int v59; // r3
  int v60; // r7
  int v61; // r4
  bool v62; // cc
  int v63; // r3
  unsigned int v64; // r7
  int v65; // r3
  int v66; // r3
  int v67; // r7
  int v68; // [sp+18h] [bp-20h]
  int v69; // [sp+1Ch] [bp-1Ch]
  void *v70; // [sp+2Ch] [bp-Ch]
  unsigned __int16 v71; // [sp+32h] [bp-6h] BYREF
  int v72; // [sp+34h] [bp-4h]
  _DWORD v73[11]; // [sp+38h] [bp+0h] BYREF
  int v74; // [sp+64h] [bp+2Ch] BYREF
  int v75; // [sp+68h] [bp+30h]
  int v76; // [sp+6Ch] [bp+34h]
  int v77; // [sp+70h] [bp+38h]
  int v78; // [sp+74h] [bp+3Ch]
  int v79; // [sp+78h] [bp+40h]
  int v80; // [sp+7Ch] [bp+44h]
  int v81; // [sp+80h] [bp+48h]
  int v82; // [sp+84h] [bp+4Ch]
  int v83; // [sp+88h] [bp+50h]
  int v84; // [sp+8Ch] [bp+54h] BYREF
  char s[2052]; // [sp+90h] [bp+58h] BYREF

  v1 = (int *)(a1 + 4914);
  v3 = v73;
  v4 = (int *)(a1 + 4882);
  do
  {
    v5 = *v4;
    v4 += 4;
    v6 = *(v4 - 3);
    v7 = v3;
    v8 = *(v4 - 2);
    v3 += 4;
    v9 = *(v4 - 1);
    *v7 = v5;
    v7[1] = v6;
    v7[2] = v8;
    v7[3] = v9;
  }
  while ( v4 != v1 );
  v10 = (unsigned __int8)byte_73320;
  v11 = v4[2];
  v12 = v4[1];
  *v3 = *v4;
  v3[1] = v12;
  v3[2] = v11;
  v71 = 0;
  if ( v10 || byte_6FA70 || dword_6D35C > 3 )
  {
    strcpy(s, "bitmain_dcr_init");
    sub_343C4(4, s, 0);
  }
  v74 = v73[0];
  v75 = v73[1];
  v76 = v73[2];
  v77 = v73[3];
  v78 = v73[4];
  v79 = v73[5];
  v80 = v73[6];
  v81 = v73[7];
  v82 = v73[8];
  v83 = v73[9];
  v84 = v73[10];
  v13 = 0;
  strcpy((char *)&dword_6F80C, "1.1.7");
  dword_73ED0 = open("/sys/class/gpio/gpio941/value", 2);
  dword_73E84 = open("/sys/class/gpio/gpio942/value", 2);
  sub_376C8();
  v72 = -1;
  v72 = *(_DWORD *)dword_6FAEC;
  *(_DWORD *)dword_6FAEC = v72 | 0x20000000;
  *(_DWORD *)(dword_6FAEC + 60) = 26;
  word_74761 = 1;
  sub_3EA5C();
  if ( dword_72EF0 <= 0 )
    goto LABEL_24;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(dword_732EC + 4 * v14);
      if ( !**(_BYTE **)(v15 + 172) )
        goto LABEL_9;
      if ( !**(_BYTE **)(v15 + 180) )
        break;
      ++v13;
LABEL_9:
      if ( ++v14 >= dword_72EF0 )
        goto LABEL_16;
    }
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      goto LABEL_9;
    ++v14;
    strcpy(s, "Blank worker exists.\n");
    sub_343C4(3, s, 0);
  }
  while ( v14 < dword_72EF0 );
LABEL_16:
  if ( !v13 )
  {
LABEL_24:
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    strcpy(s, "No valid pools, please configure them first!\n");
    sub_343C4(3, s, 0);
    return -1;
  }
  if ( (unsigned __int8)v74 == 81 )
  {
    v18 = &v74;
    v19 = 255;
    for ( i = 81; ; i = v21 )
    {
      v19 = (unsigned __int16)(*(_WORD *)&aBitmainDcrDete_0[2 * (i ^ (v19 >> 8)) + 100] ^ ((_WORD)v19 << 8));
      if ( v18 == (int *)((char *)&v84 + 1) )
        break;
      v21 = *((unsigned __int8 *)v18 + 1);
      v18 = (int *)((char *)v18 + 1);
    }
    if ( HIWORD(v84) != v19 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        return -2;
      v16 = -2;
      snprintf(
        s,
        0x800u,
        "%s: config_parameter.crc = 0x%x, but we calculate it as 0x%x",
        "bitmain_dcr_init",
        HIWORD(v84),
        v19);
      sub_343C4(3, s, 0);
      return v16;
    }
    for ( j = 0; j != 4; ++j )
    {
      v23 = 0;
      do
      {
        v24 = (j << 7) + v23++ + 44;
        v25 = a1 + 4 * v24;
        *(_WORD *)(v25 + 6) = 0;
        *(_WORD *)(v25 + 8) = 0;
      }
      while ( v23 != 128 );
    }
    sub_3E8BC(a1);
    *(_DWORD *)(dword_6FAEC + 52) = 0xFFFF;
    sub_2A7F4();
    sub_3B5A4();
    sub_3B234();
    sub_3A414();
    sub_3A4B0();
    v16 = sub_3A67C();
    if ( v16 == -3 )
      return v16;
    if ( (v76 & 0x20) != 0 )
    {
      word_7477F = HIWORD(v78);
      v26 = 1582.35294 - (double)HIWORD(v78) / 100.0 * 166.666667;
      if ( v26 <= 255.0 )
      {
        v27 = v26 < 0.0;
        if ( v26 < 0.0 )
          v16 = 0;
        else
          HIDWORD(v26) = (unsigned int)v26;
        if ( !v27 )
          v16 = BYTE4(v26);
      }
      else
      {
        v16 = 255;
      }
      sub_3BF78(v16);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "%s, dev.voltage=%d, pic_voltage=%d", "bitmain_dcr_init", (unsigned __int16)word_7477F, v16);
        sub_343C4(5, s, 0);
      }
      sub_2A7F4();
    }
    LOBYTE(v28) = sub_2A7F4();
    v29 = (unsigned __int8 *)&unk_73EF0;
    do
    {
      v30 = *v29++;
      if ( v30 == 1 )
        sub_3F458((unsigned __int8)(~(unsigned int)&unk_73EF0 + (_BYTE)v29));
    }
    while ( v29 != (unsigned __int8 *)&unk_73EF4 );
    v31 = (unsigned __int8 *)&unk_73EF0;
    for ( k = 1; k != 5; ++k )
    {
      v33 = *v31++;
      if ( v33 == 1 )
      {
        v28 = sub_3F298((unsigned __int8)(k - 1));
        dword_73ED8[k] = v28 != 255;
      }
    }
    v34 = (unsigned __int8 *)&unk_73EF0;
    v35 = 0;
    v68 = (unsigned __int16)word_7477F;
    v69 = 0;
    v70 = (void *)a1;
    while ( 1 )
    {
      v36 = *v34++;
      if ( v36 == 1 && dword_73ED8[v35 + 1] == 1 )
      {
        v58 = &byte_8DCC0[6 * v35];
        if ( (unsigned __int16)v78 == 450 )
        {
          v66 = v58[2];
          v67 = 10 * v66;
          v61 = 10 * v66;
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(s, 0x800u, "chain %d read out low power voltage data %d voltagge %d", v35, v66, 10 * v66);
            sub_343C4(5, s, 0);
          }
          if ( (unsigned int)(v67 - 800) > 0x28 )
            goto LABEL_65;
        }
        else
        {
          v59 = v58[4];
          v60 = 10 * v59;
          v61 = 10 * v59;
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(s, 0x800u, "chain %d read out voltage data %d voltagge %d", v35, v59, 10 * v59);
            sub_343C4(5, s, 0);
          }
          v62 = v60 < 900;
          v63 = v69;
          v64 = v60 - 870;
          if ( !v62 )
            v63 = 1;
          v69 = v63;
          if ( v64 > 0x32 )
            goto LABEL_65;
        }
        v65 = v68;
        if ( v68 < v61 )
          v65 = v61;
        v68 = v65;
      }
LABEL_65:
      if ( ++v35 == 4 )
      {
        if ( v69 && !dword_72AFC )
          v68 -= 20;
        if ( (unsigned __int16)word_7477F != v68 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "adjust_voltage %f dev %d max %d",
              (double)v68 / 100.0,
              (unsigned __int16)word_7477F,
              v68);
            sub_343C4(5, s, 0);
          }
          v37 = 1582.35294 - (double)v68 / 100.0 * 166.666667;
          if ( v37 <= 255.0 )
          {
            v38 = v37 < 0.0;
            if ( v37 < 0.0 )
              LOBYTE(v28) = 0;
            else
              HIDWORD(v37) = (unsigned int)v37;
            if ( !v38 )
              LOBYTE(v28) = BYTE4(v37);
          }
          else
          {
            LOBYTE(v28) = -1;
          }
          sub_3BF78(v28);
          sub_2A7F4();
        }
        sub_3A5E4();
        *(_DWORD *)(dword_6FAEC + 52) = 0;
        sub_2A7F4();
        sub_3E590((int)v70, v75);
        v16 = sub_41738();
        sub_2A7F4();
        sub_3FB28();
        sub_2A7F4();
        if ( v16 != -4 )
        {
          sub_3CDE8(1);
          v39 = 3;
          sub_2A7F4();
          do
          {
            v40 = (unsigned __int8 *)&unk_73EF0;
            byte_72B62 = 0;
            while ( 1 )
            {
              v41 = *v40++;
              if ( v41 == 1 && v40[2113] != 72 )
                break;
              if ( v29 == v40 )
                goto LABEL_87;
            }
            byte_72B62 = 1;
            sub_3FB50((int)v70);
            --v39;
          }
          while ( v39 );
LABEL_87:
          sub_3E19C();
          sub_3D828();
          sub_3CDE8(0);
          sub_3DDC0(40);
          v42 = v76;
          word_7475F = 276;
          if ( (v76 & 0x10) != 0 )
          {
            v43 = (unsigned __int16)v78;
            word_7476B = v78;
            if ( (_WORD)v78 )
            {
              if ( v69 && !dword_72AFC )
              {
                v43 = (unsigned __int16)(v78 - 30);
                word_7476B = v78 - 30;
              }
              sub_3DD00(v43);
            }
            else
            {
              sub_3AE3C(&v71);
              word_7476B = v71;
              sub_3DD00(v71);
            }
            sprintf(byte_7476D, "%u", (unsigned __int16)word_7476B);
          }
          v44 = v83;
          for ( m = 0; m != 4; ++m )
          {
            v46 = m;
            sub_3C7EC(v46, v44);
          }
          for ( n = 0; n != 4; ++n )
          {
            v48 = n;
            sub_3C8B4(v48, 1);
          }
          sub_3D23C();
          byte_74766 = (v76 & 2) != 0;
          byte_74767 = BYTE2(v77);
          v49 = (v76 & 2) != 0;
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(s, 0x800u, "%s: fan_eft: %d  fan_pwm : %d", "bitmain_dcr_init", (v76 & 2) != 0, BYTE2(v77));
            sub_343C4(5, s, 0);
            v49 = (unsigned __int8)byte_74766;
          }
          if ( v49 && (unsigned __int8)byte_74767 <= 0x64u )
            sub_3E808((unsigned __int8)byte_74767);
          else
            sub_3F138();
          if ( (v42 & 4) != 0 )
          {
            v50 = (unsigned __int16)word_7476B;
            v51 = sub_49878(0x7FFFFF, (unsigned __int16)word_7476B);
            dword_73EF8 = (unsigned int)((double)v51 * 0.7);
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
            {
              snprintf(s, 0x800u, "frequency = '%d timeout %d'", v50, (unsigned int)((double)v51 * 0.7));
              sub_343C4(5, s, 0);
            }
          }
          v52 = (unsigned __int8 *)&unk_73EF0;
          for ( ii = 0; ii != 4; ++ii )
          {
            v54 = *v52++;
            if ( v54 == 1 )
              sub_3DE4C(ii);
          }
          v16 = sub_40658();
          if ( v16 != -8 )
          {
            sleep(1u);
            v16 = sub_417D8();
            if ( v16 != -7 )
            {
              v16 = sub_40EE8(v70);
              if ( v16 != -5 )
              {
                v16 = sub_40F9C();
                if ( v16 != -6 )
                {
                  sub_3DFA4();
                  v55 = 0;
                  v56 = (unsigned __int8 *)&unk_73EF0;
                  do
                  {
                    v57 = *v56++;
                    if ( v57 == 1 )
                      byte_6FC24[v55] = 1;
                    ++v55;
                  }
                  while ( v55 != 4 );
                  return 0;
                }
              }
            }
          }
        }
        return v16;
      }
    }
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
    return -1;
  snprintf(
    s,
    0x800u,
    "%s: config_parameter.token_type != 0x%x, it is 0x%x",
    "bitmain_dcr_init",
    81,
    (unsigned __int8)v74);
  sub_343C4(3, s, 0);
  return -1;
}
