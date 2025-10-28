int __fastcall sub_14DE8(char *a1)
{
  int result; // r0
  const char *v3; // r0
  _DWORD *v4; // r5
  unsigned __int16 *v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r3
  int v15; // r3
  const char *v16; // r6
  const char *v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r10
  int v24; // r0
  int v25; // r7
  const char *v26; // r8
  const char *v27; // r0
  int v28; // r12
  int v29; // r0
  int v30; // r9
  int v31; // r0
  int v32; // r8
  int v33; // r7
  const char *v34; // r10
  const char *v35; // r0
  int v36; // r3
  const char *v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r1
  int v42; // r2
  const char *v43; // r0
  int v44; // r10
  int v45; // r0
  int v46; // r7
  const char *v47; // r8
  const char *v48; // r0
  const char *v49; // r6
  const char *v50; // r0
  int v51; // r9
  int v52; // r0
  int v53; // r8
  int v54; // r7
  const char *v55; // r10
  const char *v56; // r0
  int v57; // [sp+14h] [bp-1Ch] BYREF
  int v58; // [sp+18h] [bp-18h]
  _DWORD optval[4]; // [sp+1Ch] [bp-14h] BYREF
  int v60; // [sp+2Ch] [bp-4h]

  result = sub_12884((int)a1);
  if ( result )
  {
    if ( sub_131C8(a1) )
    {
      v3 = (const char *)sub_50CD0(a1);
      return sub_4FE78(6, "Duplicate request found for multicast address %s", v3);
    }
    v4 = sub_1155C(0);
    v5 = (unsigned __int16 *)(v4 + 5);
    v6 = *((_DWORD *)a1 + 1);
    v7 = *((_DWORD *)a1 + 2);
    v8 = *((_DWORD *)a1 + 3);
    v4[5] = *(_DWORD *)a1;
    v4[6] = v6;
    v4[7] = v7;
    v4[8] = v8;
    v9 = *((_DWORD *)a1 + 5);
    v10 = *((_DWORD *)a1 + 6);
    v4[9] = *((_DWORD *)a1 + 4);
    v4[10] = v9;
    v4[11] = v10;
    v11 = *((unsigned __int16 *)v4 + 10);
    *((_WORD *)v4 + 11) = 31488;
    *((_WORD *)v4 + 68) = v11;
    *((_WORD *)v4 + 24) = v11;
    if ( v11 == 10 )
      memset(v4 + 14, 255, 0x10u);
    else
      v4[13] = -1;
    sub_111CC(1);
    v4[3] = -1;
    v12 = sub_12CBC(v5, 0, 0, (int)v4);
    v4[2] = v12;
    if ( v12 != -1 )
    {
      v13 = v4[35];
      v4[44] = 0;
      v4[35] = v13 | 0x100;
      strncpy((char *)v4 + 104, "multicast", 0x20u);
      if ( dword_7CF4C > 1 )
        sub_1176C((int)v4, "multicast add ", (int)"\n");
      sub_119C4((int)v4);
      sub_10EE0((int)v4);
LABEL_11:
      v14 = *(unsigned __int16 *)a1;
      if ( v14 == 2 )
      {
        v28 = *((_DWORD *)a1 + 1);
        v58 = 0;
        v29 = v4[2];
        v57 = v28;
        if ( !setsockopt(v29, 0, 35, &v57, 8u) )
        {
          if ( dword_7CF4C > 3 )
          {
            v30 = v4[2];
            v31 = sub_50CD0(v5);
            v32 = v57;
            v33 = v58;
            v34 = (const char *)v31;
            v35 = (const char *)sub_50CD0(a1);
            printf("Added IPv4 multicast membership on socket %d, addr %s for %x / %x (%s)\n", v30, v34, v32, v33, v35);
          }
          goto LABEL_13;
        }
        v51 = v4[2];
        v52 = sub_50CD0(v5);
        v53 = v57;
        v54 = v58;
        v55 = (const char *)v52;
        v56 = (const char *)sub_50CD0(a1);
        sub_4FE78(
          3,
          "setsockopt IP_ADD_MEMBERSHIP failed: %m on socket %d, addr %s for %x / %x (%s)",
          v51,
          v55,
          v53,
          v54,
          v56);
      }
      else
      {
        if ( v14 != 10 )
        {
LABEL_13:
          v15 = v4[38];
          v4[35] |= 0x40u;
          v4[38] = v15 + 1;
          v16 = (const char *)sub_50CD0(v5);
          v17 = (const char *)sub_50CD0(a1);
          sub_4FE78(6, "Joined %s socket to multicast group %s", v16, v17);
          return sub_127D4((int)a1, (int)v4);
        }
        v18 = v4[2];
        v19 = *((_DWORD *)a1 + 2);
        v20 = *((_DWORD *)a1 + 3);
        v21 = *((_DWORD *)a1 + 4);
        v22 = *((_DWORD *)a1 + 5);
        v60 = v4[43];
        optval[0] = v19;
        optval[1] = v20;
        optval[2] = v21;
        optval[3] = v22;
        if ( !setsockopt(v18, 41, 20, optval, 0x14u) )
        {
          if ( dword_7CF4C > 3 )
          {
            v23 = v4[2];
            v24 = sub_50CD0(v5);
            v25 = v60;
            v26 = (const char *)v24;
            v27 = (const char *)sub_50CD0(a1);
            printf("Added IPv6 multicast group on socket %d, addr %s for interface %u (%s)\n", v23, v26, v25, v27);
          }
          goto LABEL_13;
        }
        v44 = v4[2];
        v45 = sub_50CD0(v5);
        v46 = v60;
        v47 = (const char *)v45;
        v48 = (const char *)sub_50CD0(a1);
        sub_4FE78(
          3,
          "setsockopt IPV6_JOIN_GROUP failed: %m on socket %d, addr %s for interface %u (%s)",
          v44,
          v47,
          v46,
          v48);
      }
      v49 = (const char *)sub_50CD0(v5);
      v50 = (const char *)sub_50CD0(a1);
      sub_4FE78(3, "Failed to join %s socket to multicast group %s", v49, v50);
      return sub_127D4((int)a1, (int)v4);
    }
    free(v4);
    v36 = *(unsigned __int16 *)a1;
    if ( v36 == 2 )
    {
      v4 = (_DWORD *)dword_7CE3C;
    }
    else
    {
      if ( v36 != 10 )
      {
LABEL_23:
        v37 = (const char *)sub_50CD0(a1);
        return sub_4FE78(3, "No multicast socket available to use for address %s", v37);
      }
      v4 = (_DWORD *)dword_7CE40;
    }
    if ( v4 )
    {
      v38 = *((_DWORD *)a1 + 1);
      v39 = *((_DWORD *)a1 + 2);
      v40 = *((_DWORD *)a1 + 3);
      v5 = (unsigned __int16 *)(v4 + 5);
      v4[19] = *(_DWORD *)a1;
      v4[20] = v38;
      v4[21] = v39;
      v4[22] = v40;
      v41 = *((_DWORD *)a1 + 5);
      v42 = *((_DWORD *)a1 + 6);
      v4[23] = *((_DWORD *)a1 + 4);
      v4[24] = v41;
      v4[25] = v42;
      v43 = (const char *)sub_50CD0(a1);
      sub_4FE78(3, "multicast address %s using wildcard interface #%d %s", v43, v4[4], (const char *)v4 + 104);
      goto LABEL_11;
    }
    goto LABEL_23;
  }
  return result;
}
