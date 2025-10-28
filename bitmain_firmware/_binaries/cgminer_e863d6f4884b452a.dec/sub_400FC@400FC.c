int __fastcall sub_400FC(int a1)
{
  int v1; // r4
  unsigned int v2; // r11
  int v3; // r3
  int v4; // r0
  int *v5; // r2
  int v6; // r9
  unsigned __int8 v7; // r10
  int v8; // r6
  int v9; // r8
  unsigned int v10; // r7
  int v11; // r6
  int v12; // r9
  char *v13; // r8
  char *v14; // r11
  int v15; // r4
  __int64 v16; // kr00_8
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  unsigned int v22; // [sp+24h] [bp-838h]
  int v23; // [sp+28h] [bp-834h]
  pthread_mutex_t *mutex; // [sp+34h] [bp-828h]
  int v25; // [sp+38h] [bp-824h]
  int v26; // [sp+38h] [bp-824h]
  _DWORD *v28; // [sp+48h] [bp-814h]
  unsigned int v29; // [sp+4Ch] [bp-810h]
  char v30[4]; // [sp+54h] [bp-808h] BYREF
  char s[2052]; // [sp+58h] [bp-804h] BYREF

  v28 = *(_DWORD **)(a1 + 36);
  qword_6FBA0 = 0;
  v1 = v28[5];
  mutex = (pthread_mutex_t *)v1;
  pthread_mutex_lock(&stru_6FBA8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v1) )
  {
    v18 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v18,
      "driver-btm-dcr.c",
      "bitmain_scanhash",
      5432);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v1 + 24)) )
  {
    v19 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v19,
      "driver-btm-dcr.c",
      "bitmain_scanhash",
      5432);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v1) )
  {
    v20 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v20,
      "driver-btm-dcr.c",
      "bitmain_scanhash",
      5432);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  v25 = 0;
  while ( dword_8DCE4 )
  {
    v2 = dword_8DCE0;
    --dword_8DCE4;
    v4 = sub_36D08(&dword_8DCDC[3 * dword_8DCE0 + 3], 0x3Bu);
    v5 = &dword_8DCDC[3 * v2];
    v6 = v4;
    v7 = *((_BYTE *)v5 + 16);
    v8 = *((_BYTE *)v5 + 19) & 0x1F;
    v9 = *((unsigned __int8 *)v5 + 18);
    v10 = *((unsigned __int8 *)v5 + 20);
    v22 = v5[3];
    v23 = sub_49AF0(v7, (unsigned __int16)word_74761);
    if ( v6 != v8 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        goto LABEL_10;
      snprintf(
        s,
        0x800u,
        "%s: get nonce: 0x%08x, chip: 0x%02x, diff: 0x%02x, wc: 0x%02x, crc_received: 0x%02x, crc_checked: 0x%02x,chainid: 0x%02x",
        "bitmain_scanhash",
        v22,
        v23,
        BYTE1(dword_8DCDC[3 * v2 + 4]),
        v9,
        v8,
        v6,
        v10);
LABEL_9:
      sub_343C4(3, s, 0);
      v2 = dword_8DCE0;
      goto LABEL_10;
    }
    v11 = *(_DWORD *)&mutex[7].__size[512 * v10 + 14 + 4 * v9];
    if ( !v11 )
    {
      if ( !v25 )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
          goto LABEL_10;
        snprintf(s, 0x800u, "%s %d: work %02x not find error", *(const char **)(v28[1] + 8), v28[2], v9);
        goto LABEL_9;
      }
      v11 = v25;
    }
    *(_BYTE *)(v11 + 144) = v7;
    sub_1B2B8((_DWORD *)v11, v22);
    v12 = (unsigned int)sub_2ABDC(v11 + 244) > 0x27;
    if ( (unsigned __int8)v23 > 0x47u )
      v12 = 0;
    if ( !v12
      || (v13 = (char *)&mutex[24 * (__int16)v10] + 8 * v23, *(_DWORD *)(v13 + 2230) == v22)
      || (v26 = 8 * v10, v14 = (char *)&mutex[24 * v10] + 8 * v23, *(_DWORD *)(v14 + 2234) == v22) )
    {
      sub_1C5E4(a1);
      if ( v10 <= 3 )
      {
        v12 = 0;
        ++*((_DWORD *)&unk_73ED8 + v10 + 130);
      }
      else if ( byte_73320 || (v12 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
      {
        v12 = 0;
        snprintf(s, 0x800u, "%s: Chain_ID [%d] Error!", "bitmain_scanhash", v10);
        sub_343C4(3, s, 0);
      }
      goto LABEL_42;
    }
    sub_1EC3C(a1, v11);
    *(_DWORD *)(v14 + 2234) = *(_DWORD *)(v13 + 2230);
    *(_DWORD *)(v13 + 2230) = v22;
    if ( sub_2A0C0((__int64 *)(v11 + 244), (__int64 *)(v11 + 212)) )
    {
      *(_BYTE *)(v11 + 144) = v7;
      sub_251A0(a1, (_DWORD *)v11, bswap32(v22));
    }
    v15 = (unsigned __int8)byte_6FA71;
    v29 = *(_DWORD *)&byte_6FAD8[v26 + 56];
    ++qword_6FBA0;
    *(_QWORD *)&byte_6FAD8[v26 + 56] = __PAIR64__(*(_DWORD *)&byte_6FAD8[v26 + 60], v29) + 1;
    if ( !v15 )
      goto LABEL_46;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      snprintf(s, 0x800u, "%s: chain %d which_asic_nonce %d ", "bitmain_scanhash", v10, v23);
      sub_343C4(7, s, 0);
LABEL_46:
      if ( v10 <= 4 && *((_BYTE *)&unk_73ED8 + v10 + 24) )
      {
LABEL_53:
        ++*((_DWORD *)&unk_73ED8 + 72 * v10 + v23 + 134);
LABEL_42:
        v25 = v11;
        sub_2E0F8((_DWORD *)v11, v30, v12);
        v2 = dword_8DCE0;
        goto LABEL_10;
      }
      if ( byte_73320 )
      {
LABEL_49:
        snprintf(s, 0x800u, "ChainID Cause Error! ChainID:[%d]", v10);
        v25 = v11;
        sub_343C4(3, s, 0);
        v2 = dword_8DCE0;
        goto LABEL_10;
      }
      goto LABEL_48;
    }
    if ( v10 > 4 )
      goto LABEL_58;
    if ( *((_BYTE *)&unk_73ED8 + v10 + 24) )
      goto LABEL_53;
LABEL_48:
    if ( byte_6FA70 )
      goto LABEL_49;
LABEL_58:
    if ( dword_6D35C > 2 )
      goto LABEL_49;
    v25 = v11;
    v2 = dword_8DCE0;
LABEL_10:
    if ( v2 > 0x21BE )
      v3 = 0;
    else
      v3 = v2 + 1;
    dword_8DCE0 = v3;
  }
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)&mutex[1]) )
  {
    v21 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v21,
      "driver-btm-dcr.c",
      "bitmain_scanhash",
      5537);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  off_6CB70(0);
  pthread_mutex_unlock(&stru_6FBA8);
  sub_2A7F4();
  v16 = 0xFFFFFFFFFFLL * qword_6FBA0;
  LODWORD(qword_6FBA0) = -(int)qword_6FBA0;
  HIDWORD(qword_6FBA0) = HIDWORD(v16);
  return 0;
}
