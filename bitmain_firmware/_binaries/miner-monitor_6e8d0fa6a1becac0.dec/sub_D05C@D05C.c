unsigned __int8 *__fastcall sub_D05C(int a1, const char *a2)
{
  char *v2; // r4
  double v4; // r0
  double v5; // r2
  unsigned __int8 *v7; // r6
  unsigned int v8; // r3
  unsigned __int8 *v9; // r4
  unsigned int v10; // t1
  double v12; // d8
  double v13; // d16
  int v14; // t1
  double v15; // d17
  double v16; // d0
  _DWORD *v17; // r0
  _DWORD *v18; // r7
  unsigned __int8 *v19; // r3
  unsigned __int8 *v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // t1
  unsigned __int8 *v23; // r0
  unsigned __int8 *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // t1
  int v27; // r3
  unsigned __int8 *v28; // r1
  unsigned __int8 *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // t1
  _BYTE *v32; // r0
  int v33; // r5
  unsigned int v34; // r1
  unsigned __int8 *v35; // r3
  unsigned int v36; // t1
  _DWORD *v37; // r0
  _DWORD *v38; // r6
  _BYTE *v39; // r1
  unsigned __int8 *v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // t1
  unsigned __int8 *v43; // r0
  unsigned __int8 *v44; // r3
  unsigned int v45; // r2
  unsigned int v46; // t1
  int v47; // r3
  unsigned __int8 *v48; // r1
  unsigned __int8 *v49; // r3
  unsigned int v50; // r2
  unsigned int v51; // t1
  _BYTE *v52; // r0
  unsigned __int8 *v53; // r2
  unsigned int v54; // t1
  double v55; // d17
  int v56; // s15
  int v57; // t1
  unsigned int v58; // r3
  unsigned __int8 *v59; // r4
  unsigned int v60; // t1
  _DWORD *v61; // r0
  _DWORD *v62; // r7
  unsigned __int8 *v63; // r3
  unsigned __int8 *v64; // r1
  unsigned int v65; // r2
  unsigned int v66; // t1
  _BYTE *v67; // r0
  unsigned int v68; // r2
  unsigned __int8 *v69; // r3
  unsigned int v70; // t1
  _DWORD *v71; // r0
  _DWORD *v72; // r4
  unsigned __int8 *v73; // r1
  unsigned __int8 *v74; // r3
  unsigned int v75; // r2
  unsigned int v76; // t1
  _BYTE *v77; // r0
  unsigned __int8 *v78; // r3
  unsigned int v79; // t1

  v2 = (char *)a2;
  if ( !a2 )
    return (unsigned __int8 *)v2;
  if ( !strncmp(a2, "null", 4u) )
  {
    v2 += 4;
    *(_DWORD *)(a1 + 12) = 2;
    return (unsigned __int8 *)v2;
  }
  if ( !strncmp(v2, "false", 5u) )
  {
    *(_DWORD *)(a1 + 12) = 0;
    v2 += 5;
    return (unsigned __int8 *)v2;
  }
  LODWORD(v4) = strncmp(v2, "true", 4u);
  if ( !LODWORD(v4) )
  {
    v2 += 4;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 20) = 1;
    return (unsigned __int8 *)v2;
  }
  HIDWORD(v5) = (unsigned __int8)*v2;
  if ( HIDWORD(v5) != 34 )
  {
    HIDWORD(v4) = HIDWORD(v5) == 45;
    if ( (unsigned int)(HIDWORD(v5) - 48) > 9 && HIDWORD(v5) != 45 )
    {
      if ( HIDWORD(v5) != 91 )
      {
        if ( HIDWORD(v5) != 123 )
        {
          dword_1B3A4 = (int)v2;
          return 0;
        }
        v7 = (unsigned __int8 *)(v2 + 1);
        *(_DWORD *)(a1 + 12) = 6;
        v8 = (unsigned __int8)v2[1];
        if ( v2 != (char *)-1 )
        {
          if ( !v2[1] )
          {
LABEL_45:
            v17 = sub_C540();
            v18 = v17;
            *(_DWORD *)(a1 + 8) = v17;
            if ( v17 )
            {
              v19 = v7;
              do
              {
                v20 = v19;
                v22 = *v19++;
                v21 = v22;
                if ( !v22 )
                  break;
                if ( v21 > 0x20 )
                  break;
                v20 = v19;
              }
              while ( v19 );
              v23 = sub_C244((int)v17, v20);
              if ( v23 )
              {
                if ( *v23 && *v23 <= 0x20u )
                {
                  v24 = v23 + 1;
                  while ( 1 )
                  {
                    v23 = v24;
                    if ( !v24 )
                      break;
                    v26 = *v24++;
                    v25 = v26;
                    if ( !v26 || v25 > 0x20 )
                      goto LABEL_58;
                  }
                }
                else
                {
LABEL_58:
                  v27 = v18[4];
                  v2 = 0;
                  v18[4] = 0;
                  v18[8] = v27;
                  if ( *v23 != 58 )
                  {
                    dword_1B3A4 = (int)v23;
                    return (unsigned __int8 *)v2;
                  }
                  v28 = v23 + 1;
                  if ( v23 != (unsigned __int8 *)-1 && v23[1] && v23[1] <= 0x20u )
                  {
                    v29 = v23 + 2;
                    do
                    {
                      v28 = v29;
                      if ( !v29 )
                        break;
                      v31 = *v29++;
                      v30 = v31;
                      if ( !v31 )
                        break;
                    }
                    while ( v30 <= 0x20 );
                  }
                  v32 = (_BYTE *)sub_D05C(v18, v28);
                  v33 = (int)v32;
                  if ( v32 )
                  {
                    v34 = (unsigned __int8)*v32;
                    if ( !*v32 || v34 > 0x20 )
                    {
LABEL_74:
                      while ( v34 == 44 )
                      {
                        v37 = sub_C540();
                        v38 = v37;
                        if ( !v37 )
                          return 0;
                        v39 = (_BYTE *)(v33 + 1);
                        *v18 = v37;
                        v37[1] = v18;
                        if ( v33 != -1 && *(_BYTE *)(v33 + 1) && *(unsigned __int8 *)(v33 + 1) <= 0x20u )
                        {
                          v40 = (unsigned __int8 *)(v33 + 2);
                          do
                          {
                            v39 = v40;
                            if ( !v40 )
                              break;
                            v42 = *v40++;
                            v41 = v42;
                            if ( !v42 )
                              break;
                          }
                          while ( v41 <= 0x20 );
                        }
                        v43 = sub_C244((int)v37, v39);
                        if ( !v43 )
                          return 0;
                        if ( *v43 && *v43 <= 0x20u )
                        {
                          v44 = v43 + 1;
                          do
                          {
                            v43 = v44;
                            if ( !v44 )
                              return 0;
                            v46 = *v44++;
                            v45 = v46;
                          }
                          while ( v46 && v45 <= 0x20 );
                        }
                        v47 = v38[4];
                        v38[4] = 0;
                        v38[8] = v47;
                        if ( *v43 != 58 )
                        {
                          v2 = 0;
                          dword_1B3A4 = (int)v43;
                          return (unsigned __int8 *)v2;
                        }
                        v48 = v43 + 1;
                        if ( v43 != (unsigned __int8 *)-1 && v43[1] && v43[1] <= 0x20u )
                        {
                          v49 = v43 + 2;
                          do
                          {
                            v48 = v49;
                            if ( !v49 )
                              break;
                            v51 = *v49++;
                            v50 = v51;
                            if ( !v51 )
                              break;
                          }
                          while ( v50 <= 0x20 );
                        }
                        v52 = (_BYTE *)sub_D05C(v38, v48);
                        v33 = (int)v52;
                        if ( !v52 )
                          return 0;
                        v34 = (unsigned __int8)*v52;
                        if ( *v52 && v34 <= 0x20 )
                        {
                          v53 = v52 + 1;
                          do
                          {
                            v33 = (int)v53;
                            if ( !v53 )
                              return 0;
                            v54 = *v53++;
                            v34 = v54;
                          }
                          while ( v54 && v34 <= 0x20 );
                        }
                        v18 = v38;
                      }
                      if ( v34 != 125 )
                        goto LABEL_164;
                      return (unsigned __int8 *)(v33 + 1);
                    }
                    v35 = v32 + 1;
                    while ( 1 )
                    {
                      v33 = (int)v35;
                      if ( !v35 )
                        break;
                      v36 = *v35++;
                      v34 = v36;
                      if ( !v36 || v34 > 0x20 )
                        goto LABEL_74;
                    }
                  }
                }
              }
            }
            return 0;
          }
          if ( v8 <= 0x20 )
          {
            v9 = (unsigned __int8 *)(v2 + 2);
            while ( 1 )
            {
              v7 = v9;
              if ( !v9 )
                break;
              v10 = *v9++;
              v8 = v10;
              if ( !v10 )
                goto LABEL_45;
              if ( v8 > 0x20 )
                goto LABEL_21;
            }
            v8 = MEMORY[0];
          }
        }
LABEL_21:
        if ( v8 == 125 )
          return v7 + 1;
        goto LABEL_45;
      }
      v7 = (unsigned __int8 *)(v2 + 1);
      *(_DWORD *)(a1 + 12) = 5;
      v58 = (unsigned __int8)v2[1];
      if ( v2 != (char *)-1 )
      {
        if ( !v2[1] )
        {
LABEL_124:
          v61 = sub_C540();
          v62 = v61;
          *(_DWORD *)(a1 + 8) = v61;
          if ( v61 )
          {
            v63 = v7;
            do
            {
              v64 = v63;
              v66 = *v63++;
              v65 = v66;
              if ( !v66 )
                break;
              if ( v65 > 0x20 )
                break;
              v64 = v63;
            }
            while ( v63 );
            v67 = (_BYTE *)sub_D05C(v61, v64);
            v33 = (int)v67;
            if ( v67 )
            {
              v68 = (unsigned __int8)*v67;
              if ( !*v67 || v68 > 0x20 )
              {
LABEL_138:
                while ( v68 == 44 )
                {
                  v71 = sub_C540();
                  v72 = v71;
                  if ( !v71 )
                    return 0;
                  v73 = (unsigned __int8 *)(v33 + 1);
                  *v62 = v71;
                  v71[1] = v62;
                  if ( v33 != -1 && *(_BYTE *)(v33 + 1) && *(unsigned __int8 *)(v33 + 1) <= 0x20u )
                  {
                    v74 = (unsigned __int8 *)(v33 + 2);
                    do
                    {
                      v73 = v74;
                      if ( !v74 )
                        break;
                      v76 = *v74++;
                      v75 = v76;
                      if ( !v76 )
                        break;
                    }
                    while ( v75 <= 0x20 );
                  }
                  v77 = (_BYTE *)sub_D05C(v71, v73);
                  v33 = (int)v77;
                  if ( !v77 )
                    return 0;
                  v68 = (unsigned __int8)*v77;
                  if ( *v77 && v68 <= 0x20 )
                  {
                    v78 = v77 + 1;
                    do
                    {
                      v33 = (int)v78;
                      if ( !v78 )
                        return 0;
                      v79 = *v78++;
                      v68 = v79;
                    }
                    while ( v79 && v68 <= 0x20 );
                  }
                  v62 = v72;
                }
                if ( v68 == 93 )
                  return (unsigned __int8 *)(v33 + 1);
LABEL_164:
                v2 = 0;
                dword_1B3A4 = v33;
                return (unsigned __int8 *)v2;
              }
              v69 = v67 + 1;
              while ( 1 )
              {
                v33 = (int)v69;
                if ( !v69 )
                  break;
                v70 = *v69++;
                v68 = v70;
                if ( !v70 || v68 > 0x20 )
                  goto LABEL_138;
              }
            }
          }
          return 0;
        }
        if ( v58 <= 0x20 )
        {
          v59 = (unsigned __int8 *)(v2 + 2);
          while ( 1 )
          {
            v7 = v59;
            if ( !v59 )
              break;
            v60 = *v59++;
            v58 = v60;
            if ( !v60 )
              goto LABEL_124;
            if ( v58 > 0x20 )
              goto LABEL_123;
          }
          v58 = MEMORY[0];
        }
      }
LABEL_123:
      if ( v58 == 93 )
        return v7 + 1;
      goto LABEL_124;
    }
    if ( HIDWORD(v5) == 45 )
    {
      HIDWORD(v5) = (unsigned __int8)v2[1];
      v12 = -1.0;
      ++v2;
    }
    else
    {
      v12 = 1.0;
    }
    if ( HIDWORD(v5) == 48 )
      HIDWORD(v5) = (unsigned __int8)*++v2;
    LODWORD(v5) = HIDWORD(v5) - 49;
    if ( (unsigned int)(HIDWORD(v5) - 49) > 8 )
    {
      v13 = 0.0;
    }
    else
    {
      HIDWORD(v4) = v2 + 1;
      LODWORD(v5) = HIDWORD(v5) - 48;
      v13 = 0.0;
      do
      {
        v2 = (char *)HIDWORD(v4);
        v14 = (unsigned __int8)*(_BYTE *)HIDWORD(v4);
        ++HIDWORD(v4);
        HIDWORD(v5) = v14;
        v15 = (double)SLODWORD(v5);
        LODWORD(v5) = v14 - 48;
        LODWORD(v4) = (unsigned __int8)(v14 - 48);
        v13 = v15 + v13 * 10.0;
      }
      while ( LODWORD(v4) <= 9 );
    }
    if ( HIDWORD(v5) == 46 )
    {
      HIDWORD(v5) = (unsigned __int8)v2[1];
      if ( HIDWORD(v5) <= 0x2F || HIDWORD(v5) > 0x39 )
      {
LABEL_44:
        pow(v4, v5);
        *(_DWORD *)(a1 + 12) = 3;
        v16 = v12 * v13 * 10.0;
        *(double *)(a1 + 24) = v16;
        *(_DWORD *)(a1 + 20) = (int)v16;
        return (unsigned __int8 *)v2;
      }
      HIDWORD(v4) = v2 + 2;
      LODWORD(v5) = HIDWORD(v5) - 48;
      v55 = 0.0;
      do
      {
        v56 = LODWORD(v5);
        v2 = (char *)HIDWORD(v4);
        v57 = (unsigned __int8)*(_BYTE *)HIDWORD(v4);
        ++HIDWORD(v4);
        BYTE4(v5) = v57;
        v55 = v55 - 1.0;
        LODWORD(v5) = v57 - 48;
        LODWORD(v4) = (unsigned __int8)(v57 - 48);
        v13 = (double)v56 + v13 * 10.0;
      }
      while ( LODWORD(v4) <= 9 );
    }
    HIDWORD(v5) = BYTE4(v5) & 0xDF;
    if ( HIDWORD(v5) == 69 )
    {
      HIDWORD(v4) = (unsigned __int8)v2[1];
      if ( HIDWORD(v4) == 43 )
      {
        LODWORD(v4) = v2 + 2;
        HIDWORD(v4) = (unsigned __int8)v2[2];
      }
      else if ( HIDWORD(v4) == 45 )
      {
        LODWORD(v4) = v2 + 2;
        HIDWORD(v4) = (unsigned __int8)v2[2];
      }
      else
      {
        LODWORD(v4) = v2 + 1;
      }
      HIDWORD(v5) = HIDWORD(v4) - 48;
      LODWORD(v5) = (unsigned __int8)(BYTE4(v4) - 48);
      if ( LODWORD(v5) > 9 )
      {
        v2 = (char *)LODWORD(v4);
      }
      else
      {
        ++LODWORD(v4);
        LODWORD(v5) = 0;
        do
        {
          HIDWORD(v4) = (unsigned __int8)*(_BYTE *)LODWORD(v4);
          v2 = (char *)LODWORD(v4)++;
          LODWORD(v5) = HIDWORD(v5) + 10 * LODWORD(v5);
          HIDWORD(v5) = HIDWORD(v4) - 48;
          HIDWORD(v4) = (unsigned __int8)(BYTE4(v4) - 48);
        }
        while ( HIDWORD(v4) <= 9 );
      }
    }
    goto LABEL_44;
  }
  return sub_C244(a1, v2);
}
