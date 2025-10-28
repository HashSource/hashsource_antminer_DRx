int __fastcall sub_132E0(void (__fastcall *a1)(int, int *), int a2)
{
  int v3; // r4
  int v4; // lr
  char v5; // r6
  bool v6; // zf
  int v7; // r6
  int v8; // r3
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int v13; // r6
  int *v14; // r2
  int *v15; // r3
  int *v16; // r1
  int *v17; // r3
  int v18; // r2
  int v19; // r4
  int *v20; // r4
  int *v21; // r2
  bool v22; // cc
  const char *v23; // r0
  int v24; // r0
  int v25; // r6
  int v26; // r3
  int v27; // r2
  const char *v28; // r0
  int v29; // r4
  const char *v30; // r0
  const char *v31; // r0
  int v32; // r0
  const char *v33; // r0
  const char *v34; // r0
  const char *v35; // r2
  const char *v36; // r3
  const char *v37; // r0
  const char *v38; // r0
  unsigned __int16 *v39; // r0
  int v40; // r8
  int v41; // r6
  int v42; // r0
  const char *v43; // r0
  int v44; // r3
  const char *v45; // r0
  int v46; // r0
  int v47; // r8
  const char *v48; // r0
  const char *v49; // r0
  const char *v50; // r0
  int v51; // [sp+1Ch] [bp-1A8h]
  int v52; // [sp+24h] [bp-1A0h]
  int v55; // [sp+34h] [bp-190h] BYREF
  int v56; // [sp+38h] [bp-18Ch] BYREF
  char v57; // [sp+3Ch] [bp-188h]
  int v58; // [sp+40h] [bp-184h] BYREF
  int v59; // [sp+44h] [bp-180h]
  _DWORD v60[5]; // [sp+48h] [bp-17Ch] BYREF
  int s1; // [sp+5Ch] [bp-168h] BYREF
  int v62; // [sp+60h] [bp-164h]
  _DWORD v63[5]; // [sp+64h] [bp-160h] BYREF
  char src[32]; // [sp+78h] [bp-14Ch] BYREF
  int v65; // [sp+98h] [bp-12Ch]
  int v66; // [sp+9Ch] [bp-128h]
  int v67; // [sp+A0h] [bp-124h]
  int v68; // [sp+A4h] [bp-120h]
  int v69; // [sp+A8h] [bp-11Ch]
  int v70; // [sp+ACh] [bp-118h]
  int v71; // [sp+B0h] [bp-114h]
  int v72; // [sp+B8h] [bp-10Ch]
  int v73; // [sp+BCh] [bp-108h]
  int v74; // [sp+C0h] [bp-104h]
  int v75; // [sp+C4h] [bp-100h]
  int v76; // [sp+D0h] [bp-F4h]
  int v77; // [sp+FCh] [bp-C8h]
  int v78; // [sp+100h] [bp-C4h]
  _DWORD s[47]; // [sp+104h] [bp-C0h] BYREF

  if ( dword_7CF4C > 2 )
    printf("update_interfaces(%d)\n", 123);
  v55 = 0;
  if ( sub_520BC(-1, &v55) )
    return 0;
  word_7CE30 ^= 1u;
  if ( !sub_523C8(v55) )
  {
    v3 = 0;
    v52 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( sub_52370(v55, src) )
          goto LABEL_38;
        if ( (v66 & 0xFFFFFFF7) != 2 )
          goto LABEL_32;
        if ( v66 == 2 )
          break;
        if ( v66 == 10 && !dword_CB864 )
          goto LABEL_32;
LABEL_11:
        memset(s, 0, sizeof(s));
        HIWORD(s[34]) = word_7CE30;
        s1 = 0;
        s[2] = -1;
        s[3] = -1;
        v62 = 0;
        v63[0] = 0;
        v63[1] = 0x1000000;
        strncpy((char *)&s[26], src, 0x20u);
        HIBYTE(s[33]) = 0;
        HIWORD(s[5]) = 31488;
        LOWORD(s[34]) = v65;
        LOWORD(s[5]) = v65;
        LOWORD(s[12]) = v65;
        LOWORD(s[19]) = v65;
        s[43] = v78;
        HIWORD(s[12]) = 31488;
        HIWORD(s[19]) = 31488;
        if ( (unsigned __int16)v65 == 2 )
        {
          v5 = v77;
          v4 = v77 & 8;
          s[6] = v67;
          s[13] = v72;
          if ( (v77 & 8) != 0 )
          {
            v4 = 8;
            s[20] = v76;
          }
        }
        else
        {
          v4 = 0;
          if ( (unsigned __int16)v65 == 10 )
          {
            s[7] = v67;
            s[8] = v68;
            s[9] = v69;
            s[10] = v70;
            s[14] = v72;
            s[15] = v73;
            s[16] = v74;
            s[17] = v75;
            s[11] = v71;
          }
          v5 = v77;
        }
        v6 = (v5 & 0x20) == 0;
        v7 = v5 & 0x17;
        if ( v6 )
          v8 = 0;
        else
          v8 = 512;
        v9 = v8 | v7 | v4;
        s[35] = v9;
        if ( (v9 & 4) != 0 )
        {
          if ( (unsigned __int16)v65 != 2 )
          {
            if ( !memcmp(&s1, &s[7], 0x10u) )
              goto LABEL_22;
LABEL_21:
            s[35] = v9 & 0xFFFFFFFB;
            goto LABEL_22;
          }
          if ( bswap32(s[6]) >> 24 != 127 )
            goto LABEL_21;
        }
LABEL_22:
        v10 = sub_12344((const char *)&s[26], (unsigned __int16 *)&s[5], s[35]);
        if ( v10 != 1 )
        {
          if ( v10 )
          {
            if ( v10 == 2 )
              s[44] = 1;
          }
          else
          {
            s[44] = 0;
          }
          if ( dword_7CF4C > 3 )
            sub_1176C((int)s, "examining ", (int)"\n");
          if ( (s[35] & 1) != 0 )
          {
            if ( !sub_11174((unsigned __int16 *)&s[5]) )
            {
              v24 = sub_11458((char *)&s[5]);
              v25 = v24;
              if ( !v24 || (*(_DWORD *)(v24 + 140) & 0x80) != 0 || *(_DWORD *)(v24 + 8) == -1 )
              {
                if ( dword_7CF4C > 1 )
                {
                  v38 = (const char *)sub_50CD0(&s[5]);
                  printf("create_interface(%s#%d)\n", v38, 123);
                }
                v39 = (unsigned __int16 *)sub_1155C(s);
                v40 = (int)(v39 + 10);
                v41 = (int)v39;
                v42 = sub_12CBC(v39 + 10, 0, 0, (int)v39);
                *(_DWORD *)(v41 + 8) = v42;
                if ( v42 != -1 )
                  sub_10EE0(v41);
                if ( (*(_DWORD *)(v41 + 140) & 8) != 0 && *(_DWORD *)(v41 + 12) != -1 )
                {
                  v43 = (const char *)sub_50CD0(v41 + 76);
                  sub_4FE78(6, "Listening on broadcast address %s#%d", v43, 123);
                }
                if ( *(_DWORD *)(v41 + 8) == -1 && *(_DWORD *)(v41 + 12) == -1 )
                {
                  v46 = v40;
                  v47 = *(_DWORD *)(v41 + 16);
                  v48 = (const char *)sub_50CD0(v46);
                  sub_4FE78(3, "unable to create socket on %s (%d) for %s#%d", (const char *)(v41 + 104), v47, v48, 123);
                  free((void *)v41);
                  if ( dword_7CF4C > 2 )
                    sub_1176C((int)s, "updating ", (int)" new - creation FAILED");
                  v49 = (const char *)sub_50CD0(&s[5]);
                  sub_4FE78(6, "failed to init interface for address %s", v49);
                }
                else
                {
                  v58 = 0;
                  v59 = 0;
                  memset(v60, 0, sizeof(v60));
                  LOWORD(v58) = *(_WORD *)(v41 + 20);
                  if ( (unsigned __int16)v58 == 10 )
                    memset(v60, 255, 0x10u);
                  else
                    v59 = -1;
                  sub_2CC48(1, v40, &v58, 12288, 1);
                  if ( !dword_CA61C && *(_WORD *)(v41 + 136) == 2 && (*(_DWORD *)(v41 + 140) & 4) != 0 )
                    dword_CA61C = v41;
                  sub_127D4(v40, v41);
                  sub_119C4(v41);
                  if ( dword_7CF4C > 1 )
                    sub_1176C(v41, "created ", (int)"\n");
                  v56 = v41;
                  v57 = 2;
                  if ( a1 )
                    a1(a2, &v56);
                  v44 = dword_7CF4C;
                  if ( dword_7CF4C > 3 )
                  {
                    v45 = (const char *)sub_50CD0(v40);
                    printf("refreshing peers due to new addr %s\n", v45);
                    v44 = dword_7CF4C;
                  }
                  v3 = 1;
                  if ( v44 > 2 )
                    sub_1176C(v41, "updating ", (int)" new - created\n");
                  v52 = 1;
                }
                goto LABEL_32;
              }
              if ( *(unsigned __int16 *)(v24 + 138) == (unsigned __int16)word_7CE30 )
              {
                strncpy((char *)(v24 + 104), "*multiple*", 0x20u);
              }
              else
              {
                strncpy((char *)(v24 + 104), (const char *)&s[26], 0x20u);
                v26 = s[44];
                if ( *(_DWORD *)(v25 + 176) != s[44] )
                {
                  v27 = dword_7CF4C;
                  *(_DWORD *)(v25 + 176) = s[44];
                  if ( v27 <= 3 )
                  {
                    v3 = 1;
LABEL_82:
                    if ( s[44] != v26 )
                    {
                      v28 = (const char *)sub_50CD0(&s[5]);
                      sub_4FE78(
                        3,
                        "WARNING: conflicting enable configuration for interfaces %s and %s for address %s - unsupported "
                        "configuration - address DISABLED",
                        (const char *)&s[26],
                        (const char *)(v25 + 104),
                        v28);
                      *(_DWORD *)(v25 + 176) = 1;
                    }
                    v56 = v25;
                    v57 = 1;
                    *(_WORD *)(v25 + 138) = word_7CE30;
                    if ( a1 )
                      a1(a2, &v56);
                    goto LABEL_32;
                  }
                  v3 = 1;
                  v50 = (const char *)sub_50CD0(v25 + 20);
                  printf("refreshing peers due to %s ignore_packets change to %d\n", v50, *(_DWORD *)(v25 + 176));
                }
              }
              if ( dword_7CF4C > 3 )
                sub_1176C(v25, "updating ", (int)" present\n");
              v26 = *(_DWORD *)(v25 + 176);
              goto LABEL_82;
            }
          }
          else if ( dword_7CF4C > 3 )
          {
            v37 = (const char *)sub_50CD0(&s[5]);
            printf("skipping interface %s (%s) - DOWN\n", (const char *)&s[26], v37);
          }
        }
LABEL_32:
        if ( sub_52468(v55) )
          goto LABEL_38;
      }
      if ( dword_CB868 )
        goto LABEL_11;
      if ( sub_52468(v55) )
        goto LABEL_38;
    }
  }
  v52 = 0;
  v3 = 0;
LABEL_38:
  v11 = sub_52510(&v55);
  v12 = dword_CA654;
  if ( dword_CA654 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)v12;
      if ( (*(_DWORD *)(v12 + 140) & 0x180) == 0 && *(unsigned __int16 *)(v12 + 138) != (unsigned __int16)word_7CE30 )
        break;
LABEL_102:
      v12 = v13;
      if ( !v13 )
        goto LABEL_103;
    }
    if ( dword_7CF4C > 2 )
      sub_1176C(v12, "updating ", (int)"GONE - deleting\n");
    v14 = (int *)dword_CA654;
    if ( dword_CA654 == v12 )
    {
      v16 = &dword_CA654;
    }
    else
    {
      if ( !dword_CA654 || (v15 = *(int **)dword_CA654) == 0 )
      {
LABEL_52:
        if ( *(_DWORD *)(v12 + 176) )
        {
LABEL_66:
          v51 = v12 + 20;
LABEL_67:
          v20 = (int *)dword_CA64C;
          v21 = &dword_CA64C;
          do
          {
            while ( v12 == v20[8] )
            {
              v22 = dword_7CF4C <= 3;
              *v21 = *v20;
              *v20 = 0;
              if ( !v22 )
              {
                v23 = (const char *)sub_50CD0(v20 + 1);
                printf(
                  "Deleted addr %s for interface #%d %s from list of addresses\n",
                  v23,
                  *(_DWORD *)(v12 + 16),
                  (const char *)(v12 + 104));
              }
              free(v20);
              v20 = (int *)dword_CA64C;
              v21 = &dword_CA64C;
            }
            v21 = v20;
            v20 = (int *)*v20;
          }
          while ( v20 );
          if ( *(_DWORD *)(v12 + 8) != -1 )
          {
            v29 = *(_DWORD *)(v12 + 16);
            v30 = (const char *)sub_50CD0(v51);
            sub_4FE78(
              6,
              "Deleting interface #%d %s, %s#%d, interface stats: received=%ld, sent=%ld, dropped=%ld, active_time=%ld secs",
              v29,
              (const char *)(v12 + 104),
              v30,
              (unsigned __int16)(*(_WORD *)(v12 + 22) << 8) | HIBYTE(*(_WORD *)(v12 + 22)),
              *(_DWORD *)(v12 + 160),
              *(_DWORD *)(v12 + 164),
              *(_DWORD *)(v12 + 168),
              dword_CB548 - *(_DWORD *)(v12 + 156));
            sub_10F54(*(_DWORD *)(v12 + 8));
          }
          if ( *(_DWORD *)(v12 + 12) != -1 )
          {
            v31 = (const char *)sub_50CD0(v12 + 76);
            sub_4FE78(
              6,
              "Deleting broadcast address %s#%d from interface #%d %s",
              v31,
              (unsigned __int16)(*(_WORD *)(v12 + 78) << 8) | HIBYTE(*(_WORD *)(v12 + 78)),
              *(_DWORD *)(v12 + 16),
              (const char *)(v12 + 104));
            sub_10F54(*(_DWORD *)(v12 + 12));
          }
          --dword_CA62C;
          sub_20E9C(v12);
          s1 = 0;
          v62 = 0;
          memset(v63, 0, sizeof(v63));
          LOWORD(s1) = *(_WORD *)(v12 + 20);
          if ( (unsigned __int16)s1 == 10 )
            memset(v63, 255, 0x10u);
          else
            v62 = -1;
          sub_2CC48(4, v51, &s1, 12288, 1);
          if ( dword_7CF4C > 3 )
          {
            v33 = (const char *)sub_50CD0(v51);
            printf("refreshing peers due to deleted addr %s", v33);
          }
          v56 = v12;
          v57 = 3;
          if ( a1 )
            a1(a2, &v56);
          while ( 1 )
          {
            v32 = *(_DWORD *)(v12 + 180);
            if ( !v32 )
              break;
            sub_21778(v32, 0);
          }
          if ( v12 == dword_CA61C )
            dword_CA61C = 0;
          v3 = 1;
          free((void *)v12);
          goto LABEL_102;
        }
        if ( (*(_DWORD *)(v12 + 140) & 0x10) == 0 )
        {
          v51 = v12 + 20;
          goto LABEL_67;
        }
        v17 = &dword_CA630;
        if ( *(_WORD *)(v12 + 136) == 2 )
          v17 = &dword_CA634;
        v18 = *v17;
        if ( v12 == *v17 )
        {
          v19 = v12;
        }
        else
        {
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_65;
          }
          v19 = *(_DWORD *)(v18 + 4);
          if ( !v19 )
          {
LABEL_65:
            if ( dword_7CF4C > 3 )
            {
              v51 = v12 + 20;
              v34 = (const char *)sub_50CD0(v12 + 20);
              v35 = "removed from";
              if ( !v19 )
                v35 = "not found on";
              if ( *(_WORD *)(v12 + 136) == 2 )
                v36 = "4";
              else
                v36 = "6";
              printf("%s %s IPv%s multicast-capable unicast local address list\n", v34, v35, v36);
              goto LABEL_67;
            }
            goto LABEL_66;
          }
          while ( v19 != v12 )
          {
            v18 = v19;
            v19 = *(_DWORD *)(v19 + 4);
            if ( !v19 )
              goto LABEL_65;
          }
          v17 = (int *)(v18 + 4);
        }
        *v17 = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v19 + 4) = 0;
        goto LABEL_65;
      }
      while ( v15 != (int *)v12 )
      {
        v14 = v15;
        if ( v15 )
        {
          v15 = (int *)*v15;
          if ( v15 )
            continue;
        }
        goto LABEL_52;
      }
      v16 = v14;
      v14 = (int *)*v14;
    }
    *v16 = *v14;
    *v14 = 0;
    goto LABEL_52;
  }
LABEL_103:
  if ( v3 )
  {
    sub_21AE0(v11);
    sub_4FE78(6, "peers refreshed");
  }
  return v52;
}
