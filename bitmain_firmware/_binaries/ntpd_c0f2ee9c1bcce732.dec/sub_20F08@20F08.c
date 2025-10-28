unsigned int __fastcall sub_20F08(int a1, unsigned int a2)
{
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r0
  char v11; // r10
  int v12; // r4
  int v13; // r7
  int v14; // r9
  int v15; // r8
  _BOOL4 v16; // r3
  int v17; // r6
  int v18; // r3
  int v19; // r2
  int v20; // r6
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r12
  int v24; // r0
  int v25; // r12
  int v26; // r2
  int v27; // r2
  int v28; // r1
  int v29; // r1
  int v30; // r3
  int v31; // r5
  int v32; // r10
  int v33; // r7
  int v34; // r11
  int v35; // r3
  int v36; // r4
  int v37; // r2
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r1
  int v42; // r2
  _DWORD *v43; // r3
  int v44; // r2
  bool v45; // zf
  int v46; // r2
  char v47; // r2
  int v48; // r3
  int v49; // r3
  int v50; // r3
  int v51; // [sp+4h] [bp-28h]
  int v52; // [sp+Ch] [bp-20h] BYREF
  int v53; // [sp+10h] [bp-1Ch]
  int s2; // [sp+14h] [bp-18h] BYREF
  int v55; // [sp+18h] [bp-14h]
  int v56; // [sp+1Ch] [bp-10h]
  int v57; // [sp+20h] [bp-Ch]
  int v58; // [sp+24h] [bp-8h]

  if ( !dword_CAC24 )
    return a2;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v52 = *(_DWORD *)(a1 + 8);
  v53 = v5;
  s2 = v6;
  v55 = v7;
  v8 = *(_DWORD *)(a1 + 28);
  v9 = *(_DWORD *)(a1 + 32);
  v56 = *(_DWORD *)(a1 + 24);
  v57 = v8;
  v58 = v9;
  v10 = sub_2E254(&v52);
  v11 = *(_BYTE *)(a1 + 92) & 7;
  v12 = dword_7D728[v10];
  v13 = v10;
  if ( !v12 )
  {
LABEL_25:
    v36 = dword_7D928;
    if ( !dword_7D928 )
    {
      if ( dword_7D92C >= 600 )
      {
        v36 = dword_CABE4;
        if ( (double)sub_504EC() * 1.16415322e-10 > (double)(unsigned int)(dword_CB548 - *(_DWORD *)(v36 + 28))
                                                  / (double)dword_7A1D0 )
        {
          a2 &= 0xFFFFFBDF;
          return a2;
        }
        v50 = *(_DWORD *)(v36 + 8);
        *(_DWORD *)(v50 + 4) = &unk_CABDC;
        dword_CABE4 = v50;
        sub_20C80((_DWORD *)v36);
        goto LABEL_27;
      }
      sub_20CD0();
      v36 = dword_7D928;
    }
    dword_7D928 = *(_DWORD *)v36;
LABEL_27:
    v37 = dword_CB548;
    *(_DWORD *)(v36 + 16) = 0;
    *(_DWORD *)(v36 + 24) = v37;
    *(_DWORD *)(v36 + 28) = v37;
    *(_DWORD *)(v36 + 20) = 1;
    *(_DWORD *)(v36 + 12) = a2 & 0xFFFFFBDF;
    memset((void *)(v36 + 32), 0, 0x1Cu);
    v38 = v53;
    v39 = s2;
    v40 = v55;
    *(_DWORD *)(v36 + 32) = v52;
    *(_DWORD *)(v36 + 36) = v38;
    *(_DWORD *)(v36 + 40) = v39;
    *(_DWORD *)(v36 + 44) = v40;
    v41 = v57;
    v42 = v58;
    *(_DWORD *)(v36 + 48) = v56;
    *(_DWORD *)(v36 + 52) = v41;
    *(_DWORD *)(v36 + 56) = v42;
    LOWORD(v40) = *(_WORD *)(a1 + 10);
    *(_BYTE *)(v36 + 66) = v11;
    *(_WORD *)(v36 + 64) = v40;
    *(_BYTE *)(v36 + 67) = (*(_BYTE *)(a1 + 92) >> 3) & 7;
    v43 = *(_DWORD **)(a1 + 64);
    v44 = v43[35];
    *(_DWORD *)(v36 + 60) = v43;
    v45 = (v44 & 0x40) == 0;
    v46 = *(_DWORD *)(a1 + 68);
    if ( v45 || v46 != v43[2] )
    {
      if ( v43[3] == v46 )
        v47 = 4;
      else
        v47 = 1;
    }
    else
    {
      v47 = 2;
    }
    v48 = dword_CABE0;
    *(_BYTE *)(v36 + 68) = v47;
    a2 = *(_DWORD *)(v36 + 12);
    *(_DWORD *)v36 = dword_7D728[v13];
    dword_7D728[v13] = v36;
    *(_DWORD *)(v36 + 4) = v48;
    v49 = dword_CABE0;
    *(_DWORD *)(v36 + 8) = &unk_CABDC;
    dword_CABE0 = v36;
    *(_DWORD *)(v49 + 8) = v36;
    return a2;
  }
  v14 = (unsigned __int16)v52;
  v15 = v58;
  v51 = v53;
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v12 + 32) != v14 )
      goto LABEL_5;
    if ( v14 == 2 )
      break;
    if ( !memcmp((const void *)(v12 + 40), &s2, 0x10u) )
    {
      v16 = *(_DWORD *)(v12 + 56) == v15;
      goto LABEL_10;
    }
LABEL_5:
    v12 = *(_DWORD *)v12;
    if ( !v12 )
      goto LABEL_25;
  }
  v16 = *(_DWORD *)(v12 + 36) == v51;
LABEL_10:
  if ( !v16 )
    goto LABEL_5;
  v17 = *(_DWORD *)(v12 + 28);
  v18 = dword_CB548;
  v19 = *(_DWORD *)(v12 + 20) + 1;
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 20) = v19;
  v20 = v18 - v17;
  v21 = *(_DWORD *)(v12 + 4);
  v22 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 28) = v18;
  LOWORD(v18) = *(_WORD *)(a1 + 10);
  *(_BYTE *)(v12 + 66) = v11;
  *(_WORD *)(v12 + 64) = v18;
  v23 = *(unsigned __int8 *)(a1 + 92);
  *(_DWORD *)(v21 + 8) = v22;
  v24 = *(_DWORD *)(v12 + 8);
  v25 = (v23 >> 3) & 7;
  v26 = *(_DWORD *)(v12 + 16);
  *(_DWORD *)(v12 + 8) = &unk_CABDC;
  *(_DWORD *)(v24 + 4) = v21;
  v27 = v26 - v20;
  v28 = dword_CABE0;
  *(_DWORD *)(v12 + 16) = v27;
  if ( v27 < 0 )
  {
    v27 = 0;
    *(_DWORD *)(v12 + 16) = 0;
  }
  *(_DWORD *)(v12 + 4) = v28;
  v29 = dword_CABE0;
  dword_CABE0 = v12;
  *(_DWORD *)(v29 + 8) = v12;
  v30 = dword_7CF4C;
  v31 = 1 << dword_7A1C8;
  *(_BYTE *)(v12 + 67) = v25;
  v32 = v31 + v27;
  v33 = 8 * v31;
  if ( v30 > 1 )
    printf("restrict: interval %d headway %d limit %d\n", v20, v31 + v27, 8 * v31);
  if ( v20 + 1 < 1 << dword_7A1CC || v32 >= v33 )
  {
    v35 = *(_DWORD *)(v12 + 16);
    if ( v33 <= v35 )
      a2 = *(_DWORD *)(v12 + 12);
    else
      *(_DWORD *)(v12 + 16) = 9 * v31;
    if ( v33 <= v35 )
    {
      a2 &= ~0x400u;
      *(_DWORD *)(v12 + 12) = a2;
    }
    else
    {
      return *(_DWORD *)(v12 + 12);
    }
  }
  else
  {
    v34 = *(_DWORD *)(v12 + 12);
    *(_DWORD *)(v12 + 16) = v32 - 2;
    a2 = v34 & 0xFFFFFBDF;
    *(_DWORD *)(v12 + 12) = a2;
  }
  return a2;
}
