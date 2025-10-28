int __fastcall sub_119C4(int a1)
{
  unsigned __int16 *v1; // r7
  int result; // r0
  int v4; // r1
  int v5; // r12
  int v6; // r3
  int v7; // r4
  int v8; // r6
  int v9; // r3
  int v10; // r10
  int v11; // r8
  int v12; // r11
  int v13; // r12
  int v14; // r2
  int v15; // r3
  int *v16; // r2
  bool v17; // cc
  const char *v18; // r4
  const char *v19; // r0
  const char *v20; // r3
  const char *v21; // lr
  const char *v22; // r2
  int v23; // r3
  _BOOL4 v24; // r3
  int v25; // r3
  bool v26; // zf
  _DWORD *v27; // r3
  int v28; // r10
  _DWORD *v29; // r10
  _DWORD *v30; // r1
  _DWORD *v31; // r2
  _DWORD *v32; // r3
  int v33; // r12
  int v34; // r8
  int v35; // t1
  int v36; // t1
  bool v37; // cf
  int v38; // r2
  int v39; // r3
  int v40; // r4
  int v41; // r0
  int v42; // r0
  const char *v43; // r0
  const char *v44; // r3
  const char *v45; // r12
  const char *v46; // r2
  int v47; // r3
  int v48; // r0
  const char *v49; // r2
  char *v50; // r3
  const char *v51; // r5
  int v52; // r0
  const char *v53; // r4
  const char *v54; // r0
  const char *v55; // r8
  const char *v56; // r0
  int v57; // [sp+Ch] [bp-20h]
  int *v58; // [sp+10h] [bp-1Ch]
  _BOOL4 v59; // [sp+14h] [bp-18h]
  int v60; // [sp+18h] [bp-14h]
  int v61; // [sp+1Ch] [bp-10h]
  _BOOL4 v62; // [sp+20h] [bp-Ch]
  int v63; // [sp+24h] [bp-8h]

  v1 = (unsigned __int16 *)(a1 + 20);
  result = sub_4D0B4(a1 + 20);
  v4 = *(_DWORD *)(a1 + 176);
  v5 = dword_CA62C;
  *(_DWORD *)a1 = dword_CA654;
  dword_CA654 = a1;
  dword_CA62C = v5 + 1;
  *(_DWORD *)(a1 + 148) = result;
  if ( v4 || (*(_DWORD *)(a1 + 140) & 0x14) != 0x10 )
    return result;
  v6 = *(unsigned __int16 *)(a1 + 136);
  if ( v6 == 2 )
  {
    v61 = 0;
    v63 = 0;
    v58 = &dword_CA634;
    v59 = 0;
  }
  else if ( v6 == 10 )
  {
    v47 = *(_DWORD *)(a1 + 28) & 0xC0FF;
    v59 = v47 == 33022 || v47 == 49406;
    v58 = &dword_CA630;
    v63 = (*(unsigned __int8 *)(a1 + 36) >> 1) & 1;
    v61 = (*(_DWORD *)(a1 + 140) >> 9) & 1;
  }
  else
  {
    v61 = 0;
    v63 = 0;
    v58 = &dword_CA630;
    v59 = 0;
  }
  if ( dword_7CF4C > 3 )
  {
    v43 = (const char *)sub_50CD0(v1);
    v44 = (const char *)&unk_665CC;
    v45 = " privacy";
    if ( !v61 )
      v45 = (const char *)&unk_665CC;
    v46 = " link/scope-local";
    if ( !v59 )
      v46 = (const char *)&unk_665CC;
    if ( v63 )
      v44 = " univ-IID";
    result = printf("add_interface mcast-capable %s%s%s%s\n", v43, v46, v44, v45);
  }
  v7 = *v58;
  if ( !*v58 )
  {
    if ( v59 )
      goto LABEL_77;
    v38 = 0;
LABEL_86:
    *(_DWORD *)(a1 + 4) = v38;
    *v58 = a1;
    goto LABEL_78;
  }
  do
  {
    v8 = *(_DWORD *)(v7 + 4);
    if ( *(unsigned __int16 *)(a1 + 136) != *(unsigned __int16 *)(v7 + 136) )
      goto LABEL_10;
    result = strcmp((const char *)(a1 + 104), (const char *)(v7 + 104));
    if ( result )
      goto LABEL_10;
    v60 = v7 + 20;
    if ( *v1 != *(unsigned __int16 *)(a1 + 48) )
      off_7C9FC("ntp_io.c", 751, 0, "((a)->sa.sa_family) == ((a_mask)->sa.sa_family)");
    v9 = *(unsigned __int16 *)(v7 + 48);
    if ( *(unsigned __int16 *)(v7 + 20) != v9 )
      off_7C9FC("ntp_io.c", 752, 0, "((b)->sa.sa_family) == ((b_mask)->sa.sa_family)");
    if ( *(unsigned __int16 *)(a1 + 48) != v9 )
      goto LABEL_18;
    if ( v9 == 2 )
    {
      v24 = *(_DWORD *)(a1 + 52) != *(_DWORD *)(v7 + 52);
    }
    else
    {
      result = memcmp((const void *)(a1 + 56), (const void *)(v7 + 56), 0x10u);
      if ( result )
        goto LABEL_18;
      v24 = *(_DWORD *)(a1 + 72) != *(_DWORD *)(v7 + 72);
    }
    if ( !v24 )
    {
      v25 = *v1;
      v26 = v25 == 10;
      if ( v25 == 10 )
        v27 = v1 + 4;
      else
        v27 = v1 + 2;
      if ( v26 )
        v28 = 4;
      else
        v28 = 1;
      v29 = &v27[v28];
      if ( v26 )
      {
        v30 = (_DWORD *)(v7 + 28);
        v31 = (_DWORD *)(a1 + 56);
      }
      else
      {
        v30 = (_DWORD *)(v7 + 24);
        v31 = (_DWORD *)(a1 + 52);
      }
      if ( v27 >= v29 )
        goto LABEL_70;
      result = *v27 ^ *v30;
      if ( (result & *v31) == 0 )
      {
        v32 = v27 + 1;
        while ( 1 )
        {
          v37 = v32 >= v29;
          result = (int)v32++;
          if ( v37 )
            break;
          v33 = *(_DWORD *)result;
          v35 = v30[1];
          ++v30;
          v34 = v35;
          v36 = v31[1];
          ++v31;
          result = v36;
          if ( ((v34 ^ v33) & v36) != 0 )
            goto LABEL_18;
        }
LABEL_70:
        v10 = 1;
        goto LABEL_19;
      }
    }
LABEL_18:
    v10 = 0;
LABEL_19:
    if ( *(_WORD *)(a1 + 136) == 10 )
    {
      v23 = *(_DWORD *)(v7 + 28) & 0xC0FF;
      if ( v23 == 33022 )
      {
        v12 = 0;
        v62 = 1;
      }
      else
      {
        result = v23 - 49406;
        v62 = v23 == 49406;
        v12 = v59 && v23 != 49406;
      }
      v13 = (*(unsigned __int8 *)(v7 + 36) >> 1) & 1;
      v11 = (*(_DWORD *)(v7 + 140) >> 9) & 1;
    }
    else
    {
      v11 = 0;
      v62 = 0;
      v12 = v59;
      v13 = 0;
    }
    if ( dword_7CF4C > 3 )
    {
      v57 = v13;
      v19 = (const char *)sub_50CD0(v60);
      v20 = (const char *)&unk_665CC;
      v21 = " privacy";
      if ( !v11 )
        v21 = (const char *)&unk_665CC;
      v22 = " link/scope-local";
      if ( !v62 )
        v22 = (const char *)&unk_665CC;
      if ( v57 )
        v20 = " univ-IID";
      result = printf("add_interface mcast-capable scan %s%s%s%s\n", v19, v22, v20, v21);
      v13 = v57;
    }
    if ( v12 )
    {
LABEL_107:
      if ( dword_7CF4C > 3 )
      {
        v51 = "head";
        v52 = sub_50CD0(v1);
        if ( v59 )
          v51 = "tail";
        v53 = (const char *)v52;
        v54 = (const char *)sub_50CD0(v60);
        return printf("did not add %s to %s of IPv6 multicast-capable list which already has %s\n", v53, v51, v54);
      }
      return result;
    }
    if ( !v10 )
    {
      if ( !v62 || v59 )
        goto LABEL_10;
LABEL_25:
      v14 = *v58;
      if ( *v58 == v7 )
      {
        v15 = v7;
        v16 = v58;
      }
      else
      {
        if ( !v14 || (v15 = *(_DWORD *)(v14 + 4)) == 0 )
        {
LABEL_112:
          if ( dword_7CF4C <= 3 )
            goto LABEL_10;
          v18 = "Failed to remove";
          goto LABEL_114;
        }
        while ( v15 != v7 )
        {
          v14 = v15;
          v15 = *(_DWORD *)(v15 + 4);
          if ( !v15 )
            goto LABEL_112;
        }
        v16 = (int *)(v14 + 4);
      }
      result = *(_DWORD *)(v15 + 4);
      v17 = dword_7CF4C <= 3;
      *v16 = result;
      *(_DWORD *)(v15 + 4) = 0;
      if ( v17 )
        goto LABEL_10;
      v18 = "removed";
LABEL_114:
      v55 = (const char *)sub_50CD0(v60);
      v56 = (const char *)sub_50CD0(v1);
      result = printf("%s %s from IPv6 multicast-capable list to add %s\n", v18, v55, v56);
      goto LABEL_10;
    }
    result = v61;
    if ( ((v11 ^ 1) & v61) != 0 || (v13 & (v63 ^ 1)) != 0 )
      goto LABEL_107;
    result = v59;
    if ( v62 && !v59 )
      goto LABEL_25;
    result = v61;
    if ( (v11 & (v61 ^ 1)) != 0 || ((v13 ^ 1) & v63) != 0 )
      goto LABEL_25;
LABEL_10:
    v7 = v8;
  }
  while ( v8 );
  v38 = *v58;
  if ( !v59 )
    goto LABEL_86;
  if ( v38 )
  {
    while ( *(_DWORD *)(v38 + 4) )
      v38 = *(_DWORD *)(v38 + 4);
    v58 = (int *)(v38 + 4);
  }
LABEL_77:
  *(_DWORD *)(a1 + 4) = 0;
  *v58 = a1;
LABEL_78:
  if ( dword_7CF4C > 3 )
  {
    v48 = sub_50CD0(v1);
    v49 = "tail";
    v50 = "6";
    if ( !v59 )
      v49 = "head";
    if ( *(_WORD *)(a1 + 136) == 2 )
      v50 = "4";
    result = printf("added %s to %s of IPv%s multicast-capable unicast local address list\n", v48, v49, v50);
  }
  v39 = *(unsigned __int16 *)(a1 + 20);
  if ( v39 == 2 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 8), 0, 32, (const void *)(a1 + 24), 4u);
    if ( result )
    {
      v42 = sub_50CD0(v1);
      return sub_4FE78(3, "setsockopt IP_MULTICAST_IF %s fails: %m", v42);
    }
  }
  else if ( v39 == 10 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 8), 41, 17, (const void *)(a1 + 172), 4u);
    if ( result )
    {
      v40 = *(_DWORD *)(a1 + 172);
      v41 = sub_50CD0(v1);
      return sub_4FE78(3, "setsockopt IPV6_MULTICAST_IF %u for %s fails: %m", v40, v41);
    }
  }
  return result;
}
