size_t __fastcall sub_3EC20(size_t result)
{
  size_t v1; // r6
  size_t v2; // r10
  int v3; // r4
  signed int *v4; // r8
  int v5; // r12
  int v6; // r5
  int v7; // r7
  int v8; // r5
  size_t v9; // r7
  int v10; // r3
  int v11; // t1
  int v12; // r2
  bool v13; // zf
  bool v14; // cc
  int v15; // r3
  int v16; // r9
  unsigned int v17; // r1
  int v18; // r3
  int v19; // r1
  int v20; // r5
  const char *v21; // r7
  const char *v22; // r0
  signed int v23; // r3
  int v24; // r0
  unsigned int v25; // r1
  const char *v26; // r0
  unsigned int v27; // r1
  char v28; // r3
  int v29; // r1
  int v30; // r1
  unsigned int v31; // r2
  signed int v32; // r5
  int v33; // r2
  bool v34; // zf
  int v35; // r3
  char v36; // r1
  int v37; // r3
  unsigned int v38; // r3
  int v39; // r3
  unsigned int v40; // r6
  int v41; // r1
  const char *v42; // r2
  const char *v43; // r3
  int v44; // r2
  const unsigned __int16 **v45; // r0
  int v46; // r6
  int v47; // r6
  unsigned int v48; // r5
  int v49; // r7
  int v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r7
  int v54; // r3
  int v55; // r6
  int v56; // r9
  int v57; // r2
  int v58; // r6
  int v59; // r1
  int v60; // r1
  int v61; // r3
  int v62; // lr
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r5
  struct tm *v68; // r0
  struct tm *v69; // r5
  int v70; // r3
  int tm_mday; // r2
  int v72; // r0
  int v73; // r0
  int tm_hour; // r1
  int tm_min; // r2
  int tm_sec; // r3
  char v77; // r3
  char v78; // r3
  int v79; // lr
  char *v80; // r5
  char *v81; // r2
  char *v82; // r3
  char *v83; // r7
  int v84; // r1
  int v85; // [sp+18h] [bp-64h]
  int v86; // [sp+20h] [bp-5Ch] BYREF
  time_t v87; // [sp+24h] [bp-58h] BYREF
  signed int v88; // [sp+28h] [bp-54h]
  unsigned int v89; // [sp+2Ch] [bp-50h]
  int v90; // [sp+30h] [bp-4Ch]
  unsigned int v91; // [sp+34h] [bp-48h]
  int v92; // [sp+38h] [bp-44h] BYREF
  _BYTE v93[12]; // [sp+40h] [bp-3Ch] BYREF
  struct tm s; // [sp+4Ch] [bp-30h] BYREF

  v1 = result;
  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(v2 + 60);
  v4 = *(signed int **)(v3 + 28);
  if ( v4[6] && !*((_BYTE *)v4 + 31) && !*((_BYTE *)v4 + 30) && !*((_BYTE *)v4 + 29) && !*((_BYTE *)v4 + 28) )
  {
    if ( dword_7CF4C > 1 )
      puts("arc: inserting signal-quality poll.");
    result = sub_3E9A8(v4, "g\r");
  }
  v5 = *(_DWORD *)(v3 + 168);
  v6 = *(_DWORD *)(v1 + 88);
  v7 = *(unsigned __int8 *)(v1 + 92);
  if ( *(_BYTE *)(v3 + 40) == 111 )
  {
    if ( v5 == 1 && v7 == 13 )
      goto LABEL_17;
    v16 = v5 + v6 - 1;
    if ( v16 > 0 )
    {
      result = *(_DWORD *)(v1 + 76);
      v17 = *(_DWORD *)(v1 + 80);
      v18 = dword_7CF4C;
      v88 = result;
      v89 = v17;
      if ( dword_7CF4C )
      {
        if ( v7 == 13 )
        {
          v30 = 82;
        }
        else if ( ((*_ctype_b_loc())[v7] & 0x8000u) == 0 )
        {
          v30 = 63;
        }
        else
        {
          v30 = v7;
        }
        result = printf("arc: stamp -->%c<-- (%d chars rcvd)\n", v30, v6);
        v18 = dword_7CF4C;
        if ( v16 > 16 )
        {
          if ( dword_7CF4C )
            printf("arc: input code too long (%d cf %d); rejected.\n", v16, 16);
          goto LABEL_41;
        }
      }
      else if ( v16 > 16 )
      {
        goto LABEL_41;
      }
      v19 = *(_DWORD *)&aV1320030221[4 * v16 + 16];
      if ( v19 )
      {
        v31 = HIWORD(v89) + ((unsigned int)-v19 >> 16);
        v32 = v88;
        if ( (((unsigned __int16)v89 + (unsigned __int16)-*(_WORD *)&aV1320030221[4 * v16 + 16]) & 0x10000) != 0 )
          ++v31;
        result = v88 - 1;
        v89 = (unsigned __int16)(v89 - *(_WORD *)&aV1320030221[4 * v16 + 16]) | (v31 << 16);
        --v88;
        if ( (v31 & 0x10000) != 0 )
          v88 = v32;
      }
      if ( v18 > 1 )
      {
        v20 = *(_DWORD *)(v1 + 88);
        v21 = (const char *)&unk_665CC;
        if ( v20 > 1 )
          v21 = "*** ";
        v22 = (const char *)sub_4FAD4(0);
        result = printf(
                   "arc: %s%d char(s) rcvd, the last for lastcode[%d]; -%sms offset applied.\n",
                   v21,
                   v20,
                   v16,
                   v22);
      }
      v23 = *v4;
      if ( !*v4 && !v4[1] || v88 < v23 || v88 == v23 && v4[1] >= v89 )
      {
        if ( dword_7CF4C > 1 )
        {
          puts("arc: system timestamp captured.");
          if ( *v4 || v4[1] )
          {
            v24 = *v4;
            v25 = v4[1];
            v90 = *v4;
            v91 = v25;
            if ( v89 )
            {
              v38 = HIWORD(v91) + (-v89 >> 16);
              if ( (((unsigned __int16)v91 + (unsigned __int16)-(__int16)v89) & 0x10000) != 0 )
                ++v38;
              v13 = (v38 & 0x10000) == 0;
              v91 = (unsigned __int16)(v91 - v89) | (v38 << 16);
              v39 = ~v88 + v90;
              if ( !v13 )
                ++v39;
              v90 = v39;
            }
            else
            {
              v90 = v24 - v88;
            }
            v26 = (const char *)sub_4FAD4(v90);
            printf("arc: adjusted timestamp by -%sms.\n", v26);
          }
        }
        result = v88;
        v27 = v89;
        *v4 = v88;
        v4[1] = v27;
      }
      v5 = *(_DWORD *)(v3 + 168);
    }
  }
  if ( v5 > 15 )
  {
    if ( dword_7CF4C )
    {
      if ( *(_BYTE *)(v1 + 92) != 13 )
        result = puts("arc: rubbish in pp->a_lastcode[].");
    }
LABEL_14:
    *(_DWORD *)(v3 + 168) = 0;
    return result;
  }
  v6 = *(_DWORD *)(v1 + 88);
LABEL_17:
  if ( v6 > 0 )
  {
    v8 = 0;
    v9 = v1 + 91;
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)++v9;
      v10 = v11;
      v12 = v3 + v5++;
      v13 = v11 == 104;
      if ( v11 != 104 )
        v13 = v10 == 13;
      if ( v13 )
      {
        v5 = *(_DWORD *)(v3 + 168);
      }
      else
      {
        *(_DWORD *)(v3 + 168) = v5;
        *(_BYTE *)(v12 + 40) = v10;
      }
      if ( v10 == 111 && v5 == 1 )
      {
        *v4 = 0;
        result = (size_t)"arc: clearing timestamp.";
        v14 = dword_7CF4C <= 1;
        v4[1] = 0;
        if ( !v14 )
          result = puts("arc: clearing timestamp.");
        ++v8;
        v5 = *(_DWORD *)(v3 + 168);
        if ( *(_DWORD *)(v1 + 88) <= v8 )
          break;
      }
      else if ( *(_DWORD *)(v1 + 88) <= ++v8 )
      {
        break;
      }
      if ( v5 > 15 )
        goto LABEL_32;
    }
  }
  if ( v5 )
  {
LABEL_32:
    v15 = *(unsigned __int8 *)(v3 + 40);
    if ( v15 == 103 )
    {
      if ( v5 > 2 )
      {
        v28 = *(_BYTE *)(v3 + 42);
        result = *(unsigned __int8 *)(v3 + 41);
        v29 = result & 0x7F;
        if ( (v28 & 0x70) == 0x30 )
        {
          v40 = v28 & 0xF;
          if ( v40 <= 5 )
          {
            result &= 0x70u;
            if ( result == 48 )
            {
              if ( v29 == 51 )
              {
                if ( v4[4] < (unsigned int)dword_CB548 )
                {
                  sub_4CBA8(&v92);
                  sub_4E8EC(v92, v93);
                  dword_C9A50 = 0;
                  dword_C9A54 = 0;
                  v4[4] = dword_CB548 + 65 - v93[8];
                }
                ++dword_C9A54;
                dword_C9A50 += v40;
                result = sub_5A928(dword_C9A50, dword_C9A54);
                dword_C9A58 = result;
                if ( dword_7CF4C )
                  result = printf("arc: signal quality %d (%d).\n", result, v40);
              }
              else if ( v4[6] )
              {
                v41 = dword_C9A58;
                v13 = dword_7CF4C == 0;
                v4[3] = dword_C9A58;
                if ( !v13 )
                {
                  if ( v41 == -1 )
                  {
                    v42 = "UNKNOWN, will use clock anyway";
                  }
                  else
                  {
                    v42 = "OK, will use clock";
                    if ( v41 <= 2 )
                      v42 = "TOO POOR, will not use clock";
                  }
                  printf("arc: sync finished, signal quality %d: %s\n", v41, v42);
                  v41 = v4[3];
                }
                if ( v41 == -1 )
                {
                  v43 = "UNKNOWN, will use clock anyway";
                }
                else
                {
                  v43 = "TOO POOR, will not use clock";
                  if ( v41 > 2 )
                    v43 = "OK, will use clock";
                }
                result = sub_4FE78(5, "ARCRON: sync finished, signal quality %d: %s", v41, v43);
                v44 = v4[3];
                v4[6] = 0;
                dword_C9A58 = 0;
                dword_C9A50 = 0;
                dword_C9A54 = 0;
                if ( v44 <= 2 )
                  v4[5] = dword_CB548 + 1620;
              }
              goto LABEL_14;
            }
          }
        }
        if ( dword_7CF4C )
          return printf("arc: bad `g' response %2x %2x.\n", v29, v28 & 0x7F);
      }
    }
    else
    {
      if ( v15 != 111 )
        goto LABEL_41;
      if ( v5 > 15 )
      {
        if ( dword_7CF4C > 1 )
          puts("arc: NOW HAVE TIMESTAMP...");
        if ( !*v4 && !v4[1] )
        {
          if ( dword_7CF4C )
            puts("arc: FAILED TO GET SYSTEM TIMESTAMP");
          goto LABEL_41;
        }
        v33 = v4[3];
        v34 = v33 == -1;
        if ( v33 != -1 )
          LOBYTE(v33) = v33 + 48;
        v35 = v3 + *(_DWORD *)(v3 + 168);
        if ( v34 )
          v36 = 54;
        else
          v36 = v33;
        *(_BYTE *)(v35 + 40) = v36;
        *(_BYTE *)(v35 + 41) = 0;
        v37 = *(unsigned __int8 *)(v3 + 40);
        *(_DWORD *)(v3 + 192) = 0;
        if ( v37 != 111
          || !sub_3E944((unsigned __int8 *)(v3 + 41), (_DWORD *)(v3 + 180))
          || !sub_3E944((unsigned __int8 *)(v3 + 43), (_DWORD *)(v3 + 184))
          || !sub_3E944((unsigned __int8 *)(v3 + 45), (_DWORD *)(v3 + 188))
          || (v45 = _ctype_b_loc(), v46 = *(unsigned __int8 *)(v3 + 47), ((*v45)[v46] & 0x800) == 0)
          || (v47 = v46 - 48, !sub_3E944((unsigned __int8 *)(v3 + 48), (_DWORD *)(v3 + 176)))
          || !sub_3E944((unsigned __int8 *)(v3 + 50), &v86)
          || !sub_3E944((unsigned __int8 *)(v3 + 52), (_DWORD *)(v3 + 172)) )
        {
          if ( dword_7CF4C )
            puts("arc: badly formatted data.");
          goto LABEL_41;
        }
        v48 = *(unsigned __int8 *)(v3 + 54);
        v49 = *(unsigned __int8 *)(v3 + 55);
        if ( dword_7CF4C )
          printf("arc: status 0x%.2x flags 0x%.2x\n", *(unsigned __int8 *)(v3 + 54), *(unsigned __int8 *)(v3 + 55));
        if ( *(_DWORD *)(v3 + 180) <= 0x17u
          && *(_DWORD *)(v3 + 184) < 0x3Cu
          && *(_DWORD *)(v3 + 188) <= 0x3Cu
          && v47 > 0
          && v47 <= 7 )
        {
          v50 = *(_DWORD *)(v3 + 176);
          if ( v50 > 0 && v50 <= 31 && v86 > 0 && v86 <= 12 )
          {
            v51 = *(_DWORD *)(v3 + 172);
            if ( (unsigned int)v51 < 0x64 )
            {
              if ( !*(_BYTE *)(v2 + 59) && (((v48 ^ 4) >> 2) & 1) != ((v48 >> 1) & 1) )
              {
                *(_DWORD *)(v3 + 168) = *(unsigned __int8 *)(v2 + 59);
                return sub_27040(v2, 2);
              }
              if ( (v49 & 8) != 0 )
              {
                sub_4FE78(5, "ARCRON: battery low");
                v51 = *(_DWORD *)(v3 + 172);
              }
              if ( v51 <= 97 )
              {
                v51 += 100;
                *(_DWORD *)(v3 + 172) = v51;
              }
              v52 = v51 + 1900;
              *(_DWORD *)(v3 + 172) = v52;
              if ( v52 >= 2096 )
                sub_4FE78(5, "ARCRON: fix me!  EITHER YOUR DATE IS BADLY WRONG or else I will break soon!");
              if ( dword_7CF4C )
                printf(
                  "arc: n=%d %02d:%02d:%02d %02d/%02d/%04d %1d %1d\n",
                  9,
                  *(_DWORD *)(v3 + 180),
                  *(_DWORD *)(v3 + 184),
                  *(_DWORD *)(v3 + 188),
                  *(_DWORD *)(v3 + 176),
                  v86,
                  *(_DWORD *)(v3 + 172),
                  v48,
                  v49);
              v53 = v49 & 7;
              *(_BYTE *)(v3 + 32) = 0;
              v54 = v4[2];
              if ( v53 == 3 )
              {
                if ( v54 != 3 )
                  sub_4FE78(5, "ARCRON: signal acquired");
              }
              else if ( v54 != v53 )
              {
                sub_4FE78(5, "ARCRON: signal lost");
                *(_BYTE *)(v3 + 32) = 3;
                v4[2] = v53;
                *(_DWORD *)(v3 + 168) = 0;
                return sub_27040(v2, 3);
              }
              v4[2] = v53;
              v55 = *(unsigned __int8 *)(v2 + 59);
              if ( !*(_BYTE *)(v2 + 59) )
              {
                v56 = v86;
                v57 = *(_DWORD *)(v3 + 172);
                v58 = *(_DWORD *)(v3 + 176) + *(_DWORD *)&aV1320030221[4 * v86 + 80];
                *(_DWORD *)(v3 + 176) = v58;
                if ( (v57 & 3) == 0 )
                {
                  v85 = v57;
                  sub_5AA04(v57, 100);
                  if ( v59 || (sub_5AA04(v85, 400), !v60) )
                  {
                    if ( v56 > 2 )
                      *(_DWORD *)(v3 + 176) = v58 + 1;
                  }
                }
                if ( (v48 & 2) != 0 )
                {
                  v61 = *(_DWORD *)(v3 + 180) - 1;
                  *(_DWORD *)(v3 + 180) = v61;
                  if ( v61 < 0 )
                  {
                    v66 = *(_DWORD *)(v3 + 176);
                    *(_DWORD *)(v3 + 180) = 23;
                    *(_DWORD *)(v3 + 176) = --v66;
                    if ( v66 < 0 )
                      goto LABEL_168;
                  }
                }
                v55 = *(unsigned __int8 *)(v2 + 59);
                if ( !*(_BYTE *)(v2 + 59) )
                {
LABEL_179:
                  if ( v4[3] == -1 )
                  {
                    *(_BYTE *)(v2 + 71) = -4;
                    goto LABEL_186;
                  }
                  v77 = *(_BYTE *)(v3 + 752);
LABEL_182:
                  if ( (v77 & 4) != 0 )
                    v78 = -5;
                  else
                    v78 = -4;
                  *(_BYTE *)(v2 + 71) = v78;
LABEL_186:
                  v79 = *(unsigned __int8 *)(v3 + 752);
                  if ( v4[9] != v79 )
                  {
                    v80 = ".";
                    v81 = "1";
                    v82 = "2";
                    v83 = "3";
                    if ( (v79 & 1) == 0 )
                      v81 = ".";
                    if ( (v79 & 2) == 0 )
                      v82 = ".";
                    if ( (v79 & 4) == 0 )
                      v83 = ".";
                    if ( (v79 & 8) != 0 )
                      v80 = "4";
                    sub_4FE78(5, "ARCRON: flags enabled: %s%s%s%s", v81, v82, v83, v80);
                    if ( dword_7CF4C )
                      printf("arc: PRECISION = %d.\n", *(char *)(v2 + 71));
                    v4[9] = *(unsigned __int8 *)(v3 + 752);
                  }
                  v84 = v4[1];
                  *(_DWORD *)(v3 + 216) = *v4;
                  *(_DWORD *)(v3 + 220) = v84;
                  if ( sub_27698((_DWORD *)v3) )
                  {
                    sub_2DDBC(v2 + 12, (const char *)(v3 + 40));
                    return sub_276A0(v2);
                  }
LABEL_168:
                  *(_DWORD *)(v3 + 168) = 0;
                  return sub_27040(v2, 6);
                }
              }
              if ( (*(_BYTE *)(v3 + 752) & 1) == 0 )
              {
                *(_DWORD *)(v3 + 176) = sub_513CC(*(_DWORD *)(v3 + 172), v86, *(_DWORD *)(v3 + 176));
                goto LABEL_177;
              }
              memset(&s, 0, sizeof(s));
              v62 = *(_DWORD *)(v3 + 176);
              v63 = *(_DWORD *)(v3 + 180);
              v64 = *(_DWORD *)(v3 + 184);
              v65 = *(_DWORD *)(v3 + 188);
              s.tm_year = *(_DWORD *)(v3 + 172) - 1900;
              s.tm_mday = v62;
              s.tm_hour = v63;
              s.tm_mon = v86 - 1;
              s.tm_min = v64;
              s.tm_sec = v65;
              if ( v55 != 2 )
              {
                if ( v55 == 3 )
                {
                  v67 = v48 & 3;
                  switch ( v67 )
                  {
                    case 2:
                      s.tm_isdst = -1;
                      if ( dword_7CF4C )
                        puts("arc: DST = 10 (2)");
                      break;
                    case 3:
                      s.tm_isdst = 1;
                      if ( dword_7CF4C )
                        puts("arc: DST = 11 (3)");
                      break;
                    case 1:
                      s.tm_isdst = -1;
                      if ( dword_7CF4C )
                        puts("arc: DST = 01 (1)");
                      break;
                    default:
                      if ( dword_7CF4C )
                        puts("arc: DST = 00 (0)");
                      break;
                  }
                  goto LABEL_174;
                }
                if ( v55 != 1 )
                  return sub_4FE78(5, "ARCRON: Invalid mode %d", v55);
              }
              s.tm_isdst = v48 & 2;
LABEL_174:
              v87 = mktime(&s);
              v68 = gmtime(&v87);
              v69 = v68;
              if ( !v68 )
              {
                *(_DWORD *)(v3 + 168) = 0;
                return sub_27040(v2, 3);
              }
              v70 = v68->tm_mon + 1;
              tm_mday = v68->tm_mday;
              v72 = v68->tm_year + 1888;
              v86 = v70;
              v72 += 12;
              *(_DWORD *)(v3 + 172) = v72;
              v73 = sub_513CC(v72, v70, tm_mday);
              tm_hour = v69->tm_hour;
              tm_min = v69->tm_min;
              v13 = dword_7CF4C == 0;
              tm_sec = v69->tm_sec;
              *(_DWORD *)(v3 + 180) = tm_hour;
              *(_DWORD *)(v3 + 184) = tm_min;
              *(_DWORD *)(v3 + 188) = tm_sec;
              *(_DWORD *)(v3 + 176) = v73;
              if ( !v13 )
                printf(
                  "arc: time is %04d/%02d/%02d %02d:%02d:%02d UTC\n",
                  *(_DWORD *)(v3 + 172),
                  v86,
                  v69->tm_mday,
                  tm_hour,
                  tm_min,
                  tm_sec);
LABEL_177:
              if ( *(_BYTE *)(v2 + 59) )
              {
                if ( v53 == 3 )
                {
                  v77 = *(_BYTE *)(v3 + 752);
                  if ( (v77 & 2) != 0 )
                    goto LABEL_182;
                }
              }
              goto LABEL_179;
            }
          }
        }
LABEL_41:
        *(_DWORD *)(v3 + 168) = 0;
        return sub_27040(v2, 2);
      }
    }
  }
  return result;
}
