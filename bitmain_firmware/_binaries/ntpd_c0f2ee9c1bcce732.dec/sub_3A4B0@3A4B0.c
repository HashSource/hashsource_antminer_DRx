int __fastcall sub_3A4B0(double a1)
{
  double v1; // d0
  size_t v2; // r7
  int v3; // r5
  double v4; // d8
  int v5; // r4
  int v6; // r6
  char *v7; // r2
  int v8; // r3
  int v9; // r9
  double v10; // d16
  int v11; // r3
  bool v12; // zf
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r3
  double v18; // r0
  int v19; // r3
  int v20; // r9
  int v21; // r9
  int v22; // r0
  int v23; // r10
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r10
  int v28; // r1
  int v29; // r8
  int v30; // r2
  int v31; // r3
  int v32; // r3
  unsigned int v33; // r2
  int v34; // r1
  int v35; // r11
  int v36; // r1
  size_t v37; // r0
  double *v38; // r8
  double v39; // r0
  double v40; // r0
  int v41; // r3
  int v42; // r10
  double v43; // d0
  double v44; // r0
  double v45; // d16
  int v46; // r3
  int v47; // r2
  double v48; // d0
  double v49; // d16
  int v50; // r3
  int v51; // r2
  double v52; // d18
  double v53; // d17
  double v54; // d17
  int v55; // r2
  int v56; // r3
  double v57; // r0
  double v58; // r0
  int v59; // r12
  __int64 v60; // r2
  int v61; // r3
  int v62; // r3
  int v63; // r3
  int v64; // r3
  int v65; // r10
  int v66; // r3
  int v67; // r3
  int v68; // r0
  int v69; // lr
  int v70; // r2
  int v71; // r1
  int v72; // r2
  int v73; // r12
  int v74; // r1
  int v75; // lr
  int v76; // r0
  int v77; // r1
  int v79; // [sp+6Ch] [bp-A8h]
  int v80; // [sp+70h] [bp-A4h]
  int v81; // [sp+70h] [bp-A4h]
  int v82; // [sp+70h] [bp-A4h]
  int v83; // [sp+74h] [bp-A0h]
  int v84; // [sp+78h] [bp-9Ch]
  int v85; // [sp+7Ch] [bp-98h]
  int v86; // [sp+80h] [bp-94h]
  int v87; // [sp+84h] [bp-90h]
  int v88; // [sp+88h] [bp-8Ch] BYREF
  unsigned int v89; // [sp+8Ch] [bp-88h]
  char s[128]; // [sp+90h] [bp-84h] BYREF

  v2 = LODWORD(a1);
  v3 = *(_DWORD *)(LODWORD(a1) + 60);
  v4 = v1;
  v5 = *(_DWORD *)(v3 + 28);
  if ( !*(_DWORD *)&buf[8228] )
  {
    *(_DWORD *)&buf[8228] = 1;
    LODWORD(a1) = memset(&buf[8236], 0, 0x1E8u);
  }
  v6 = *(_DWORD *)(v5 + 4304);
  *(_DWORD *)(v5 + 4304) = v6 + 1;
  v7 = &buf[8 * v6 + 8196];
  HIDWORD(a1) = (char *)&unk_7AC40 + 8 * v6;
  v8 = *(_DWORD *)HIDWORD(a1) - 1;
  v9 = *(_DWORD *)(HIDWORD(a1) + 4);
  v10 = *((double *)v7 + 5) + (v1 - *((double *)v7 + 5)) * 0.0625;
  *((double *)v7 + 5) = v10;
  switch ( v8 )
  {
    case 0:
      v38 = (double *)&buf[8 * v9 + 8196];
      if ( (*(_DWORD *)(v5 + 4328) & 4) == 0 )
        goto LABEL_54;
      *v38 = v1;
      goto LABEL_11;
    case 1:
      *(double *)&buf[8 * v9 + 8196] = v1;
      goto LABEL_11;
    case 2:
      v38 = (double *)&buf[8 * v9 + 8196];
LABEL_54:
      *v38 = 0.0;
      goto LABEL_11;
    case 3:
      LODWORD(v39) = v2;
      HIDWORD(v39) = v5 + 112 * v9 + 3296;
      LODWORD(a1) = sub_3A258(v39, dbl_7B048);
      goto LABEL_11;
    case 4:
      LODWORD(v40) = v2;
      HIDWORD(v40) = v5 + 112 * v9 + 3296;
      LODWORD(a1) = sub_3A258(v40, dbl_7AF48);
      goto LABEL_11;
    case 5:
      LODWORD(v57) = v2;
      HIDWORD(v57) = v5 + 112 * v9 + 3296;
      LODWORD(a1) = sub_3A258(v57, dbl_7AEA8);
      goto LABEL_11;
    case 6:
      LODWORD(v58) = v2;
      HIDWORD(v58) = v5 + 112 * v9 + 3296;
      LODWORD(a1) = sub_3A258(v58, dbl_7AE28);
      goto LABEL_11;
    case 7:
      goto LABEL_17;
    case 8:
      LODWORD(v18) = v2;
      HIDWORD(v18) = v5 + 4192;
      LODWORD(a1) = sub_3A258(v18, dbl_7B048);
      v10 = *(double *)&buf[8 * v6 + 8236];
LABEL_17:
      if ( v10 <= 1000.0 )
      {
        if ( v10 >= -1000.0 )
        {
          *(_DWORD *)(v5 + 4328) |= 0x40u;
        }
        else
        {
          v61 = *(_DWORD *)(v5 + 4336);
          v12 = (v61 & v9) == 0;
          v62 = v61 & ~v9;
          if ( !v12 )
            *(_DWORD *)(v5 + 4332) |= 1u;
          *(_DWORD *)(v5 + 4336) = v62;
        }
      }
      else
      {
        v19 = *(_DWORD *)(v5 + 4336);
        v12 = (v19 & v9) == 0;
        v20 = v19 | v9;
        if ( v12 )
          *(_DWORD *)(v5 + 4332) |= 1u;
        *(_DWORD *)(v5 + 4336) = v20;
      }
      goto LABEL_11;
    case 9:
      if ( v10 > 1000.0 )
      {
        v63 = *(_DWORD *)(v5 + 4336);
        v12 = (v63 & v9) == 0;
        v64 = v63 | v9;
        if ( v12 )
          *(_DWORD *)(v5 + 4332) |= 1u;
        *(_DWORD *)(v5 + 4336) = v64;
        v14 = *(_DWORD *)(v5 + 4328);
      }
      else if ( v10 >= -1000.0 )
      {
        v14 = *(_DWORD *)(v5 + 4328) | 0x40;
      }
      else
      {
        v11 = *(_DWORD *)(v5 + 4336);
        v12 = (v11 & v9) == 0;
        v13 = v11 & ~v9;
        if ( !v12 )
          *(_DWORD *)(v5 + 4332) |= 1u;
        v14 = *(_DWORD *)(v5 + 4328);
        *(_DWORD *)(v5 + 4336) = v13;
      }
      v15 = *(_DWORD *)(v5 + 48);
      *(_DWORD *)(v5 + 4328) = v14 & 0xFFFFFCFF;
      if ( v15 <= 0 )
      {
        *(_DWORD *)(v5 + 216 * *(_DWORD *)(v5 + 3292) + 2200) = *(_DWORD *)(v5 + 2116);
      }
      else
      {
        v16 = (*(_DWORD *)(v5 + 3288) + 1) % 5;
        *(_DWORD *)(v5 + 3288) = v16;
        LODWORD(a1) = sub_3998C(v2, v16);
      }
      goto LABEL_11;
    case 10:
      if ( (*(_DWORD *)(v5 + 4328) & 0x1000) == 0 )
        goto LABEL_22;
      goto LABEL_11;
    case 11:
LABEL_22:
      v21 = *(_DWORD *)(*(_DWORD *)(v2 + 60) + 28);
      *(_DWORD *)(v5 + 4328) &= ~0x1000u;
      v22 = sub_398B8((double *)(v21 + 3296));
      if ( (*(_DWORD *)(v21 + 4328) & 4) == 0 )
        goto LABEL_33;
      if ( !v22 && !sub_398B8((double *)(v21 + 3408)) && !sub_398B8((double *)(v21 + 3520)) )
        sub_398B8((double *)(v21 + 3632));
      v23 = *(_DWORD *)(v21 + 4084) & 3;
      v24 = *(_DWORD *)(v21 + 3300)
          + 10 * *(_DWORD *)(v21 + 3412)
          + 60 * *(_DWORD *)(v21 + 3524)
          + 600 * *(_DWORD *)(v21 + 3636);
      v80 = *(_DWORD *)(v21 + 3748) + 10 * *(_DWORD *)(v21 + 3860) + 100 * *(_DWORD *)(v21 + 3972);
      if ( (*(_DWORD *)(v21 + 4336) & 0x40) == 0 )
        goto LABEL_32;
      v25 = *(_DWORD *)(v21 + 4328);
      if ( (v25 & 8) == 0 )
        goto LABEL_32;
      if ( v23 )
      {
        if ( v80 == 182 )
          goto LABEL_30;
        v26 = 365;
      }
      else
      {
        if ( v80 == 183 )
          goto LABEL_30;
        v26 = 366;
      }
      if ( v80 != v26 )
        goto LABEL_32;
LABEL_30:
      if ( v24 == 1439 )
      {
        *(_DWORD *)(v21 + 4328) = v25 | 0x1000;
        goto LABEL_33;
      }
LABEL_32:
      if ( v24 == 1440 )
      {
        while ( sub_398B8((double *)(v21 + 3520)) )
          ;
        while ( sub_398B8((double *)(v21 + 3632)) )
          ;
        v82 = v80 + 1;
        if ( !sub_398B8((double *)(v21 + 3744)) && !sub_398B8((double *)(v21 + 3856)) )
          sub_398B8((double *)(v21 + 3968));
        if ( v23 )
          v65 = 365;
        else
          v65 = 366;
        if ( v82 == v65 )
        {
          while ( sub_398B8((double *)(v21 + 3744)) != 1 )
            ;
          while ( sub_398B8((double *)(v21 + 3856)) )
            ;
          while ( sub_398B8((double *)(v21 + 3968)) )
            ;
          if ( !sub_398B8((double *)(v21 + 4080)) )
            sub_398B8((double *)(v21 + 4192));
        }
      }
LABEL_33:
      v27 = *(_DWORD *)(v2 + 60);
      v28 = 0;
      *(_DWORD *)(v5 + 4304) = 0;
      v29 = *(_DWORD *)(v27 + 28);
      v30 = *(_DWORD *)(v29 + 4328);
      if ( (v30 & 2) != 0 )
      {
        v31 = 4332;
      }
      else
      {
        v28 = 4332;
        v31 = *(_DWORD *)(v29 + 4332);
      }
      if ( (v30 & 2) != 0 )
      {
        v32 = *(_DWORD *)(v29 + v31);
      }
      else
      {
        v32 = v31 | 8;
        *(_DWORD *)(v29 + v28) = v32;
      }
      if ( *(int *)(v29 + 4308) > 8 )
      {
        if ( !v32 )
          *(_DWORD *)(v29 + 4328) = v30 | 8;
      }
      else
      {
        v32 |= 4u;
        *(_DWORD *)(v29 + 4332) = v32;
      }
      if ( (*(_DWORD *)(v29 + 4328) & 0xA) == 0xA )
      {
        v66 = *(_DWORD *)(v29 + 4336) & 0x40;
        if ( v66 )
          LOBYTE(v66) = 1;
        *(_BYTE *)(v27 + 32) = v66;
        v67 = *(_DWORD *)(v29 + 4304);
        v68 = *(_DWORD *)(v29 + 3748) + 10 * *(_DWORD *)(v29 + 3860) + 100 * *(_DWORD *)(v29 + 3972);
        v69 = *(_DWORD *)(v29 + 3300);
        v70 = 5 * *(_DWORD *)(v29 + 3412);
        v71 = 5 * *(_DWORD *)(v29 + 3636);
        *(_DWORD *)(v27 + 172) = *(_DWORD *)(v29 + 4084) + 10 * *(_DWORD *)(v29 + 4196) + 2000;
        v72 = v69 + 2 * v70;
        v73 = *(_DWORD *)(v29 + 3524);
        *(_DWORD *)(v27 + 188) = v67;
        *(_DWORD *)(v27 + 184) = v72;
        v74 = v73 + 2 * v71;
        *(_DWORD *)(v27 + 176) = v68;
        *(_DWORD *)(v27 + 180) = v74;
        v88 = 0;
        v75 = *(_DWORD *)v29;
        v89 = 0;
        if ( sub_4EFC8(v68, v74, v72, v67, 0, v75, v27 + 196, &v88) )
        {
          v76 = *(_DWORD *)v29;
          v77 = *(_DWORD *)(v29 + 4);
          *(_DWORD *)(v29 + 56) = 0;
          *(_DWORD *)(v27 + 208) = v76;
          *(_DWORD *)(v27 + 212) = v77;
          *(_QWORD *)(v27 + 232) = 0;
          sub_27430((_DWORD *)v27, v88, v89, *(_DWORD *)v29, v77);
          sub_276A0(v2);
          v32 = *(_DWORD *)(v29 + 4332);
        }
        else
        {
          v32 = *(_DWORD *)(v29 + 4332);
          *(_DWORD *)(v29 + 52) = 6;
        }
      }
      v33 = *(_DWORD *)(v29 + 4336);
      if ( (*(_DWORD *)(v29 + 4328) & 8) != 0 )
        v34 = 32;
      else
        v34 = 63;
      v86 = v34;
      v85 = *((unsigned __int8 *)&unk_7AC40 + ((v33 >> 4) & 3) + 1384);
      v35 = *(_DWORD *)(v29 + 4336) & 7;
      if ( (v33 & 0x40) != 0 )
        v36 = 76;
      else
        v36 = 32;
      v81 = *(_DWORD *)(v29 + 4084) + 10 * *(_DWORD *)(v29 + 4196) + 2000;
      if ( (v33 & 8) == 0 )
        v35 = -v35;
      v87 = v36;
      v84 = *(_DWORD *)(v29 + 3748) + 10 * *(_DWORD *)(v29 + 3860) + 100 * *(_DWORD *)(v29 + 3972);
      v79 = *(_DWORD *)(v29 + 3300) + 10 * *(_DWORD *)(v29 + 3412);
      v83 = *(_DWORD *)(v29 + 3524) + 10 * *(_DWORD *)(v29 + 3636);
      sprintf((char *)(v27 + 40), "%c%1X", v86, v32);
      sprintf(s, " %4d %03d %02d:%02d:%02d %c%c %+d", v81, v84, v83, v79, 0, v87, v85, v35);
      strcat((char *)(v27 + 40), s);
      sprintf(
        s,
        " %d %d %s %.0f %d %.1f %d",
        *(_DWORD *)(v29 + 56),
        *(_DWORD *)(v29 + 216 * *(_DWORD *)(v29 + 3284) + 2200),
        (const char *)(*(_DWORD *)(v29 + 3280) + 92),
        *(double *)(*(_DWORD *)(v29 + 3280) + 72),
        *(_DWORD *)(v29 + 4340),
        *(double *)(v29 + 24) / 8000.0 * 1000000.0,
        *(_DWORD *)(v29 + 2128));
      v37 = strlen((const char *)(v27 + 40));
      *(_DWORD *)(v27 + 168) = stpcpy(v27 + v37 + 40) - (v27 + 40);
      LODWORD(a1) = sub_2DDBC(v2 + 12, (const char *)(v27 + 40));
      if ( dword_7CF4C )
        LODWORD(a1) = printf("wwv: timecode %d %s\n", *(_DWORD *)(v27 + 168), (const char *)(v27 + 40));
      goto LABEL_11;
    case 12:
      v59 = v5 + 216 * *(_DWORD *)(v5 + 3292) + 2192;
      a1 = *(double *)(v5 + 216 * *(_DWORD *)(v5 + 3292) + 2256);
      v60 = *(_QWORD *)(v5 + 216 * *(_DWORD *)(v5 + 3292) + 2360);
      *(double *)(v59 + 72) = a1;
      *(_QWORD *)(v59 + 176) = v60;
      goto LABEL_11;
    case 13:
      v41 = *(_DWORD *)(v5 + 3292);
      v42 = v5 + 216 * v41 + 2200;
      v43 = *(double *)(v5 + 216 * v41 + 2264);
      LODWORD(v44) = sub_39F88(a1);
      v45 = *(double *)(v42 + 64);
      v46 = *(_DWORD *)(v42 + 92);
      v47 = 2 * *(_DWORD *)(v42 + 88);
      *(_DWORD *)(v42 + 88) = v47;
      if ( (v47 & 0x40) != 0 )
        *(_DWORD *)(v42 + 92) = --v46;
      *(double *)(v42 + 72) = v43;
      if ( v45 >= 2500.0 && v43 >= 20.0 )
      {
        HIDWORD(v44) = *(_DWORD *)(v5 + 4328);
        if ( (BYTE4(v44) & 0x60) == 0 )
        {
          ++v46;
          *(_DWORD *)(v42 + 88) = v47 | 1;
          *(_DWORD *)(v42 + 92) = v46;
        }
      }
      v48 = *(double *)(v42 + 168);
      if ( v45 >= 6000.0 )
        v45 = 5999.0;
      *(double *)(v42 + 80) = ((double)v46 * 6000.0 + v45) / 42000.0 * 100.0;
      sub_39F88(v44);
      v49 = *(double *)(v42 + 168);
      v50 = *(_DWORD *)(v42 + 196);
      v51 = 2 * *(_DWORD *)(v42 + 192);
      *(_DWORD *)(v42 + 192) = v51;
      if ( (v51 & 0x40) != 0 )
        *(_DWORD *)(v42 + 196) = --v50;
      *(double *)(v42 + 176) = v48;
      if ( v49 >= 2500.0 && v48 >= 20.0 && (*(_DWORD *)(v5 + 4328) & 0x60) == 0 )
      {
        ++v50;
        *(_DWORD *)(v42 + 192) = v51 | 1;
        *(_DWORD *)(v42 + 196) = v50;
      }
      v52 = (double)v50;
      v53 = (double)v50 * 6000.0;
      if ( v49 < 6000.0 )
        v53 = v49 + v53;
      else
        v52 = 5999.0;
      if ( v49 >= 6000.0 )
        v53 = v53 + v52;
      v54 = v53 / 42000.0 * 100.0;
      *(double *)(v42 + 184) = v54;
      if ( (*(_BYTE *)(v3 + 752) & 8) != 0 )
      {
        sprintf(
          s,
          "wwv5 %04x %3d %4d %.0f/%.1f %.0f/%.1f %s %04x %.0f %.0f/%.1f %s %04x %.0f %.0f/%.1f",
          *(_DWORD *)(v5 + 4328),
          *(_DWORD *)(v5 + 2116),
          *(_DWORD *)(v5 + 2132),
          *(double *)(v5 + 2144),
          *(double *)(v5 + 2152),
          *(double *)(v5 + 4312),
          *(double *)(v5 + 4320),
          (const char *)(v42 + 100),
          *(unsigned __int16 *)(v42 + 88),
          *(double *)(v42 + 80),
          *(double *)(v42 + 64),
          *(double *)(v42 + 72),
          (const char *)(v42 + 204),
          *(unsigned __int16 *)(v42 + 192),
          v54,
          v49,
          v48);
        sub_2DDBC(v2 + 12, s);
        if ( dword_7CF4C )
          puts(s);
      }
      v55 = *(_DWORD *)(v5 + 4328);
      *(_DWORD *)(v5 + 4332) = 0;
      *(_DWORD *)(v5 + 4308) = 0;
      *(_DWORD *)(v5 + 4340) = 0;
      v56 = *(_DWORD *)(v5 + 56);
      if ( (v55 & 8) != 0 )
      {
        if ( v56 > 2880 )
          goto LABEL_95;
      }
      else
      {
        if ( (v55 & 4) != 0 )
        {
          if ( v56 <= 40 )
            goto LABEL_80;
LABEL_95:
          LODWORD(a1) = sub_39B80(v2);
          return LODWORD(a1);
        }
        if ( v56 > 15 )
          goto LABEL_95;
      }
LABEL_80:
      LODWORD(a1) = sub_399F8(v2);
LABEL_11:
      if ( (*(_BYTE *)(v3 + 752) & 8) != 0 )
      {
        v17 = *(_DWORD *)(v5 + 4328);
        if ( (v17 & 4) == 0 )
        {
          sprintf(
            s,
            "wwv3 %2d %04x %3d %4d %5.0f %5.1f %5.0f %5.1f %5.0f",
            v6,
            v17,
            *(_DWORD *)(v5 + 2116),
            *(_DWORD *)(v5 + 2132),
            *(double *)(v5 + 2144),
            *(double *)(v5 + 2152),
            *(double *)(v5 + 4312),
            *(double *)(v5 + 4320),
            v4);
          LODWORD(a1) = sub_2DDBC(v2 + 12, s);
          if ( dword_7CF4C )
            LODWORD(a1) = puts(s);
        }
      }
      *(double *)(v3 + 232) = *(double *)(v3 + 232) + 0.000005;
      return LODWORD(a1);
    default:
      goto LABEL_11;
  }
}
