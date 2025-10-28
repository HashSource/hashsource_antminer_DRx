int __fastcall sub_15EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // kr00_8
  __int64 v3; // kr08_8
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r9
  __int64 v7; // r10
  unsigned int v8; // r3
  int v9; // r1
  int v10; // r8
  unsigned int v11; // r0
  unsigned int v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r8
  unsigned int v15; // r9
  int v16; // r1
  unsigned int v17; // r0
  unsigned int v19; // r7
  unsigned int v20; // r12
  unsigned int v21; // r6
  int v22; // r12
  unsigned int v23; // r3
  unsigned int v24; // r7
  int v25; // r5
  unsigned int v26; // r7
  int v27; // r1
  int v28; // r5
  unsigned int v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r11
  unsigned int v33; // r5
  int v34; // r1
  unsigned int v35; // r0
  unsigned int v36; // r1
  unsigned int v37; // r9
  unsigned int v38; // r5
  int v39; // r1
  unsigned int v40; // r0
  unsigned int v41; // r3
  unsigned int v42; // r2
  unsigned int v43; // r7
  int v44; // r1
  unsigned int v45; // r0
  unsigned int v47; // r9
  unsigned int v48; // r12
  unsigned int v49; // r6
  unsigned int v50; // r10
  bool v51; // cf
  unsigned int v52; // r6
  unsigned int v53; // r7
  int v54; // r1
  unsigned int v55; // r0
  unsigned int v56; // r1
  unsigned int v57; // r2
  unsigned int v58; // r3
  unsigned int v59; // r0
  int v60; // r1
  unsigned int v61; // r0
  unsigned int v62; // r1
  unsigned int v63; // r11
  unsigned int v64; // r12
  unsigned int v65; // r11
  unsigned __int64 v66; // r2
  bool v67; // r3
  __int64 v68; // r0
  int v70; // [sp+0h] [bp-Ch]
  int v71; // [sp+0h] [bp-Ch]
  int v72; // [sp+0h] [bp-Ch]
  unsigned int v73; // [sp+0h] [bp-Ch]
  unsigned int v74; // [sp+4h] [bp-8h]
  unsigned int v75; // [sp+4h] [bp-8h]
  int v76; // [sp+4h] [bp-8h]

  v2 = a1;
  v3 = a2;
  if ( a1 < 0 )
  {
    v4 = -1;
    v2 = -a1;
  }
  else
  {
    v4 = 0;
  }
  if ( a2 < 0 )
  {
    v4 = ~v4;
    v3 = -a2;
  }
  v5 = v3;
  v6 = HIDWORD(v2);
  LODWORD(v7) = v2;
  if ( !HIDWORD(v3) )
  {
    if ( (unsigned int)v3 > HIDWORD(v2) )
    {
      v8 = __clz(v3);
      if ( v8 )
      {
        v5 = (_DWORD)v3 << v8;
        LODWORD(v7) = (_DWORD)v2 << v8;
        v6 = ((unsigned int)v2 >> (32 - v8)) | (HIDWORD(v2) << v8);
      }
      sub_15D10(v6, HIWORD(v5));
      v10 = v9;
      v11 = sub_15C68(v6, HIWORD(v5));
      v12 = WORD1(v7) | (v10 << 16);
      v13 = (unsigned __int16)v5 * v11;
      if ( v12 < v13 )
      {
        v51 = __CFADD__(v12, v5);
        v12 += v5;
        v14 = v11 - 1;
        if ( !v51 && v12 < v13 )
        {
          v14 = v11 - 2;
          v12 += v5;
        }
      }
      else
      {
        v14 = v11;
      }
      v15 = v12 - v13;
      sub_15D10(v12 - v13, HIWORD(v5));
      HIDWORD(v7) = v16;
      v17 = sub_15C68(v15, HIWORD(v5));
      LODWORD(v7) = (unsigned __int16)v7 | (HIDWORD(v7) << 16);
      v19 = (unsigned __int16)v5 * v17;
      if ( (unsigned int)v7 < v19 )
      {
        v51 = __CFADD__((_DWORD)v7, v5);
        v21 = v7 + v5;
        v20 = v17 - 1;
        if ( !v51 && v21 < v19 )
          v20 = v17 - 2;
      }
      else
      {
        v20 = v17;
      }
      v22 = v20 | (v14 << 16);
      goto LABEL_70;
    }
    if ( !(_DWORD)v3 )
      v5 = sub_15C68(1u, 0);
    v23 = __clz(v5);
    if ( v23 )
    {
      v5 <<= v23;
      HIDWORD(v7) = HIDWORD(v2) >> (32 - v23);
      v26 = ((unsigned int)v2 >> (32 - v23)) | (HIDWORD(v2) << v23);
      LODWORD(v7) = (_DWORD)v2 << v23;
      sub_15D10(HIDWORD(v7), HIWORD(v5));
      v28 = v27;
      v29 = sub_15C68(HIDWORD(v7), HIWORD(v5));
      v30 = HIWORD(v26) | (v28 << 16);
      v31 = (unsigned __int16)v5 * v29;
      if ( v30 < v31 )
      {
        v51 = __CFADD__(v30, v5);
        v30 += v5;
        v32 = v29 - 1;
        if ( !v51 && v30 < v31 )
        {
          v32 = v29 - 2;
          v30 += v5;
        }
      }
      else
      {
        v32 = v29;
      }
      v33 = v30 - v31;
      sub_15D10(v30 - v31, HIWORD(v5));
      v70 = v34;
      v35 = sub_15C68(v33, HIWORD(v5));
      v36 = (unsigned __int16)v26 | (v70 << 16);
      v37 = (unsigned __int16)v5 * v35;
      if ( v36 < v37 )
      {
        v51 = __CFADD__(v36, v5);
        v36 += v5;
        v38 = v35 - 1;
        if ( !v51 && v36 < v37 )
        {
          v38 = v35 - 2;
          v36 += v5;
        }
      }
      else
      {
        v38 = v35;
      }
      v24 = v36 - v37;
      v25 = v38 | (v32 << 16);
    }
    else
    {
      v24 = HIDWORD(v2) - v5;
      v25 = 1;
    }
    sub_15D10(v24, HIWORD(v5));
    HIDWORD(v7) = v39;
    v40 = sub_15C68(v24, HIWORD(v5));
    v41 = v7 >> 16;
    v42 = (unsigned __int16)v5 * v40;
    if ( v41 < v42 )
    {
      v51 = __CFADD__(v41, v5);
      v41 += v5;
      v43 = v40 - 1;
      if ( !v51 && v41 < v42 )
      {
        v43 = v40 - 2;
        v41 += v5;
      }
    }
    else
    {
      v43 = v40;
    }
    HIDWORD(v7) = v41 - v42;
    sub_15D10(v41 - v42, HIWORD(v5));
    v71 = v44;
    v45 = sub_15C68(HIDWORD(v7), HIWORD(v5));
    LODWORD(v7) = (unsigned __int16)v7 | (v71 << 16);
    v47 = (unsigned __int16)v5 * v45;
    if ( (unsigned int)v7 < v47 )
    {
      v51 = __CFADD__((_DWORD)v7, v5);
      v49 = v7 + v5;
      v48 = v45 - 1;
      if ( !v51 && v49 < v47 )
        v48 = v45 - 2;
    }
    else
    {
      v48 = v45;
    }
    v22 = v48 | (v43 << 16);
    goto LABEL_73;
  }
  if ( HIDWORD(v3) > HIDWORD(v2) )
  {
    v25 = 0;
LABEL_72:
    v22 = 0;
    goto LABEL_73;
  }
  v50 = __clz(HIDWORD(v3));
  if ( !v50 )
  {
    v51 = HIDWORD(v2) >= HIDWORD(v3);
    if ( HIDWORD(v2) <= HIDWORD(v3) )
      v51 = (unsigned int)v2 >= (unsigned int)v3;
    if ( v51 )
    {
      v22 = 1;
      v25 = 0;
      goto LABEL_73;
    }
    v25 = 0;
    goto LABEL_72;
  }
  v52 = ((unsigned int)v3 >> (32 - v50)) | (HIDWORD(v3) << v50);
  v53 = ((unsigned int)v2 >> (32 - v50)) | (HIDWORD(v2) << v50);
  v74 = HIDWORD(v2) >> (32 - v50);
  sub_15D10(v74, HIWORD(v52));
  v72 = v54;
  v55 = sub_15C68(v74, HIWORD(v52));
  v56 = HIWORD(v53) | (v72 << 16);
  v57 = (unsigned __int16)v52 * v55;
  if ( v56 < v57 )
  {
    v51 = __CFADD__(v56, v52);
    v56 += v52;
    v58 = v55 - 1;
    if ( !v51 && v56 < v57 )
    {
      v58 = v55 - 2;
      v56 += v52;
    }
  }
  else
  {
    v58 = v55;
  }
  v73 = v58;
  v75 = v56 - v57;
  sub_15D10(v56 - v57, HIWORD(v52));
  v59 = v75;
  v76 = v60;
  v61 = sub_15C68(v59, HIWORD(v52));
  v62 = (unsigned __int16)v53 | (v76 << 16);
  v63 = (unsigned __int16)v52 * v61;
  if ( v62 < v63 )
  {
    v51 = __CFADD__(v62, v52);
    v62 += v52;
    v64 = v61 - 1;
    if ( !v51 && v62 < v63 )
    {
      v64 = v61 - 2;
      v62 += v52;
    }
  }
  else
  {
    v64 = v61;
  }
  v22 = v64 | (v73 << 16);
  v65 = v62 - v63;
  v66 = (unsigned int)v22 * (unsigned __int64)(unsigned int)((_DWORD)v3 << v50);
  if ( HIDWORD(v66) > v65
    || ((v67 = HIDWORD(v66) == v65, (unsigned int)v66 > (_DWORD)v2 << v50) ? (v25 = v67) : (v25 = 0), v25) )
  {
    --v22;
LABEL_70:
    v25 = 0;
  }
LABEL_73:
  LODWORD(v68) = v22;
  if ( v4 )
    return -__SPAIR64__(v25, v22);
  return v68;
}
