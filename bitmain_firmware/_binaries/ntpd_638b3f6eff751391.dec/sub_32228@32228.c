signed int __fastcall sub_32228(_DWORD *a1)
{
  size_t v1; // r11
  int v3; // r5
  int v4; // r4
  signed int result; // r0
  int v6; // r3
  int v7; // r3
  int v8; // r2
  int v9; // r1
  int v10; // r6
  int v11; // r3
  size_t v12; // r0
  size_t v13; // r0
  bool v14; // cc
  int v15; // r8
  int v16; // r2
  int i; // r3
  char v18; // t1
  unsigned int v19; // r3
  int v20; // r2
  int v21; // r3
  unsigned int v22; // t1
  int v23; // r2
  int v24; // r2
  int v25; // r3
  char v26; // t1
  int v27; // r1
  int v28; // r3
  int v29; // r7
  int v30; // r2
  int v31; // r2
  int v32; // r8
  int *v33; // r7
  int v34; // r6
  int v35; // r2
  int v36; // r3
  int v37; // r2
  bool v38; // zf
  int v39; // r7
  int v40; // r6
  int v41; // r7
  int v42; // r9
  int v43; // r6
  int v44; // r8
  const unsigned __int16 **v45; // r11
  _BOOL4 v46; // r3
  unsigned int v47; // r12
  char *v48; // r1
  const char *v49; // r7
  size_t v50; // r0
  const char *v51; // r1
  int v52; // r7
  int v53; // r3
  int v54; // r12
  int v55; // r1
  int v56; // r12
  int v57; // r3
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r0
  int v62; // r2
  int v63; // r1
  int v64; // lr
  int v65; // r12
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r3
  int j; // r2
  int v71; // r3
  char *v72; // r3
  char *v73; // r6
  int v74; // r3
  const char *v75; // r2
  int v76; // r3
  const void *v77; // r1
  size_t v78; // r6
  _DWORD *v79; // r5
  int v80; // r1
  int v81; // r0
  int v82; // r1
  int v83; // r2
  int v84; // r12
  int v85; // r1
  int v86; // r3
  int v87; // r3
  int v88; // r2
  int v89; // r3
  int v90; // r3
  int v91; // r3
  int v92; // r3
  int v93; // r0
  char *v94; // r2
  char *v95; // r1
  int v96; // r3
  int v97; // r3
  int v98; // r3
  int v99; // r3
  int v100; // r3
  int v101; // r2
  char *v102; // r6
  int v103; // r3
  int v104; // r3
  int v105; // r3
  _DWORD *v106; // [sp+28h] [bp-104h]
  char *s1; // [sp+2Ch] [bp-100h]
  int v108; // [sp+34h] [bp-F8h]
  _BOOL4 v109; // [sp+38h] [bp-F4h]
  int v110; // [sp+3Ch] [bp-F0h]
  size_t v111; // [sp+40h] [bp-ECh]
  int v112; // [sp+4Ch] [bp-E0h]
  unsigned __int8 v113; // [sp+57h] [bp-D5h] BYREF
  int v114; // [sp+58h] [bp-D4h] BYREF
  _DWORD v115[2]; // [sp+5Ch] [bp-D0h] BYREF
  char v116[63]; // [sp+64h] [bp-C8h] BYREF
  char v117; // [sp+A3h] [bp-89h] BYREF
  char dest[136]; // [sp+A4h] [bp-88h] BYREF

  v1 = a1[2];
  v3 = *(_DWORD *)(v1 + 60);
  v4 = *(_DWORD *)(v3 + 28);
  result = (signed int)sub_27AAC(a1, (_BYTE *)(v3 + 40), 128, v115);
  v6 = *(__int16 *)(v4 + 6);
  *(_DWORD *)(v3 + 168) = result;
  if ( v6 == 32 )
  {
    v38 = result == 0;
    v14 = result <= 0;
    result = *(_DWORD *)(v4 + 84);
    if ( v38 )
    {
      if ( !result )
        return result;
    }
    else if ( !v14 && result <= 61 )
    {
      v24 = v3 + 39;
      v25 = 0;
      while ( 1 )
      {
        v26 = *(_BYTE *)++v24;
        v27 = v4 + result;
        ++v25;
        *(_DWORD *)(v4 + 84) = ++result;
        *(_BYTE *)(v27 + 88) = v26;
        if ( *(_DWORD *)(v3 + 168) <= v25 )
          break;
        if ( result > 61 )
          goto LABEL_22;
      }
    }
    if ( result > 0 )
    {
LABEL_22:
      if ( *(unsigned __int8 *)(v4 + 88) <= 0x1Fu )
      {
        while ( --result )
        {
          v15 = v4 + 88;
          v16 = v4 + 88;
          for ( i = 0; i != result; ++i )
          {
            v18 = *(_BYTE *)++v16;
            *(_BYTE *)(v16 - 1) = v18;
          }
          v19 = *(unsigned __int8 *)(v4 + 88);
          *(_DWORD *)(v4 + 84) = result;
          if ( v19 > 0x1F )
            goto LABEL_28;
        }
        *(_DWORD *)(v4 + 84) = 0;
      }
      else
      {
        v15 = v4 + 88;
LABEL_28:
        v20 = v15;
        v21 = 0;
        while ( ++v21 < result )
        {
          v22 = *(unsigned __int8 *)++v20;
          if ( v22 <= 0x1F )
          {
            v23 = 1;
            goto LABEL_32;
          }
        }
      }
    }
    v23 = 0;
LABEL_32:
    v7 = *(_DWORD *)(v4 + 12);
    if ( *(int *)(v3 + 168) > 0 && v7 < *(_DWORD *)(v4 + 48) && !v23 && *(_DWORD *)(v4 + 4 * v7 + 52) > result )
      return result;
    *(_BYTE *)(v4 + result + 88) = 0;
  }
  else
  {
    if ( !result )
      return result;
    v7 = *(_DWORD *)(v4 + 12);
  }
  v8 = *(_DWORD *)(v4 + 16);
  v106 = (_DWORD *)(v3 + 216);
  result = v115[0];
  v9 = v115[1];
  *(_DWORD *)(v3 + 216) = v115[0];
  *(_DWORD *)(v3 + 220) = v9;
  *(_DWORD *)(v4 + 12) = v7 + 1;
  if ( v8 )
    return result;
  switch ( *(_BYTE *)v4 )
  {
    case 1:
      v39 = a1[2];
      v40 = *(_DWORD *)(v39 + 60);
      v108 = v39;
      v41 = *(_DWORD *)(v40 + 28);
      v110 = v40;
      if ( *(_WORD *)(v41 + 6) == 32 )
      {
        s1 = (char *)(v41 + 88);
        v42 = *(_DWORD *)(v41 + 84);
      }
      else
      {
        v42 = *(_DWORD *)(v40 + 168);
        s1 = (char *)(v40 + 40);
      }
      switch ( *((_BYTE *)&unk_66398 + 16 * *(_DWORD *)(v41 + 12) - 16) )
      {
        case 1:
          if ( v42 != 14 )
            goto LABEL_81;
          if ( sscanf(s1, "%4d/%2d/%2d", v41 + 20, v41 + 24, v41 + 28) == 3 && *(int *)(v41 + 20) >= 2000 )
          {
            v99 = *(_DWORD *)(v41 + 24);
            if ( v99 > 0 && v99 <= 12 )
            {
              v100 = *(_DWORD *)(v41 + 28);
              if ( v100 > 0 && v100 <= 31 )
                goto LABEL_113;
            }
          }
          goto LABEL_117;
        case 2:
        case 3:
          if ( v42 != 8 )
            goto LABEL_81;
          if ( sscanf(s1, "%2d:%2d:%2d", v41 + 32, v41 + 36, v41 + 40) != 3
            || (v66 = *(_DWORD *)(v41 + 32), v66 > 23)
            || (v67 = *(_DWORD *)(v41 + 36), v67 > 59)
            || (v68 = *(_DWORD *)(v41 + 40), v68 > 60) )
          {
LABEL_117:
            *(_DWORD *)(v41 + 16) = 1;
            v109 = 0;
            goto LABEL_114;
          }
          *(_DWORD *)(v41 + 44) = 0;
          if ( v66 || v67 )
            goto LABEL_113;
          v109 = v68 <= 2;
          goto LABEL_114;
        case 4:
          if ( v42 == 8 )
          {
            if ( !strncmp(s1, "adjusted\r\n", 8u) )
              goto LABEL_113;
          }
          else if ( v42 == 10 && !strncmp(s1, "unadjusted\r\n", 0xAu) )
          {
            goto LABEL_113;
          }
          goto LABEL_81;
        case 5:
          if ( v42 == 5 )
          {
            if ( !strncmp(s1, "valid\r\n", 5u) )
              goto LABEL_113;
          }
          else if ( v42 == 7 && !strncmp(s1, "invalid\r\n", 7u) )
          {
LABEL_113:
            v109 = 0;
LABEL_114:
            memcpy(dest, off_663E8, 0x84u);
            goto LABEL_84;
          }
LABEL_81:
          *(_DWORD *)(v41 + 16) = 1;
          memcpy(dest, off_663E8, 0x84u);
          if ( v42 <= 0 )
          {
            v74 = *(_DWORD *)(v41 + 12);
            v101 = *(_DWORD *)(v41 + 16);
            v116[0] = 0;
            v102 = (char *)&unk_66398 + 16 * v74;
            v38 = v101 == 0;
            v75 = (const char *)*((_DWORD *)v102 - 3);
            if ( v38 )
              goto LABEL_147;
            snprintf(dest, 0x40u, "%d: %s -> %c: %s", v74, *((const char **)v102 - 3), 88, v116);
LABEL_148:
            result = sub_2DDBC(v108 + 12, dest);
            if ( *(_DWORD *)(v41 + 16) )
              goto LABEL_8;
            goto LABEL_149;
          }
          v109 = 0;
LABEL_84:
          v43 = 0;
          v111 = v1;
          v44 = 0;
          v112 = v41;
          v45 = _ctype_b_loc();
          break;
        default:
          goto LABEL_81;
      }
      while ( 2 )
      {
        v47 = (unsigned __int8)s1[v44];
        v48 = &dest[v43 + 132];
        if ( ((*v45)[v47] & 0x4000) != 0 )
        {
          v38 = v43++ == 63;
          if ( v38 )
          {
            v1 = v111;
            v73 = &v117;
            v41 = v112;
            goto LABEL_145;
          }
          *(v48 - 196) = v47;
LABEL_87:
          ++v44;
          v46 = v43 <= 63;
          if ( v42 <= v44 )
            v46 = 0;
          if ( !v46 )
          {
            v1 = v111;
            if ( v43 > 63 )
              v72 = &v117;
            else
              v72 = &v116[v43];
            v41 = v112;
            v73 = v72;
            goto LABEL_145;
          }
          continue;
        }
        break;
      }
      if ( v47 <= 0x20 )
      {
        v49 = *(const char **)&dest[4 * v47];
        v50 = strlen(v49);
        v51 = v49;
        v52 = v43 + v50;
        if ( (int)(v43 + v50) > 62 )
        {
          v1 = v111;
          if ( v43 > 63 )
            v95 = &v117;
          else
            v95 = &v116[v43];
          v41 = v112;
          v73 = v95;
          goto LABEL_145;
        }
        strncpy(&v116[v43], v51, 64 - v43);
        v43 = v52;
        goto LABEL_87;
      }
      if ( v43 <= 57 )
      {
        snprintf(&v116[v43], 64 - v43, "<x%X>", (unsigned __int8)s1[v44]);
        v43 += 5;
        goto LABEL_87;
      }
      v1 = v111;
      if ( v43 > 63 )
        v94 = &v117;
      else
        v94 = &v116[v43];
      v41 = v112;
      v73 = v94;
LABEL_145:
      *v73 = 0;
      v74 = *(_DWORD *)(v41 + 12);
      v10 = *(_DWORD *)(v41 + 16);
      v75 = (const char *)*((_DWORD *)&unk_66398 + 4 * v74 - 3);
      if ( !v10 )
      {
        if ( v109 )
        {
          snprintf(dest, 0x40u, "%d: %s -> %c: %s", v74, *((const char **)&unk_66398 + 4 * v74 - 3), 83, v116);
          result = sub_2DDBC(v108 + 12, dest);
          goto LABEL_9;
        }
LABEL_147:
        snprintf(dest, 0x40u, "%d: %s -> %c: %s", v74, v75, 79, v116);
        goto LABEL_148;
      }
      snprintf(dest, 0x40u, "%d: %s -> %c: %s", v74, *((const char **)&unk_66398 + 4 * v74 - 3), 88, v116);
      result = sub_2DDBC(v108 + 12, dest);
      if ( *(_DWORD *)(v41 + 16) || v109 )
        goto LABEL_8;
LABEL_149:
      v76 = 16 * *(_DWORD *)(v41 + 12);
      v77 = *(const void **)((char *)&unk_66398 + v76 + 8);
      if ( !v77 )
        goto LABEL_172;
      if ( dword_7CF4C )
      {
        printf(
          "%s (refclock_jjy.c) : send '%s'\n",
          "jjy_receive_tristate_jjy01",
          *(const char **)((char *)&unk_66398 + v76 + 4));
        v76 = 16 * *(_DWORD *)(v41 + 12);
        v77 = *(const void **)((char *)&unk_66398 + v76 + 8);
      }
      v78 = *(_DWORD *)((char *)&unk_66398 + v76 + 12);
      result = write(*(_DWORD *)(v110 + 20), v77, v78);
      if ( v78 != result )
      {
        result = sub_27040(v108, 3);
        v10 = 0;
        goto LABEL_9;
      }
LABEL_8:
      v10 = 0;
LABEL_9:
      if ( *(_WORD *)(v4 + 6) == 32 )
      {
        v53 = *(_DWORD *)(v4 + 12);
        if ( v53 > *(_DWORD *)(v4 + 48)
          || (v54 = *(_DWORD *)(v4 + 84), v55 = *(_DWORD *)(v4 + 4 * v53 + 48), v54 <= v55) )
        {
          *(_DWORD *)(v4 + 84) = 0;
        }
        else
        {
          v56 = v54 - v55;
          if ( v56 > 0 )
          {
            result = v4 + v56;
            v57 = v4;
            do
            {
              *(_BYTE *)(v57 + 88) = *(_BYTE *)(v57 + v55 + 88);
              ++v57;
            }
            while ( v57 != result );
          }
          *(_DWORD *)(v4 + 84) = v56;
        }
      }
      if ( v10 )
      {
        v11 = *(_DWORD *)(v4 + 16);
        *(_BYTE *)(v4 + 8) = 0;
        if ( v11 )
        {
          sub_27040(v1, 2);
          strncpy(dest, "BAD REPLY [", 0x40u);
          v12 = strlen(dest);
          if ( *(_WORD *)(v4 + 6) == 32 )
            strncat(dest, (const char *)(v4 + 88), 63 - v12);
          else
            strncat(dest, (const char *)(v3 + 40), 63 - v12);
          dest[63] = 0;
          v13 = strlen(dest);
          if ( v13 <= 0x3D )
            strncat(dest, "]", 63 - v13);
          return sub_2DDBC(v1 + 12, dest);
        }
        else
        {
          v58 = *(_DWORD *)(v4 + 20);
          v59 = *(_DWORD *)(v4 + 24);
          v60 = *(_DWORD *)(v4 + 28);
          *(_DWORD *)(v3 + 172) = v58;
          v61 = sub_513CC(v58, v59, v60);
          v62 = *(_DWORD *)(v4 + 32);
          v63 = 1000000 * *(_DWORD *)(v4 + 44);
          v64 = *(_DWORD *)(v4 + 36);
          v65 = *(_DWORD *)(v4 + 40);
          *(_DWORD *)(v3 + 180) = v62 - 9;
          *(_DWORD *)(v3 + 184) = v64;
          *(_DWORD *)(v3 + 188) = v65;
          *(_DWORD *)(v3 + 192) = v63;
          *(_DWORD *)(v3 + 176) = v61;
          if ( v62 - 9 < 0 )
          {
            *(_DWORD *)(v3 + 176) = v61 - 1;
            *(_DWORD *)(v3 + 180) = v62 + 15;
            if ( v61 - 1 <= 0 )
            {
              v81 = *(_DWORD *)(v3 + 172) - 1;
              *(_DWORD *)(v3 + 172) = v81;
              *(_DWORD *)(v3 + 176) = sub_513CC(v81, 12, 31);
            }
          }
          if ( dword_7CF4C )
          {
            printf(
              "jjy_receive (refclock_jjy.c) : %04d/%02d/%02d %02d:%02d:%02d.%1d JST   ",
              *(_DWORD *)(v4 + 20),
              *(_DWORD *)(v4 + 24),
              *(_DWORD *)(v4 + 28),
              *(_DWORD *)(v4 + 32),
              *(_DWORD *)(v4 + 36),
              *(_DWORD *)(v4 + 40),
              *(_DWORD *)(v4 + 44) / 100);
            printf(
              "( %04d/%03d %02d:%02d:%02d.%1d UTC )\n",
              *(_DWORD *)(v3 + 172),
              *(_DWORD *)(v3 + 176),
              *(_DWORD *)(v3 + 180),
              *(_DWORD *)(v3 + 184),
              *(_DWORD *)(v3 + 188),
              *(_DWORD *)(v3 + 192) / 100000000);
          }
          snprintf(
            dest,
            0x40u,
            "%04d/%02d/%02d %02d:%02d:%02d.%1d JST",
            *(_DWORD *)(v4 + 20),
            *(_DWORD *)(v4 + 24),
            *(_DWORD *)(v4 + 28),
            *(_DWORD *)(v4 + 32),
            *(_DWORD *)(v4 + 36),
            *(_DWORD *)(v4 + 40),
            *(_DWORD *)(v4 + 44) / 100);
          sub_2DDBC(v1 + 12, dest);
          if ( sub_27698((_DWORD *)v3) )
          {
            v79 = (_DWORD *)(v3 + 208);
            v80 = v106[1];
            *v79 = *v106;
            v79[1] = v80;
            return sub_276A0(v1);
          }
          else
          {
            return sub_27040(v1, 6);
          }
        }
      }
      return result;
    case 2:
      v36 = *(_DWORD *)(a1[2] + 60);
      v29 = *(_DWORD *)(v36 + 28);
      v37 = *(__int16 *)(v29 + 6);
      v38 = v37 == 32;
      if ( v37 == 32 )
        result = v29 + 88;
      else
        result = v36 + 40;
      if ( v37 != 32 )
        v37 = *(_DWORD *)(v36 + 168);
      if ( v38 )
        v37 = *(_DWORD *)(v29 + 84);
      if ( *(_DWORD *)(v29 + 12) != 1 )
        goto LABEL_73;
      if ( v37 == 15 )
      {
        result = sscanf(
                   (const char *)result,
                   "J%2d%2d%2d%*1d%2d%2d%2d%1d",
                   v29 + 20,
                   v29 + 24,
                   v29 + 28,
                   v29 + 32,
                   v29 + 36,
                   v29 + 40,
                   v29 + 44);
        if ( result == 7 )
        {
          v103 = *(_DWORD *)(v29 + 24);
          if ( v103 > 0 && v103 <= 12 )
          {
            v104 = *(_DWORD *)(v29 + 28);
            if ( v104 > 0
              && v104 <= 31
              && *(int *)(v29 + 32) <= 23
              && *(int *)(v29 + 36) <= 59
              && *(int *)(v29 + 40) <= 60 )
            {
              v10 = 1;
              v105 = 100 * *(_DWORD *)(v29 + 44);
              *(_DWORD *)(v29 + 20) += 2000;
              *(_DWORD *)(v29 + 44) = v105;
              goto LABEL_9;
            }
          }
        }
        if ( dword_7CF4C > 1 )
          result = printf(
                     "%s (refclock_jjy.c) : Time error (rc=%d) [ %02d %02d %02d * %02d %02d %02d.%1d ]\n",
                     "jjy_receive_cdex_jst2000",
                     result,
                     *(_DWORD *)(v29 + 20),
                     *(_DWORD *)(v29 + 24),
                     *(_DWORD *)(v29 + 28),
                     *(_DWORD *)(v29 + 32),
                     *(_DWORD *)(v29 + 36),
                     *(_DWORD *)(v29 + 40),
                     *(_DWORD *)(v29 + 44));
      }
      else if ( dword_7CF4C > 1 )
      {
        result = printf("%s (refclock_jjy.c) : Reply length error ( iLen=%d )\n", "jjy_receive_cdex_jst2000", v37);
      }
      goto LABEL_73;
    case 3:
      v32 = a1[2];
      v33 = *(int **)(v32 + 60);
      v34 = v33[7];
      if ( *(_WORD *)(v34 + 6) == 32 )
        result = v34 + 88;
      else
        result = (signed int)(v33 + 10);
      if ( *(_WORD *)(v34 + 6) == 32 )
        v35 = *(_DWORD *)(v34 + 84);
      else
        v35 = v33[42];
      if ( *(_DWORD *)(v34 + 12) != 1 )
      {
        if ( !dword_7CF4C )
          goto LABEL_62;
        goto LABEL_132;
      }
      v71 = *(__int16 *)(v34 + 2);
      if ( v71 == 1 )
      {
        if ( v35 == 15 )
        {
          v69 = 0;
          for ( j = 0; j != 13; ++j )
          {
            v82 = *(unsigned __int8 *)(result + j);
            v69 ^= v82;
          }
          v83 = *(unsigned __int8 *)(result + 13);
          v84 = (v69 >> 4) | 0x30;
          v85 = v69 & 0xF | 0x30;
          if ( v84 != v83 || v85 != *(unsigned __int8 *)(result + 14) )
          {
            if ( dword_7CF4C > 1 )
              result = printf(
                         "%s (refclock_jjy.c) : BCC error ( Recv=%02X,%02X / Calc=%02X,%02X)\n",
                         "jjy_receive_echokeisokuki_lt2000",
                         v83,
                         *(unsigned __int8 *)(result + 14),
                         v84,
                         v85);
            goto LABEL_64;
          }
          goto LABEL_138;
        }
      }
      else if ( v71 != 2 || v35 == 17 )
      {
LABEL_138:
        result = sscanf(
                   (const char *)result,
                   "%2d%2d%2d%*1d%2d%2d%2d",
                   v34 + 20,
                   v34 + 24,
                   v34 + 28,
                   v34 + 32,
                   v34 + 36,
                   v34 + 40);
        if ( result == 6 )
        {
          v86 = *(_DWORD *)(v34 + 24);
          if ( v86 > 0 && v86 <= 12 )
          {
            v87 = *(_DWORD *)(v34 + 28);
            if ( v87 > 0
              && v87 <= 31
              && *(int *)(v34 + 32) <= 23
              && *(int *)(v34 + 36) <= 59
              && *(int *)(v34 + 40) <= 60 )
            {
              v88 = *(__int16 *)(v34 + 2);
              *(_DWORD *)(v34 + 20) += 2000;
              if ( v88 == 2 )
              {
                v89 = v33[47];
                *(_DWORD *)(v34 + 44) = 500;
                v33[47] = --v89;
                if ( v89 < 0 )
                {
                  v90 = v33[46];
                  v33[47] = 59;
                  v33[46] = --v90;
                  if ( v90 < 0 )
                  {
                    v91 = v33[45];
                    v33[46] = 59;
                    v33[45] = --v91;
                    if ( v91 < 0 )
                    {
                      v92 = v33[44];
                      v33[45] = 23;
                      v33[44] = --v92;
                      if ( v92 <= 0 )
                      {
                        v93 = v33[43] - 1;
                        v33[43] = v93;
                        v33[44] = sub_513CC(v93, 12, 31);
                      }
                    }
                  }
                }
                if ( dword_7CF4C )
                  printf("%s (refclock_jjy.c) : send '#'\n", "jjy_receive_echokeisokuki_lt2000");
                result = write(v33[5], "#", 1u);
                if ( result != 1 )
                  result = sub_27040(v32, 3);
              }
LABEL_172:
              v10 = 1;
              goto LABEL_9;
            }
          }
        }
        if ( dword_7CF4C > 1 )
          result = printf(
                     "%s (refclock_jjy.c) : Time error (rc=%d) [ %02d %02d %02d * %02d %02d %02d ]\n",
                     "jjy_receive_echokeisokuki_lt2000",
                     result,
                     *(_DWORD *)(v34 + 20),
                     *(_DWORD *)(v34 + 24),
                     *(_DWORD *)(v34 + 28),
                     *(_DWORD *)(v34 + 32),
                     *(_DWORD *)(v34 + 36),
                     *(_DWORD *)(v34 + 40));
LABEL_64:
        *(_DWORD *)(v34 + 16) = 1;
        v10 = 1;
        goto LABEL_9;
      }
      if ( dword_7CF4C > 1 )
        result = printf(
                   "%s (refclock_jjy.c) : Reply length error ( iLen=%d )\n",
                   "jjy_receive_echokeisokuki_lt2000",
                   v35);
      if ( *(_WORD *)(v34 + 2) != 1 )
        goto LABEL_64;
      if ( !dword_7CF4C )
        goto LABEL_62;
LABEL_132:
      printf("%s (refclock_jjy.c) : send '#'\n", "jjy_receive_echokeisokuki_lt2000");
LABEL_62:
      result = write(v33[5], "#", 1u);
      if ( result != 1 )
        result = sub_27040(v32, 3);
      goto LABEL_64;
    case 4:
      v28 = *(_DWORD *)(a1[2] + 60);
      v29 = *(_DWORD *)(v28 + 28);
      v30 = *(__int16 *)(v29 + 6);
      v10 = *(unsigned __int8 *)(v29 + 8);
      if ( v30 == 32 )
        result = v29 + 88;
      else
        result = v28 + 40;
      if ( v30 == 32 )
        v31 = *(_DWORD *)(v29 + 84);
      else
        v31 = *(_DWORD *)(v28 + 168);
      if ( !*(_BYTE *)(v29 + 8) )
        goto LABEL_9;
      if ( *(_DWORD *)(v29 + 12) != 1 )
        goto LABEL_73;
      if ( v31 == 23 )
      {
        result = sscanf(
                   (const char *)result,
                   "%c%2s %2d/%2d/%2d %1d %2d:%2d:%2d",
                   &v113,
                   dest,
                   v29 + 20,
                   v29 + 24,
                   v29 + 28,
                   &v114,
                   v29 + 32,
                   v29 + 36,
                   v29 + 40);
        dest[2] = 0;
        if ( result == 9 && v113 == 39 && dest[0] == 79 && dest[1] == 75 )
        {
          v96 = *(_DWORD *)(v29 + 24);
          if ( v96 > 0 && v96 <= 12 )
          {
            v97 = *(_DWORD *)(v29 + 28);
            if ( v97 > 0
              && v97 <= 31
              && v114 <= 6
              && *(int *)(v29 + 32) <= 23
              && *(int *)(v29 + 36) <= 59
              && *(int *)(v29 + 40) <= 60 )
            {
              v98 = *(_DWORD *)(v29 + 20);
              v10 = 1;
              *(_DWORD *)(v29 + 44) = 0;
              *(_DWORD *)(v29 + 20) = v98 + 2000;
              goto LABEL_9;
            }
          }
        }
        if ( dword_7CF4C > 1 )
          result = printf(
                     "%s (refclock_jjy.c) : Time error (rc=%d) [ %c %2s %02d %02d %02d %d %02d %02d %02d ]\n",
                     "jjy_receive_citizentic_jjy200",
                     result,
                     v113,
                     dest,
                     *(_DWORD *)(v29 + 20),
                     *(_DWORD *)(v29 + 24),
                     *(_DWORD *)(v29 + 28),
                     v114,
                     *(_DWORD *)(v29 + 32),
                     *(_DWORD *)(v29 + 36),
                     *(_DWORD *)(v29 + 40));
      }
      else if ( dword_7CF4C > 1 )
      {
        result = printf("%s (refclock_jjy.c) : Reply length error ( iLen=%d )\n", "jjy_receive_citizentic_jjy200", v31);
      }
LABEL_73:
      v10 = 1;
      *(_DWORD *)(v29 + 16) = 1;
      goto LABEL_9;
    default:
      goto LABEL_8;
  }
}
