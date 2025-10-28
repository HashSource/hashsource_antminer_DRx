bool __fastcall sub_29724(int a1, _DWORD *a2)
{
  int v2; // r10
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _BOOL4 v6; // r9
  char *v8; // r6
  char *v9; // r7
  char *v10; // r8
  signed int v11; // r0
  int v12; // r3
  char *v13; // r1
  int v14; // r2
  int v15; // t1
  const char *v16; // r3
  int v17; // r1
  size_t v18; // r3
  bool v19; // r12
  int v20; // r2
  void *v21; // r0
  bool v22; // zf
  void *v23; // r0
  const char *v24; // r3
  __int64 v25; // r2
  int *v26; // lr
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int *v31; // lr
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // lr
  const char *v41; // r0
  char *v42; // r4
  bool v43; // cc
  unsigned int v44; // r9
  char *v45; // r0
  unsigned __int8 *v46; // r4
  const char *v47; // lr
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int *v52; // lr
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r1
  _BYTE v62[4]; // [sp+18h] [bp-95Ch] BYREF
  _DWORD *v63; // [sp+1Ch] [bp-958h]
  int v64; // [sp+20h] [bp-954h]
  int v65; // [sp+24h] [bp-950h]
  pthread_rwlock_t *v66; // [sp+28h] [bp-94Ch]
  pthread_mutex_t *v67; // [sp+2Ch] [bp-948h]
  char *v68; // [sp+30h] [bp-944h]
  char *v69; // [sp+34h] [bp-940h]
  char *s; // [sp+38h] [bp-93Ch]
  char *v71; // [sp+3Ch] [bp-938h]
  char *v72; // [sp+40h] [bp-934h]
  size_t v73; // [sp+44h] [bp-930h]
  size_t nmemb; // [sp+48h] [bp-92Ch]
  size_t n; // [sp+4Ch] [bp-928h]
  _BOOL4 v76; // [sp+50h] [bp-924h]
  const char *v77; // [sp+54h] [bp-920h]
  const char *v78; // [sp+58h] [bp-91Ch]
  const char *v79; // [sp+5Ch] [bp-918h]
  void *src; // [sp+60h] [bp-914h]
  const char *v81; // [sp+64h] [bp-910h]
  unsigned __int8 v82[8]; // [sp+6Ch] [bp-908h] BYREF
  _DWORD v83[12]; // [sp+150h] [bp-824h] BYREF
  int v84; // [sp+180h] [bp-7F4h]
  __int16 v85; // [sp+184h] [bp-7F0h]
  char v86; // [sp+186h] [bp-7EEh]

  v2 = (int)a2;
  v4 = (_DWORD *)sub_46880(a2, 4);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( *v4 != 1 )
    return 0;
  src = (void *)sub_46864(v4);
  v8 = sub_28EC4((_DWORD *)v2, 0);
  v81 = (const char *)sub_28E64((_DWORD *)v2, 1u);
  v9 = sub_28EC4((_DWORD *)v2, 2u);
  v10 = sub_28EC4((_DWORD *)v2, 3u);
  v79 = (const char *)sub_28E64((_DWORD *)v2, 5u);
  v78 = (const char *)sub_28E64((_DWORD *)v2, 6u);
  v77 = (const char *)sub_28E64((_DWORD *)v2, 7u);
  if ( sub_46880(v2, 8) )
    v76 = *(_DWORD *)sub_46880(v2, 8) == 5;
  else
    v76 = 0;
  if ( !v8 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
      goto LABEL_18;
    snprintf(
      (char *)v83,
      0x800u,
      "Null string passed to valid_ascii from in %s %s():%d",
      "util.c",
      "parse_notify",
      2005);
LABEL_84:
    sub_38438(3, v83, 0);
LABEL_18:
    v6 = 0;
    free(v8);
    free(v9);
    free(v10);
    return v6;
  }
  v11 = strlen(v8);
  if ( !v11 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
      goto LABEL_18;
    snprintf(
      (char *)v83,
      0x800u,
      "Zero length string passed to valid_ascii from in %s %s():%d",
      "util.c",
      "parse_notify",
      2005);
    goto LABEL_84;
  }
  if ( v11 <= 0 )
    goto LABEL_17;
  v12 = (unsigned __int8)*v8;
  if ( (unsigned int)(v12 - 32) > 0x5E )
  {
LABEL_80:
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
      goto LABEL_18;
    snprintf(
      (char *)v83,
      0x800u,
      "Invalid char 0x%x passed to valid_ascii from in %s %s():%d",
      v12,
      "util.c",
      "parse_notify",
      2005);
    goto LABEL_84;
  }
  v13 = v8;
  v14 = 0;
  while ( v11 != ++v14 )
  {
    v15 = (unsigned __int8)*++v13;
    v12 = v15;
    if ( (unsigned int)(v15 - 32) > 0x5E )
      goto LABEL_80;
  }
LABEL_17:
  if ( !sub_28EDC(v81, "parse_notify", 2005)
    || !sub_28EDC(v9, "parse_notify", 2005)
    || !sub_28EDC(v10, "parse_notify", 2006)
    || !sub_28EDC(v79, "parse_notify", 2006)
    || !sub_28EDC(v78, "parse_notify", 2006)
    || !sub_28EDC(v77, "parse_notify", 2007) )
  {
    goto LABEL_18;
  }
  v67 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
    sub_B7D8("parse_notify", 2015);
  v66 = (pthread_rwlock_t *)(a1 + 236);
  s = (char *)(a1 + 1680);
  v71 = (char *)(a1 + 1760);
  sub_29094((pthread_rwlock_t *)(a1 + 236), "parse_notify", 2015);
  free(*(void **)(a1 + 640));
  v16 = v81;
  *(_DWORD *)(a1 + 640) = v8;
  snprintf(s, 0x41u, "%s", v16);
  v68 = v71 + 12;
  n = strlen(v9) >> 1;
  v69 = (char *)(a1 + 1748);
  v73 = strlen(v10) >> 1;
  snprintf((char *)(a1 + 1748), 9u, "%s", v79);
  snprintf(v71, 9u, "%s", v78);
  snprintf(v71 + 12, 9u, "%s", v77);
  v17 = *(_DWORD *)(a1 + 1676);
  v18 = n + *(_DWORD *)(a1 + 1532);
  v19 = v76;
  v20 = *(_DWORD *)(a1 + 624);
  *(_DWORD *)(a1 + 1544) = v18;
  *(_BYTE *)(a1 + 648) = v19;
  if ( v17 > 0 )
    v2 = 0;
  nmemb = v73 + v20 + v18;
  *(_DWORD *)(a1 + 1540) = nmemb;
  if ( v17 > 0 )
  {
    do
    {
      v21 = *(void **)(*(_DWORD *)(a1 + 644) + 4 * v2++);
      free(v21);
    }
    while ( *(_DWORD *)(a1 + 1676) > v2 );
  }
  if ( src )
  {
    v43 = (int)src <= 0;
    *(_DWORD *)(a1 + 644) = realloc(*(void **)(a1 + 644), 4 * (_DWORD)src + 1);
    if ( !v43 )
    {
      v44 = 0;
      v63 = v5;
      v72 = &byte_63928;
      while ( 1 )
      {
        v45 = sub_28EC4(v63, v44);
        v64 = *(_DWORD *)(a1 + 644);
        v46 = (unsigned __int8 *)v45;
        v65 = 4 * v44;
        *(_DWORD *)(v64 + 4 * v44) = malloc(0x20u);
        if ( !*(_DWORD *)(*(_DWORD *)(a1 + 644) + 4 * v44) )
        {
          strcpy((char *)v83, "Failed to malloc pool swork merkle_bin");
          sub_38438(3, v83, 1);
          sub_16724(1);
        }
        if ( *v72 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf((char *)v83, 0x800u, "merkle %d: %s", v44, v46);
          sub_38438(7, v83, 0);
        }
        ++v44;
        v64 = sub_295B8(*(_BYTE **)(*(_DWORD *)(a1 + 644) + v65), v46, 32);
        free(v46);
        if ( !v64 )
          break;
        if ( src == (void *)v44 )
          goto LABEL_32;
      }
      v6 = 0;
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        v47 = "Failed to convert merkle to merkle_bin in parse_notify";
        goto LABEL_127;
      }
      goto LABEL_91;
    }
  }
  v72 = &byte_63928;
LABEL_32:
  v22 = !v76;
  *(_DWORD *)(a1 + 1676) = src;
  if ( !v22 )
    *(_QWORD *)(a1 + 616) = 0;
  snprintf(
    (char *)v82,
    0xE1u,
    "%s%s%s%s%s%s%s",
    v69,
    s,
    "0000000000000000000000000000000000000000000000000000000000000000",
    v68,
    v71,
    "00000000",
    off_60150);
  v6 = sub_295B8((_BYTE *)(a1 + 1548), v82, 112);
  if ( !v6 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      v47 = "Failed to convert header to header_bin in parse_notify";
LABEL_127:
      v48 = *(_DWORD *)v47;
      v49 = *((_DWORD *)v47 + 1);
      v50 = *((_DWORD *)v47 + 2);
      v51 = *((_DWORD *)v47 + 3);
      v52 = (int *)(v47 + 16);
      v83[0] = v48;
      v83[1] = v49;
      v83[2] = v50;
      v83[3] = v51;
      v53 = *v52;
      v54 = v52[1];
      v55 = v52[2];
      v56 = v52[3];
      v52 += 4;
      v83[4] = v53;
      v83[5] = v54;
      v83[6] = v55;
      v83[7] = v56;
      v57 = *v52;
      v58 = v52[1];
      v59 = v52[2];
      v60 = v52[3];
      v52 += 4;
      v83[8] = v57;
      v83[9] = v58;
      v83[10] = v59;
      v83[11] = v60;
      v61 = v52[1];
      v84 = *v52;
      v85 = v61;
      v86 = BYTE2(v61);
      sub_38438(3, v83, 0);
      goto LABEL_41;
    }
    goto LABEL_91;
  }
  v6 = sub_295B8(v62, (unsigned __int8 *)v9, n);
  if ( !v6 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      v26 = (int *)&unk_52520;
      goto LABEL_90;
    }
LABEL_91:
    v6 = 0;
    goto LABEL_41;
  }
  src = v62;
  v6 = sub_295B8(v62, (unsigned __int8 *)v10, v73);
  if ( !v6 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      v26 = (int *)&unk_52554;
LABEL_90:
      v27 = *v26;
      v28 = v26[1];
      v29 = v26[2];
      v30 = v26[3];
      v31 = v26 + 4;
      v83[0] = v27;
      v83[1] = v28;
      v83[2] = v29;
      v83[3] = v30;
      v32 = *v31;
      v33 = v31[1];
      v34 = v31[2];
      v35 = v31[3];
      v31 += 4;
      v83[4] = v32;
      v83[5] = v33;
      v83[6] = v34;
      v83[7] = v35;
      v36 = *v31;
      v37 = v31[1];
      v38 = v31[2];
      v39 = v31[3];
      v40 = v31[4];
      v83[8] = v36;
      v83[9] = v37;
      v83[10] = v38;
      v83[11] = v39;
      LOBYTE(v84) = v40;
      sub_38438(3, v83, 0);
      goto LABEL_41;
    }
    goto LABEL_91;
  }
  free(*(void **)(a1 + 1536));
  if ( (nmemb & 3) != 0 )
    nmemb = (nmemb & 0xFFFFFFFC) + 4;
  v23 = calloc(nmemb, 1u);
  *(_DWORD *)(a1 + 1536) = v23;
  if ( !v23 )
  {
    strcpy((char *)v83, "Failed to calloc pool coinbase in parse_notify");
    sub_38438(3, v83, 1);
    sub_16724(1);
  }
  memcpy(*(void **)(a1 + 1536), v62, n);
  memcpy((void *)(*(_DWORD *)(a1 + 1536) + n), *(const void **)(a1 + 608), *(_DWORD *)(a1 + 1532));
  memcpy((void *)(*(_DWORD *)(a1 + 1536) + *(_DWORD *)(a1 + 624) + *(_DWORD *)(a1 + 1532) + n), src, v73);
  if ( byte_630C1 )
  {
    v41 = sub_294B8(*(_DWORD *)(a1 + 1536), *(_DWORD *)(a1 + 1540));
    v42 = (char *)v41;
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf((char *)v83, 0x800u, "Pool %d coinbase %s", *(_DWORD *)a1, v41);
      sub_38438(7, v83, 0);
    }
    free(v42);
  }
LABEL_41:
  sub_29018(v66, "parse_notify", 2103);
  sub_29110(v67, "parse_notify", 2103);
  off_60178();
  if ( *v72 && byte_630C1 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
    {
      snprintf((char *)v83, 0x800u, "job_id: %s", v8);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_51;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_51:
      snprintf((char *)v83, 0x800u, "prev_hash: %s", v81);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_55;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_55:
      snprintf((char *)v83, 0x800u, "coinbase1: %s", v9);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_59;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_59:
      snprintf((char *)v83, 0x800u, "coinbase2: %s", v10);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_63;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_63:
      snprintf((char *)v83, 0x800u, "bbversion: %s", v79);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_67;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_67:
      snprintf((char *)v83, 0x800u, "nbit: %s", v78);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
        goto LABEL_70;
    }
    if ( byte_630C0 || dword_60964 > 6 )
    {
LABEL_70:
      snprintf((char *)v83, 0x800u, "ntime: %s", v77);
      sub_38438(7, v83, 0);
      if ( !byte_630C1 )
        goto LABEL_77;
      if ( byte_632F0 )
      {
LABEL_74:
        v24 = "yes";
        if ( !v76 )
          v24 = dword_52370;
        snprintf((char *)v83, 0x800u, "clean: %s", v24);
        sub_38438(7, v83, 0);
        goto LABEL_77;
      }
    }
    if ( byte_630C0 || dword_60964 > 6 )
      goto LABEL_74;
  }
LABEL_77:
  free(v9);
  free(v10);
  v25 = *(_QWORD *)&dword_63BE8;
  ++*(_DWORD *)(a1 + 116);
  *(_QWORD *)&dword_63BE8 = v25 + 1;
  if ( a1 == sub_1D644() )
    byte_63E4C = 1;
  return v6;
}
