int __fastcall sub_5AF40(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r4
  unsigned int v7; // r7
  unsigned int v8; // r10
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r6
  unsigned int v16; // r10
  int v17; // r1
  int v18; // r9
  unsigned int v19; // r0
  unsigned int v20; // r7
  unsigned int v21; // r8
  unsigned int v22; // r3
  unsigned int v23; // r4
  int result; // r0
  unsigned int v25; // r3
  unsigned int v26; // r10
  unsigned int v27; // r9
  unsigned int v28; // r8
  int v29; // r1
  int v30; // r5
  unsigned int v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r2
  unsigned int v34; // r11
  int v35; // r1
  int v36; // r5
  unsigned int v37; // r0
  unsigned int v38; // r1
  unsigned int v39; // r10
  int v40; // r1
  int v41; // r9
  unsigned int v42; // r0
  unsigned int v43; // r3
  unsigned int v44; // r2
  unsigned int v45; // r10
  unsigned int v46; // r9
  int v47; // r1
  int v48; // r11
  unsigned int v49; // r0
  unsigned int v50; // r7
  unsigned int v51; // r8
  unsigned int v52; // r3
  unsigned int v53; // r4
  unsigned int v54; // r7
  bool v55; // cf
  unsigned int v56; // r8
  unsigned int v57; // r11
  unsigned int v58; // r4
  unsigned int v59; // r5
  int v60; // r1
  unsigned int v61; // r0
  unsigned int v62; // r12
  unsigned int v63; // r3
  unsigned int v64; // r11
  unsigned int v65; // r0
  int v66; // r1
  unsigned int v67; // r0
  unsigned int v68; // r1
  unsigned int v69; // r9
  unsigned int v70; // r3
  unsigned int v71; // r9
  unsigned __int64 v72; // r2
  _BOOL4 v73; // r5
  int v74; // [sp+4h] [bp-8h]
  unsigned int v75; // [sp+4h] [bp-8h]
  int v76; // [sp+4h] [bp-8h]

  v6 = a3;
  v7 = a1;
  v8 = a2;
  if ( !a4 )
  {
    if ( a3 <= a2 )
    {
      if ( !a3 )
        v6 = sub_5A860(1u, 0);
      v25 = __clz(v6);
      if ( v25 )
      {
        v6 <<= v25;
        v27 = a2 >> (32 - v25);
        v7 = a1 << v25;
        v28 = (a1 >> (32 - v25)) | (a2 << v25);
        sub_5A908(v27, HIWORD(v6));
        v30 = v29;
        v31 = sub_5A860(v27, HIWORD(v6));
        v32 = HIWORD(v28) | (v30 << 16);
        v33 = (unsigned __int16)v6 * v31;
        if ( v32 < v33 )
        {
          v55 = __CFADD__(v32, v6);
          v32 += v6;
          if ( !v55 && v32 < v33 )
            v32 += v6;
        }
        v34 = v32 - v33;
        sub_5A908(v32 - v33, HIWORD(v6));
        v36 = v35;
        v37 = sub_5A860(v34, HIWORD(v6));
        v38 = (unsigned __int16)v28 | (v36 << 16);
        v39 = (unsigned __int16)v6 * v37;
        if ( v38 < v39 )
        {
          v55 = __CFADD__(v38, v6);
          v38 += v6;
          if ( !v55 && v38 < v39 )
            v38 += v6;
        }
        v26 = v38 - v39;
      }
      else
      {
        v26 = a2 - v6;
      }
      sub_5A908(v26, HIWORD(v6));
      v41 = v40;
      v42 = sub_5A860(v26, HIWORD(v6));
      v43 = HIWORD(v7) | (v41 << 16);
      v44 = (unsigned __int16)v6 * v42;
      if ( v43 < v44 )
      {
        v55 = __CFADD__(v43, v6);
        v43 += v6;
        v45 = v42 - 1;
        if ( !v55 && v43 < v44 )
        {
          v45 = v42 - 2;
          v43 += v6;
        }
      }
      else
      {
        v45 = v42;
      }
      v46 = v43 - v44;
      sub_5A908(v43 - v44, HIWORD(v6));
      v48 = v47;
      v49 = sub_5A860(v46, HIWORD(v6));
      v50 = (unsigned __int16)v7 | (v48 << 16);
      v51 = (unsigned __int16)v6 * v49;
      if ( v50 < v51 )
      {
        v55 = __CFADD__(v50, v6);
        v53 = v50 + v6;
        v52 = v49 - 1;
        if ( !v55 && v53 < v51 )
          v52 = v49 - 2;
      }
      else
      {
        v52 = v49;
      }
      return v52 | (v45 << 16);
    }
    else
    {
      v9 = __clz(a3);
      if ( v9 )
      {
        v6 = a3 << v9;
        v7 = a1 << v9;
        v8 = (a1 >> (32 - v9)) | (a2 << v9);
      }
      sub_5A908(v8, HIWORD(v6));
      v11 = v10;
      v12 = sub_5A860(v8, HIWORD(v6));
      v13 = HIWORD(v7) | (v11 << 16);
      v14 = (unsigned __int16)v6 * v12;
      if ( v13 < v14 )
      {
        v55 = __CFADD__(v13, v6);
        v13 += v6;
        v15 = v12 - 1;
        if ( !v55 && v13 < v14 )
        {
          v15 = v12 - 2;
          v13 += v6;
        }
      }
      else
      {
        v15 = v12;
      }
      v16 = v13 - v14;
      sub_5A908(v13 - v14, HIWORD(v6));
      v18 = v17;
      v19 = sub_5A860(v16, HIWORD(v6));
      v20 = (unsigned __int16)v7 | (v18 << 16);
      v21 = (unsigned __int16)v6 * v19;
      if ( v20 < v21 )
      {
        v55 = __CFADD__(v20, v6);
        v23 = v20 + v6;
        v22 = v19 - 1;
        if ( !v55 && v23 < v21 )
          v22 = v19 - 2;
      }
      else
      {
        v22 = v19;
      }
      return v22 | (v15 << 16);
    }
  }
  if ( a4 > a2 )
    return 0;
  v54 = __clz(a4);
  if ( !v54 )
  {
    v55 = a2 >= a4;
    if ( a2 <= a4 )
      return a1 >= a3;
    return v55;
  }
  v56 = a3 << v54;
  v57 = a2 >> (32 - v54);
  v58 = (a3 >> (32 - v54)) | (a4 << v54);
  v59 = (a1 >> (32 - v54)) | (a2 << v54);
  sub_5A908(v57, HIWORD(v58));
  v74 = v60;
  v61 = sub_5A860(v57, HIWORD(v58));
  v62 = HIWORD(v59) | (v74 << 16);
  v63 = (unsigned __int16)v58 * v61;
  if ( v62 < v63 )
  {
    v55 = __CFADD__(v62, v58);
    v62 += v58;
    v64 = v61 - 1;
    if ( !v55 && v62 < v63 )
    {
      v64 = v61 - 2;
      v62 += v58;
    }
  }
  else
  {
    v64 = v61;
  }
  v75 = v62 - v63;
  sub_5A908(v62 - v63, HIWORD(v58));
  v65 = v75;
  v76 = v66;
  v67 = sub_5A860(v65, HIWORD(v58));
  v68 = (unsigned __int16)v59 | (v76 << 16);
  v69 = (unsigned __int16)v58 * v67;
  if ( v68 < v69 )
  {
    v55 = __CFADD__(v68, v58);
    v68 += v58;
    v70 = v67 - 1;
    if ( !v55 && v68 < v69 )
    {
      v70 = v67 - 2;
      v68 += v58;
    }
  }
  else
  {
    v70 = v67;
  }
  result = v70 | (v64 << 16);
  v71 = v68 - v69;
  v72 = (unsigned int)result * (unsigned __int64)v56;
  if ( HIDWORD(v72) > v71 || ((unsigned int)v72 > a1 << v54 ? (v73 = HIDWORD(v72) == v71) : (v73 = 0), v73) )
    --result;
  return result;
}
