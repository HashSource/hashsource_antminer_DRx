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
  _DWORD *v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r1
  int v22; // r3
  _DWORD *v23; // r3
  int v24; // r1
  int v26; // r3
  int v27[8]; // [sp+10h] [bp-1070h] BYREF
  _DWORD dest[20]; // [sp+30h] [bp-1050h] BYREF
  char v29[4096]; // [sp+80h] [bp-1000h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 840);
  v5 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v27, (int)dest);
  v6 = target_to_diff_ltc((int)v27);
  v7 = v6;
  if ( v6 <= 0x1A )
  {
    V_LOCK();
    LOWORD(v22) = 2996;
    HIWORD(v22) = (unsigned int)"_setting_reset_bist_ltc" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v22, v7, *(unsigned __int8 *)(a2 + 84), 27);
    V_UNLOCK();
    LOWORD(v23) = 20532;
    HIWORD(v23) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v24) = 2556;
    HIWORD(v24) = (unsigned int)"ltc" >> 16;
    zlog(*v23, v24, 171, "check_nonce_ltc", 15, 707, 20, v29);
    return 2;
  }
  v8 = *(unsigned __int8 *)(a2 + 84);
  if ( (v8 & 0x20) != 0 )
  {
    if ( v6 > 0x2F )
      goto LABEL_5;
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "calculate diff %02x, but ans diff %02x (bit5 is 1)", v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    LOWORD(v16) = 20532;
    HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
    v17 = 713;
LABEL_14:
    LOWORD(v18) = 2556;
    HIWORD(v18) = (unsigned int)"ltc" >> 16;
    zlog(*v16, v18, 171, "check_nonce_ltc", 15, v17, 20, v29);
    return 3;
  }
  if ( v6 != v8 + 16 )
  {
    V_LOCK();
    LOWORD(v26) = 3124;
    HIWORD(v26) = (unsigned int)"enkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v26, v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    LOWORD(v16) = 20532;
    HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
    v17 = 718;
    goto LABEL_14;
  }
LABEL_5:
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
  LOWORD(v19) = -22208;
  HIWORD(v19) = (unsigned int)"bridge_reset_DASH_1766" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v19, v7, v5);
  V_UNLOCK();
  LOWORD(v20) = 20532;
  HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v21) = 2556;
  HIWORD(v21) = (unsigned int)"ltc" >> 16;
  zlog(*v20, v21, 171, "check_nonce_ltc", 15, 724, 20, v29);
  return 1;
}
