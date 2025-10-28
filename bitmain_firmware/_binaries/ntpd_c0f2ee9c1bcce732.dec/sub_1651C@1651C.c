int sub_1651C()
{
  char *v0; // r6
  char *v1; // r11
  double *v2; // r8
  int v3; // r4
  int v4; // r8
  int v5; // r3
  char *v6; // r0
  char *v7; // r9
  char *v8; // r5
  int v9; // r8
  int v10; // r5
  int v11; // r9
  int v12; // r0
  bool v13; // cc
  unsigned int v14; // r9
  char *v15; // r3
  int v16; // r9
  int v17; // r9
  int v18; // r12
  int v19; // r4
  int v20; // r5
  bool v21; // zf
  double *v22; // r8
  int v23; // r9
  int v24; // r9
  int v25; // r3
  unsigned int v26; // r1
  int v27; // r3
  bool v28; // zf
  char *j; // r9
  __int16 *v30; // r3
  unsigned __int16 *v31; // r5
  int v32; // r3
  unsigned int v33; // r2
  char *v34; // r3
  int v35; // r5
  int v36; // r3
  double *v37; // r2
  int v38; // r12
  bool v39; // zf
  int v40; // r4
  int v41; // t1
  char *v43; // r1
  unsigned int v44; // r0
  bool v45; // cf
  unsigned int v46; // r9
  int v47; // r12
  _BYTE *v48; // r0
  int v49; // r12
  int v50; // r3
  int v51; // r9
  char *v52; // r5
  int v53; // r6
  char *v54; // r5
  int v55; // t1
  int v56; // r1
  _DWORD *v57; // r0
  int v58; // r5
  _DWORD *v59; // r0
  _DWORD *v60; // r0
  int v61; // r5
  _DWORD *v62; // r0
  int v63; // r5
  _DWORD *v64; // r0
  int v65; // r5
  _DWORD *v66; // r0
  int v67; // r9
  int v68; // r0
  int v69; // r5
  _DWORD *v70; // r0
  int v71; // r5
  _DWORD *v72; // r0
  int v73; // r5
  _DWORD *v74; // r0
  int v75; // r5
  _DWORD *v76; // r0
  int v77; // r5
  _DWORD *v78; // r0
  int i; // r3
  int v80; // r0
  _DWORD *v81; // r0
  int v82; // r0
  _DWORD *v83; // r1
  int v84; // r1
  int v85; // r5
  _DWORD *v86; // r0
  int v87; // r5
  _DWORD *v88; // r0
  const char *v89; // r0
  int v90; // r5
  _DWORD *v91; // r0
  int v92; // r5
  _DWORD *v93; // r0
  _DWORD *v94; // r0
  int v95; // r5
  _DWORD *v96; // r0
  int v97; // r5
  int v98; // r0
  _DWORD *v99; // r9
  int v100; // r0
  _DWORD *v101; // r0
  _DWORD *v102; // r0
  int v103; // r5
  int v104; // r0
  _DWORD *v105; // r9
  int v106; // r0
  _DWORD *v107; // r0
  _DWORD *v108; // r0
  int v109; // r5
  _DWORD *v110; // r0
  int v111; // r0
  const char *v112; // r0
  int v113; // r0
  int v114; // r0
  int v115; // r2
  int v116; // r3
  FILE *v117; // r5
  const char *v118; // r0
  const char *v119; // r0
  int v120; // [sp+Ch] [bp-8D0h]
  int v121; // [sp+Ch] [bp-8D0h]
  int v122; // [sp+Ch] [bp-8D0h]
  int v123; // [sp+Ch] [bp-8D0h]
  unsigned int v124; // [sp+18h] [bp-8C4h]
  int v125; // [sp+1Ch] [bp-8C0h]
  int v126; // [sp+24h] [bp-8B8h]
  double v127; // [sp+28h] [bp-8B4h]
  _BYTE *v128; // [sp+30h] [bp-8ACh]
  int v129; // [sp+34h] [bp-8A8h]
  char *src; // [sp+38h] [bp-8A4h]
  unsigned int v131; // [sp+3Ch] [bp-8A0h]
  int v132; // [sp+3Ch] [bp-8A0h]
  int v133; // [sp+40h] [bp-89Ch]
  char *v134; // [sp+44h] [bp-898h]
  char s[64]; // [sp+48h] [bp-894h] BYREF
  _BYTE v136[128]; // [sp+88h] [bp-854h] BYREF
  _BYTE ptr[400]; // [sp+108h] [bp-7D4h] BYREF
  _BYTE v138[1604]; // [sp+298h] [bp-644h] BYREF

  if ( dword_CA664 )
    fwrite("Starting parse\n", 1u, 0xFu, (FILE *)stderr);
  v0 = ptr;
  dword_CA660 = 0;
  v1 = ptr;
  v2 = (double *)v138;
  v125 = 0;
  v129 = 0;
  v3 = 0;
  dword_CA66C = -2;
  v128 = v136;
  src = v138;
  v131 = 128;
  v124 = 200;
  v126 = 199;
  while ( 1 )
  {
    *(_WORD *)v0 = v3;
    if ( v0 < &v1[2 * v126] )
      goto LABEL_15;
    v4 = ((v0 - v1) >> 1) + 1;
    if ( v124 >= 0x3E8 )
      goto LABEL_118;
    v5 = 2 * v124;
    if ( 2 * v124 >= 0x3E8 )
      v5 = 1000;
    v124 = v5;
    v6 = (char *)sub_4F524(10 * v5 + 7);
    v7 = v6;
    if ( !v6 )
    {
LABEL_118:
      v40 = 2;
      sub_16478("memory exhausted");
      goto LABEL_67;
    }
    v8 = &v6[2 * v124];
    memcpy(v6, v1, 2 * v4);
    memcpy(v8, src, 8 * v4);
    if ( v1 != ptr )
      free(v1);
    v9 = (v0 - v1) >> 1;
    v0 = &v7[2 * v9];
    v2 = (double *)&v8[8 * v9];
    if ( dword_CA664 )
      fprintf((FILE *)stderr, "Stack size increased to %lu\n", v124);
    v126 = v124 - 1;
    if ( v0 >= &v7[2 * v124 - 2] )
      break;
    v1 = v7;
    src = v8;
LABEL_15:
    if ( dword_CA664 )
      fprintf((FILE *)stderr, "Entering state %d\n", v3);
    if ( v3 == 168 )
    {
      v40 = 0;
      goto LABEL_67;
    }
    v10 = 2 * v3;
    v11 = *((__int16 *)&off_5DE80 + v3 + 534);
    if ( v11 == -145 )
    {
LABEL_30:
      v17 = *(unsigned __int16 *)((char *)&unk_5FE78 + v10 - 3384);
      if ( *(_WORD *)((char *)&unk_5FE78 + v10 - 3384) )
        goto LABEL_31;
      goto LABEL_50;
    }
    v12 = dword_CA66C;
    if ( dword_CA66C == -2 )
    {
      if ( dword_CA664 )
        fwrite("Reading a token: ", 1u, 0x11u, (FILE *)stderr);
      v12 = sub_1858C();
      dword_CA66C = v12;
      if ( v12 > 0 )
      {
LABEL_21:
        v13 = (unsigned int)v12 > 0x1A4;
        if ( (unsigned int)v12 > 0x1A4 )
          v125 = 2;
        else
          v12 += (int)&off_5DE80;
        if ( !v13 )
          v125 = *(unsigned __int8 *)(v12 + 1820);
        if ( dword_CA664 )
        {
          fprintf((FILE *)stderr, "%s ", "Next token is");
          sub_16120((FILE *)stderr, v125);
          fputc(10, (FILE *)stderr);
        }
        goto LABEL_28;
      }
    }
    else if ( dword_CA66C > 0 )
    {
      goto LABEL_21;
    }
    dword_CA66C = 0;
    v125 = 0;
    if ( dword_CA664 )
      fwrite("Now at end of input.\n", 1u, 0x15u, (FILE *)stderr);
LABEL_28:
    v14 = v11 + v125;
    if ( v14 > 0x276 )
      goto LABEL_30;
    v15 = (char *)&off_5DE80 + 2 * v14;
    v16 = *((__int16 *)v15 + 1136);
    if ( v16 != v125 )
      goto LABEL_30;
    v27 = *((__int16 *)v15 + 1768);
    if ( v27 > 0 )
    {
      if ( v129 )
        --v129;
      if ( dword_CA664 )
      {
        v122 = v27;
        fprintf((FILE *)stderr, "%s ", "Shifting");
        sub_16120((FILE *)stderr, v16);
        fputc(10, (FILE *)stderr);
        v27 = v122;
      }
      v3 = v27;
      v125 = v16;
      dword_CA66C = -2;
      v2[1] = dbl_CA670;
      ++v2;
      goto LABEL_44;
    }
    v28 = v27 == -7;
    if ( v27 != -7 )
      v28 = v27 == 0;
    if ( !v28 )
    {
      v17 = -v27;
LABEL_31:
      v18 = 2 * v17;
      v133 = 2 * v17;
      v19 = *((unsigned __int8 *)&unk_5FE78 + v17 - 2632);
      v127 = v2[1 - v19];
      if ( dword_CA664 )
      {
        v52 = (char *)&unk_5FE78 + v18;
        fprintf(
          (FILE *)stderr,
          "Reducing stack by rule %d (line %lu):\n",
          v17 - 1,
          *(unsigned __int16 *)((char *)&unk_5FE78 + v18 - 2364));
        if ( v19 )
        {
          v134 = v0;
          v53 = 0;
          v54 = (char *)&unk_5F754 + 2 * *((unsigned __int16 *)v52 - 240) - 2;
          do
          {
            fprintf((FILE *)stderr, "   $%d = ", ++v53);
            v55 = *((__int16 *)v54 + 1);
            v54 += 2;
            sub_16120((FILE *)stderr, v55);
            fputc(10, (FILE *)stderr);
          }
          while ( v19 != v53 );
          v0 = v134;
        }
      }
      switch ( v17 )
      {
        case 5:
          sub_4FE78(
            3,
            "syntax error in %s line %d, column %d",
            *(const char **)dword_CA668,
            *(_DWORD *)(dword_CA668 + 28),
            *(_DWORD *)(dword_CA668 + 32));
          break;
        case 19:
          v84 = sub_FC80(*((_DWORD *)v2 - 4), *((_DWORD *)v2 - 2), *(void **)v2);
          if ( v84 )
            goto LABEL_185;
          break;
        case 20:
          v84 = sub_FC80(*((_DWORD *)v2 - 2), *(_DWORD *)v2, 0);
          if ( v84 )
LABEL_185:
            sub_10DCC(dword_C9CE4, v84);
          break;
        case 27:
          LODWORD(v127) = sub_FBB8(*(_DWORD *)v2, *((_DWORD *)v2 - 2));
          break;
        case 28:
          LODWORD(v127) = sub_FBB8(*(_DWORD *)v2, 0);
          break;
        case 29:
          LODWORD(v127) = 2;
          break;
        case 30:
          LODWORD(v127) = 10;
          break;
        case 31:
        case 78:
        case 144:
        case 176:
        case 213:
        case 217:
        case 233:
        case 240:
        case 253:
        case 258:
          goto LABEL_209;
        case 32:
        case 79:
        case 145:
        case 152:
        case 177:
        case 214:
        case 218:
        case 234:
        case 241:
        case 254:
        case 259:
          goto LABEL_171;
        case 35:
        case 80:
        case 81:
        case 82:
        case 153:
        case 178:
          LODWORD(v127) = sub_FA6C(*((_DWORD *)v2 - 2));
          break;
        case 36:
        case 110:
        case 167:
          goto LABEL_169;
        case 45:
        case 146:
        case 154:
        case 155:
        case 215:
          goto LABEL_197;
        case 52:
          v83 = sub_FE58(*(void ***)v2);
          if ( v83 )
            sub_10DCC(dword_C9CE8, (int)v83);
          break;
        case 55:
          dword_C9CEC = 1;
          break;
        case 56:
          sub_10E88(dword_C9CF0, *(_DWORD **)v2);
          break;
        case 57:
          sub_10E88(dword_C9CF4, *(_DWORD **)v2);
          break;
        case 58:
        case 192:
          v77 = dword_C9D5C;
          v78 = sub_FA9C(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          sub_10DCC(v77, (int)v78);
          break;
        case 59:
          dword_C9D20 = *(_DWORD *)v2;
          break;
        case 60:
          ++dword_C9D24;
          sub_10E88(dword_C9D28, *(_DWORD **)v2);
          break;
        case 61:
          dword_C9D2C = *(_DWORD *)v2;
          break;
        case 62:
          dword_C9D30 = *(_DWORD *)v2;
          break;
        case 63:
          dword_C9D34 = *(_DWORD *)v2;
          break;
        case 64:
          dword_C9D38 = *(_DWORD *)v2;
          break;
        case 65:
          dword_C9D3C = *(_DWORD *)v2;
          break;
        case 66:
          dword_C9D40 = *(_DWORD *)v2;
          break;
        case 67:
        case 105:
        case 128:
          goto LABEL_233;
        case 68:
          v56 = *(_DWORD *)v2;
          if ( *(_DWORD *)v2 )
            goto LABEL_124;
          LODWORD(v127) = *((_DWORD *)v2 - 2);
          break;
        case 69:
        case 156:
          goto LABEL_211;
        case 70:
          LODWORD(v127) = 0;
          dword_C9D38 = *(_DWORD *)v2;
          sub_4FE78(4, "'crypto revoke %d' is deprecated, please use 'revoke %d' instead.", dword_C9D38, dword_C9D38);
          break;
        case 77:
          sub_10E88(dword_C9CF8, *(_DWORD **)v2);
          break;
        case 92:
          sub_10E88(dword_C9CFC, *(_DWORD **)v2);
          break;
        case 93:
          if ( dword_794D8 )
          {
            dword_C9D00 = *(_DWORD *)v2;
          }
          else
          {
            free(*(void **)v2);
            sub_16478("statsdir remote configuration ignored");
          }
          break;
        case 94:
          v90 = dword_C9D04;
          v91 = sub_FEF8(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          sub_10DCC(v90, (int)v91);
          break;
        case 95:
        case 129:
        case 231:
          v109 = *((_DWORD *)v2 - 2);
          v110 = sub_FB68(*(_DWORD *)v2);
          LODWORD(v127) = sub_10DCC(v109, (int)v110);
          break;
        case 96:
        case 232:
          v60 = sub_FB68(*(_DWORD *)v2);
          LODWORD(v127) = sub_FA4C((int)v60);
          break;
        case 106:
          if ( *(_DWORD *)v2 )
LABEL_209:
            LODWORD(v127) = sub_10DCC(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          else
            LODWORD(v127) = *((_DWORD *)v2 - 2);
          break;
        case 107:
          if ( dword_794D8 )
          {
LABEL_211:
            LODWORD(v127) = sub_FAF4(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          }
          else
          {
            LODWORD(v127) = 0;
            free(*(void **)v2);
            sub_16478("filegen file remote config ignored");
          }
          break;
        case 108:
          if ( dword_794D8 )
          {
LABEL_197:
            LODWORD(v127) = sub_FA9C(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          }
          else
          {
            LODWORD(v127) = 0;
            sub_16478("filegen type remote config ignored");
          }
          break;
        case 109:
          if ( dword_794D8 )
            goto LABEL_169;
          LODWORD(v127) = 0;
          if ( *(_DWORD *)v2 == 323 )
            v89 = "filegen link remote config ignored";
          else
            v89 = "filegen nolink remote config ignored";
          sub_16478(v89);
          break;
        case 122:
          sub_10E88(dword_C9D08, *(_DWORD **)v2);
          break;
        case 123:
          v87 = dword_C9D0C;
          v88 = sub_FF14(*((_DWORD *)v2 - 2), 0, *(_DWORD *)v2, *(_DWORD *)(dword_CA668 + 8));
          sub_10DCC(v87, (int)v88);
          break;
        case 124:
          v85 = dword_C9D0C;
          v86 = sub_FF14(0, 0, *(_DWORD *)v2, *(_DWORD *)(dword_CA668 + 8));
          sub_10DCC(v85, (int)v86);
          break;
        case 125:
          v103 = dword_C9D0C;
          v104 = sub_4F4E8("0.0.0.0");
          v105 = sub_FBB8(v104, 2);
          v106 = sub_4F4E8("0.0.0.0");
          v107 = sub_FBB8(v106, 2);
          v108 = sub_FF14((int)v105, (int)v107, *(_DWORD *)v2, *(_DWORD *)(dword_CA668 + 8));
          sub_10DCC(v103, (int)v108);
          break;
        case 126:
          v97 = dword_C9D0C;
          v98 = sub_4F4E8("::");
          v99 = sub_FBB8(v98, 10);
          v100 = sub_4F4E8("::");
          v101 = sub_FBB8(v100, 10);
          v102 = sub_FF14((int)v99, (int)v101, *(_DWORD *)v2, *(_DWORD *)(dword_CA668 + 8));
          sub_10DCC(v97, (int)v102);
          break;
        case 127:
          v95 = dword_C9D0C;
          v96 = sub_FF14(*((_DWORD *)v2 - 6), *((_DWORD *)v2 - 2), *(_DWORD *)v2, *(_DWORD *)(dword_CA668 + 8));
          sub_10DCC(v95, (int)v96);
          break;
        case 150:
          v92 = dword_C9D10;
          v93 = sub_1069C(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          sub_10DCC(v92, (int)v93);
          break;
        case 151:
          sub_10DCC(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          break;
        case 163:
          sub_10E88(dword_C9D18, *(_DWORD **)v2);
          break;
        case 164:
          sub_10E88(dword_C9D1C, *(_DWORD **)v2);
          break;
        case 165:
          v56 = *(_DWORD *)v2;
          if ( *(_DWORD *)v2 )
LABEL_124:
            LODWORD(v127) = sub_10DCC(*((_DWORD *)v2 - 2), v56);
          else
            LODWORD(v127) = *((_DWORD *)v2 - 2);
          break;
        case 166:
          if ( *(_DWORD *)v2 )
LABEL_171:
            LODWORD(v127) = sub_FA4C(*(_DWORD *)v2);
          else
LABEL_233:
            LODWORD(v127) = sub_10ED0();
          break;
        case 168:
          if ( dword_794D8 )
          {
LABEL_169:
            LODWORD(v127) = sub_FA9C(408, *(_DWORD *)v2);
          }
          else
          {
            LODWORD(v127) = 0;
            sub_16478("enable/disable stats remote config ignored");
          }
          break;
        case 175:
          sub_10E88(dword_C9D14, *(_DWORD **)v2);
          break;
        case 187:
          v82 = sub_FA6C(*((_DWORD *)v2 - 2));
          sub_10DCC(dword_C9D5C, v82);
          break;
        case 188:
          goto LABEL_165;
        case 189:
          if ( dword_794D8 )
          {
LABEL_165:
            v81 = sub_FAF4(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
            sub_10DCC(dword_C9D5C, (int)v81);
          }
          else
          {
            free(*(void **)v2);
            v112 = (const char *)sub_182B8(*((_DWORD *)v2 - 2));
            snprintf(s, 0x40u, "%s remote config ignored", v112);
            sub_16478(s);
          }
          break;
        case 190:
          if ( dword_794D8 )
          {
            if ( dword_CA57C <= 4 )
            {
              v123 = dword_CA57C;
              v113 = nullsub_1(*((_DWORD *)v2 - 2));
              v114 = sub_182F0(v113, "r");
              v115 = dword_CA57C + 1;
              dword_C9CA0[v123 + 1] = v114;
              v116 = dword_C9CA0[v115];
              if ( v116 )
              {
                dword_CA57C = v115;
                dword_CA668 = v116;
              }
              else
              {
                v117 = (FILE *)stderr;
                v118 = (const char *)nullsub_1(*((_DWORD *)v2 - 2));
                fprintf(v117, "getconfig: Couldn't open <%s>\n", v118);
                v119 = (const char *)nullsub_1(*((_DWORD *)v2 - 2));
                sub_4FE78(3, "getconfig: Couldn't open <%s>\n", v119);
              }
            }
            else
            {
              fwrite("getconfig: Maximum include file level exceeded.\n", 1u, 0x30u, (FILE *)stderr);
              sub_4FE78(3, "getconfig: Maximum include file level exceeded.\n");
            }
          }
          else
          {
            sub_16478("remote includefile ignored");
          }
          break;
        case 191:
          for ( i = dword_CA57C; dword_CA57C != -1; i = dword_CA57C )
          {
            v80 = dword_C9CA0[i];
            dword_CA57C = i - 1;
            sub_183C8(v80);
          }
          break;
        case 194:
          sub_10E88(dword_C9D44, *(_DWORD **)v2);
          break;
        case 195:
          sub_10E88(dword_C9D4C, *(_DWORD **)v2);
          break;
        case 196:
          sub_10DCC(dword_C9D50, *(_DWORD *)v2);
          break;
        case 197:
          v75 = dword_C9D58;
          v76 = sub_1069C(*(_DWORD *)v2, 0);
          sub_10DCC(v75, (int)v76);
          break;
        case 198:
          v73 = dword_C9D58;
          v74 = sub_1069C(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          sub_10DCC(v73, (int)v74);
          break;
        case 199:
          sub_10E88(dword_C9D54, *(_DWORD **)v2);
          break;
        case 207:
          v71 = dword_C9D5C;
          v72 = sub_FAF4(287, *(_DWORD *)v2);
          sub_10DCC(v71, (int)v72);
          break;
        case 208:
          v67 = dword_C9D5C;
          v68 = sub_FA6C(403);
          sub_10DCC(v67, v68);
          v69 = dword_C9D5C;
          v70 = sub_FAF4(287, *((_DWORD *)v2 - 2));
          sub_10DCC(v69, (int)v70);
          break;
        case 209:
          v65 = dword_C9D5C;
          v66 = sub_FAF4(287, (int)&unk_5FEB0);
          sub_10DCC(v65, (int)v66);
          break;
        case 210:
          LODWORD(v127) = sub_10600(*((const char **)v2 - 6), *((const char **)v2 - 2), *(const char **)v2);
          break;
        case 212:
          LODWORD(v127) = 0;
          break;
        case 216:
          LODWORD(v127) = sub_FB40(*((_DWORD *)v2 - 2), *(_DWORD *)v2);
          break;
        case 219:
          v20 = **(unsigned __int8 **)v2;
          v21 = v20 == 45;
          if ( v20 != 45 )
            v21 = v20 == 43;
          if ( v21 || v20 == 61 )
          {
            v111 = sub_4F4E8(*(_DWORD *)v2 + 1);
            LODWORD(v127) = sub_FAF4(v20, v111);
          }
          else
          {
            sub_16478("Logconfig prefix is not '+', '-' or '='\n");
          }
          free(*(void **)v2);
          break;
        case 220:
          v63 = dword_C9D60;
          v64 = sub_1063C(*(_DWORD *)v2, 0, *((_DWORD *)v2 - 2));
          sub_10DCC(v63, (int)v64);
          break;
        case 221:
          v61 = dword_C9D60;
          v62 = sub_1063C(0, *(_DWORD *)v2, *((_DWORD *)v2 - 2));
          sub_10DCC(v61, (int)v62);
          break;
        case 235:
          LODWORD(v127) = sub_FA9C(105, *(_DWORD *)v2);
          break;
        case 237:
          LODWORD(v127) = sub_FAC4(45, *((unsigned __int16 *)v2 - 12), *((unsigned __int16 *)v2 - 4));
          break;
        case 238:
          v58 = *((_DWORD *)v2 - 2);
          v59 = sub_FBA0(*(_DWORD *)v2);
          LODWORD(v127) = sub_10DCC(v58, (int)v59);
          break;
        case 239:
          v57 = sub_FBA0(*(_DWORD *)v2);
          LODWORD(v127) = sub_FA4C((int)v57);
          break;
        case 242:
          if ( *(_DWORD *)v2 > 1u )
          {
            LODWORD(v127) = 1;
            sub_16478("Integer value is not boolean (0 or 1). Assuming 1");
          }
          else
          {
            LODWORD(v127) = *(_DWORD *)v2;
          }
          break;
        case 243:
          LODWORD(v127) = 1;
          break;
        case 244:
          LODWORD(v127) = 0;
          break;
        case 245:
          v127 = (double)*(int *)v2;
          break;
        case 247:
          v94 = sub_10908(*((_DWORD *)v2 - 4), *((_DWORD *)v2 - 2));
          dword_794F4 = 1;
          dword_C9D64 = (int)v94;
          break;
        case 248:
          dword_794F4 = 0;
          break;
        case 249:
        case 261:
          LODWORD(v127) = sub_10DCC(*((_DWORD *)v2 - 4), *((_DWORD *)v2 - 2));
          break;
        case 250:
        case 262:
          LODWORD(v127) = sub_FA4C(*((_DWORD *)v2 - 2));
          break;
        case 251:
        case 252:
        case 263:
        case 264:
        case 265:
        case 266:
        case 267:
          LODWORD(v127) = sub_FA6C(*((_DWORD *)v2 - 4));
          break;
        case 255:
          LODWORD(v127) = sub_1079C(*((const char ***)v2 - 8), *((_DWORD *)v2 - 2));
          break;
        case 256:
          v127 = *(v2 - 1);
          break;
        case 257:
          LODWORD(v127) = *(_DWORD *)v2;
          break;
        case 260:
          LODWORD(v127) = sub_106B8(*((_DWORD *)v2 - 2));
          break;
        default:
          break;
      }
      if ( dword_CA664 )
      {
        v22 = &v2[-(__int16)v19];
        fprintf((FILE *)stderr, "%s ", "-> $$ =");
        v0 -= 2 * (__int16)v19;
        v23 = *(unsigned __int16 *)((char *)&unk_5FE78 + v133 + 60);
        sub_16120((FILE *)stderr, v23);
        fputc(10, (FILE *)stderr);
        if ( dword_CA664 )
          sub_160C0((__int16 *)v1, (unsigned int)v0);
      }
      else
      {
        v22 = &v2[-(__int16)v19];
        v0 -= 2 * (__int16)v19;
        v23 = *(unsigned __int16 *)((char *)&unk_5FE78 + v133 + 60);
      }
      v24 = 2 * (v23 - 171);
      v25 = *(__int16 *)v0;
      v22[1] = v127;
      v2 = v22 + 1;
      v26 = *(__int16 *)((char *)&unk_5FE78 + v24 + 596) + v25;
      if ( v26 <= 0x276 && (v43 = (char *)&off_5DE80 + 2 * v26, *((__int16 *)v43 + 1136) == v25) )
        v3 = *((__int16 *)v43 + 1768);
      else
        v3 = *(__int16 *)((char *)&unk_5FE78 + v24 + 776);
      goto LABEL_44;
    }
LABEL_50:
    if ( v129 )
    {
      if ( v129 == 3 )
      {
        if ( dword_CA66C <= 0 )
        {
          if ( !dword_CA66C )
          {
            v40 = 1;
            goto LABEL_68;
          }
        }
        else
        {
          sub_16160((int)"Error: discarding", v125);
          dword_CA66C = -2;
        }
      }
    }
    else
    {
      ++dword_CA660;
      v44 = sub_16268(0, v3, dword_CA66C);
      v45 = __CFADD__(v131, 1);
      if ( v131 != -1 )
        v45 = v131 >= v44;
      v46 = v44;
      if ( !v45 )
      {
        v47 = 2 * v44;
        if ( v44 > 2 * v44 )
          v47 = -1;
        v132 = v47;
        if ( v128 != v136 )
          free(v128);
        v48 = (_BYTE *)sub_4F524(v132);
        v49 = v132;
        if ( !v48 )
          v49 = 128;
        v131 = v49;
        if ( !v48 )
          v48 = v136;
        v128 = v48;
      }
      v50 = v46;
      if ( v46 )
        v50 = 1;
      if ( v46 <= v131 )
        v51 = v50 & 1;
      else
        v51 = 0;
      if ( v51 )
      {
        sub_16268(v128, v3, dword_CA66C);
        sub_16478(v128);
      }
      else
      {
        v121 = v50;
        sub_16478("syntax error");
        if ( v121 )
          goto LABEL_118;
      }
    }
    for ( j = v0; ; j -= 2 )
    {
      v30 = (__int16 *)((char *)&off_5DE80 + v10 + 1068);
      v31 = (unsigned __int16 *)((char *)&unk_5FE78 + v10 + 956);
      v32 = *v30;
      v0 = j;
      v3 = (int)(j - 2);
      v33 = v32 + 1;
      if ( v32 != -145 )
      {
        v34 = (char *)&off_5DE80 + 2 * v33;
        if ( v33 <= 0x276 && *((_WORD *)v34 + 1136) == 1 )
        {
          v36 = *((__int16 *)v34 + 1768);
          if ( v36 > 0 )
            break;
        }
      }
      --v2;
      if ( v1 == j )
      {
        v0 = v1;
        v40 = 1;
        goto LABEL_67;
      }
      sub_16160((int)"Error: popping", *v31);
      v35 = *((__int16 *)j - 1);
      if ( dword_CA664 )
        sub_160C0((__int16 *)v1, (unsigned int)(j - 2));
      v10 = 2 * v35;
    }
    v37 = v2;
    v38 = dword_CA664;
    ++v2;
    v39 = dword_CA664 == 0;
    if ( !dword_CA664 )
    {
      v38 = 3;
      v3 = v36;
    }
    v37[1] = dbl_CA670;
    if ( v39 )
    {
      v129 = v38;
    }
    else
    {
      v3 = v36;
      v120 = v36;
      fprintf((FILE *)stderr, "%s ", "Shifting");
      v129 = 3;
      sub_16120((FILE *)stderr, *((unsigned __int16 *)&unk_5FE78 + v120 + 478));
      fputc(10, (FILE *)stderr);
    }
LABEL_44:
    v0 += 2;
  }
  v1 = v7;
  v40 = 1;
LABEL_67:
  if ( dword_CA66C == -2 )
    goto LABEL_69;
LABEL_68:
  sub_16160((int)"Cleanup: discarding lookahead", v125);
LABEL_69:
  if ( dword_CA664 )
    sub_160C0((__int16 *)v1, (unsigned int)v0);
  while ( v1 != v0 )
  {
    v41 = *(__int16 *)v0;
    v0 -= 2;
    sub_16160((int)"Cleanup: popping", *((unsigned __int16 *)&unk_5FE78 + v41 + 478));
  }
  if ( v1 != ptr )
    free(v1);
  if ( v128 != v136 )
    free(v128);
  return v40;
}
