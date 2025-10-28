int __fastcall hs_header_write(int a1, int *a2)
{
  _DWORD *v3; // r1
  _DWORD *v5; // r5
  __int64 v6; // r0
  int v7; // r4
  _DWORD *v8; // lr
  int v9; // r1
  int v10; // r6
  int v11; // r5
  int v12; // r4
  _DWORD *v13; // r7
  int v14; // r1
  int v15; // r5
  int v16; // r4
  int v17; // lr
  int v18; // r5
  int v19; // r4
  int v20; // lr
  _DWORD *v21; // r6
  int v22; // r1
  int v23; // r4
  int v24; // lr
  int v25; // r0
  int v26; // r4
  int v27; // lr
  int v28; // r0
  _DWORD *v29; // r7
  int v30; // r1
  int v31; // r5
  int v32; // r4
  int v33; // lr
  int v34; // r4
  int v35; // r5
  int v36; // lr
  _DWORD *v37; // r4
  int v38; // r1
  int v39; // r0
  int v40; // r6
  int v41; // r5
  int v42; // r0
  _DWORD *v43; // r7
  int v44; // r1
  int v45; // r5
  int v46; // r4
  int v47; // lr
  int v48; // r5
  int v49; // r4
  int v50; // lr
  _DWORD *v51; // r6
  int v52; // r1
  int v53; // r4
  int v54; // lr
  int v55; // r0
  int v56; // r4
  int v57; // lr
  int v58; // r0
  _DWORD *v59; // r6
  int v60; // r1
  int v61; // r4
  int v62; // lr
  int v63; // r12
  int v64; // r12
  int v65; // r4
  int v66; // lr
  _DWORD *v67; // r1
  int v68; // r12
  int v69; // r0
  _DWORD *v70; // r1
  int v71; // r0

  if ( !a2 )
    return 256;
  v3 = (_DWORD *)*a2;
  if ( !*a2 )
    return 256;
  *v3 = *(_DWORD *)a1;
  v5 = (_DWORD *)*a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *a2 + 4;
  *a2 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v5 + 1) = v6;
    v8 = (_DWORD *)*a2;
    v9 = *a2 + 8;
    *a2 = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a1 + 20);
      v11 = *(_DWORD *)(a1 + 24);
      v12 = *(_DWORD *)(a1 + 28);
      v8[2] = *(_DWORD *)(a1 + 16);
      v8[3] = v10;
      v8[4] = v11;
      v8[5] = v12;
      v8[6] = *(_DWORD *)(a1 + 32);
      v13 = (_DWORD *)*a2;
      v14 = *a2 + 20;
      *a2 = v14;
      if ( v14 )
      {
        v15 = *(_DWORD *)(a1 + 40);
        v16 = *(_DWORD *)(a1 + 44);
        v17 = *(_DWORD *)(a1 + 48);
        v13[5] = *(_DWORD *)(a1 + 36);
        v13[6] = v15;
        v13[7] = v16;
        v13[8] = v17;
        v18 = *(_DWORD *)(a1 + 56);
        v19 = *(_DWORD *)(a1 + 60);
        v20 = *(_DWORD *)(a1 + 64);
        v13[9] = *(_DWORD *)(a1 + 52);
        v13[10] = v18;
        v13[11] = v19;
        v13[12] = v20;
        v21 = (_DWORD *)*a2;
        v22 = *a2 + 32;
        *a2 = v22;
        if ( v22 )
        {
          v23 = *(_DWORD *)(a1 + 72);
          v24 = *(_DWORD *)(a1 + 76);
          v25 = *(_DWORD *)(a1 + 80);
          v21[8] = *(_DWORD *)(a1 + 68);
          v21[9] = v23;
          v21[10] = v24;
          v21[11] = v25;
          v26 = *(_DWORD *)(a1 + 88);
          v27 = *(_DWORD *)(a1 + 92);
          v28 = *(_DWORD *)(a1 + 96);
          v21[12] = *(_DWORD *)(a1 + 84);
          v21[13] = v26;
          v21[14] = v27;
          v21[15] = v28;
          v29 = (_DWORD *)*a2;
          v30 = *a2 + 32;
          *a2 = v30;
          if ( v30 )
          {
            v31 = *(_DWORD *)(a1 + 104);
            v32 = *(_DWORD *)(a1 + 108);
            v33 = *(_DWORD *)(a1 + 112);
            v29[8] = *(_DWORD *)(a1 + 100);
            v29[9] = v31;
            v29[10] = v32;
            v29[11] = v33;
            v34 = *(_DWORD *)(a1 + 124);
            v35 = *(_DWORD *)(a1 + 120);
            v36 = *(_DWORD *)(a1 + 128);
            v29[12] = *(_DWORD *)(a1 + 116);
            v29[13] = v35;
            v29[14] = v34;
            v29[15] = v36;
            v37 = (_DWORD *)*a2;
            v38 = *a2 + 32;
            *a2 = v38;
            if ( v38 )
            {
              v39 = *(_DWORD *)(a1 + 136);
              v40 = *(_DWORD *)(a1 + 140);
              v41 = *(_DWORD *)(a1 + 144);
              v37[8] = *(_DWORD *)(a1 + 132);
              v37[9] = v39;
              v37[10] = v40;
              v37[11] = v41;
              v42 = *(_DWORD *)(a1 + 152);
              v37[12] = *(_DWORD *)(a1 + 148);
              v37[13] = v42;
              v43 = (_DWORD *)*a2;
              v44 = *a2 + 24;
              *a2 = v44;
              if ( v44 )
              {
                v45 = *(_DWORD *)(a1 + 160);
                v46 = *(_DWORD *)(a1 + 164);
                v47 = *(_DWORD *)(a1 + 168);
                v43[6] = *(_DWORD *)(a1 + 156);
                v43[7] = v45;
                v43[8] = v46;
                v43[9] = v47;
                v48 = *(_DWORD *)(a1 + 176);
                v49 = *(_DWORD *)(a1 + 180);
                v50 = *(_DWORD *)(a1 + 184);
                v43[10] = *(_DWORD *)(a1 + 172);
                v43[11] = v48;
                v43[12] = v49;
                v43[13] = v50;
                v51 = (_DWORD *)*a2;
                v52 = *a2 + 32;
                *a2 = v52;
                if ( v52 )
                {
                  v53 = *(_DWORD *)(a1 + 192);
                  v54 = *(_DWORD *)(a1 + 196);
                  v55 = *(_DWORD *)(a1 + 200);
                  v51[8] = *(_DWORD *)(a1 + 188);
                  v51[9] = v53;
                  v51[10] = v54;
                  v51[11] = v55;
                  v56 = *(_DWORD *)(a1 + 208);
                  v57 = *(_DWORD *)(a1 + 212);
                  v58 = *(_DWORD *)(a1 + 216);
                  v51[12] = *(_DWORD *)(a1 + 204);
                  v51[13] = v56;
                  v51[14] = v57;
                  v51[15] = v58;
                  v59 = (_DWORD *)*a2;
                  v60 = *a2 + 32;
                  *a2 = v60;
                  if ( v60 )
                  {
                    v61 = *(_DWORD *)(a1 + 224);
                    v62 = *(_DWORD *)(a1 + 228);
                    v63 = *(_DWORD *)(a1 + 232);
                    v59[8] = *(_DWORD *)(a1 + 220);
                    v59[9] = v61;
                    v59[10] = v62;
                    v59[11] = v63;
                    v64 = *(_DWORD *)(a1 + 248);
                    v65 = *(_DWORD *)(a1 + 240);
                    v66 = *(_DWORD *)(a1 + 244);
                    v59[12] = *(_DWORD *)(a1 + 236);
                    v59[13] = v65;
                    v59[14] = v66;
                    v59[15] = v64;
                    v67 = (_DWORD *)*a2;
                    v68 = *(_DWORD *)(a1 + 252);
                    v69 = *a2 + 32;
                    *a2 = v69;
                    if ( v69 )
                    {
                      v67[8] = v68;
                      v70 = (_DWORD *)*a2;
                      v71 = *a2 + 4;
                      *a2 = v71;
                      if ( v71 )
                      {
                        v70[1] = *(_DWORD *)(a1 + 256);
                        *a2 += 4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 256;
}
