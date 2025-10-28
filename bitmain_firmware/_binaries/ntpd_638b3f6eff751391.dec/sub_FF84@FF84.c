void sub_FF84()
{
  _DWORD *v0; // r4
  void *v1; // r0
  void **v2; // r0
  void **v3; // r0
  int v4; // r5
  void *v5; // r0
  void *v6; // r0
  int v7; // r0
  void *v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r5
  void **v19; // r5
  int v20; // r5
  void **i; // r5
  int v22; // r5
  int v23; // r0
  int v24; // r0
  int v25; // r11
  void *v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r11
  int v30; // r0
  int v31; // r5
  int v32; // r3
  void *v33; // r0
  int v34; // r0
  int v35; // r5
  int v36; // r5
  int v37; // r5
  void *v38; // r0
  void *v39; // r0
  void *v40; // r0
  void *v41; // r0
  void *v42; // r0
  void *v43; // r0
  void *v44; // r0
  void *v45; // r0
  void *v46; // r0
  void *v47; // r0
  void *v48; // r0
  void *v49; // r0
  void *v50; // r0
  void *v51; // r0
  void *v52; // r0
  void *v53; // r0
  void *v54; // r0
  void *v55; // r0
  void *v56; // r0
  void *v57; // r0
  void *v58; // r0
  void *v59; // r0
  void *v60; // r0
  void *v61; // r0
  void *v62; // r0
  void *v63; // r0
  _DWORD *v64; // [sp+4h] [bp-8h]

  v0 = (_DWORD *)dword_7CDF8;
  if ( dword_7CDF8 )
  {
    while ( 1 )
    {
      v1 = (void *)v0[4];
      v64 = (_DWORD *)*v0;
      if ( v1 )
        free(v1);
      while ( 1 )
      {
        v2 = (void **)sub_10E58(v0[12]);
        if ( !v2 )
          break;
        sub_FC04(v2);
      }
      v3 = (void **)sub_10E58(v0[13]);
      if ( !v3 )
        goto LABEL_10;
      do
      {
        sub_FC04(v3);
        v3 = (void **)sub_10E58(v0[13]);
      }
      while ( v3 );
      v4 = sub_10E58(v0[26]);
      if ( v4 )
        break;
LABEL_11:
      v5 = (void *)v0[26];
      if ( v5 )
      {
        sub_10D2C(v5);
        v0[26] = v4;
      }
      v6 = (void *)v0[31];
      if ( v6 )
      {
        sub_10D2C(v6);
        v0[31] = 0;
      }
      while ( !sub_10D94(v0[14]) )
      {
        v7 = sub_10E58(v0[14]);
        sub_10D7C(v7);
      }
      v8 = (void *)v0[16];
      if ( v8 )
      {
        free(v8);
        v0[16] = 0;
      }
      while ( 1 )
      {
        v9 = sub_10E58(v0[15]);
        if ( !v9 )
          break;
        sub_10D7C(v9);
      }
      while ( 1 )
      {
        v10 = sub_10E58(v0[17]);
        if ( !v10 )
          break;
        while ( 1 )
        {
          v11 = sub_10E58(*(_DWORD *)(v10 + 4));
          if ( !v11 )
            break;
          sub_10D7C(v11);
        }
        sub_10D7C(v10);
      }
      while ( 1 )
      {
        v12 = sub_10E58(v0[18]);
        if ( !v12 )
          break;
        sub_10D7C(v12);
      }
      while ( 1 )
      {
        v13 = sub_10E58(v0[19]);
        if ( !v13 )
          break;
        while ( 1 )
        {
          v14 = sub_10E58(*(_DWORD *)(v13 + 8));
          if ( !v14 )
            break;
          sub_10D7C(v14);
        }
        sub_FF38(v13);
      }
      while ( 1 )
      {
        v15 = sub_10E58(v0[21]);
        if ( !v15 )
          break;
        sub_10D7C(v15);
      }
      v16 = sub_10E58(v0[22]);
      if ( !v16 )
        goto LABEL_39;
      do
      {
        sub_10D7C(v16);
        v16 = sub_10E58(v0[22]);
      }
      while ( v16 );
      v17 = sub_10E58(v0[23]);
      if ( v17 )
      {
        while ( 1 )
        {
          sub_10D7C(v17);
LABEL_39:
          v17 = sub_10E58(v0[23]);
          if ( !v17 )
          {
            v18 = sub_10E58(v0[33]);
            if ( !v18 )
              goto LABEL_45;
            goto LABEL_41;
          }
        }
      }
      while ( 1 )
      {
        v18 = sub_10E58(v0[33]);
        if ( !v18 )
          break;
LABEL_41:
        free(*(void **)(v18 + 8));
        sub_10D7C(v18);
      }
      v19 = (void **)sub_10E58(v0[35]);
      if ( v19 )
      {
        while ( 1 )
        {
          free(*v19);
          sub_10D7C(v19);
LABEL_45:
          v19 = (void **)sub_10E58(v0[35]);
          if ( !v19 )
          {
            v20 = sub_10E58(v0[34]);
            if ( !v20 )
              goto LABEL_51;
            goto LABEL_47;
          }
        }
      }
      while ( 1 )
      {
        v20 = sub_10E58(v0[34]);
        if ( !v20 )
          break;
LABEL_47:
        free(*(void **)(v20 + 8));
        sub_10D7C(v20);
      }
      for ( i = (void **)sub_10E58(v0[36]); i; i = (void **)sub_10E58(v0[36]) )
      {
        free(*i);
        free(i[1]);
        sub_10D7C(i);
LABEL_51:
        ;
      }
      while ( 1 )
      {
        v22 = sub_10E58(v0[38]);
        if ( !v22 )
          break;
        while ( 1 )
        {
          v23 = *(_DWORD *)(v22 + 4);
          if ( !v23 )
            goto LABEL_139;
          v24 = sub_10E58(v23);
          v25 = v24;
          if ( !v24 )
            break;
          if ( *(_DWORD *)v24 == 310 )
            sub_FC04(*(void ***)(v24 + 8));
          sub_10D7C(v25);
        }
        v63 = *(void **)(v22 + 4);
        if ( v63 )
        {
          sub_10D2C(v63);
          *(_DWORD *)(v22 + 4) = 0;
        }
LABEL_139:
        sub_10D7C(v22);
      }
      while ( 1 )
      {
        v27 = sub_10E58(v0[20]);
        if ( !v27 )
          break;
        while ( 1 )
        {
          v28 = sub_10E58(*(_DWORD *)(v27 + 4));
          v29 = v28;
          if ( !v28 )
            break;
          if ( *(_DWORD *)v28 == 8 )
            free(*(void **)(v28 + 8));
          sub_10D7C(v29);
        }
        v26 = *(void **)(v27 + 4);
        if ( v26 )
        {
          sub_10D2C(v26);
          *(_DWORD *)(v27 + 4) = 0;
        }
        sub_10D7C(v27);
      }
      while ( 1 )
      {
        v30 = sub_10E58(v0[39]);
        v31 = v30;
        if ( !v30 )
          break;
        v32 = *(_DWORD *)v30;
        if ( *(_DWORD *)v30 == 321 )
          goto LABEL_75;
        if ( *(int *)v30 <= 321 )
        {
          if ( v32 != 287 )
            goto LABEL_69;
LABEL_75:
          free(*(void **)(v30 + 8));
          goto LABEL_69;
        }
        if ( v32 == 326 || v32 == 363 )
          goto LABEL_75;
LABEL_69:
        sub_10D7C(v31);
      }
      while ( 1 )
      {
        v34 = sub_10E58(v0[9]);
        v35 = v34;
        if ( !v34 )
          break;
        sub_FC04(*(void ***)(v34 + 4));
        v33 = *(void **)(v35 + 8);
        if ( v33 )
        {
          sub_10D2C(v33);
          *(_DWORD *)(v35 + 8) = 0;
        }
        sub_10D7C(v35);
      }
      v36 = sub_10E58(v0[10]);
      if ( !v36 )
        goto LABEL_86;
      do
      {
        sub_FC04(*(void ***)(v36 + 4));
        sub_10D7C(v36);
        v36 = sub_10E58(v0[10]);
      }
      while ( v36 );
      v37 = sub_10E58(v0[40]);
      if ( v37 )
      {
        while ( 2 )
        {
          v38 = *(void **)(v37 + 4);
          if ( v38 )
            free(v38);
          sub_10D7C(v37);
LABEL_86:
          v37 = sub_10E58(v0[40]);
          if ( v37 )
            continue;
          break;
        }
      }
      v39 = (void *)v0[40];
      if ( v39 )
      {
        sub_10D2C(v39);
        v0[40] = v37;
      }
      v40 = (void *)v0[9];
      if ( v40 )
      {
        sub_10D2C(v40);
        v0[9] = 0;
      }
      v41 = (void *)v0[10];
      if ( v41 )
      {
        sub_10D2C(v41);
        v0[10] = 0;
      }
      v42 = (void *)v0[14];
      if ( v42 )
      {
        sub_10D2C(v42);
        v0[14] = 0;
      }
      v43 = (void *)v0[12];
      if ( v43 )
      {
        sub_10D2C(v43);
        v0[12] = 0;
      }
      v44 = (void *)v0[13];
      if ( v44 )
      {
        sub_10D2C(v44);
        v0[13] = 0;
      }
      v45 = (void *)v0[15];
      if ( v45 )
      {
        sub_10D2C(v45);
        v0[15] = 0;
      }
      v46 = (void *)v0[17];
      if ( v46 )
      {
        sub_10D2C(v46);
        v0[17] = 0;
      }
      v47 = (void *)v0[18];
      if ( v47 )
      {
        sub_10D2C(v47);
        v0[18] = 0;
      }
      v48 = (void *)v0[19];
      if ( v48 )
      {
        sub_10D2C(v48);
        v0[19] = 0;
      }
      v49 = (void *)v0[22];
      if ( v49 )
      {
        sub_10D2C(v49);
        v0[22] = 0;
      }
      v50 = (void *)v0[23];
      if ( v50 )
      {
        sub_10D2C(v50);
        v0[23] = 0;
      }
      v51 = (void *)v0[21];
      if ( v51 )
      {
        sub_10D2C(v51);
        v0[21] = 0;
      }
      v52 = (void *)v0[20];
      if ( v52 )
      {
        sub_10D2C(v52);
        v0[20] = 0;
      }
      v53 = (void *)v0[33];
      if ( v53 )
      {
        sub_10D2C(v53);
        v0[33] = 0;
      }
      v54 = (void *)v0[35];
      if ( v54 )
      {
        sub_10D2C(v54);
        v0[35] = 0;
      }
      v55 = (void *)v0[34];
      if ( v55 )
      {
        sub_10D2C(v55);
        v0[34] = 0;
      }
      v56 = (void *)v0[36];
      if ( v56 )
      {
        sub_10D2C(v56);
        v0[36] = 0;
      }
      v57 = (void *)v0[37];
      if ( v57 )
      {
        sub_10D2C(v57);
        v0[37] = 0;
      }
      v58 = (void *)v0[38];
      if ( v58 )
      {
        sub_10D2C(v58);
        v0[38] = 0;
      }
      v59 = (void *)v0[39];
      if ( v59 )
      {
        sub_10D2C(v59);
        v0[39] = 0;
      }
      v60 = (void *)v0[27];
      if ( v60 )
      {
        free(v60);
        v0[27] = 0;
      }
      v61 = (void *)v0[28];
      if ( v61 )
      {
        free(v61);
        v0[28] = 0;
      }
      v62 = (void *)v0[32];
      if ( v62 )
      {
        free(v62);
        v0[32] = 0;
      }
      free(v0);
      v0 = v64;
      if ( !v64 )
        return;
    }
    while ( 1 )
    {
      free(*(void **)(v4 + 8));
      sub_10D7C(v4);
LABEL_10:
      v4 = sub_10E58(v0[26]);
      if ( !v4 )
        goto LABEL_11;
    }
  }
}
