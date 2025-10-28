void __noreturn sub_3C6D4()
{
  unsigned __int64 v0; // d8
  unsigned int v1; // r8
  int v2; // r6
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r1
  int v6; // r9
  int *v7; // r5
  int v8; // r0
  int v9; // r7
  int v10; // r2
  int v11; // r11
  int v12; // r5
  unsigned __int8 *v13; // r9
  char v14; // r11
  int v15; // r9
  char v16; // r12
  char *v17; // r3
  char *v18; // r2
  int v19; // r3
  char *v20; // r5
  char *v21; // r2
  unsigned int v22; // r3
  char *v23; // r3
  char *v24; // r3
  int i; // r7
  char *v26; // r0
  int v27; // r2
  bool v28; // zf
  int v29; // r3
  unsigned __int64 v30; // d16
  _QWORD *v31; // r2
  int v32; // t1
  __int16 v33; // r11
  __int16 v34; // r9
  char *v35; // r2
  char *v36; // r2
  char v37; // [sp+18h] [bp-824h]
  int v38; // [sp+1Ch] [bp-820h]
  int v39; // [sp+20h] [bp-81Ch]
  unsigned int v40; // [sp+24h] [bp-818h]
  int v41; // [sp+28h] [bp-814h]
  char nptr[12]; // [sp+2Ch] [bp-810h] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v40 = 0;
  v39 = 1;
  v41 = 0;
  while ( 1 )
  {
    v0 = 0;
    sub_3C69C();
    v38 = 0;
    while ( 1 )
    {
LABEL_3:
      sub_2B21C();
      pthread_mutex_lock(&stru_6315C);
      v1 = dword_64334;
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "%s: reg_value_num = %d", "bitmain_scanreg", dword_64334);
        sub_38438(7, s, 0);
      }
      pthread_mutex_unlock(&stru_6315C);
      if ( v1 > 0x35F || (unsigned int)dword_64330 > 0x35F )
        break;
      if ( v1 )
      {
        v2 = 0;
        while ( 1 )
        {
          pthread_mutex_lock(&stru_6315C);
          v6 = dword_64330 + 1;
          v7 = &dword_6432C[2 * dword_64330 + 2];
          v8 = sub_3B360((_BYTE *)v7 + 6, 51);
          v9 = *((unsigned __int8 *)v7 + 10);
          v10 = v7[3] & 0x1F;
          v11 = *((unsigned __int8 *)v7 + 11);
          v12 = *((unsigned __int8 *)v7 + 13);
          if ( v8 != v10 )
          {
            if ( (byte_632F0 || byte_630C0 || dword_60964 > 2)
              && ((snprintf(
                     s,
                     0x800u,
                     "%s,crc5 error,should be %02x,but check as %02x %d %d",
                     "bitmain_scanreg",
                     v10,
                     v8,
                     v2,
                     v1),
                   sub_38438(3, s, 0),
                   byte_632F0)
               || byte_630C0
               || dword_60964 > 2) )
            {
              snprintf(
                s,
                0x800u,
                "%s: reg_value = 0x%02x%02x%02x%02x",
                "bitmain_scanreg",
                (unsigned __int8)v41,
                BYTE1(v41),
                BYTE2(v41),
                HIBYTE(v41));
              sub_38438(3, s, 0);
              v6 = dword_64330 + 1;
            }
            else
            {
              v6 = dword_64330 + 1;
            }
          }
          v41 = *(int *)((char *)&dword_6432C[2 * v6 + 1] + 2);
          pthread_mutex_unlock(&stru_6315C);
          if ( !v11 )
            break;
          if ( v11 == 64 )
          {
            v13 = (unsigned __int8 *)&dword_6432C[2 * dword_64330 + 2];
            v9 = v13[10];
            v11 = v13[11];
            v12 = v13[13];
          }
          switch ( v11 )
          {
            case 8:
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(
                  s,
                  0x800u,
                  "%s: reg_value = 0x%02x0x%02x0x%02x0x%02x",
                  "bitmain_scanreg",
                  (unsigned __int8)v41,
                  BYTE1(v41),
                  BYTE2(v41),
                  HIBYTE(v41));
                sub_38438(7, s, 0);
              }
              break;
            case 24:
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(
                  s,
                  0x800u,
                  "Dump MISC Data:[%X][%X][%X][%X]@Chain[%d] -- Chip[%X]",
                  (unsigned __int8)v41,
                  BYTE1(v41),
                  BYTE2(v41),
                  HIBYTE(v41),
                  v12,
                  v9);
                sub_38438(7, s, 0);
              }
              break;
            case 28:
              if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
              {
                v14 = v41;
                v15 = BYTE2(v41);
                v37 = HIBYTE(v41);
                snprintf(s, 0x800u, aDumpIicDataXXX, (unsigned __int8)v41, BYTE1(v41), BYTE2(v41), HIBYTE(v41), v12, v9);
                sub_38438(5, s, 0);
                v16 = v37;
              }
              else
              {
                v14 = v41;
                v15 = BYTE2(v41);
                v16 = HIBYTE(v41);
              }
              if ( v15 != 17 && (v14 & 0xC0) == 0 )
              {
                switch ( v9 )
                {
                  case 105:
                    v23 = &byte_630C8[24 * v12];
                    if ( *((_DWORD *)v23 + 48) == 4 )
                    {
                      v23[196] = v16;
                      *((_DWORD *)v23 + 48) = 1;
                    }
                    break;
                  case 201:
                    v24 = &byte_630C8[24 * v12];
                    if ( *((_DWORD *)v24 + 46) == 4 )
                    {
                      v24[188] = v16;
                      *((_DWORD *)v24 + 46) = 1;
                    }
                    break;
                  case 12:
                    v17 = &byte_630C8[24 * v12];
                    if ( *((_DWORD *)v17 + 44) == 4 )
                    {
                      v17[180] = v16;
                      *((_DWORD *)v17 + 44) = 1;
                    }
                    break;
                }
              }
              break;
            case 4:
              for ( i = 0; i != 4; ++i )
              {
                v26 = &nptr[2 * i];
                v27 = (unsigned __int8)nptr[i - 4];
                sprintf(v26, "%02x", v27);
              }
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(s, 0x800u, "%s: hashrate is %s", "bitmain_scanreg", nptr);
                sub_38438(7, s, 0);
              }
              ++v38;
              v0 += vshld_n_s64(vshrd_n_s64(vdup_n_s32(strtol(nptr, 0, 16)).n64_i64[0], 0x20u), 8u);
              if ( v38 == 72 )
              {
                qword_63100[v12] = v0;
                sub_3AA38(v0, &byte_65E6C[16 * v12], 5, 0);
                v28 = byte_630C1 == 0;
                *(_DWORD *)&byte_630C8[4 * v12 + 272] = 0;
                if ( !v28 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                {
                  snprintf(s, 0x800u, "%s: chain %d hashrate is %s", "bitmain_scanreg", v12, &byte_65E6C[16 * v12]);
                  sub_38438(7, s, 0);
                }
                v29 = 805859;
                v30 = 0;
                v31 = qword_63100;
                do
                {
                  v32 = *(unsigned __int8 *)++v29;
                  if ( v32 == 1 )
                    v30 += *v31;
                  ++v31;
                }
                while ( v29 != 805863 );
                v0 = 0;
                v38 = 0;
                sub_3AA38(v30, byte_62E38, 5, 0);
              }
              break;
            case 68:
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                v33 = BYTE1(v41);
                v34 = HIBYTE(v41);
                snprintf(
                  s,
                  0x800u,
                  "TEMP DATA @ Chain[%d]:local[%d] remote[%d] On Chip[%X]",
                  v12,
                  BYTE1(v41),
                  HIBYTE(v41),
                  v9);
                sub_38438(7, s, 0);
                if ( v9 == 105 )
                  goto LABEL_132;
              }
              else
              {
                v33 = BYTE1(v41);
                v34 = HIBYTE(v41);
                if ( v9 == 105 )
                {
LABEL_132:
                  v35 = (char *)&unk_C4BCC + 64 * v12;
                  *((_WORD *)v35 + 152) = v33;
                  *((_WORD *)v35 + 153) = v34;
                  break;
                }
              }
              if ( v9 == 201 )
              {
                v36 = (char *)&unk_C4BCC + 64 * v12;
                *((_WORD *)v36 + 156) = v33;
                *((_WORD *)v36 + 157) = v34;
              }
              else if ( v9 == 12 )
              {
                *((_WORD *)&unk_C4BCC + 32 * v12 + 160) = v33;
                *((_WORD *)&unk_C4BCC + 32 * v12 + 161) = v34;
              }
              break;
            default:
              if ( v11 )
                break;
              goto LABEL_23;
          }
LABEL_32:
          if ( byte_630D8 )
          {
            ++*(_DWORD *)&byte_630C8[4 * v12 + 272];
LABEL_34:
            qword_63100[v12] = 0;
            sub_3AA38(0, &byte_65E6C[16 * v12], 3, 1);
            goto LABEL_35;
          }
          if ( !v38 )
          {
            if ( byte_631E8 )
            {
              v18 = &byte_630C8[4 * v12];
              v19 = *((_DWORD *)v18 + 68) + 1;
              *((_DWORD *)v18 + 68) = v19;
              if ( v19 > 3 )
                goto LABEL_34;
            }
          }
LABEL_35:
          ++v2;
          ++dword_64330;
          --dword_64334;
          if ( (unsigned int)dword_64330 >= 0x360 )
            dword_64330 = 0;
          if ( v2 == v1 )
            goto LABEL_3;
        }
        if ( byte_63174 )
        {
          if ( v39 )
            *((_BYTE *)&unk_C4BCC + v12 + 2198) = 0;
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(
              s,
              0x800u,
              "%s: reg_value = 0x%02x0x%02x0x%02x0x%02x",
              "bitmain_scanreg",
              (unsigned __int8)v41,
              BYTE1(v41),
              BYTE2(v41),
              HIBYTE(v41));
            sub_38438(7, s, 0);
          }
          v3 = (unsigned __int8)(*((_BYTE *)&unk_C4BCC + v12 + 2198) + 1);
          *((_BYTE *)&unk_C4BCC + v12 + 2198) = v3;
          if ( v3 > 0x48 )
            *((_BYTE *)&unk_C4BCC + v12 + 2198) = 1;
          v39 = 0;
        }
LABEL_23:
        v4 = *((unsigned __int8 *)&unk_C4BCC + v12 + 2198);
        if ( v4 == 72 )
        {
          v5 = (unsigned __int8)byte_630C1;
          if ( byte_630C1 )
          {
            if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
            {
              snprintf(s, 0x800u, "chian %d get asicnum %d", v12, 72);
              sub_38438(7, s, 0);
              v4 = *((unsigned __int8 *)&unk_C4BCC + v12 + 2198);
              v5 = (unsigned __int8)byte_630C1;
            }
            else
            {
              v5 = 1;
            }
          }
        }
        else
        {
          v5 = (unsigned __int8)byte_630C1;
        }
        if ( (unsigned __int8)byte_C548D < v4 )
          byte_C548D = v4;
        if ( v5 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(s, 0x800u, "%s: chain J%d has %d ASIC", "bitmain_scanreg", v12 + 1, v4);
          sub_38438(7, s, 0);
        }
        goto LABEL_32;
      }
      if ( byte_630D8 )
      {
        v20 = &byte_630F8;
        do
        {
          v21 = &byte_65E6C[16 * v1++];
          *((_QWORD *)v20 + 1) = 0;
          v20 += 8;
          sub_3AA38(0, v21, 3, 1);
        }
        while ( v1 != 4 );
      }
      v22 = v40 + 1;
      if ( v40 > 3 )
      {
        sub_3C69C();
        v22 = 0;
        byte_631E8 = 0;
      }
      v40 = v22;
      sub_2B21C();
    }
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      strcpy(s, "reg fifo is full !!");
      sub_38438(4, s, 0);
    }
  }
}
