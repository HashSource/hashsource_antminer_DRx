int __fastcall sub_4010C(int result)
{
  int v1; // r4
  int v2; // r11
  int v3; // r6
  int v4; // r12
  int v5; // r9
  int v6; // r2
  int v7; // r5
  int v8; // r1
  int v9; // r3
  bool v10; // zf
  int v11; // r3
  int v12; // r12
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // lr
  int v16; // r1
  int v17; // r3
  int v18; // r7
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r3
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r3
  int v27; // r8
  int v28; // r7
  char *v29; // r5
  size_t v30; // r10
  size_t v31; // r0
  int v32; // r3
  unsigned int v33; // r3
  int v34; // r6
  int v35; // r1
  int v36; // r2
  int v37; // r8
  int v38; // r7
  char *v39; // r10
  size_t v40; // r5
  size_t v41; // r0
  int v42; // r3
  char *v43; // r3
  int v44; // r2
  char v45; // r0
  int v46; // r12
  int v47; // r10
  int v48; // r7
  int v49; // r1
  unsigned int v50; // r3
  int v51; // r2
  int v52; // r1
  int v53; // r5
  int v54; // r3
  int v55; // r0
  int v56; // r1
  _DWORD *v57; // r9
  unsigned int v58; // r0
  int v59; // r9
  unsigned int v60; // r0
  int v61; // r0
  int v62; // r9
  int v63; // r0
  int v64; // r3
  int v65; // r7
  int v66; // r12
  unsigned __int8 *v67; // r3
  int v68; // r2
  unsigned __int8 v69; // r1
  int v70; // r2
  int v71; // [sp+20h] [bp-7Ch]
  int v72; // [sp+24h] [bp-78h]
  int v73; // [sp+2Ch] [bp-70h]
  int v74; // [sp+2Ch] [bp-70h]
  int v75; // [sp+34h] [bp-68h]
  unsigned int v76; // [sp+38h] [bp-64h]
  char v77[10]; // [sp+3Ch] [bp-60h] BYREF
  char v78; // [sp+46h] [bp-56h] BYREF
  char v79[84]; // [sp+48h] [bp-54h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)(result + 60) + 28);
  v2 = result;
  v71 = *(_DWORD *)(result + 60);
  v3 = *(_DWORD *)(v1 + 1112);
  if ( v3 <= 8 )
  {
    *(_DWORD *)(v1 + 920) |= 1u;
  }
  else
  {
    v4 = 0;
    v5 = *(_DWORD *)(*(_DWORD *)(result + 60) + 28);
    v6 = 0;
    v7 = v5;
    *(_DWORD *)(v1 + 1120) = 0;
    do
    {
      v8 = 8;
      result = 0;
      v9 = *(_DWORD *)(v7 + 1084) ^ *(_DWORD *)(v7 + 1064);
      do
      {
        v10 = (v9 & 1) == 0;
        v9 >>= 1;
        if ( v10 )
          ++result;
        else
          --result;
        --v8;
      }
      while ( v8 );
      ++v4;
      v6 += result;
      *(_DWORD *)(v1 + 1120) = v6;
      v7 += 4;
    }
    while ( v4 != 5 && v4 != v3 - 5 );
    if ( v6 > 27 )
    {
      v12 = 0;
      v13 = (_DWORD *)v1;
      v14 = *(_DWORD *)(v1 + 1076) & 0xF;
      v15 = -1;
      *(_DWORD *)(v1 + 1124) = 0;
      v72 = 0;
      while ( 1 )
      {
        v16 = v14 ^ 0x63;
        v17 = 8;
        v18 = 0;
        do
        {
          v10 = (v16 & 1) == 0;
          v16 >>= 1;
          if ( v10 )
            ++v18;
          else
            --v18;
          --v17;
        }
        while ( v17 );
        v19 = v15 + 9;
        v20 = 0;
        if ( v3 > v15 + 9 )
          v19 = v13[274];
        v21 = 16 * v13[270];
        if ( v3 > v15 + 9 )
          v19 &= 0xFu;
        v21 = (unsigned __int8)v21;
        if ( v3 > v15 + 9 )
          v21 = (unsigned __int8)v21 | v19;
        v22 = 8;
        v23 = v21 ^ 0x63;
        do
        {
          v10 = (v23 & 1) == 0;
          v23 >>= 1;
          if ( v10 )
            ++v20;
          else
            --v20;
          --v22;
        }
        while ( v22 );
        v24 = v18 + v20;
        if ( v24 > v12 )
          v72 = v15;
        ++v15;
        if ( v24 > v12 )
        {
          *(_DWORD *)(v1 + 1124) = v24;
          v12 = v24;
        }
        if ( v15 == 2 )
          break;
        v25 = v13[266];
        v26 = v13[270];
        ++v13;
        v14 = (unsigned __int8)(16 * v25) | v26 & 0xF;
      }
      v73 = (unsigned __int8)*(_DWORD *)(v1 + 4 * (v72 + 270)) >> 4;
      if ( (unsigned int)(v73 - 2) <= 7 )
      {
        if ( v3 > v72 + 9 )
        {
          v64 = (unsigned __int8)*(_DWORD *)(v1 + 4 * (v72 + 275)) >> 4;
          if ( v73 != v64 )
            v64 = 0;
          v74 = v64;
        }
        else
        {
          v74 = 0;
        }
      }
      else
      {
        v74 = 0;
      }
      v27 = v1;
      v28 = 0;
      v29 = v79;
      v30 = 80;
      snprintf(
        v79,
        0x50u,
        "chuA %04x %4.0f %2d %2d %2d %2d %1d ",
        *(_DWORD *)(v1 + 920),
        *(double *)(v1 + 1136),
        v3,
        v6,
        v72,
        v12,
        v74);
      do
      {
        v31 = strlen(v29);
        if ( v31 + 1 > v30 )
        {
          sub_4FE78(3, "chu_a() fatal out buffer");
          exit(1);
        }
        v30 -= v31;
        v29 += v31;
        v32 = *(_DWORD *)(v27 + 1064);
        ++v28;
        v27 += 4;
        result = snprintf(v29, v30, "%02x", v32);
      }
      while ( v28 != v3 );
      if ( (*(_BYTE *)(v71 + 752) & 8) != 0 )
        result = sub_2DDBC(v2 + 12, v79);
      if ( dword_7CF4C )
        result = puts(v79);
      if ( *(int *)(v1 + 1124) <= 7 )
      {
        *(_DWORD *)(v1 + 920) |= 0x10u;
      }
      else
      {
        if ( v74 )
        {
          v46 = 0;
          *(_DWORD *)(v1 + 920) |= 0x100u;
          v76 = 0;
          *(_DWORD *)(v71 + 188) = v74 + 30;
          v75 = v74 + 30;
          *(_DWORD *)(v1 + 912) = v74 + 30;
          if ( v72 == -1 )
          {
            v75 = *(_DWORD *)(v1 + 904);
            v76 = *(_DWORD *)(v1 + 908);
          }
          else
          {
            v46 = v72;
            if ( v72 )
              v46 = 1;
          }
          v47 = v1 + 8 * v46;
          v48 = 0;
          do
          {
            v53 = *(_DWORD *)(v1 + 1108);
            v54 = v53 + 51;
            v55 = *(_DWORD *)(v47 + v48 + 320);
            v56 = *(_DWORD *)(v47 + v48 + 324);
            v57 = (_DWORD *)(v1 + 8 * (v53 + 51));
            *v57 = v55;
            v57[1] = v56;
            if ( v76 )
            {
              v58 = v57[1];
              v59 = (unsigned __int16)v58 + (unsigned __int16)-(__int16)v76;
              v60 = HIWORD(v58) + (-v76 >> 16);
              v49 = v75;
              if ( (v59 & 0x10000) != 0 )
                ++v60;
              v10 = (v60 & 0x10000) == 0;
              v61 = (unsigned __int16)v59 | (v60 << 16);
              v62 = *(_DWORD *)(v1 + 8 * v54);
              *(_DWORD *)(v1 + 8 * v54 + 4) = v61;
              v63 = ~v75 + v62;
              if ( !v10 )
                ++v63;
              *(_DWORD *)(v1 + 8 * v54) = v63;
            }
            else
            {
              v49 = v75;
              *(_DWORD *)(v1 + 8 * v54) = v55 - v75;
            }
            v50 = *(_DWORD *)(v1 + 908);
            ++v46;
            v48 += 8;
            result = (unsigned __int16)v76 + (unsigned __int16)v50;
            v51 = HIWORD(v76) + HIWORD(v50);
            v52 = *(_DWORD *)(v1 + 904) + v49;
            if ( (result & 0x10000) != 0 )
              ++v51;
            result = (unsigned __int16)result;
            if ( (v51 & 0x10000) != 0 )
              ++v52;
            if ( v53 <= 58 )
              *(_DWORD *)(v1 + 1108) = v53 + 1;
            v75 = v52;
            v76 = (unsigned __int16)result | (v51 << 16);
          }
          while ( v3 > v46 && v46 <= v72 + 9 );
          v65 = *(_DWORD *)(v1 + 1116);
          v5 = v1;
          if ( v74 > v65 )
          {
            v66 = 0;
            do
            {
              v67 = (unsigned __int8 *)v1;
              v68 = 15;
              do
              {
                result = v67[158];
                --v68;
                v69 = v67[318];
                v67[159] = result;
                v67[319] = v69;
                --v67;
              }
              while ( v68 );
              ++v66;
              *(_BYTE *)(v1 + 304) = 0;
              *(_BYTE *)(v1 + 144) = 0;
            }
            while ( v66 != v74 - v65 );
            *(_DWORD *)(v1 + 1116) = v65 + 1 + ~v65 + v74;
          }
        }
        else
        {
          *(_DWORD *)(v1 + 920) |= 0x20u;
        }
        v33 = -2 * v72;
        v34 = -2 * v72 + 2 * v3;
        do
        {
          if ( v33 <= 0x12 )
          {
            v35 = (*(_DWORD *)(v5 + 1064) & 0xF) + 16 * v33;
            v36 = ((unsigned __int8)*(_DWORD *)(v5 + 1064) >> 4) + 16 * (v33 + 1);
            result = *(unsigned __int8 *)(v1 + v35) + 1;
            *(_BYTE *)(v1 + v35) = result;
            ++*(_BYTE *)(v1 + v36);
          }
          v33 += 2;
          v5 += 4;
        }
        while ( v33 != v34 );
        ++*(_DWORD *)(v1 + 1128);
      }
    }
    else
    {
      v11 = *(_DWORD *)(v1 + 920);
      if ( v6 >= -27 )
      {
        *(_DWORD *)(v1 + 920) = v11 | 2;
        return result;
      }
      v37 = v1;
      v38 = 0;
      snprintf(v79, 0x50u, "chuB %04x %4.0f %2d %2d ", v11, *(double *)(v1 + 1136), v3, -v6);
      v39 = v79;
      v40 = 80;
      do
      {
        v41 = strlen(v39);
        if ( v41 + 1 > v40 )
        {
          sub_4FE78(3, "chu_b() fatal out buffer");
          exit(1);
        }
        v40 -= v41;
        v39 += v41;
        v42 = *(_DWORD *)(v37 + 1064);
        ++v38;
        v37 += 4;
        result = snprintf(v39, v40, "%02x", v42);
      }
      while ( v38 != v3 );
      if ( (*(_BYTE *)(v71 + 752) & 8) != 0 )
        result = sub_2DDBC(v2 + 12, v79);
      if ( dword_7CF4C )
        result = puts(v79);
      if ( *(int *)(v1 + 1120) < -39 )
      {
        v43 = v77;
        do
        {
          v44 = *(_DWORD *)(v5 + 1064);
          v5 += 4;
          v45 = a0123456789abcd_0[v44 & 0xF];
          LOBYTE(v44) = a0123456789abcd_0[(unsigned __int8)v44 >> 4];
          *v43 = v45;
          v43[1] = v44;
          v43 += 2;
        }
        while ( v43 != &v78 );
        result = sscanf(v77, "%1x%1d%4d%2d%2x", v1 + 1148, v1 + 1152, v71 + 172, v1 + 1156, v1 + 1160);
        if ( result == 5 )
        {
          v70 = *(_DWORD *)(v1 + 1148);
          *(_DWORD *)(v1 + 920) |= 0x200u;
          if ( (v70 & 8) != 0 )
            *(_DWORD *)(v1 + 1152) = -*(_DWORD *)(v1 + 1152);
        }
        else
        {
          *(_DWORD *)(v1 + 920) |= 8u;
        }
      }
      else
      {
        *(_DWORD *)(v1 + 920) |= 4u;
      }
    }
    if ( *(_DWORD *)(v2 + 516) != dword_CB548 )
      *(_DWORD *)(v2 + 520) = dword_CB548 + 10;
  }
  return result;
}
