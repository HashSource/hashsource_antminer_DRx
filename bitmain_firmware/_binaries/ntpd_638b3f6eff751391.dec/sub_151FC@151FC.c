void __fastcall sub_151FC(unsigned __int16 *a1)
{
  _DWORD *v2; // r4
  int v3; // r3
  int v4; // r3
  int *v5; // r7
  int v6; // r6
  int v7; // r4
  _BOOL4 v8; // r3
  _DWORD *v9; // r4
  bool v10; // cc
  const char *v11; // r0
  int v12; // r12
  int v13; // r0
  int v14; // r10
  int v15; // r0
  unsigned int v16; // r9
  unsigned int v17; // r4
  const char *v18; // r8
  const char *v19; // r0
  int v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r10
  int v26; // r0
  int v27; // r4
  const char *v28; // r8
  const char *v29; // r0
  const char *v30; // r0
  const char *v31; // r0
  int optval; // [sp+14h] [bp-1Ch] BYREF
  int v33; // [sp+18h] [bp-18h]
  _DWORD v34[5]; // [sp+1Ch] [bp-14h] BYREF

  if ( !sub_12884((int)a1) )
  {
    v31 = (const char *)sub_50CD0(a1);
    sub_4FE78(3, "invalid multicast address %s", v31);
    return;
  }
LABEL_2:
  while ( 1 )
  {
    v2 = (_DWORD *)sub_131C8((char *)a1);
    if ( !v2 )
      break;
    while ( 1 )
    {
      optval = 0;
      v33 = 0;
      if ( !sub_11458((char *)a1) )
        break;
      v3 = *a1;
      if ( v3 == 2 )
      {
        v12 = v2[6];
        v13 = v2[2];
        optval = *((_DWORD *)a1 + 1);
        v33 = v12;
        if ( setsockopt(v13, 0, 36, &optval, 8u) )
        {
          v14 = v2[2];
          v15 = sub_50CD0(v2 + 5);
          v16 = bswap32(v2[6]);
          v17 = bswap32(*((_DWORD *)a1 + 1));
          v18 = (const char *)v15;
          v19 = (const char *)sub_50CD0(a1);
          sub_4FE78(
            3,
            "setsockopt IP_DROP_MEMBERSHIP failed: %m on socket %d, addr %s for %x / %x (%s)",
            v14,
            v18,
            v17,
            v16,
            v19);
          goto LABEL_2;
        }
      }
      else if ( v3 == 10 )
      {
        v20 = v2[2];
        v21 = *((_DWORD *)a1 + 2);
        v22 = *((_DWORD *)a1 + 3);
        v23 = *((_DWORD *)a1 + 4);
        v24 = *((_DWORD *)a1 + 5);
        v34[4] = v2[43];
        v34[0] = v21;
        v34[1] = v22;
        v34[2] = v23;
        v34[3] = v24;
        if ( setsockopt(v20, 41, 21, v34, 0x14u) )
        {
          v25 = v2[2];
          v26 = sub_50CD0(v2 + 5);
          v27 = v2[43];
          v28 = (const char *)v26;
          v29 = (const char *)sub_50CD0(a1);
          sub_4FE78(3, "setsockopt IPV6_LEAVE_GROUP failure: %m on socket %d, addr %s for %d (%s)", v25, v28, v27, v29);
          goto LABEL_2;
        }
      }
      v4 = v2[38] - 1;
      v2[38] = v4;
      if ( v4 )
        goto LABEL_2;
      v2[35] &= ~0x40u;
      v2 = (_DWORD *)sub_131C8((char *)a1);
      if ( !v2 )
        goto LABEL_8;
    }
    if ( dword_7CF4C > 3 )
    {
      v30 = (const char *)sub_50CD0(a1);
      printf("socket_multicast_disable(%s): not found\n", v30);
    }
  }
LABEL_8:
  v5 = &dword_CA64C;
  v6 = *a1;
  v7 = dword_CA64C;
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v7 + 4) != v6 )
      goto LABEL_9;
    if ( v6 == 2 )
      break;
    if ( !memcmp(a1 + 4, (const void *)(v7 + 12), 0x10u) )
    {
      v8 = *((_DWORD *)a1 + 6) != *(_DWORD *)(v7 + 28);
      goto LABEL_14;
    }
LABEL_9:
    v5 = (int *)v7;
    v7 = *(_DWORD *)v7;
    if ( !v7 )
      return;
  }
  v8 = *((_DWORD *)a1 + 1) != *(_DWORD *)(v7 + 8);
LABEL_14:
  if ( v8 )
    goto LABEL_9;
  v9 = (_DWORD *)*v5;
  v10 = dword_7CF4C <= 3;
  *v5 = *(_DWORD *)*v5;
  *v9 = 0;
  if ( !v10 )
  {
    v11 = (const char *)sub_50CD0(a1);
    printf("Deleted addr %s from list of addresses\n", v11);
  }
  free(v9);
}
