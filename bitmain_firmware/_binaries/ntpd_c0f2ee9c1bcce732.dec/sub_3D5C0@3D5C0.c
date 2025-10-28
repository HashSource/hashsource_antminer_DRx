_DWORD *__fastcall sub_3D5C0(_DWORD *a1)
{
  size_t v1; // r11
  int *v2; // r10
  _DWORD *v3; // r5
  int *v4; // r8
  _DWORD *result; // r0
  int v6; // r6
  char *v7; // r4
  _BYTE *v8; // r3
  int v9; // r3
  bool v10; // zf
  int v11; // t1
  int *v12; // r3
  int v13; // r7
  int v14; // r9
  size_t v15; // r0
  int v16; // t1
  int v17; // r1
  int v18; // r1
  int v19; // r9
  int *v20; // r12
  int v21; // r0
  int v22; // r0
  int v23; // r12
  int v24; // r3
  int v25; // r0
  char v26; // r3
  bool v27; // zf
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r0
  int v32; // r3
  const char *v33; // r3
  int v34; // r6
  int v35; // r0
  int v36; // r1
  int v37; // r3
  _DWORD *v38; // r9
  int v39; // r1
  int v40; // r1
  int *v41; // [sp+30h] [bp-1DCh]
  int v42; // [sp+30h] [bp-1DCh]
  int *v43; // [sp+30h] [bp-1DCh]
  int *v44; // [sp+30h] [bp-1DCh]
  int *v45; // [sp+30h] [bp-1DCh]
  int *v46; // [sp+30h] [bp-1DCh]
  int *v47; // [sp+30h] [bp-1DCh]
  _DWORD **v48; // [sp+34h] [bp-1D8h]
  char v49; // [sp+3Eh] [bp-1CEh] BYREF
  char v50; // [sp+3Fh] [bp-1CDh] BYREF
  char v51; // [sp+40h] [bp-1CCh] BYREF
  char v52; // [sp+41h] [bp-1CBh] BYREF
  char v53; // [sp+42h] [bp-1CAh] BYREF
  char v54; // [sp+43h] [bp-1C9h] BYREF
  int v55; // [sp+44h] [bp-1C8h] BYREF
  int v56; // [sp+48h] [bp-1C4h] BYREF
  int v57; // [sp+4Ch] [bp-1C0h] BYREF
  int v58; // [sp+50h] [bp-1BCh] BYREF
  char v59; // [sp+54h] [bp-1B8h] BYREF
  char v60; // [sp+58h] [bp-1B4h] BYREF
  int v61; // [sp+5Ch] [bp-1B0h] BYREF
  char v62; // [sp+60h] [bp-1ACh] BYREF
  int v63; // [sp+64h] [bp-1A8h] BYREF
  char v64; // [sp+68h] [bp-1A4h] BYREF
  char v65; // [sp+70h] [bp-19Ch] BYREF
  char v66; // [sp+7Ch] [bp-190h] BYREF
  char v67[128]; // [sp+88h] [bp-184h] BYREF
  char s; // [sp+108h] [bp-104h] BYREF
  char v69; // [sp+109h] [bp-103h]
  char v70; // [sp+10Ah] [bp-102h]

  v1 = a1[2];
  v2 = *(int **)(v1 + 60);
  v48 = (_DWORD **)(v2 + 54);
  v3 = (_DWORD *)v2[7];
  v4 = v2 + 10;
  result = (_DWORD *)sub_27824(a1, v67, (signed int)v2 - v3[7] + 168, v2 + 54);
  v6 = (unsigned __int8)v67[0];
  v10 = v67[0] == 0;
  v2[42] = (int)result;
  if ( !v10 )
  {
    v7 = v67;
    while ( v6 == 10 )
    {
      v12 = (int *)v3[7];
      if ( v4 == v12 )
      {
        result = *v48;
        v18 = v2[55];
        v3[5] = *v48;
        v3[6] = v18;
LABEL_8:
        v11 = (unsigned __int8)*++v7;
        v6 = v11;
        if ( !v11 )
          return result;
      }
      else
      {
        *(_BYTE *)v12 = 0;
        v13 = *(_DWORD *)(v1 + 60);
        v55 = 2;
        v14 = *(_DWORD *)(v13 + 28);
        ioctl(*(_DWORD *)(v13 + 20), 0x5415u, &v56);
        v15 = strlen((const char *)(v13 + 40));
        snprintf(
          &s,
          0x100u,
          "acts: %04x (%d %d) %lu %s",
          v56,
          *(_DWORD *)(v14 + 4),
          *(_DWORD *)(v14 + 8),
          v15,
          (const char *)(v13 + 40));
        if ( dword_7CF4C )
          puts(&s);
        strncpy(&s, (const char *)(v13 + 40), 0x100u);
        result = strtok(&s, delim);
        if ( s == 78 && v69 == 79 && !v70 )
        {
          result = (_DWORD *)sub_1D3D8(139, v1, (const char *)(v13 + 40));
        }
        else
        {
          switch ( *(_DWORD *)(v14 + 4) )
          {
            case 1:
              if ( s == 79 && v69 == 75 && !v70 )
              {
                result = (_DWORD *)ioctl(*(_DWORD *)(v13 + 20), 0x5416u, &v55);
                v3[7] = v4;
                *(_DWORD *)(v14 + 4) = 2;
                *(_DWORD *)(v14 + 8) = 1;
              }
              else
              {
                sub_4FE78(3, "acts: setup error %s", (const char *)(v13 + 40));
                result = (_DWORD *)sub_3D0D8(v1);
                v3[7] = v4;
              }
              goto LABEL_18;
            case 3:
              sub_1D3D8(139, v1, (const char *)(v13 + 40));
              result = (_DWORD *)strcmp(&s, "CONNECT");
              if ( result )
              {
                result = (_DWORD *)sub_3D0D8(v1);
                v3[7] = v4;
              }
              else
              {
                v3[7] = v4;
                *(_DWORD *)(v14 + 4) = 4;
                *(_DWORD *)(v14 + 8) = 20;
              }
              goto LABEL_18;
            case 4:
            case 5:
              v19 = *(_DWORD *)(v1 + 60);
              *(_DWORD *)(v19 + 192) = 0;
              result = (_DWORD *)strlen((const char *)(v13 + 40));
              v20 = *(int **)(v19 + 28);
              if ( result == (_DWORD *)22 )
              {
                v43 = *(int **)(v19 + 28);
                v25 = sscanf(
                        (const char *)(v13 + 40),
                        "%c %3d %2d:%2d:%2d %cTZ=%2d",
                        &v50,
                        v19 + 176,
                        v19 + 180,
                        v19 + 184,
                        v19 + 188,
                        &v53,
                        &v62);
                v20 = v43;
                if ( v25 != 7 )
                  goto LABEL_28;
                v26 = v50;
                v27 = v50 == 32;
                *(_BYTE *)(v19 + 32) = 0;
                if ( !v27 )
                  v26 = 3;
                *(_DWORD *)(v19 + 748) = *(_DWORD *)"WWVB";
                if ( !v27 )
                  *(_BYTE *)(v19 + 32) = v26;
                v28 = v43[4];
                if ( !v28 )
                  goto LABEL_52;
                goto LABEL_63;
              }
              if ( (unsigned int)result <= 0x16 )
              {
                if ( result == (_DWORD *)1 )
                {
                  if ( *(_BYTE *)(v13 + 40) != 42 || v20[4] <= 0 )
                    break;
                  goto LABEL_64;
                }
                if ( result == (_DWORD *)20 )
                {
                  v42 = *(_DWORD *)(v19 + 28);
                  v22 = sscanf(
                          (const char *)(v13 + 40),
                          "%5ld %3d %2d%2d%2d %3s",
                          &v59,
                          v19 + 176,
                          v19 + 180,
                          v19 + 184,
                          v19 + 188,
                          &v66);
                  v23 = v42;
                  if ( v22 != 6 )
                    goto LABEL_28;
                  *(_BYTE *)(v19 + 32) = 0;
                  result = *(_DWORD **)"USNO";
                  *(_DWORD *)(v19 + 748) = *(_DWORD *)"USNO";
                  v24 = *(_DWORD *)(v42 + 16);
                  if ( !v24 )
                  {
                    result = (_DWORD *)sub_2DDBC(v1 + 12, (const char *)(v13 + 40));
                    v23 = v42;
                    v24 = *(_DWORD *)(v42 + 16);
                  }
                  *(_DWORD *)(v23 + 16) = v24 + 1;
                }
              }
              else
              {
                if ( result != (_DWORD *)50 )
                {
                  if ( result == (_DWORD *)78 )
                  {
                    v45 = *(int **)(v19 + 28);
                    if ( sscanf(
                           (const char *)(v13 + 40),
                           "%*4d-%*2d-%*2d %*2d:%*2d:%2d %*5c%*12c%4d%2d%2d%2d%2d%5ld%2lf%c%2d%3lf%*15c%c",
                           v19 + 188,
                           v19 + 172,
                           &v58,
                           &v57,
                           v19 + 180,
                           v19 + 184,
                           &v59,
                           &v64,
                           &v54,
                           &v63,
                           &v65,
                           &v49) != 12 )
                      goto LABEL_28;
                    v29 = v58;
                    v30 = v63;
                    *(_BYTE *)(v19 + 32) = 0;
                    if ( v29 == v30 )
                    {
                      if ( v54 == 43 )
                      {
                        *(_BYTE *)(v19 + 32) = 1;
                      }
                      else if ( v54 == 45 )
                      {
                        *(_BYTE *)(v19 + 32) = 2;
                      }
                    }
                    *(_DWORD *)(v19 + 176) = sub_513CC(*(_DWORD *)(v19 + 172), v29, v57);
                    strcpy((char *)(v19 + 748), "PTB");
                    v20 = v45;
                    v28 = v45[4];
                    if ( !v28 )
                    {
                      sub_2DDBC(v1 + 12, (const char *)(v13 + 40));
                      v20 = v45;
                      v28 = v45[4];
                    }
                  }
                  else
                  {
                    if ( result != (_DWORD *)24 )
                      break;
                    v41 = *(int **)(v19 + 28);
                    v21 = sscanf(
                            (const char *)(v13 + 40),
                            "%c%c%2d %3d %2d:%2d:%2d.%3ld%c%c%c",
                            &v50,
                            &v51,
                            v19 + 172,
                            v19 + 176,
                            v19 + 180,
                            v19 + 184,
                            v19 + 188,
                            v19 + 192,
                            &v53,
                            &v52,
                            &v53);
                    v20 = v41;
                    if ( v21 != 11 )
                    {
LABEL_28:
                      result = (_DWORD *)sub_27040(v1, 2);
                      v3[7] = v4;
                      goto LABEL_18;
                    }
                    v40 = *(_DWORD *)(v19 + 192);
                    *(_BYTE *)(v19 + 32) = 0;
                    v10 = v50 == 32;
                    *(_DWORD *)(v19 + 192) = 1000000 * v40;
                    if ( v10 )
                    {
                      if ( v52 == 76 )
                        *(_BYTE *)(v19 + 32) = 1;
                    }
                    else
                    {
                      *(_BYTE *)(v19 + 32) = 3;
                    }
                    v33 = "WWVB";
LABEL_62:
                    *(_DWORD *)(v19 + 748) = *(_DWORD *)v33;
                    v28 = v20[4];
                    if ( v28 )
                      goto LABEL_63;
LABEL_52:
                    v44 = v20;
                    sub_2DDBC(v1 + 12, (const char *)(v13 + 40));
                    v20 = v44;
                    v28 = v44[4];
                  }
LABEL_63:
                  v20[4] = v28 + 1;
LABEL_64:
                  v34 = v19 + 216;
                  v35 = v20[5];
                  v36 = v20[6];
                  *(_DWORD *)(v1 + 88) = *(_DWORD *)(v19 + 748);
                  *(_DWORD *)(v19 + 216) = v35;
                  *(_DWORD *)(v19 + 220) = v36;
                  v47 = v20;
                  if ( sub_27698((_DWORD *)v19) )
                  {
                    v37 = v47[1];
                    v38 = (_DWORD *)(v19 + 208);
                    result = *(_DWORD **)v34;
                    v39 = *(_DWORD *)(v34 + 4);
                    *v38 = *(_DWORD *)v34;
                    v38[1] = v39;
                    if ( v37 != 5 )
                    {
                      v47[1] = 5;
                      v47[2] = 30;
                    }
                  }
                  else
                  {
                    result = (_DWORD *)sub_27040(v1, 6);
                  }
                  break;
                }
                v46 = *(int **)(v19 + 28);
                result = (_DWORD *)sscanf(
                                     (const char *)(v13 + 40),
                                     "%5ld %2d-%2d-%2d %2d:%2d:%2d %2d %1d %3lf %5lf %9s %c",
                                     &v59,
                                     v19 + 172,
                                     &v58,
                                     &v57,
                                     v19 + 180,
                                     v19 + 184,
                                     v19 + 188,
                                     &v60,
                                     &v61,
                                     &v64,
                                     &v65,
                                     &v66,
                                     &v49);
                if ( result != (_DWORD *)13 )
                  goto LABEL_28;
                if ( v49 == 35 )
                {
                  v31 = sub_513CC(*(_DWORD *)(v19 + 172), v58, v57);
                  v32 = v61;
                  *(_BYTE *)(v19 + 32) = 0;
                  v20 = v46;
                  if ( v32 == 1 )
                    *(_BYTE *)(v19 + 32) = 1;
                  v33 = "NIST";
                  *(_DWORD *)(v19 + 176) = v31;
                  goto LABEL_62;
                }
              }
              break;
            default:
              break;
          }
        }
        v3[7] = v4;
LABEL_18:
        v16 = (unsigned __int8)*++v7;
        v6 = v16;
        if ( !v16 )
          return result;
      }
    }
    result = _ctype_b_loc();
    if ( (*(_WORD *)(*result + 2 * v6) & 2) == 0 )
    {
      v8 = (_BYTE *)v3[7];
      *v8 = v6;
      v3[7] = v8 + 1;
      v9 = (unsigned __int8)*v7;
      v10 = v9 == 42;
      if ( v9 != 42 )
        v10 = v9 == 35;
      if ( v10 )
      {
        v17 = v2[55];
        v3[5] = *v48;
        v3[6] = v17;
        result = (_DWORD *)write(v2[5], v7, 1u);
      }
    }
    goto LABEL_8;
  }
  return result;
}
