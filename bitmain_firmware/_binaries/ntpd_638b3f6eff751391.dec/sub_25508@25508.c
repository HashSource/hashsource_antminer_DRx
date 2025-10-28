int __fastcall sub_25508(int a1)
{
  unsigned int v2; // r2
  int result; // r0
  unsigned int v4; // r5
  int v5; // r10
  const char *v6; // r8
  const char *v7; // r0
  int v8; // r11
  unsigned int v9; // r8
  int v10; // r10
  unsigned int v11; // r1
  unsigned int v12; // r12
  unsigned int v13; // r3
  int v14; // r9
  unsigned __int16 v15; // r2
  unsigned int v16; // r12
  int v17; // r0
  int v18; // r2
  __int16 v19; // r3
  int v20; // r0
  unsigned int v21; // r12
  int v22; // r5
  unsigned int v23; // r7
  const char *v24; // r0
  unsigned int v25; // r9
  _BOOL4 v26; // r3
  _BOOL4 v27; // r2
  int v28; // r2
  bool v29; // zf
  unsigned int v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r2
  unsigned int v34; // r1
  _BOOL4 v35; // r6
  unsigned int v36; // r3
  bool v37; // zf
  int v38; // r3
  unsigned int v39; // r3
  unsigned int v40; // r1
  int *v41; // r4
  char v42; // r3
  int v43; // r7
  int v44; // r6
  int v45; // r3
  int v46; // r1
  int v47; // r3
  _BOOL4 v48; // r5
  int v49; // r8
  int v50; // r3
  bool v51; // zf
  int v52; // r3
  _BOOL4 v53; // r2
  int v55; // r1
  double v56; // d16
  int v57; // r9
  int v58; // r0
  int v59; // r1
  const char *v60; // r2
  const char *v61; // r3
  _BOOL4 v62; // r7
  int v63; // r0
  unsigned int v64; // r1
  int v65; // r1
  int v66; // r3
  int v67; // r3
  int v68; // r2
  int v69; // r2
  int v70; // r2
  int v71; // r1
  unsigned int v72; // r3
  int v73; // r3
  int v74; // r3
  int *v75; // r4
  unsigned int v76; // r1
  int v77; // r0
  int v78; // r1
  int v79; // r3
  int v80; // r1
  int v81; // r3
  unsigned int v82; // [sp+18h] [bp-54h]
  unsigned int v83; // [sp+18h] [bp-54h]
  unsigned int v84; // [sp+18h] [bp-54h]
  unsigned int v85; // [sp+18h] [bp-54h]
  unsigned int v86; // [sp+18h] [bp-54h]
  unsigned int v87; // [sp+18h] [bp-54h]
  int v88; // [sp+1Ch] [bp-50h]
  int v89; // [sp+1Ch] [bp-50h]
  int v90; // [sp+1Ch] [bp-50h]
  const char *v91; // [sp+20h] [bp-4Ch]
  int v92; // [sp+20h] [bp-4Ch]
  int v93; // [sp+20h] [bp-4Ch]
  int v94; // [sp+24h] [bp-48h]
  int v95; // [sp+28h] [bp-44h]
  unsigned int v96; // [sp+28h] [bp-44h]
  unsigned __int8 *v97; // [sp+2Ch] [bp-40h]
  unsigned int v98; // [sp+30h] [bp-3Ch]
  unsigned int v99; // [sp+34h] [bp-38h]
  unsigned int v100; // [sp+38h] [bp-34h]
  int v101; // [sp+3Ch] [bp-30h]
  unsigned int v102; // [sp+40h] [bp-2Ch]
  unsigned int v103; // [sp+44h] [bp-28h]
  unsigned int v104; // [sp+48h] [bp-24h]
  unsigned int v105; // [sp+4Ch] [bp-20h]
  int v106; // [sp+54h] [bp-18h] BYREF
  unsigned int v107; // [sp+58h] [bp-14h]
  unsigned int v108; // [sp+5Ch] [bp-10h]
  unsigned int v109; // [sp+60h] [bp-Ch]
  unsigned int v110; // [sp+64h] [bp-8h]

  v2 = *(unsigned __int16 *)(a1 + 10);
  v106 = 0;
  result = v2 << 8;
  ++dword_CB4A0;
  if ( (unsigned __int16)(((_WORD)v2 << 8) | (v2 >> 8)) <= 0x7Au )
    goto LABEL_2;
  result = sub_2CA18(a1 + 8);
  v4 = result;
  if ( dword_7CF4C > 1 )
  {
    v5 = dword_CB548;
    v6 = (const char *)sub_50CD0(*(_DWORD *)(a1 + 64) + 20);
    v7 = (const char *)sub_50CD0(a1 + 8);
    result = printf(
               "receive: at %ld %s<-%s flags %x restrict %03x\n",
               v5,
               v6,
               v7,
               *(_DWORD *)(*(_DWORD *)(a1 + 64) + 140),
               v4);
  }
  v8 = *(unsigned __int8 *)(a1 + 93);
  v9 = *(unsigned __int8 *)(a1 + 92);
  if ( !*(_BYTE *)(a1 + 93) )
    v8 = 16;
  if ( (v4 & 1) != 0 )
  {
LABEL_40:
    ++dword_CB4DC;
    return result;
  }
  v10 = v9 & 7;
  if ( v10 == 7 )
  {
    if ( (v4 & 0x40) == 0 )
      return sub_2C308(a1, ((v4 ^ 0x80) >> 7) & 1);
    goto LABEL_40;
  }
  if ( v10 == 6 )
  {
    if ( (v4 & 0x40) == 0 )
      return (int)sub_1BD68(a1, v4);
    goto LABEL_40;
  }
  if ( (v4 & 2) != 0 )
    goto LABEL_40;
  if ( (v4 & 0x1000) != 0 )
  {
    result = sub_504EC(result);
    if ( (double)result / 2147483650.0 < 0.1 )
      goto LABEL_40;
  }
  v94 = (v9 >> 3) & 7;
  if ( v94 == 4 )
  {
    ++dword_CB484;
    if ( (v9 & 7) == 0 )
      goto LABEL_2;
  }
  else
  {
    if ( (v4 & 8) != 0 || !v94 )
      goto LABEL_2;
    ++dword_CB4C0;
    if ( (v9 & 7) == 0 )
    {
      if ( v94 != 1 )
        goto LABEL_2;
      v10 = 3;
    }
  }
  v11 = *(_DWORD *)(a1 + 88);
  v97 = (unsigned __int8 *)(a1 + 92);
  v12 = v11 - 48;
  if ( v11 != 48 )
  {
    if ( (v12 & 3) == 0 )
    {
      v13 = v11 - 48;
      if ( v12 > 3 )
      {
        v14 = 48;
        if ( v12 > 0x18 )
        {
          result = a1 + 92;
          do
          {
            v15 = bswap32(*(_DWORD *)&v97[4 * (v14 / 4)]);
            v16 = v14 + v15;
            v13 -= v15;
            if ( (v15 & 3) == 0 )
            {
              v14 += v15;
              if ( v15 > 3u && v16 <= v11 )
              {
                if ( !v13 )
                  goto LABEL_31;
                if ( (v13 & 3) == 0 && v13 > 3 )
                  continue;
              }
            }
            goto LABEL_2;
          }
          while ( v13 > 0x18 );
          v12 = v13;
        }
        v98 = bswap32(*(_DWORD *)&v97[4 * (v14 / 4)]);
        goto LABEL_34;
      }
    }
LABEL_2:
    ++dword_CB490;
    return result;
  }
  v14 = 48;
LABEL_31:
  v12 = v4 & 4;
  if ( (v4 & 4) != 0 )
    goto LABEL_40;
  v98 = v4 & 4;
LABEL_34:
  v82 = v12;
  result = sub_20F08(a1, v4);
  v95 = result;
  if ( (result & 0x20) != 0 )
  {
    ++dword_CB4C4;
    if ( (result & 0x400) != 0 && (unsigned int)(v10 - 4) > 1 )
    {
      v17 = a1;
      v18 = v98;
      v19 = v95;
      if ( v10 == 3 )
        return sub_B1D8(v17, 4, v18, v19);
      else
        return sub_B1D8(a1, 1, v98, v95);
    }
    return result;
  }
  v20 = sub_22588(a1, v10, &v106);
  v104 = bswap32(*(_DWORD *)(a1 + 124));
  v105 = bswap32(*(_DWORD *)(a1 + 128));
  v102 = bswap32(*(_DWORD *)(a1 + 132));
  v103 = bswap32(*(_DWORD *)(a1 + 136));
  v21 = v82;
  v101 = *(_DWORD *)(a1 + 64) + 20;
  v99 = bswap32(*(_DWORD *)(a1 + 116));
  v100 = bswap32(*(_DWORD *)(a1 + 120));
  v107 = v104;
  v108 = v105;
  v109 = v102;
  v22 = v20;
  result = v103;
  v110 = v103;
  if ( !v82 )
  {
    v96 = v95 & 0xFFFFF3FF;
    v23 = 0;
    if ( dword_7CF4C )
    {
      v88 = dword_CB548;
      v91 = (const char *)sub_50CD0(v101);
      v24 = (const char *)sub_50CD0(a1 + 8);
      result = printf("receive: at %ld %s<-%s mode %d len %d\n", v88, v91, v24, v10, v14);
      v21 = 0;
    }
    goto LABEL_52;
  }
  if ( v82 != 4 )
  {
    result = sub_4E4E4(v98, v97, v14, v82);
    v21 = v82;
    v96 = v95 & 0xFFFFF3FF;
    if ( result )
      v23 = 1;
    else
      v23 = 2;
    if ( !dword_7CF4C )
      goto LABEL_52;
    v90 = dword_CB548;
    v93 = sub_50CD0(v101);
    v63 = sub_50CD0(a1 + 8);
    v59 = v90;
    v60 = (const char *)v93;
    v57 = v14 + v82;
    v61 = (const char *)v63;
    goto LABEL_133;
  }
  v96 = v95 & 0xFFFFF3FF;
  if ( dword_7CF4C )
  {
    v57 = v14 + 4;
    v23 = 3;
    v89 = dword_CB548;
    v92 = sub_50CD0(v101);
    v58 = sub_50CD0(a1 + 8);
    v59 = v89;
    v60 = (const char *)v92;
    v61 = (const char *)v58;
LABEL_133:
    result = printf("receive: at %ld %s<-%s mode %d keyid %08x len %d auth %d\n", v59, v60, v61, v10, v98, v57, v23);
    v21 = v82;
    goto LABEL_52;
  }
  v23 = 3;
LABEL_52:
  v25 = v9 >> 6;
  switch ( v106 )
  {
    case 1:
      goto LABEL_66;
    case 3:
      v52 = *(_DWORD *)(a1 + 64);
      if ( (*(_DWORD *)(v52 + 140) & 0x40) == 0 )
      {
        if ( (v96 & 4) != 0 )
          v53 = v23 == 1;
        else
          v53 = v23 <= 1;
        if ( !v53 )
        {
          if ( v23 != 2 )
            goto LABEL_40;
          result = sub_B1D8(a1, 4, 0, v96);
          ++dword_CB4F8;
          return result;
        }
LABEL_144:
        v18 = v98;
        v17 = a1;
        v19 = v96;
        return sub_B1D8(v17, 4, v18, v19);
      }
      if ( !dword_CB4AC )
        goto LABEL_40;
      if ( byte_CB4B0 == 3
        || v8 <= (unsigned __int8)byte_CB4FC
        || !LODWORD(flt_7FB38) && (unsigned __int8)byte_CB4FC == v8 + 1
        || *(_DWORD *)(v52 + 148) == *(_DWORD *)(a1 + 104) )
      {
LABEL_53:
        ++dword_CB47C;
        return result;
      }
      if ( (v96 & 4) != 0 )
        v62 = v23 == 1;
      else
        v62 = v23 <= 1;
      if ( v62 )
        goto LABEL_144;
      return result;
    case 4:
      result = v96;
      if ( v96 & 0x14 | dword_CB46C )
        v48 = v23 != 1;
      else
        v48 = v23 > 1;
      if ( v48 )
        goto LABEL_40;
      if ( v25 == 3 || v8 < dword_7FB08 || v8 >= dword_7A2A0 )
        goto LABEL_53;
      v85 = v21;
      result = (int)sub_224F4(a1);
      v49 = result;
      if ( !result )
        goto LABEL_40;
      result = (int)sub_21D24(a1 + 8, *(_DWORD *)(a1 + 64), 3, v94, 6, 10, 2, 0x41u, 0, v98);
      v21 = v85;
      v22 = result;
      if ( !result )
        goto LABEL_53;
      v50 = *(_DWORD *)(v49 + 52);
      v51 = (v50 & 0x100) == 0;
      if ( (v50 & 0x100) != 0 )
        v50 = *(_DWORD *)(result + 52);
      *(_BYTE *)(result + 49) = *(_BYTE *)(v49 + 49);
      if ( !v51 )
        *(_DWORD *)(result + 52) = v50 | 0x100;
      *(_BYTE *)(result + 50) = *(_BYTE *)(v49 + 50);
      goto LABEL_66;
    case 5:
      result = v96;
      if ( v96 & 0x14 | dword_CB46C )
        v26 = v23 != 1;
      else
        v26 = v23 > 1;
      if ( !v26 )
        goto LABEL_62;
      if ( (v96 & 4) != 0 )
        v27 = v23 == 1;
      else
        v27 = v23 <= 1;
      if ( v27 )
        return sub_B1D8(a1, 2, v98, v96);
      if ( v23 == 2 )
      {
        v83 = v21;
        result = sub_B1D8(a1, 1, 0, v96);
        v21 = v83;
        ++dword_CB4DC;
      }
LABEL_62:
      if ( v25 == 3 || v8 >= dword_7FB08 && v8 < dword_7A2A0 )
      {
        v84 = v21;
        result = (int)sub_21D24(a1 + 8, *(_DWORD *)(a1 + 64), 2, v94, *(unsigned __int8 *)(a1 + 94), 10, 2, 1u, 0, v98);
        v21 = v84;
        v22 = result;
        if ( result )
          goto LABEL_66;
      }
      goto LABEL_53;
    case 6:
      if ( !dword_CB4F4 )
        goto LABEL_40;
      result = v96;
      if ( v96 & 0x14 | dword_CB46C ? v23 != 1 : v23 > 1 )
        goto LABEL_40;
      if ( v25 == 3 || v8 < dword_7FB08 || v8 >= dword_7A2A0 )
        goto LABEL_53;
      v55 = *(_DWORD *)(a1 + 64);
      if ( (*(_DWORD *)(v55 + 140) & 0x40) != 0 )
        v55 = 0;
      if ( dbl_CB488 == 0.0 )
      {
        result = (int)sub_21D24(
                        a1 + 8,
                        v55,
                        3,
                        v94,
                        *(unsigned __int8 *)(a1 + 94),
                        *(unsigned __int8 *)(a1 + 94),
                        274,
                        0x20u,
                        0,
                        v98);
        if ( result )
          return result;
        goto LABEL_40;
      }
      v86 = v21;
      result = (int)sub_21D24(
                      a1 + 8,
                      v55,
                      6,
                      v94,
                      *(unsigned __int8 *)(a1 + 94),
                      *(unsigned __int8 *)(a1 + 94),
                      2,
                      0x20u,
                      0,
                      v98);
      v21 = v86;
      v22 = result;
      if ( !result )
        goto LABEL_40;
      v56 = dbl_CB488;
      *(double *)(result + 416) = dbl_CB488;
      *(double *)(result + 448) = -(v56 * 0.5);
LABEL_66:
      v28 = *(_DWORD *)(v22 + 52);
      v29 = (v28 & 0x4000) == 0;
      v30 = *(_DWORD *)(v22 + 108) & 0xFFFFFE00;
      v31 = *(_DWORD *)(v22 + 548);
      if ( (v28 & 0x4000) != 0 )
        v28 &= ~0x4000u;
      *(_DWORD *)(v22 + 108) = v30;
      if ( !v29 )
      {
        v30 |= 4u;
        *(_DWORD *)(v22 + 52) = v28;
      }
      v32 = v31 + 1;
      if ( !v29 )
        *(_DWORD *)(v22 + 108) = v30;
      *(_DWORD *)(v22 + 548) = v32;
      if ( !v102 && !v103 )
      {
        v33 = *(_DWORD *)(v22 + 124);
        *(_DWORD *)(v22 + 108) |= 4u;
        if ( v33 )
          goto LABEL_75;
        if ( v10 == 5 )
          goto LABEL_154;
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v22 + 376) == v102 )
      {
        result = v103;
        if ( *(_DWORD *)(v22 + 380) == v103 )
        {
          v73 = *(_DWORD *)(v22 + 564);
          *(_DWORD *)(v22 + 108) |= 1u;
          *(_DWORD *)(v22 + 564) = v73 + 1;
          return result;
        }
      }
      if ( v10 == 5 )
      {
        if ( v99 || v100 )
        {
          v74 = *(_DWORD *)(v22 + 52);
          if ( (v74 & 0x2000) == 0 )
          {
            v75 = (int *)(a1 + 76);
            v76 = v110;
            *(_DWORD *)(v22 + 392) = v109;
            *(_DWORD *)(v22 + 396) = v76;
            v77 = *v75;
            v78 = v75[1];
            *(_DWORD *)(v22 + 52) = v74 | 0x2000;
            *(_DWORD *)(v22 + 400) = v77;
            *(_DWORD *)(v22 + 404) = v78;
            return sub_1D3D8(142, v22, 0);
          }
        }
        if ( !*(_DWORD *)(v22 + 124) )
          goto LABEL_154;
      }
      else
      {
        v66 = *(_DWORD *)(v22 + 124);
        if ( v66 )
        {
          if ( (v99 || v100) && (v104 || v105) && ((v69 = *(_DWORD *)(v22 + 384)) != 0 || *(_DWORD *)(v22 + 388)) )
          {
            if ( v69 == v99 && *(_DWORD *)(v22 + 388) == v100 )
              goto LABEL_75;
            v70 = *(_DWORD *)(v22 + 108);
            v71 = *(_DWORD *)(v22 + 52) | 0x4000;
            ++*(_DWORD *)(v22 + 560);
            *(_DWORD *)(v22 + 52) = v71;
            *(_DWORD *)(v22 + 108) = v70 | 2;
          }
          else
          {
            *(_DWORD *)(v22 + 108) |= 4u;
          }
        }
        else
        {
          if ( *(_DWORD *)(v22 + 392) == v99 && *(_DWORD *)(v22 + 396) == v100 )
          {
            *(_DWORD *)(v22 + 396) = 0;
            *(_DWORD *)(v22 + 392) = 0;
            goto LABEL_153;
          }
          v67 = *(_DWORD *)(v22 + 384);
          v68 = *(_DWORD *)(v22 + 108);
          ++*(_DWORD *)(v22 + 560);
          *(_DWORD *)(v22 + 108) = v68 | 2;
          if ( !v67 && !*(_DWORD *)(v22 + 388) || v67 != v99 || *(_DWORD *)(v22 + 388) != v100 )
            goto LABEL_153;
          *(_DWORD *)(v22 + 124) = 1;
          v87 = v21;
          sub_1D3D8(142, v22, 0);
          v66 = *(_DWORD *)(v22 + 124);
          v21 = v87;
        }
        if ( !v66 )
        {
LABEL_153:
          v64 = v110;
          *(_DWORD *)(v22 + 368) = v109;
          *(_DWORD *)(v22 + 372) = v64;
LABEL_154:
          v65 = *(_DWORD *)(a1 + 80);
          *(_DWORD *)(v22 + 384) = *(_DWORD *)(a1 + 76);
          *(_DWORD *)(v22 + 388) = v65;
        }
      }
LABEL_75:
      v34 = v110;
      *(_DWORD *)(v22 + 376) = v109;
      *(_DWORD *)(v22 + 380) = v34;
      if ( v23 == 3 )
      {
        result = sub_1D3D8(140, v22, "crypto_NAK");
        v80 = *(_DWORD *)(v22 + 52);
        v81 = *(_DWORD *)(v22 + 556);
        *(_DWORD *)(v22 + 108) |= 0x10u;
        *(_DWORD *)(v22 + 556) = v81 + 1;
        if ( (v80 & 2) == 0 )
          return result;
        return sub_218BC(v22);
      }
      if ( v21 || (v96 & 4) != 0 )
        v35 = v23 != 1;
      else
        v35 = v23 > 1;
      if ( !v35 )
      {
        v36 = *(unsigned __int8 *)(a1 + 94);
        if ( *(unsigned __int8 *)(v22 + 49) >= v36 )
          LOBYTE(v36) = *(_BYTE *)(v22 + 49);
        v37 = v10 == 4;
        if ( v10 == 4 )
          v37 = v25 == 3;
        *(_BYTE *)(v22 + 70) = v36;
        if ( v37 && v8 == 16 && !memcmp((const void *)(a1 + 104), "RATE", 4u) )
        {
          ++*(_DWORD *)(v22 + 572);
          sub_1D3D8(135, v22, 0);
          v72 = *(unsigned __int8 *)(v22 + 49);
          if ( *(unsigned __int8 *)(a1 + 94) > v72 )
          {
            LOBYTE(v72) = *(_BYTE *)(v22 + 70);
            *(_BYTE *)(v22 + 49) = v72;
          }
          *(_DWORD *)(v22 + 512) = 9 << v72;
          *(_DWORD *)(v22 + 120) = 0;
          *(_DWORD *)(v22 + 116) = 0;
          return sub_22F68(v22, *(unsigned __int8 *)(a1 + 94));
        }
        else
        {
          *(_DWORD *)(v22 + 536) = dword_CB548;
          v38 = *(_DWORD *)(v22 + 52);
          if ( v23 == 1 )
            v39 = v38 | 4;
          else
            v39 = v38 & 0xFFFFFFFB;
          *(_DWORD *)(v22 + 52) = v39;
          result = (int)sub_24B88(v22, v97);
          if ( *(_DWORD *)(v22 + 124) )
          {
            v40 = v108;
            v41 = (int *)(a1 + 76);
            if ( *(unsigned __int8 *)(v22 + 70) >= (unsigned int)*(unsigned __int8 *)(v22 + 48) )
              v42 = *(_BYTE *)(v22 + 48);
            else
              v42 = *(_BYTE *)(v22 + 70);
            v43 = dword_CB548;
            v44 = 1 << v42;
            v45 = *(_DWORD *)(v22 + 520);
            *(_DWORD *)(v22 + 368) = v107;
            *(_DWORD *)(v22 + 372) = v40;
            result = *v41;
            v46 = v41[1];
            if ( v45 - v43 >= (unsigned int)(v44 / 2) )
              v47 = v45 - 1;
            else
              v47 = v45 + 1;
            *(_DWORD *)(v22 + 384) = result;
            *(_DWORD *)(v22 + 388) = v46;
            *(_DWORD *)(v22 + 520) = v47;
          }
        }
        return result;
      }
      result = sub_1D3D8(140, v22, "digest");
      v79 = *(_DWORD *)(v22 + 556);
      *(_DWORD *)(v22 + 108) |= 0x10u;
      *(_DWORD *)(v22 + 556) = v79 + 1;
      if ( (unsigned int)(v10 - 1) <= 1 )
        result = sub_B1D8(a1, 1, 0, v96);
      if ( (*(_DWORD *)(v22 + 52) & 2) != 0 )
        return sub_218BC(v22);
      return result;
    default:
      goto LABEL_53;
  }
}
