int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r7
  int v4; // r4
  unsigned int v5; // r5
  char v6; // r2
  int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r7
  unsigned int v10; // r3
  unsigned __int8 *v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r1
  unsigned int v15; // r12
  unsigned int v16; // t1
  unsigned int v17; // t1
  bool v18; // cc
  _DWORD *v20; // r3
  int v21; // r1
  _DWORD *v22; // r3
  int v23; // r1
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  _BYTE s[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  char v29[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 57);
  v4 = *(_DWORD *)(a1 + 840);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 9472));
  memset(s, 255, sizeof(s));
  memcpy(dest, (const void *)(v4 + ((v2 + 20) << 8)), sizeof(dest));
  v6 = *(_BYTE *)(a2 + 54);
  v7 = *(_DWORD *)(a2 + 48);
  BYTE2(dest[62]) = *(_BYTE *)(a2 + 55);
  HIBYTE(dest[62]) = v6;
  dest[63] = v7;
  hns_hash((int)dest, s);
  v8 = target_to_diff_byte_hns((int)s);
  v9 = v8;
  if ( v8 <= 0x23 )
  {
    V_LOCK();
    LOWORD(v24) = -4560;
    HIWORD(v24) = (unsigned int)"t_kas" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v24, v9, *(unsigned __int8 *)(a2 + 56), 36);
    V_UNLOCK();
    LOWORD(v25) = 20532;
    HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v26) = -4920;
    HIWORD(v26) = (unsigned int)"sor_temp_remote_on_ctrlboard_KAS_2380" >> 16;
    zlog(*v25, v26, 171, "check_nonce_hns", 15, 668, 20, v29);
    return 2;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 56);
    if ( v10 == v8 )
    {
      if ( v5 > v10 )
      {
LABEL_11:
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 56), v5);
        V_UNLOCK();
        LOWORD(v20) = 20532;
        HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v21) = -4920;
        HIWORD(v21) = (unsigned int)"sor_temp_remote_on_ctrlboard_KAS_2380" >> 16;
        zlog(*v20, v21, 171, "check_nonce_hns", 15, 704, 20, v29);
        return 1;
      }
    }
    else if ( v5 > v8 )
    {
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v9, *(unsigned __int8 *)(a2 + 56), v5);
      V_UNLOCK();
      LOWORD(v22) = 20532;
      HIWORD(v22) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v23) = -4920;
      HIWORD(v23) = (unsigned int)"sor_temp_remote_on_ctrlboard_KAS_2380" >> 16;
      zlog(*v22, v23, 171, "check_nonce_hns", 15, 673, 20, v29);
      return 3;
    }
    v11 = s;
    v12 = v4 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200);
    v13 = v12 - 1;
    v14 = v12 + 31;
    do
    {
      v16 = *v11++;
      v15 = v16;
      v17 = *(unsigned __int8 *)++v13;
      v18 = v15 > v17;
      if ( v15 < v17 )
        break;
      if ( v18 )
        goto LABEL_11;
    }
    while ( v13 != v14 );
    return 0;
  }
}
