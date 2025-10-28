void __noreturn sub_3DE5C()
{
  int v0; // r3
  int v1; // r5
  int v2; // r7
  int v3; // r9
  int v5; // r4
  char *v6; // r6
  int v7; // r12
  int v8; // t1
  unsigned int v9; // r3
  int v11; // r4
  int v12; // r4
  int v13; // r6
  int v14; // r4
  char *v15; // r7
  char *v16; // r5
  int v17; // r12
  int v18; // r12
  int v19; // r2
  int v20; // r1
  int v21; // r4
  int v22; // r0
  int v23; // r5
  int v24; // r6
  int v25; // r4
  int v26; // t1
  const char *v27; // r2
  int v28; // r12
  int v29; // r3
  int v30; // [sp+4h] [bp-858h]
  int v31; // [sp+2Ch] [bp-830h]
  int v32; // [sp+30h] [bp-82Ch]
  unsigned int v33; // [sp+30h] [bp-82Ch]
  int i; // [sp+34h] [bp-828h]
  int v35; // [sp+38h] [bp-824h]
  int v36; // [sp+3Ch] [bp-820h]
  int v37; // [sp+40h] [bp-81Ch] BYREF
  int v38; // [sp+44h] [bp-818h]
  struct timeval v39; // [sp+48h] [bp-814h] BYREF
  struct timeval v40; // [sp+50h] [bp-80Ch] BYREF
  char s[2052]; // [sp+58h] [bp-804h] BYREF

  v37 = 0;
  v36 = 0;
  v38 = 0;
  sub_2B13C(&v39);
  sub_2B13C(&v40);
  sub_2AE20(&v37, &v39);
  sub_2AE20(&dword_63154, &v40);
  while ( 1 )
  {
    sub_2B13C(&v39);
    sub_2B13C(&v40);
    v0 = v39.tv_sec - v37;
    if ( v39.tv_usec - v38 < 0 )
      --v0;
    if ( v0 > 600 )
    {
      v1 = 0;
      v2 = 0;
      v32 = 0;
      v3 = 805859;
      v31 = 805859;
      do
      {
        if ( *(unsigned __int8 *)++v3 )
        {
          v32 += *(unsigned __int8 *)(v3 + 2174);
          if ( *(_BYTE *)(v3 + 2174) )
          {
            v5 = 0;
            v6 = (char *)&unk_C4BCC + 288 * v2 + 644;
            do
            {
              v8 = *((_DWORD *)v6 + 1);
              v6 += 4;
              v7 = v8;
              v1 += v8;
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(s, 0x800u, "%s: chain %d asic %d asic_nonce_num %d", "check_miner_status", v2, v5, v7);
                sub_38438(7, s, 0);
              }
              ++v5;
            }
            while ( *(unsigned __int8 *)(v3 + 2174) > v5 );
          }
        }
        ++v2;
      }
      while ( v2 != 4 );
      if ( v32 )
      {
        v9 = (unsigned __int8)byte_630C1;
        if ( byte_630C1 && (byte_632F0 || (v9 = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6) )
        {
          v30 = v32;
          v33 = 0;
          snprintf(s, 0x800u, "%s: avg_num %d asic_num %d", "check_miner_status", v1, v30);
          sub_38438(7, s, 0);
        }
        else
        {
          v33 = v9;
        }
      }
      else
      {
        v33 = 1;
      }
      for ( i = 0; i != 4; ++i )
      {
        v11 = v31 + 1;
        if ( *(unsigned __int8 *)++v31 )
        {
          v12 = *(unsigned __int8 *)(v11 + 2174);
          if ( v12 )
          {
            v13 = 0;
            v14 = 0;
            v15 = (char *)&unk_C4BCC + 88 * i;
            v16 = (char *)&unk_C4BCC + 288 * i + 644;
            do
            {
              if ( (v14 & 7) == 0 )
              {
                v18 = v14 + v13;
                if ( v14 + v13 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v14 + v13);
                  sub_38438(3, s, 0);
                  v18 = v14 + v13;
                }
                ++v13;
                v15[v18 + 1800] = 32;
              }
              v17 = v14 + v13;
              if ( *((_DWORD *)v16 + 1) > v33 )
              {
                if ( v17 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v14 + v13);
                  sub_38438(3, s, 0);
                  v17 = v14 + v13;
                }
                v15[v17 + 1800] = 111;
              }
              else
              {
                if ( v17 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
                {
                  snprintf(s, 0x800u, "asic num err![%d]", v14 + v13);
                  sub_38438(3, s, 0);
                  v17 = v14 + v13;
                }
                v15[v17 + 1800] = 120;
              }
              if ( v14 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
              {
                snprintf(s, 0x800u, "asic num err![%d]", v14);
                sub_38438(3, s, 0);
              }
              ++v14;
              *((_DWORD *)v16 + 1) = 0;
              v16 += 4;
            }
            while ( *(unsigned __int8 *)(v31 + 2174) > v14 );
            v12 = v13 + v14;
            if ( v12 > 88 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
            {
              snprintf(s, 0x800u, "asic num err![%d]", v12);
              sub_38438(3, s, 0);
            }
          }
          *((_BYTE *)&unk_C4BCC + 88 * i + v12 + 1800) = 0;
        }
      }
      if ( dbl_63268 / dbl_5F898 < (double)((unsigned __int8)byte_C548B
                                          * (unsigned __int16)word_C5492
                                          * 72
                                          * (unsigned __int8)byte_C5468)
                                 * 0.95
                                 / 2500.0
                                 * 0.8
        && !byte_630D8 )
      {
        system("echo \"Rate too low, reboot!!\" >> /usr/bin/already_reboot");
      }
      sub_2AE20(&v37, &v39);
    }
    sub_3DB30();
    v19 = v40.tv_sec - dword_63154;
    if ( v40.tv_usec - dword_63158 < 0 )
      --v19;
    if ( !byte_C5469 )
    {
      v20 = 1;
      goto LABEL_94;
    }
    if ( dword_C546B < (unsigned int)((unsigned __int64)(9092115387700LL * (unsigned __int8)byte_C5491) >> 32) >> 6 )
    {
      v20 = 2;
      goto LABEL_94;
    }
    if ( dword_C546F < (unsigned int)((unsigned __int64)(7612003580400LL * (unsigned __int8)byte_C5491) >> 32) >> 6 )
      break;
    if ( byte_C5467 == 100 && ((unsigned int)dword_C546B <= 0xF1D || (unsigned int)dword_C546F <= 0xCA7) )
    {
      v20 = 4;
LABEL_94:
      if ( ++dword_631F8 <= 10 )
        goto LABEL_72;
      goto LABEL_71;
    }
    v20 = 0;
    dword_631F8 = 0;
LABEL_71:
    v35 = v20;
LABEL_72:
    if ( v19 > 120 || dword_C5473[0] > 0x55u || (v21 = v35) != 0 )
    {
      byte_630D8 = 1;
      if ( byte_631F4 || dword_C5473[0] <= 0x55u && !v35 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          strcpy(s, "Net Err! lastest job more than 2 mins! waiting ...");
          sub_38438(3, s, 0);
          v22 = 1;
        }
        else
        {
          v22 = 1;
        }
      }
      else
      {
        v23 = 805859;
        v24 = v36;
        v25 = 0;
        byte_631F4 = 1;
        do
        {
          v26 = *(unsigned __int8 *)++v23;
          if ( v26 == 1 )
          {
            pthread_mutex_lock(&stru_63120);
            if ( ioctl(dword_C54A6, 0x703u, *(int *)((char *)&unk_557AC + v25) >> 1) < 0
              && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
            {
              snprintf(s, 0x800u, "ioctl error @ line %d", 1032);
              sub_38438(3, s, 0);
            }
            if ( !v24 )
            {
              if ( dword_C5473[0] > 0x55u && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
              {
                strcpy(s, "Temp Err! Disable PIC!");
                sub_38438(3, s, 0);
              }
              switch ( v35 )
              {
                case 1:
                  if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
                    goto LABEL_105;
                  v24 = 1;
                  snprintf(s, 0x800u, "Fan Err! Disable PIC! Fan num is %d", (unsigned __int8)byte_C5469);
                  sub_38438(3, s, 0);
                  break;
                case 2:
                  if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
                    goto LABEL_105;
                  v27 = "Fan Err! Disable PIC! Fan1 speed is too low %d pwm %d ";
                  v28 = (unsigned __int8)byte_C5467;
                  goto LABEL_111;
                case 3:
                  if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
                    goto LABEL_105;
                  v27 = "Fan Err! Disable PIC! Fan2 speed is too low %d pwm %d ";
                  v28 = (unsigned __int8)byte_C5467;
                  v29 = dword_C546F;
                  goto LABEL_112;
                case 4:
                  if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
                    goto LABEL_105;
                  v27 = "Fan Err! Disable PIC! MAX:%d MIN:%d";
                  v28 = dword_C546F;
LABEL_111:
                  v29 = dword_C546B;
LABEL_112:
                  v24 = 1;
                  snprintf(s, 0x800u, v27, v29, v28);
                  sub_38438(3, s, 0);
                  break;
                default:
LABEL_105:
                  v24 = 1;
                  break;
              }
            }
            sub_3DDB8(0);
            pthread_mutex_unlock(&stru_63120);
          }
          v25 += 4;
        }
        while ( v25 != 16 );
        v36 = v24;
        v22 = 1;
      }
    }
    else
    {
      v22 = (int)byte_630C8;
      if ( byte_631F4 )
        v22 = 0;
      else
        v21 = 0;
      if ( !byte_631F4 )
      {
        v22 = v21;
        byte_630D8 = v21;
      }
    }
    sub_3D9A4(v22);
    sub_2B21C();
  }
  v20 = 3;
  goto LABEL_94;
}
