void *__fastcall sub_47748(char *a1, const void *a2, size_t a3)
{
  char *v3; // r4
  unsigned int v6; // r6
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  unsigned int v9; // r1
  int *v10; // r7
  char *v12; // r3
  unsigned int v13; // t1
  int v14; // r3
  unsigned int v15; // r3
  char *v16; // r12
  size_t v17; // r2
  unsigned int v18; // r0
  unsigned int v19; // r2
  void *v20; // r12
  unsigned int v21; // r2
  const char *v22; // lr
  signed int v23; // r8
  const char *v24; // r0
  int v25; // r2
  char *v26; // r3
  unsigned int v27; // t1
  bool v28; // zf
  char *v29; // r1
  char *v30; // r3
  char *v31; // r8
  unsigned int v32; // t1
  char *v33; // r1
  char *v34; // r0
  char *v35; // r1
  unsigned int v36; // t1
  unsigned __int8 *v37; // r9
  char *v38; // r1
  int v39; // r3
  int v40; // lr
  bool v41; // zf
  int v42; // r0
  char *v43; // r1
  unsigned int v44; // r3
  char *v45; // r0
  int v46; // r1
  int v47; // r0
  char *v48; // r0
  char *v49; // r2
  char *v50; // r0
  int v51; // r1
  int v52; // t1
  char *v53; // r3
  int v54; // r8
  int v55; // r4
  int v56; // r9
  int v57; // r10
  int v58; // r11
  const char *v59; // r5
  int *v60; // r6
  char *v61; // r9
  int v62; // r2
  _BYTE *v63; // r1
  char v64; // t1
  int v65; // r2
  _BYTE *v66; // lr
  char *v67; // r0
  unsigned int v68; // r2
  char *v69; // r1
  unsigned int v70; // r2
  int v71; // r0
  int v72; // r12
  int v73; // r8
  unsigned int v74; // r3
  unsigned __int8 *v75; // r9
  size_t v76; // r0
  unsigned __int8 *i; // r3
  unsigned int v78; // r2
  int v79; // r2
  int v80; // r3
  const char *v81; // r0
  unsigned int v82; // t1
  _BYTE *v83; // r0
  _DWORD *v84; // r0
  int v85; // r9
  int *v86; // r0
  size_t v87; // r3
  const void *v88; // r12
  unsigned int v89; // r2
  int *v90; // r3
  const void *v91; // r1
  int v92; // r0
  int *v93; // r0
  size_t v94; // r3
  const void *v95; // r12
  unsigned int v96; // r1
  int v97; // r3
  unsigned __int8 *v98; // r3
  unsigned __int8 *v99; // r0
  unsigned int v100; // r2
  unsigned int v101; // t1
  unsigned int v102; // t1
  void *v103; // r0
  char *v104; // r2
  unsigned int v105; // r1
  char *v106; // r2
  int v107; // r3
  int v108; // r0
  void *src; // [sp+8h] [bp-64h]
  size_t n; // [sp+Ch] [bp-60h]
  size_t na; // [sp+Ch] [bp-60h]
  size_t nb; // [sp+Ch] [bp-60h]
  int v113; // [sp+10h] [bp-5Ch]
  int v114; // [sp+10h] [bp-5Ch]
  void *ptr; // [sp+14h] [bp-58h]
  _BYTE *ptra; // [sp+14h] [bp-58h]
  int *ptrb; // [sp+14h] [bp-58h]
  int v118[3]; // [sp+18h] [bp-54h] BYREF
  char needle; // [sp+24h] [bp-48h] BYREF
  _BYTE v120[67]; // [sp+25h] [bp-47h] BYREF

  v3 = a1;
  if ( !a1 )
  {
    v6 = 0;
    *_errno_location() = 22;
    return (void *)v6;
  }
  v6 = (unsigned __int8)*a1;
  if ( v6 <= 0x7F && (dword_69A0C[v6] & 0x500) != 0 )
  {
    v12 = a1 + 1;
    do
    {
      v3 = v12;
      v13 = (unsigned __int8)*v12++;
      v6 = v13;
      if ( v13 > 0x7F )
        goto LABEL_3;
    }
    while ( (dword_69A0C[v6] & 0x500) != 0 );
    if ( !v6 )
    {
LABEL_19:
      *_errno_location() = 2;
      return (void *)v6;
    }
  }
  else
  {
LABEL_3:
    if ( !v6 )
      goto LABEL_19;
  }
  v7 = sub_44484(a3 + 13);
  v6 = (unsigned int)v7;
  if ( !v7 )
  {
    *_errno_location() = 12;
    return (void *)v6;
  }
  *v7 = 6;
  v7[1] = v7 + 3;
  memcpy(v7 + 3, a2, a3);
  *(_BYTE *)(*(_DWORD *)(v6 + 4) + a3) = 0;
  v8 = sub_44484(0x20u);
  if ( !v8 )
  {
    v103 = (void *)v6;
    v6 = 0;
    free(v103);
    return (void *)v6;
  }
  *(_DWORD *)(v6 + 8) = v8;
  *v8 = 0;
  v8[1] = 6;
  while ( 2 )
  {
    v9 = (unsigned __int8)*v3;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v9 > 0x7F )
          goto LABEL_9;
        v14 = dword_69A0C[v9];
        if ( (v14 & 0x500) == 0 )
          break;
        v9 = (unsigned __int8)*++v3;
      }
      if ( (v14 & 0x23) != 0 )
        break;
LABEL_9:
      if ( v9 == 35 )
      {
        v3 = strchr(v3, 10);
        goto LABEL_58;
      }
      if ( v9 != 60 )
      {
        if ( v9 )
        {
LABEL_40:
          free(*(void **)(v6 + 8));
          free((void *)v6);
          return 0;
        }
        goto LABEL_12;
      }
      v19 = (unsigned __int8)v3[1];
      v20 = v3 + 1;
      v114 = dword_7BB74;
      if ( v19 <= 0x7F && (dword_69A0C[v19] & 0x23) != 0 )
      {
        v21 = (unsigned __int8)v3[2];
        v22 = v3 + 2;
        if ( v21 <= 0x7F && (dword_69A0C[v21] & 0xEF) != 0 )
        {
          v81 = v3 + 3;
          v23 = 1;
          do
          {
            v22 = v81;
            v82 = *(unsigned __int8 *)v81++;
            v21 = v82;
            ++v23;
          }
          while ( v82 <= 0x7F && (dword_69A0C[v21] & 0xEF) != 0 );
          if ( (unsigned int)v23 > 0x40 )
            goto LABEL_40;
        }
        else
        {
          v23 = 1;
        }
        v118[0] = 1;
        if ( v21 != 47 )
        {
          if ( v21 > 0x2F )
          {
            if ( v21 != 62 )
              goto LABEL_40;
LABEL_124:
            v61 = (char *)(v22 + 1);
            v62 = v23;
            v120[0] = 47;
            v63 = v120;
            needle = 60;
            do
            {
              --v62;
              v64 = *++v3;
              *++v63 = v64;
            }
            while ( v62 > 0 );
            if ( v23 < 1 )
              v65 = 1;
            else
              v65 = v23;
            v66 = &v120[v65 + 1];
            *v66 = 62;
            v66[1] = 0;
            src = v20;
            v67 = strstr(v61, &needle);
            if ( !v67 )
            {
LABEL_155:
              dword_7BB74 = v114;
              goto LABEL_40;
            }
            v3 = &v67[v23 + 3];
            v68 = (unsigned __int8)*v3;
            if ( v68 <= 0x7F && (dword_69A0C[v68] & 0x500) != 0 )
            {
              v69 = v3 + 1;
              do
              {
                v3 = v69++;
                v70 = (unsigned __int8)*v3;
              }
              while ( v70 <= 0x7F && (dword_69A0C[v70] & 0x500) != 0 );
            }
            switch ( v118[0] )
            {
              case 0:
                sub_4493C((_DWORD *)(v6 + 8), src, v23, 0, 0);
                goto LABEL_148;
              case 1:
                v71 = sub_4493C((_DWORD *)(v6 + 8), src, v23, v61, v67 - v61);
                v72 = dword_7BB74;
                v73 = v71;
                if ( dword_7BB74 != 2 )
                {
                  v74 = *(unsigned __int8 *)(v71 + 8);
                  v75 = (unsigned __int8 *)(v71 + 8);
                  if ( v74 <= 0x7F && (dword_69A0C[v74] & 0x500) != 0 )
                  {
                    v98 = (unsigned __int8 *)(v71 + 9);
                    do
                    {
                      v99 = v98;
                      v101 = *v98++;
                      v100 = v101;
                    }
                    while ( v101 <= 0x7F && (dword_69A0C[v100] & 0x500) != 0 );
                    for ( i = v75; ; ++i )
                    {
                      *i = v100;
                      if ( !v100 )
                        break;
                      v102 = *++v99;
                      v100 = v102;
                    }
                  }
                  else
                  {
                    v76 = strlen((const char *)(v71 + 8));
                    v72 = dword_7BB74;
                    i = (unsigned __int8 *)(v73 + v76 + 8);
                  }
                  if ( v75 < i )
                  {
                    do
                    {
                      v78 = *(i - 1);
                      if ( v78 > 0x7F )
                        break;
                      if ( (dword_69A0C[v78] & 0x500) == 0 )
                        break;
                      --i;
                    }
                    while ( i != v75 );
                  }
                  *i = 0;
                  if ( v72 != 1 )
                  {
                    v79 = *(unsigned __int8 *)(v73 + 8);
                    if ( v79 == 34 || v79 == 39 )
                    {
                      v80 = *(i - 1);
                      if ( v80 == 34 || v80 == 39 )
                        sub_47530(v75, 0);
                    }
                  }
                }
                goto LABEL_148;
              case 3:
                nb = v67 - v61;
                v93 = (int *)sub_44484(v23 + 13);
                v94 = nb;
                v95 = src;
                ptrb = v93;
                if ( !v93 )
                  goto LABEL_148;
                v96 = (unsigned __int8)*v61;
                if ( v96 > 0x7F )
                  goto LABEL_172;
                if ( (dword_69A0C[v96] & 0x500) == 0 )
                  goto LABEL_206;
                if ( !nb )
                  goto LABEL_204;
                v106 = v61 + 1;
                while ( 1 )
                {
                  v96 = (unsigned __int8)*v106;
                  v61 = v106;
                  --v94;
                  ++v106;
                  if ( v96 > 0x7F )
                    break;
                  if ( (dword_69A0C[v96] & 0x500) == 0 )
                  {
LABEL_206:
                    if ( v94 )
                    {
                      v107 = dword_69A0C[v96];
                      if ( (v107 & 0xC) != 0 )
                      {
                        v93[2] = strtol(v61, 0, 10);
                        v95 = src;
                        goto LABEL_175;
                      }
                      if ( (v107 & 0x40000) != 0 )
                      {
                        v97 = dword_69A0C[v96] & 0xC;
LABEL_174:
                        v93[2] = v97;
LABEL_175:
                        v90 = ptrb;
                        v91 = v95;
                        v92 = 3;
                        goto LABEL_169;
                      }
LABEL_173:
                      v97 = 1;
                      goto LABEL_174;
                    }
LABEL_204:
                    v93[2] = 0;
                    goto LABEL_175;
                  }
                  if ( !v94 )
                    goto LABEL_204;
                }
LABEL_172:
                if ( v94 )
                  goto LABEL_173;
                goto LABEL_204;
              case 5:
                na = v67 - v61;
                v86 = (int *)sub_44484(v23 + 13);
                v87 = na;
                v88 = src;
                ptrb = v86;
                if ( !v86 )
                  goto LABEL_148;
                v89 = (unsigned __int8)*v61;
                if ( v89 > 0x7F || (dword_69A0C[v89] & 0x500) == 0 )
                  goto LABEL_166;
                if ( !na )
                  goto LABEL_198;
                v104 = v61 + 1;
                while ( 1 )
                {
                  v105 = (unsigned __int8)*v104;
                  v61 = v104;
                  --v87;
                  ++v104;
                  if ( v105 > 0x7F || (dword_69A0C[v105] & 0x500) == 0 )
                    break;
                  if ( !v87 )
                    goto LABEL_198;
                }
LABEL_166:
                if ( v87 )
                {
                  v86[2] = strtol(v61, 0, 0);
                  v88 = src;
                  goto LABEL_168;
                }
LABEL_198:
                v86[2] = 0;
LABEL_168:
                v90 = ptrb;
                v91 = v88;
                v92 = 5;
LABEL_169:
                *v90 = v92;
                ptrb[1] = (int)(v90 + 3);
                memcpy(v90 + 3, v91, v23);
                *(_BYTE *)(ptrb[1] + v23) = 0;
                sub_444C0((_DWORD *)(v6 + 8), (int)ptrb);
                goto LABEL_148;
              case 6:
                n = v67 - v61;
                v83 = sub_44484(v67 - v61 + 1);
                ptra = v83;
                if ( !v83 )
                  goto LABEL_148;
                memcpy(v83, v61, n);
                ptra[n] = 0;
                if ( !n )
                {
                  v84 = sub_44484(v23 + 13);
                  v85 = (int)v84;
                  if ( !v84 )
                    goto LABEL_163;
                  v84[2] = 0;
                  *v84 = 6;
                  v84[1] = v84 + 3;
                  memcpy(v84 + 3, src, v23);
                  *(_BYTE *)(*(_DWORD *)(v85 + 4) + v23) = 0;
LABEL_162:
                  sub_444C0((_DWORD *)(v6 + 8), v85);
                  goto LABEL_163;
                }
                v108 = sub_47748(ptra, src, v23);
                v85 = v108;
                if ( v108 )
                  goto LABEL_162;
LABEL_163:
                free(ptra);
LABEL_148:
                dword_7BB74 = v114;
                break;
              default:
                goto LABEL_148;
            }
            goto LABEL_67;
          }
          if ( v21 != 9 && v21 != 32 )
            goto LABEL_40;
          v24 = sub_46690(v22, &dword_7BB74, v118);
          v20 = v3 + 1;
          v25 = *(unsigned __int8 *)v24;
          v22 = v24;
          if ( v25 == 62 )
            goto LABEL_124;
          if ( v25 != 47 )
          {
            dword_7BB74 = v114;
            goto LABEL_40;
          }
        }
        if ( v22[1] != 62 )
          goto LABEL_155;
        v3 = (char *)(v22 + 2);
        sub_4493C((_DWORD *)(v6 + 8), v20, v23, 0, 0);
        dword_7BB74 = v114;
      }
      else
      {
        if ( v19 == 33 )
        {
          v45 = strstr(v3 + 1, "-->");
          if ( !v45 )
            goto LABEL_40;
          v3 = v45 + 3;
        }
        else
        {
          if ( v19 != 63 )
            goto LABEL_40;
          v34 = strchr(v3 + 1, 62);
          if ( !v34 )
            goto LABEL_40;
          v3 = v34 + 1;
        }
        if ( !v3 )
          goto LABEL_40;
      }
LABEL_67:
      v9 = (unsigned __int8)*v3;
      if ( v9 == 44 )
      {
        ++v3;
        goto LABEL_58;
      }
    }
    v15 = (unsigned __int8)v3[1];
    v16 = v3 + 1;
    if ( v15 <= 0x7F && (dword_69A0C[v15] & 0xEF) != 0 )
    {
      v43 = v3 + 1;
      v17 = 1;
      while ( 1 )
      {
        ++v17;
        ++v16;
        v44 = (unsigned __int8)v3[v17];
        if ( v44 > 0x7F || (dword_69A0C[v44] & 0xEF) == 0 )
          break;
        v43 = v16;
      }
      v9 = (unsigned __int8)*v43;
    }
    else
    {
      v17 = 1;
    }
    if ( v9 == 58 )
    {
      --v16;
      --v17;
      v18 = 58;
LABEL_71:
      if ( (dword_69A0C[v9] & 0x100) != 0 )
      {
        v35 = v16 + 1;
        do
        {
          v16 = v35;
          v36 = (unsigned __int8)*v35++;
          v18 = v36;
        }
        while ( v36 <= 0x7F && (dword_69A0C[v18] & 0x100) != 0 );
      }
      goto LABEL_27;
    }
    v18 = (unsigned __int8)*v16;
    v9 = v18;
    if ( v18 <= 0x7F )
      goto LABEL_71;
LABEL_27:
    while ( 2 )
    {
      switch ( v18 )
      {
        case 0u:
          goto LABEL_57;
        case 0xAu:
        case 0x2Cu:
          ++v16;
LABEL_57:
          v33 = v3;
          v3 = v16;
          sub_4493C((_DWORD *)(v6 + 8), v33, v17, 0, 0);
          goto LABEL_58;
        case 0x22u:
        case 0x27u:
          v37 = (unsigned __int8 *)(v16 + 1);
          while ( 2 )
          {
            v38 = (char *)v37;
LABEL_78:
            v31 = v38++;
            v39 = (unsigned __int8)*v31;
            if ( *v31 )
            {
              if ( v18 != v39 )
              {
                if ( v39 == 92 )
                {
                  v40 = (unsigned __int8)*v38;
                  v37 = (unsigned __int8 *)(v38 + 1);
                  if ( !*v38 )
                    break;
                  v41 = v18 == v40;
                  if ( v18 != v40 )
                    v41 = v40 == 92;
                  if ( v41 )
                  {
                    v37 = (unsigned __int8 *)(v31 + 3);
                    if ( !v38[1] )
                    {
                      v31 = v38 + 1;
                      break;
                    }
                  }
                  continue;
                }
                goto LABEL_78;
              }
              v31 = v38;
            }
            break;
          }
          v42 = sub_4493C((_DWORD *)(v6 + 8), v3, v17, v16, v31 - v16);
          if ( !v42 || dword_7BB74 )
            goto LABEL_90;
          v3 = v31;
          sub_47530((unsigned __int8 *)(v42 + 8), 0);
          goto LABEL_58;
        case 0x3Au:
        case 0x3Du:
          v26 = v16 + 1;
          do
          {
            v16 = v26;
            v27 = (unsigned __int8)*v26++;
            v18 = v27;
          }
          while ( v27 <= 0x7F && (dword_69A0C[v18] & 0x100) != 0 );
          v28 = v18 == 61;
          if ( v18 != 61 )
            v28 = v18 == 58;
          if ( !v28 )
            continue;
          goto LABEL_47;
        default:
LABEL_47:
          v29 = v16;
          v30 = v16;
          while ( 2 )
          {
            v31 = v30 + 1;
            if ( v18 == 44 )
              goto LABEL_119;
            if ( v18 > 0x2C )
              goto LABEL_55;
            if ( v18 )
            {
              if ( v18 != 10 || v31 > v16 + 2 && *(v29 - 1) == 92 && v29[1] )
              {
LABEL_55:
                v32 = (unsigned __int8)*++v29;
                v18 = v32;
                ++v30;
                continue;
              }
LABEL_119:
              v46 = v30 - v16;
            }
            else
            {
              v46 = v30 - v16;
              v31 = v30;
            }
            break;
          }
          v47 = sub_4493C((_DWORD *)(v6 + 8), v3, v17, v16, v46);
          if ( !v47 )
            goto LABEL_90;
          v48 = (char *)(v47 + 8);
          break;
      }
      break;
    }
    while ( 1 )
    {
      while ( *v48 == 10 )
        ++v48;
      v48 = strchr(v48, 10);
      v49 = v48 - 1;
      if ( !v48 )
        break;
      if ( *(v48 - 1) == 92 )
      {
        v50 = v48 - 1;
        while ( 1 )
        {
          v52 = (unsigned __int8)*++v50;
          v51 = v52;
          *v49 = v52;
          v53 = v49 + 1;
          if ( !v52 )
            break;
          if ( v51 == 92 && v50[1] == 10 )
            v53 = v49;
          v49 = v53;
        }
        break;
      }
    }
LABEL_90:
    v3 = v31;
LABEL_58:
    if ( v3 )
      continue;
    break;
  }
LABEL_12:
  v10 = *(int **)(v6 + 8);
  v113 = *v10;
  if ( *v10 > 1 )
  {
    v54 = *(_DWORD *)(v6 + 8);
    v55 = 0;
    v56 = 1;
    ptr = (void *)v6;
    while ( 1 )
    {
      v57 = *(_DWORD *)(v54 + 12);
      v58 = v10[v55 + 2];
      v59 = *(const char **)(v57 + 4);
      v60 = &v10[v55 + 3];
      do
      {
        if ( strcmp(*(const char **)(v58 + 4), v59) <= 0 )
          break;
        --v55;
        *v60-- = v58;
        v58 = *(v60 - 1);
      }
      while ( v55 >= 0 );
      v54 += 4;
      v10[v55 + 3] = v57;
      v55 = v56;
      if ( v56 + 1 == v113 )
        break;
      ++v56;
    }
    return ptr;
  }
  return (void *)v6;
}
