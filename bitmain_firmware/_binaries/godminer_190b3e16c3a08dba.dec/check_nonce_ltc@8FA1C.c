int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v3; // r1
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r4
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // t1
  unsigned int v14; // t1
  bool v15; // cf
  int v17; // r2
  int v18[8]; // [sp+10h] [bp-1070h] BYREF
  _DWORD dest[20]; // [sp+30h] [bp-1050h] BYREF
  char v20[4096]; // [sp+80h] [bp-1000h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 784);
  v5 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v18, (int)dest);
  v6 = target_to_diff_ltc((int)v18);
  v7 = v6;
  if ( v6 <= 0x1A )
  {
    V_LOCK();
    logfmt_raw(
      v20,
      0x1000u,
      0,
      "hw error calculate diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x",
      v7,
      *(unsigned __int8 *)(a2 + 84),
      27);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "check_nonce_ltc",
      15,
      707,
      20,
      v20);
    return 2;
  }
  v8 = *(unsigned __int8 *)(a2 + 84);
  if ( (v8 & 0x20) != 0 )
  {
    if ( v6 > 0x2F )
      goto LABEL_4;
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "calculate diff %02x, but ans diff %02x (bit5 is 1)", v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    v17 = 713;
LABEL_13:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "check_nonce_ltc",
      15,
      v17,
      20,
      v20);
    return 3;
  }
  if ( v6 != v8 + 16 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "diff not match, calculate %02x ans diff %02x", v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    v17 = 718;
    goto LABEL_13;
  }
LABEL_4:
  if ( v5 <= v6 )
  {
    v9 = dest;
    v10 = v4 + 32 * (*(unsigned __int8 *)(a2 + 85) + 624);
    v11 = v10 + 32;
    while ( 1 )
    {
      v13 = *--v9;
      v12 = v13;
      v14 = *(_DWORD *)(v11 - 4);
      v11 -= 4;
      v15 = v12 >= v14;
      if ( v12 > v14 )
        break;
      if ( !v15 || v10 == v11 )
        return 0;
    }
  }
  V_LOCK();
  logfmt_raw(v20, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v7, v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "check_nonce_ltc",
    15,
    724,
    20,
    v20);
  return 1;
}
