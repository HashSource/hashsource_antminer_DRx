double *__fastcall sub_24B88(int a1, unsigned __int8 *a2)
{
  unsigned int v4; // r0
  double v5; // d9
  int v6; // r2
  signed int v7; // r6
  unsigned int v8; // r1
  char v9; // r11
  double v10; // d8
  int v11; // r1
  unsigned int v12; // r7
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r8
  double v16; // d9
  unsigned int v17; // lr
  unsigned int v18; // r12
  unsigned int v19; // r0
  char v20; // r9
  unsigned int v21; // r7
  double v22; // d8
  unsigned __int8 v23; // lr
  int v24; // r12
  unsigned int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  double *result; // r0
  int v30; // r1
  int v31; // r3
  const char *v32; // r2
  int v33; // r3
  int v34; // r0
  int v35; // r2
  unsigned int v36; // r0
  int v37; // lr
  int v38; // r0
  int v39; // r1
  double v40; // d17
  bool v41; // cc
  int v42; // r3
  int v43; // r2
  int v44; // r2
  double v45; // d16
  int v46; // r3
  int v47; // r3
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r1
  int v52; // r0
  double v53; // d16
  int v54; // r1
  int v55; // r1
  double v56; // d0
  unsigned int v57; // r1
  int v58; // r1
  unsigned int v59; // r2
  int v60; // r0
  int v61; // r3
  int v62; // r2
  bool v63; // zf
  int v64; // r2
  int v65; // r2
  int v66; // r1
  int v67; // r0
  int v68; // r2
  int v69; // r1
  double v70; // d16
  unsigned int v71; // r2
  unsigned int v72; // r0
  int v73; // lr
  int v74; // r0
  unsigned int v75; // r1
  int v76; // r2
  int v77; // r0
  unsigned int v78; // r1
  int v79; // lr
  int v80; // r1
  int v81; // r1
  int v82; // r0
  int v83; // r1
  unsigned int v84; // [sp+8h] [bp-124h] BYREF
  unsigned int v85; // [sp+Ch] [bp-120h]
  unsigned int v86; // [sp+10h] [bp-11Ch] BYREF
  unsigned int v87; // [sp+14h] [bp-118h]
  unsigned int v88; // [sp+18h] [bp-114h] BYREF
  unsigned int v89; // [sp+1Ch] [bp-110h]
  unsigned int v90; // [sp+20h] [bp-10Ch]
  unsigned int v91; // [sp+24h] [bp-108h]
  char s[260]; // [sp+28h] [bp-104h] BYREF

  v4 = bswap32(*((_DWORD *)a2 + 2));
  v5 = (double)bswap32(*((_DWORD *)a2 + 1));
  v6 = dword_CB474 + 1;
  ++*(_DWORD *)(a1 + 552);
  dword_CB474 = v6;
  v7 = a2[1];
  v8 = *((_DWORD *)a2 + 9);
  if ( (unsigned int)v7 >= 0x10 )
    v9 = 16;
  else
    v9 = v7;
  v85 = bswap32(v8);
  v10 = (double)v4;
  v11 = *(_DWORD *)(a1 + 40);
  v12 = *a2;
  if ( !v7 )
  {
    v9 = 16;
    v7 = 16;
  }
  if ( v11 )
    v11 += 20;
  v13 = *((_DWORD *)a2 + 10);
  v14 = *((_DWORD *)a2 + 11);
  v15 = bswap32(*((_DWORD *)a2 + 5));
  v16 = v5 * 0.0000152587891;
  v17 = *((_DWORD *)a2 + 6);
  v18 = *((_DWORD *)a2 + 7);
  v19 = bswap32(*((_DWORD *)a2 + 8));
  v90 = bswap32(*((_DWORD *)a2 + 4));
  v91 = v15;
  v84 = v19;
  v86 = bswap32(v13);
  v87 = bswap32(v14);
  v20 = v12 & 7;
  v88 = bswap32(v17);
  v89 = bswap32(v18);
  v21 = v12 >> 6;
  v22 = v10 * 0.0000152587891;
  sub_2DE88(a1 + 12, v11, &v88, &v84, &v86, a1 + 384);
  *(_BYTE *)(a1 + 67) = v21;
  *(_BYTE *)(a1 + 69) = v9;
  *(_BYTE *)(a1 + 68) = v20;
  v23 = a2[3];
  *(double *)(a1 + 72) = v16;
  v24 = *(_DWORD *)(a1 + 120);
  v25 = v90;
  v26 = v91;
  *(_BYTE *)(a1 + 71) = v23;
  v27 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(a1 + 92) = v25;
  *(_DWORD *)(a1 + 96) = v26;
  if ( v24 <= 0 )
    v26 = *(unsigned __int8 *)(a1 + 48);
  *(_DWORD *)(a1 + 88) = v27;
  *(double *)(a1 + 80) = v22;
  if ( v24 > 0 )
  {
    v28 = *(unsigned __int8 *)(a1 + 106);
    v26 = *(unsigned __int8 *)(a1 + 48);
    *(_DWORD *)(a1 + 120) = 0;
    if ( !v28 )
    {
      *(_DWORD *)(a1 + 116) = 5;
LABEL_13:
      *(_DWORD *)(a1 + 520) = dword_CB548;
      goto LABEL_14;
    }
    v46 = 1 << (v26 - *(_BYTE *)(a1 + 49));
    if ( v46 >= 8 )
      v46 = 8;
    v47 = v46 - 1;
    *(_DWORD *)(a1 + 116) = v47;
    if ( v47 > 0 )
      goto LABEL_13;
  }
LABEL_14:
  result = (double *)sub_22F68(a1, v26);
  if ( v21 == 3 || v7 < dword_7FB08 || v7 >= dword_7A2A0 )
  {
    v30 = *(_DWORD *)(a1 + 108) | 0x20;
    *(_DWORD *)(a1 + 108) = v30;
  }
  else
  {
    v30 = *(_DWORD *)(a1 + 108);
  }
  if ( v22 + v16 * 0.5 >= 16.0 )
  {
    v30 |= 0x40u;
    *(_DWORD *)(a1 + 108) = v30;
  }
  if ( (v30 & 0x1FF) != 0 )
  {
    v31 = dword_7CF4C;
    ++*(_DWORD *)(a1 + 568);
    if ( v31 )
      return (double *)printf("packet: flash header %04x\n", v30);
    return result;
  }
  v32 = (const char *)*(unsigned __int8 *)(a1 + 106);
  if ( !*(_BYTE *)(a1 + 106) )
  {
    sub_1D3D8(132, a1, v32);
    LOBYTE(v32) = *(_BYTE *)(a1 + 106);
    *(_DWORD *)(a1 + 540) = dword_CB548;
  }
  v33 = *(_DWORD *)(a1 + 124);
  *(_BYTE *)(a1 + 106) = (unsigned __int8)v32 | 1;
  if ( v33 )
  {
    v34 = *(_DWORD *)(a1 + 388);
    v35 = v87;
    if ( v34 )
    {
      v36 = -v34;
      v37 = (unsigned __int16)v87 + (unsigned __int16)v36;
      v38 = HIWORD(v87) + HIWORD(v36);
      if ( (v37 & 0x10000) != 0 )
        ++v38;
      v39 = ~*(_DWORD *)(a1 + 384) + v86;
      v35 = (unsigned __int16)v37 | (v38 << 16);
      if ( (v38 & 0x10000) != 0 )
        ++v39;
    }
    else
    {
      v39 = v86 - *(_DWORD *)(a1 + 384);
    }
    if ( v39 < 0 )
    {
      if ( v35 )
      {
        v35 = -v35;
        v66 = ~v39;
      }
      else
      {
        v66 = -v39;
      }
      v40 = -((double)v66 + (double)(unsigned int)v35 * 2.32830644e-10);
    }
    else
    {
      v40 = (double)v39 + (double)(unsigned int)v35 * 2.32830644e-10;
    }
    v41 = v33 <= 0;
    v42 = v85;
    if ( v41 )
    {
      v65 = *(_DWORD *)(a1 + 396);
      if ( !v65 )
      {
        v44 = v84 - *(_DWORD *)(a1 + 392);
        goto LABEL_35;
      }
      v71 = -v65;
      v60 = (unsigned __int16)v85 + (unsigned __int16)v71;
      v61 = HIWORD(v85) + HIWORD(v71);
      v62 = *(_DWORD *)(a1 + 392);
      if ( (v60 & 0x10000) != 0 )
        ++v61;
    }
    else
    {
      v43 = *(_DWORD *)(a1 + 404);
      if ( !v43 )
      {
        v44 = v84 - *(_DWORD *)(a1 + 400);
        goto LABEL_35;
      }
      v59 = -v43;
      v60 = (unsigned __int16)v85 + (unsigned __int16)v59;
      v61 = HIWORD(v85) + HIWORD(v59);
      v62 = *(_DWORD *)(a1 + 400);
      if ( (v60 & 0x10000) != 0 )
        ++v61;
    }
    v63 = (v61 & 0x10000) == 0;
    v44 = ~v62 + v84;
    v42 = (unsigned __int16)v60 | (v61 << 16);
    if ( !v63 )
      ++v44;
LABEL_35:
    if ( v44 < 0 )
    {
      if ( v42 )
      {
        v42 = -v42;
        v64 = ~v44;
      }
      else
      {
        v64 = -v44;
      }
      v45 = -((double)v64 + (double)(unsigned int)v42 * 2.32830644e-10);
    }
    else
    {
      v45 = (double)v44 + (double)(unsigned int)v42 * 2.32830644e-10;
    }
    if ( v45 - v40 < 0.0 || v45 - v40 > 1.0 )
    {
      sprintf(s, "t21 %.6f t34 %.6f", v45, v40);
      return (double *)sub_1D3D8(143, a1, s);
    }
    goto LABEL_48;
  }
  if ( *(_BYTE *)(a1 + 68) == 5 )
  {
    v48 = *(_DWORD *)(a1 + 52);
    if ( (v48 & 0x2000) != 0 )
    {
      v49 = *(_DWORD *)(a1 + 396);
      v50 = v89;
      if ( v49 )
      {
        v78 = -v49;
        v79 = (unsigned __int16)v89 + (unsigned __int16)v78;
        v80 = HIWORD(v89) + HIWORD(v78);
        if ( (v79 & 0x10000) != 0 )
          ++v80;
        v63 = (v80 & 0x10000) == 0;
        v52 = ~*(_DWORD *)(a1 + 392) + v88;
        v51 = (unsigned __int16)v79 | (v80 << 16);
        if ( !v63 )
          ++v52;
      }
      else
      {
        v51 = v89;
        v52 = v88 - *(_DWORD *)(a1 + 392);
      }
      if ( v52 < 0 )
      {
        if ( v51 )
        {
          v51 = -v51;
          v82 = ~v52;
        }
        else
        {
          v82 = -v52;
        }
        v53 = -((double)v82 + (double)(unsigned int)v51 * 2.32830644e-10);
      }
      else
      {
        v53 = (double)v52 + (double)(unsigned int)v51 * 2.32830644e-10;
      }
      v54 = *(_DWORD *)(a1 + 404);
      if ( v54 )
      {
        v75 = -v54;
        v76 = HIWORD(v89) + HIWORD(v75);
        v77 = (unsigned __int16)v89 + (unsigned __int16)v75;
        if ( (v77 & 0x10000) != 0 )
          ++v76;
        v63 = (v76 & 0x10000) == 0;
        v55 = ~*(_DWORD *)(a1 + 400) + v88;
        v50 = (unsigned __int16)v77 | (v76 << 16);
        if ( !v63 )
          ++v55;
      }
      else
      {
        v55 = v88 - *(_DWORD *)(a1 + 400);
      }
      if ( v55 < 0 )
      {
        if ( v50 )
        {
          v50 = -v50;
          v81 = ~v55;
        }
        else
        {
          v81 = -v55;
        }
        v56 = -((double)v81 + (double)(unsigned int)v50 * 2.32830644e-10);
      }
      else
      {
        v56 = (double)v55 + (double)(unsigned int)v50 * 2.32830644e-10;
      }
      v57 = v87;
      *(_DWORD *)(a1 + 392) = v86;
      *(_DWORD *)(a1 + 396) = v57;
      v58 = *(_DWORD *)(a1 + 388);
      *(_DWORD *)(a1 + 400) = *(_DWORD *)(a1 + 384);
      *(_DWORD *)(a1 + 404) = v58;
      if ( v53 < 0.0 || v53 > 1.0 )
      {
        sprintf(s, "offset %.6f delay %.6f", v56, v53);
        return (double *)sub_1D3D8(143, a1, s);
      }
      *(double *)(a1 + 440) = v53;
    }
    else
    {
      v67 = *(_DWORD *)(a1 + 388);
      v68 = v87;
      if ( v67 )
      {
        v72 = -v67;
        v73 = (unsigned __int16)v87 + (unsigned __int16)v72;
        v74 = HIWORD(v87) + HIWORD(v72);
        if ( (v73 & 0x10000) != 0 )
          ++v74;
        v69 = ~*(_DWORD *)(a1 + 384) + v86;
        v68 = (unsigned __int16)v73 | (v74 << 16);
        if ( (v74 & 0x10000) != 0 )
          ++v69;
      }
      else
      {
        v69 = v86 - *(_DWORD *)(a1 + 384);
      }
      if ( v69 < 0 )
      {
        if ( v68 )
        {
          v68 = -v68;
          v83 = ~v69;
        }
        else
        {
          v83 = -v69;
        }
        v56 = -((double)v83 + (double)(unsigned int)v68 * 2.32830644e-10);
      }
      else
      {
        v56 = (double)v69 + (double)(unsigned int)v68 * 2.32830644e-10;
      }
    }
    if ( (v48 & 0x10) != 0 )
    {
      v70 = *(double *)(a1 + 408);
      *(_DWORD *)(a1 + 52) = v48 & 0xFFFFFFEF;
      *(double *)(a1 + 416) = v70 - v56 + v70 - v56;
    }
  }
LABEL_48:
  result = sub_246A0(a1);
  if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 && *(_BYTE *)(a1 + 47) == 3 )
  {
    result = (double *)sub_227C8(a1);
    if ( ((unsigned __int16)result & 0x400) == 0 )
      *(_BYTE *)(a1 + 47) = 6;
  }
  return result;
}
