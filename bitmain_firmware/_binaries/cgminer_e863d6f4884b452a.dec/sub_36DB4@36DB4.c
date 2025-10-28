int __fastcall sub_36DB4(int a1)
{
  int v1; // r4
  unsigned int v2; // r11
  int v3; // r3
  int v4; // r0
  int *v5; // r2
  unsigned int v6; // r7
  int v7; // r1
  unsigned int v8; // r5
  int v9; // r4
  int v10; // r8
  int v11; // r11
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r3
  unsigned int v15; // r1
  __int64 v16; // kr00_8
  bool v17; // cf
  int result; // r0
  int v19; // r2
  int v20; // r2
  int v21; // r0
  int v22; // r2
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  pthread_mutex_t *mutex; // [sp+24h] [bp-838h]
  int v28; // [sp+28h] [bp-834h]
  int v29; // [sp+2Ch] [bp-830h]
  int v30; // [sp+2Ch] [bp-830h]
  int v31; // [sp+2Ch] [bp-830h]
  int v32; // [sp+34h] [bp-828h]
  unsigned int v33; // [sp+34h] [bp-828h]
  char *v34; // [sp+34h] [bp-828h]
  unsigned int v35; // [sp+34h] [bp-828h]
  _DWORD *v36; // [sp+3Ch] [bp-820h]
  char v38[4]; // [sp+54h] [bp-808h] BYREF
  char s[2052]; // [sp+58h] [bp-804h] BYREF

  v36 = *(_DWORD **)(a1 + 36);
  qword_6FBA0 = 0;
  v1 = v36[5];
  mutex = (pthread_mutex_t *)v1;
  pthread_mutex_lock(&stru_6FBA8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v1) )
  {
    v24 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v24,
      "driver-btm-dcr.c",
      "bitmain_dcr_scanhash",
      6790);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v1 + 24)) )
  {
    v25 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v25,
      "driver-btm-dcr.c",
      "bitmain_dcr_scanhash",
      6790);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v1) )
  {
    v26 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v26,
      "driver-btm-dcr.c",
      "bitmain_dcr_scanhash",
      6790);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  v29 = 0;
  while ( dword_8DCE4 )
  {
    v2 = dword_8DCE0;
    --dword_8DCE4;
    v4 = sub_36D08(&dword_8DCDC[3 * dword_8DCE0 + 3], 0x3Bu);
    v5 = &dword_8DCDC[3 * v2];
    v6 = v5[3];
    v7 = *((_BYTE *)v5 + 19) & 0x1F;
    v8 = *((unsigned __int8 *)v5 + 20);
    v9 = *((_BYTE *)v5 + 18) & 0x7F;
    v10 = *((unsigned __int8 *)v5 + 16);
    if ( v4 != v7 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        goto LABEL_10;
      snprintf(
        s,
        0x800u,
        "%s: get nonce: 0x%08x, chip_addr 0x%02x, diff: 0x%02x, wc: 0x%02x, crc_received: 0x%02x, crc_checked: 0x%02x,chainid: 0x%02x",
        "bitmain_dcr_scanhash",
        v6,
        v10,
        *((unsigned __int8 *)v5 + 17),
        v9,
        v7,
        v4,
        v8);
LABEL_9:
      sub_343C4(3, s, 0);
      v2 = dword_8DCE0;
      goto LABEL_10;
    }
    v28 = *(_DWORD *)&mutex[7].__size[512 * v8 + 14 + 4 * v9];
    if ( !v28 )
    {
      if ( !v29 )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
          goto LABEL_10;
        snprintf(s, 0x800u, "%s %d: work %02x not find error", *(const char **)(v36[1] + 8), v36[2], v9);
        goto LABEL_9;
      }
      v28 = v29;
    }
    v32 = *((unsigned __int8 *)v5 + 17);
    v11 = sub_49AF0(v10, (unsigned __int16)word_74761);
    *(_BYTE *)(v28 + 144) = v10;
    sub_1B2B8((_DWORD *)v28, v6);
    v12 = sub_2ABDC(v28 + 244);
    v13 = v32;
    if ( v11 > 71 )
    {
LABEL_18:
      v33 = v12;
      v30 = v13;
      sub_1E098();
      v14 = v30;
      v15 = v33;
      goto LABEL_19;
    }
    v34 = (char *)&mutex[24 * (__int16)v8] + 8 * v11;
    if ( *(_DWORD *)(v34 + 2230) == v6 || *(_DWORD *)&mutex[24 * v8 + 93].__size[8 * v11 + 2] == v6 )
    {
      v35 = v12;
      v31 = v13;
      v21 = sub_1E098();
      v14 = v31;
      v15 = v35;
      if ( !v21 || !*(_BYTE *)(v21 + 641) || !*(_BYTE *)(v21 + 643) )
        goto LABEL_49;
LABEL_19:
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(s, 0x800u, "chain %d asic %d nonce %x diff (%d %d) wc %d hw err\n", v8, v11, v6, v15, v14, v9);
        sub_343C4(7, s, 0);
      }
      sub_1C5E4(a1);
      if ( v8 <= 3 )
      {
        v22 = 0;
        ++*((_DWORD *)&unk_73ED8 + v8 + 130);
      }
      else
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(s, 0x800u, "%s: Chain_ID [%d] Error!", "bitmain_dcr_scanhash", v8);
          sub_343C4(3, s, 0);
        }
LABEL_49:
        v22 = 0;
      }
LABEL_50:
      v29 = v28;
      sub_2E0F8((_DWORD *)v28, v38, v22);
      v2 = dword_8DCE0;
      goto LABEL_10;
    }
    if ( v12 <= 0x27 )
      goto LABEL_18;
    sub_1EC3C(a1, v28);
    *(_DWORD *)&mutex[24 * v8 + 93].__size[8 * v11 + 2] = *(_DWORD *)(v34 + 2230);
    *(_DWORD *)(v34 + 2230) = v6;
    if ( sub_2A0C0((__int64 *)(v28 + 244), (__int64 *)(v28 + 212)) )
    {
      *(_BYTE *)(v28 + 144) = v10;
      sub_251A0(a1, (_DWORD *)v28, bswap32(v6));
    }
    ++qword_6FBA0;
    v20 = (unsigned __int8)byte_6FA71;
    ++*(_QWORD *)&byte_6FAD8[8 * v8 + 56];
    if ( !v20 )
      goto LABEL_52;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      snprintf(s, 0x800u, "%s: chain %d which_asic_nonce %d ", "bitmain_dcr_scanhash", v8, v11);
      sub_343C4(7, s, 0);
LABEL_52:
      if ( v8 <= 4 && *((_BYTE *)&unk_73ED8 + v8 + 24) )
      {
LABEL_58:
        v22 = 1;
        ++*((_DWORD *)&unk_73ED8 + 72 * v8 + v11 + 134);
        goto LABEL_50;
      }
      if ( byte_73320 )
      {
LABEL_55:
        snprintf(s, 0x800u, "ChainID Cause Error! ChainID:[%d]", v8);
        v29 = v28;
        sub_343C4(3, s, 0);
        v2 = dword_8DCE0;
        goto LABEL_10;
      }
      goto LABEL_54;
    }
    if ( v8 > 4 )
      goto LABEL_67;
    if ( *((_BYTE *)&unk_73ED8 + v8 + 24) )
      goto LABEL_58;
LABEL_54:
    if ( byte_6FA70 )
      goto LABEL_55;
LABEL_67:
    if ( dword_6D35C > 2 )
      goto LABEL_55;
    v2 = dword_8DCE0;
    v29 = v28;
LABEL_10:
    if ( v2 > 0x21BE )
      v3 = 0;
    else
      v3 = v2 + 1;
    dword_8DCE0 = v3;
  }
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)&mutex[1]) )
  {
    v23 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v23,
      "driver-btm-dcr.c",
      "bitmain_dcr_scanhash",
      6919);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  off_6CB70(0);
  pthread_mutex_unlock(&stru_6FBA8);
  sub_2A7F4();
  v16 = 0xFFFFF * qword_6FBA0;
  v17 = __CFADD__(0xFFFFF * qword_6FBA0, -1048576 * qword_6FBA0);
  result = -(int)qword_6FBA0;
  v19 = (0xFFFFF * qword_6FBA0) >> 12;
  LODWORD(qword_6FBA0) = -(int)qword_6FBA0;
  HIDWORD(qword_6FBA0) = HIDWORD(v16) + v17 + v19;
  return result;
}
