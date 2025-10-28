int __fastcall sub_1A514(int a1, int a2)
{
  pthread_mutex_t *v2; // r11
  size_t v5; // r2
  void *v6; // r0
  __int64 v7; // r4
  int v8; // r1
  int v9; // r5
  int v10; // r5
  int *v11; // r4
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r12
  int i; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r2
  int v25; // r3
  time_t v26; // r0
  int v27; // r2
  int v28; // r1
  int v29; // r2
  int v30; // r3
  char *v32; // r9
  const char *v33; // r0
  char *v34; // r6
  __int64 src; // [sp+10h] [bp-86Ch] BYREF
  int v36; // [sp+18h] [bp-864h] BYREF
  int v37; // [sp+1Ch] [bp-860h]
  int v38; // [sp+20h] [bp-85Ch]
  int v39; // [sp+24h] [bp-858h]
  int v40; // [sp+28h] [bp-854h]
  int v41; // [sp+2Ch] [bp-850h]
  int v42; // [sp+30h] [bp-84Ch]
  int v43; // [sp+34h] [bp-848h]
  int v44; // [sp+38h] [bp-844h] BYREF
  int v45; // [sp+3Ch] [bp-840h]
  int v46; // [sp+40h] [bp-83Ch]
  int v47; // [sp+44h] [bp-838h]
  int v48; // [sp+48h] [bp-834h]
  int v49; // [sp+4Ch] [bp-830h]
  int v50; // [sp+50h] [bp-82Ch]
  int v51; // [sp+54h] [bp-828h]
  int v52; // [sp+58h] [bp-824h]
  int v53; // [sp+5Ch] [bp-820h]
  int v54; // [sp+60h] [bp-81Ch]
  int v55; // [sp+64h] [bp-818h]
  int v56; // [sp+68h] [bp-814h]
  int v57; // [sp+6Ch] [bp-810h]
  int v58; // [sp+70h] [bp-80Ch]
  int v59; // [sp+74h] [bp-808h]
  char s[2052]; // [sp+78h] [bp-804h] BYREF

  v2 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
    sub_B4E4("gen_stratum_work", 7928);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
    sub_B550("gen_stratum_work", 7928);
  v5 = *(_DWORD *)(a1 + 624);
  v6 = (void *)(*(_DWORD *)(a1 + 1536) + *(_DWORD *)(a1 + 1544));
  src = *(_QWORD *)(a1 + 616);
  memcpy(v6, &src, v5);
  v7 = *(_QWORD *)(a1 + 616);
  *(_QWORD *)(a2 + 296) = v7;
  v8 = *(_DWORD *)(a1 + 624);
  *(_QWORD *)(a1 + 616) = v7 + 1;
  *(_DWORD *)(a2 + 304) = v8;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
    sub_B700("gen_stratum_work", 7938);
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
    sub_B76C("gen_stratum_work", 7938);
  if ( pthread_mutex_unlock(v2) )
    sub_B694("gen_stratum_work", 7938);
  sub_303DC(*(_DWORD *)(a1 + 1536), *(_DWORD *)(a1 + 1540));
  sub_303DC((int)s, 0x20u);
  v9 = *(_DWORD *)(a1 + 1676);
  v44 = v36;
  v45 = v37;
  v46 = v38;
  v47 = v39;
  v48 = v40;
  v49 = v41;
  v50 = v42;
  v51 = v43;
  if ( v9 > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(int **)(*(_DWORD *)(a1 + 644) + 4 * v10++);
      v12 = v11[1];
      v13 = v11[2];
      v14 = v11[3];
      v52 = *v11;
      v53 = v12;
      v54 = v13;
      v55 = v14;
      v15 = v11[7];
      v16 = v11[5];
      v17 = v11[6];
      v56 = v11[4];
      v57 = v16;
      v58 = v17;
      v59 = v15;
      sub_303DC((int)&v44, 0x40u);
      sub_303DC((int)s, 0x20u);
      v18 = *(_DWORD *)(a1 + 1676);
      v44 = v36;
      v45 = v37;
      v46 = v38;
      v47 = v39;
      v48 = v40;
      v49 = v41;
      v50 = v42;
      v51 = v43;
    }
    while ( v18 > v10 );
  }
  for ( i = 0; i != 32; i += 4 )
    *(int *)((char *)&v36 + i) = bswap32(*(int *)((char *)&v44 + i));
  memcpy((void *)a2, (const void *)(a1 + 1548), 0x70u);
  v20 = v37;
  v21 = v38;
  v22 = v39;
  *(_DWORD *)(a2 + 36) = v36;
  *(_DWORD *)(a2 + 40) = v20;
  *(_DWORD *)(a2 + 44) = v21;
  *(_DWORD *)(a2 + 48) = v22;
  v23 = v40;
  v24 = v42;
  v25 = v43;
  *(_DWORD *)(a2 + 56) = v41;
  *(_DWORD *)(a2 + 52) = v23;
  *(_DWORD *)(a2 + 60) = v24;
  *(_DWORD *)(a2 + 64) = v25;
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1784);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 640));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 604));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1772));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
    sub_B700("gen_stratum_work", 7965);
  off_60178();
  if ( byte_630C1 )
  {
    v32 = (char *)sub_294B8(a2, 112);
    v33 = (const char *)sub_294B8(&v36, 32);
    v34 = (char *)v33;
    if ( byte_630C1 )
    {
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        goto LABEL_28;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v33);
      sub_38438(7, s, 0);
      if ( !byte_630C1 )
        goto LABEL_27;
      if ( !byte_632F0 && !byte_630C0 )
      {
LABEL_28:
        if ( dword_60964 <= 6 )
          goto LABEL_29;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v32);
      sub_38438(7, s, 0);
      if ( byte_630C1 )
      {
        if ( byte_632F0 || byte_630C0 )
        {
LABEL_26:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 288),
            *(_QWORD *)(a2 + 296),
            *(const char **)(a2 + 308));
          sub_38438(7, s, 0);
          goto LABEL_27;
        }
LABEL_29:
        if ( dword_60964 <= 6 )
          goto LABEL_27;
        goto LABEL_26;
      }
    }
LABEL_27:
    free(v32);
    free(v34);
  }
  sub_117F4(a2);
  sub_15D7C(a2 + 160);
  ++dword_63A70;
  if ( time(0) - dword_61364 > 5 )
  {
    v26 = time(0);
    dword_61368 = dword_63A70;
    dword_61364 = v26;
  }
  v27 = dword_6136C;
  *(_DWORD *)(a2 + 260) = a1;
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 336) = v27;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  sub_113C4(a2);
  return sub_2B13C(a2 + 264, v28, v29, v30);
}
