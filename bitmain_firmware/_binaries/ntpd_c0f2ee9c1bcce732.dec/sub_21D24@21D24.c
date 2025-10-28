int *__fastcall sub_21D24(
        int a1,
        int a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        char a9,
        int a10)
{
  int **v13; // r0
  int **v14; // r1
  int *i; // r11
  int **v16; // r0
  int v17; // r3
  int v18; // r0
  int *v19; // r6
  int v21; // r3
  __int16 v22; // r3
  __int16 v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  _DWORD *v29; // r0
  unsigned int v30; // r2
  unsigned int v31; // r3
  int v32; // r0
  int v33; // r0
  char v34; // r3
  char v35; // r2
  const char *v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r0
  int v40; // r3
  int v41; // r8
  int v42; // r5
  int v43; // r0
  const char *v44; // r4
  const char *v45; // r0
  int v46; // r0
  char v47; // r3
  char v48; // r2
  const char *v49; // r0
  _DWORD *v50; // r0
  int v51; // r2
  int v52; // r5
  const char *v53; // r0
  int v54; // r2
  int v55; // r3
  int **v56; // [sp+24h] [bp-60h]
  char s[84]; // [sp+30h] [bp-54h] BYREF

  if ( !a2 )
  {
    if ( sub_21500((unsigned __int16 *)a1, 0, a3, a8) )
      return 0;
LABEL_17:
    if ( dword_CB440 )
    {
      v19 = (int *)dword_7D938;
    }
    else
    {
      v50 = (_DWORD *)sub_4F524(2880);
      *v50 = dword_7D938;
      v50[144] = v50;
      v50[288] = v50 + 144;
      v50[432] = v50 + 288;
      v51 = dword_CAC30;
      v50[576] = v50 + 432;
      v19 = v50 + 576;
      dword_7D938 = (int)(v50 + 576);
      dword_CAC30 = v51 + 5;
      dword_CB440 += 5;
    }
    if ( v19 )
    {
      v21 = *v19;
      *v19 = 0;
      dword_7D938 = v21;
    }
    --dword_CB440;
    ++dword_CAC28;
    if ( (a7 & 2) != 0 )
      ++dword_CB444;
    memset(v19, 0, 0x240u);
    v22 = word_7FB00;
    v23 = word_7FB00 + 1;
    *((_WORD *)v19 + 22) = word_7FB00;
    if ( v23 )
      word_7FB00 = v23;
    else
      word_7FB00 = v22 + 2;
    if ( dword_7CF4C > 2 )
    {
      v49 = (const char *)sub_50CD0(a1);
      printf("newpeer: cast flags: 0x%x for address: %s\n", a8, v49);
    }
    v24 = *(_DWORD *)(a1 + 4);
    v25 = *(_DWORD *)(a1 + 8);
    v26 = *(_DWORD *)(a1 + 12);
    v19[3] = *(_DWORD *)a1;
    v19[4] = v24;
    v19[5] = v25;
    v19[6] = v26;
    v27 = *(_DWORD *)(a1 + 20);
    v28 = *(_DWORD *)(a1 + 24);
    v19[7] = *(_DWORD *)(a1 + 16);
    v19[8] = v27;
    v19[9] = v28;
    v29 = (_DWORD *)sub_212EC(a1, a2, a8);
    sub_21778((int)v19, v29);
    *((_BYTE *)v19 + 47) = a3;
    *((_BYTE *)v19 + 46) = a4;
    if ( !a5 )
      v30 = 6;
    v19[13] = a7;
    if ( a5 )
    {
      if ( a5 > 16 )
        v30 = 17;
      else
        v30 = (unsigned __int8)a5;
      *((_BYTE *)v19 + 49) = v30;
    }
    else
    {
      *((_BYTE *)v19 + 49) = v30;
    }
    if ( a6 )
    {
      if ( a6 <= 3 )
        v31 = 3;
      else
        v31 = (unsigned __int8)a6;
      *((_BYTE *)v19 + 50) = v31;
    }
    else
    {
      v31 = 10;
      *((_BYTE *)v19 + 50) = 10;
    }
    v32 = v19[10];
    if ( v31 < v30 )
      *((_BYTE *)v19 + 49) = v31;
    if ( v32 )
    {
      if ( dword_7CF4C > 2 )
      {
        v52 = *(_DWORD *)(v32 + 8);
        v53 = (const char *)sub_50CD0(v32 + 20);
        printf("newpeer: using fd %d and our addr %s\n", v52, v53);
      }
    }
    else if ( dword_7CF4C > 2 )
    {
      puts("newpeer: local interface currently not bound");
    }
    if ( (a8 & 4) != 0 )
    {
      v33 = v19[10];
      if ( v33 )
        sub_14AC8(v33, (unsigned __int16 *)a1);
    }
    if ( (a8 & 2) != 0 )
    {
      v46 = v19[10];
      if ( v46 )
        sub_14AE4(v46, (unsigned __int16 *)a1);
      v47 = *((_BYTE *)v19 + 49);
      v48 = byte_CB478;
      *((_BYTE *)v19 + 56) = a8;
      *((_BYTE *)v19 + 59) = a9;
      v19[25] = a10;
      *((_BYTE *)v19 + 71) = v48;
      *((_BYTE *)v19 + 48) = v47;
      if ( (a8 & 0x10) == 0 )
      {
        sub_2310C(v19, "MCST");
LABEL_56:
        if ( dword_7D5EC )
          ++dword_CB480;
        v37 = *((unsigned __int16 *)v19 + 6);
        v38 = dword_CB548;
        v19[133] = dword_CB548;
        v19[135] = v38;
        v19[134] = v38;
        if ( v37 != 2 || bswap32(v19[4]) >> 16 << 16 != 2139029504 )
          goto LABEL_60;
        if ( !a6 )
          *((_BYTE *)v19 + 50) = *((_BYTE *)v19 + 49);
        if ( !sub_27184(v19) )
        {
          sub_21778((int)v19, 0);
          v54 = dword_7D938;
          v55 = dword_CB440 + 1;
          dword_7D938 = (int)v19;
          *v19 = v54;
          v19 = 0;
          dword_CB440 = v55;
        }
        else
        {
LABEL_60:
          v39 = sub_2E254(v19 + 3);
          v40 = *((unsigned __int16 *)v19 + 22);
          v41 = dword_CAE34[v39];
          *v19 = dword_CB23C[v39];
          dword_CB23C[v39] = v19;
          dword_CAE34[v39] = v41 + 1;
          v42 = dword_CAC34[v40 & 0x7F];
          v19[1] = dword_CB03C[v40 & 0x7F];
          dword_CB03C[v40 & 0x7F] = v19;
          dword_CAC34[v40 & 0x7F] = v42 + 1;
          snprintf(s, 0x50u, "assoc %d", v40);
          sub_1D3D8(129, (int)v19, s);
          if ( dword_7CF4C > 0 )
          {
            v43 = v19[10];
            if ( v43 )
              v44 = (const char *)sub_50CD0(v43 + 20);
            else
              v44 = "<null>";
            v45 = (const char *)sub_50CD0(v19 + 3);
            printf(
              "newpeer: %s->%s mode %d vers %d poll %d %d flags 0x%x 0x%x ttl %d key %08x\n",
              v44,
              v45,
              *((unsigned __int8 *)v19 + 47),
              *((unsigned __int8 *)v19 + 46),
              *((unsigned __int8 *)v19 + 49),
              *((unsigned __int8 *)v19 + 50),
              v19[13],
              *((unsigned __int8 *)v19 + 56),
              *((unsigned __int8 *)v19 + 59),
              v19[25]);
          }
        }
        return v19;
      }
    }
    else
    {
      v34 = *((_BYTE *)v19 + 49);
      v35 = byte_CB478;
      *((_BYTE *)v19 + 56) = a8;
      *((_BYTE *)v19 + 59) = a9;
      v19[25] = a10;
      *((_BYTE *)v19 + 71) = v35;
      *((_BYTE *)v19 + 48) = v34;
      if ( (a8 & 0x10) == 0 )
      {
        if ( (a8 & 4) != 0 )
          v36 = "BCST";
        else
          v36 = "INIT";
        sub_2310C(v19, v36);
        goto LABEL_56;
      }
    }
    sub_2310C(v19, "ACST");
    goto LABEL_56;
  }
  v13 = sub_21500((unsigned __int16 *)a1, 0, a3, a8);
  v14 = v13;
  if ( !v13 )
    goto LABEL_17;
  for ( i = v13[10]; i != (int *)a2; i = v16[10] )
  {
    if ( (a8 & 0x20) != 0 && ((_BYTE)v14[14] & 0x20) != 0 )
      break;
    v17 = *(_WORD *)a1 == 2 ? dword_CA608 : dword_CA644;
    if ( v17 == a2 )
    {
      v56 = v14;
      v18 = sub_15BD4((const struct sockaddr *)a1);
      v14 = v56;
      if ( i == (int *)v18 )
        break;
    }
    v16 = sub_21500((unsigned __int16 *)a1, (int ***)v14, a3, a8);
    v14 = v16;
    if ( !v16 )
      goto LABEL_17;
  }
  return 0;
}
