int __fastcall sub_3B44C(int a1)
{
  _DWORD *v1; // r6
  int v2; // r10
  unsigned __int8 *v3; // r2
  unsigned int v4; // r8
  int *v5; // r9
  int v6; // r0
  int v7; // r3
  unsigned int v8; // r0
  int v9; // r10
  unsigned int v10; // r9
  unsigned int v11; // r9
  unsigned int v12; // r9
  _DWORD *v13; // r8
  int v14; // r9
  __int64 v15; // r4
  int v17; // r2
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  pthread_mutex_t *mutex; // [sp+20h] [bp-82Ch]
  unsigned int v23; // [sp+24h] [bp-828h]
  pthread_rwlock_t *rwlock; // [sp+28h] [bp-824h]
  int v26; // [sp+34h] [bp-818h]
  unsigned int v27; // [sp+38h] [bp-814h] BYREF
  int v28; // [sp+3Ch] [bp-810h] BYREF
  struct timeval v29; // [sp+40h] [bp-80Ch] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  v1 = *(_DWORD **)(a1 + 36);
  v2 = v1[5];
  v28 = 0;
  mutex = (pthread_mutex_t *)v2;
  sub_2B13C(&v29);
  dbl_630D0 = 0.0;
  pthread_mutex_lock(&stru_630DC);
  if ( pthread_mutex_lock((pthread_mutex_t *)v2) )
  {
    v21 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v21,
      "driver-btm-L3.c",
      "bitmain_scanhash",
      433);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  rwlock = (pthread_rwlock_t *)(v2 + 24);
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v2 + 24)) )
  {
    v20 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v20,
      "driver-btm-L3.c",
      "bitmain_scanhash",
      433);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v2) )
  {
    v19 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v19,
      "driver-btm-L3.c",
      "bitmain_scanhash",
      433);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v26 = 0;
  while ( dword_C30C0 )
  {
    v4 = dword_C30BC;
    --dword_C30C0;
    v5 = &dword_C30B8[2 * dword_C30BC + 2];
    v6 = sub_3B360((_BYTE *)v5 + 6, 51);
    v7 = v5[3] & 0x1F;
    if ( v6 == v7 )
    {
      v8 = *(int *)((char *)v5 + 6);
      v9 = *((unsigned __int8 *)v5 + 11);
      v10 = *((unsigned __int8 *)v5 + 13);
      v27 = v8;
      v23 = v10;
      v11 = v8;
      pthread_mutex_lock(&stru_63138);
      v12 = bswap32(v11);
      v13 = *(_DWORD **)&mutex[7].__size[4 * v9 + 23];
      pthread_mutex_unlock(&stru_63138);
      if ( !v13 )
      {
        if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
        {
          v4 = dword_C30BC;
          goto LABEL_8;
        }
        snprintf(s, 0x800u, "%s%d: work %02x not find error", *(const char **)(v1[1] + 8), v1[2], v9);
        goto LABEL_35;
      }
      v28 = 0;
      if ( sub_1A2DC(a1, (int)v13, v12, &v28) )
      {
        sub_25A80(v13);
      }
      else if ( !v28 )
      {
        if ( v23 > 4 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
        {
          snprintf(s, 0x800u, "Chain_ID [%d] Error!", v23);
          sub_38438(3, s, 0);
        }
        v17 = 0;
        ++*((_DWORD *)&unk_C4BCC + v23 + 158);
        goto LABEL_54;
      }
      v14 = sub_48EC0((unsigned __int8)(v12 >> 20), (unsigned __int8)byte_C548C);
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "%s: chain %d which_asic_nonce %d ", "bitmain_scanhash", v23, v14);
        sub_38438(7, s, 0);
      }
      if ( v23 <= 4 && *((_BYTE *)&unk_C4BCC + v23 + 24) )
      {
        if ( (unsigned __int8)v14 <= 0x47u )
        {
          v17 = 1;
          *(_QWORD *)&dbl_630D0 += 256LL;
          ++*((_DWORD *)&unk_C4BCC + 72 * v23 + v14 + 162);
LABEL_54:
          sub_2F884(v13, (char *)&v27, v17);
          v4 = dword_C30BC;
          goto LABEL_8;
        }
        if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
          goto LABEL_36;
        snprintf(s, 0x800u, "Which Nonce Cause Err![%d]", v14);
LABEL_35:
        sub_38438(3, s, 0);
LABEL_36:
        v4 = dword_C30BC;
        goto LABEL_8;
      }
      if ( v26 )
        goto LABEL_36;
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf(s, 0x800u, "ChainID Cause Error! ChainID:[%d]", v23);
        sub_38438(3, s, 0);
        v4 = dword_C30BC;
        v26 = 1;
      }
      else
      {
        v4 = dword_C30BC;
        v26 = 1;
      }
    }
    else
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf(s, 0x800u, "crc5 error,should be %02x,but check as %02x", v7, v6);
        sub_38438(3, s, 0);
        if ( byte_632F0 )
        {
          v4 = dword_C30BC;
LABEL_7:
          v3 = (unsigned __int8 *)&dword_C30B8[2 * v4 + 2];
          snprintf(
            s,
            0x800u,
            "get nonce %02x%02x%02x%02x wc %02x diff %02x crc5 %02x chainid %02x",
            v3[6],
            HIBYTE(dword_C30B8[2 * v4 + 3]),
            LOBYTE(dword_C30B8[2 * v4 + 4]),
            BYTE1(dword_C30B8[2 * v4 + 4]),
            v3[10],
            v3[11],
            v3[12],
            v3[13]);
          sub_38438(5, s, 0);
          v4 = dword_C30BC;
          goto LABEL_8;
        }
        v4 = dword_C30BC;
        if ( byte_630C0 )
          goto LABEL_7;
      }
      if ( dword_60964 > 4 )
        goto LABEL_7;
    }
LABEL_8:
    if ( v4 > 0x35E )
      dword_C30BC = 0;
    else
      dword_C30BC = v4 + 1;
  }
  if ( pthread_rwlock_unlock(rwlock) )
  {
    v18 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v18,
      "driver-btm-L3.c",
      "bitmain_scanhash",
      524);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  off_60178();
  pthread_mutex_unlock(&stru_630DC);
  sub_2B21C();
  v15 = *(_QWORD *)&dbl_630D0;
  if ( *(_QWORD *)&dbl_630D0 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s: hashes %llu...",
      "bitmain_scanhash",
      vshld_n_s64(*(__int64 *)&dbl_630D0, 0x10u) - *(_QWORD *)&dbl_630D0);
    sub_38438(7, s, 0);
    v15 = *(_QWORD *)&dbl_630D0;
  }
  *(_QWORD *)&dbl_630D0 = vshld_n_s64(v15, 0x10u) - v15;
  return 0;
}
