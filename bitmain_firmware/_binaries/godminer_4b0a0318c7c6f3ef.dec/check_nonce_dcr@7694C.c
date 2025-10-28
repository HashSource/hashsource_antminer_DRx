int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r5
  unsigned int v16; // r3
  int v17; // r11
  int v18; // r10
  _BYTE *v19; // r5
  int *v20; // r9
  unsigned __int8 *v21; // r4
  int v22; // r12
  int v23; // t1
  int v24; // t1
  unsigned int v25; // r2
  unsigned int v26; // r3
  int v28; // r3
  int v29; // r1
  int v30; // r3
  _DWORD *v31; // r3
  int v32; // r1
  int v33; // r3
  _DWORD *v34; // r3
  int v35; // r1
  unsigned int v36; // [sp+14h] [bp-10E0h]
  _BYTE v37[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v39[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 840);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v36 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)(v4 + v2 + 5271);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v6;
  s[37] = v8;
  s[38] = v9;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  s[39] = *v7;
  s[40] = v10;
  s[41] = v11;
  s[42] = v12;
  v13 = v7[5];
  s[43] = v7[4];
  s[44] = v13;
  decred_hash((int)v37, (char *)s);
  v14 = target_to_diff_dcr((int)v37);
  v15 = v14;
  if ( v14 <= 0x26 )
  {
    V_LOCK();
    LOWORD(v33) = -17840;
    HIWORD(v33) = (unsigned int)"ial_interval_time" >> 16;
    logfmt_raw(v39, 0x1000u, 0, v33, v15, *(unsigned __int8 *)(a2 + 64), 39);
    V_UNLOCK();
    LOWORD(v34) = 20532;
    HIWORD(v34) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v35) = -18012;
    HIWORD(v35) = (unsigned int)"e_core_clk_tops" >> 16;
    zlog(*v34, v35, 171, "check_nonce_dcr", 15, 573, 20, v39);
    return 2;
  }
  v16 = *(unsigned __int8 *)(a2 + 64);
  if ( v16 == v14 )
  {
    if ( v36 > v16 )
    {
      v20 = &g_zc;
LABEL_12:
      V_LOCK();
      LOWORD(v28) = -22208;
      HIWORD(v28) = (unsigned int)"bridge_reset_DASH_1766" >> 16;
      logfmt_raw(v39, 0x1000u, 0, v28, *(unsigned __int8 *)(a2 + 64), v36);
      V_UNLOCK();
      LOWORD(v29) = -18012;
      HIWORD(v29) = (unsigned int)"e_core_clk_tops" >> 16;
      zlog(*v20, v29, 171, "check_nonce_dcr", 15, 591, 20, v39);
      return 1;
    }
  }
  else if ( v36 > v14 )
  {
    V_LOCK();
    LOWORD(v30) = -22252;
    HIWORD(v30) = (unsigned int)"_2_packet_dash" >> 16;
    logfmt_raw(v39, 0x1000u, 0, v30, v15, *(unsigned __int8 *)(a2 + 64), v36);
    V_UNLOCK();
    LOWORD(v31) = 20532;
    HIWORD(v31) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v32) = -18012;
    HIWORD(v32) = (unsigned int)"e_core_clk_tops" >> 16;
    zlog(*v31, v32, 171, "check_nonce_dcr", 15, 578, 40, v39);
    return 3;
  }
  LOWORD(v20) = 20532;
  LOWORD(v17) = -17776;
  LOWORD(v18) = -18012;
  v19 = s;
  HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
  v21 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
  do
  {
    V_LOCK();
    v23 = (unsigned __int8)*--v19;
    v22 = v23;
    HIWORD(v17) = (unsigned int)"mal" >> 16;
    v24 = *--v21;
    logfmt_raw(v39, 0x1000u, 0, v17, v22, v24);
    V_UNLOCK();
    HIWORD(v18) = (unsigned int)"e_core_clk_tops" >> 16;
    zlog(*v20, v18, 171, "fulltest_dcr", 12, 488, 20, v39);
    v25 = (unsigned __int8)*v19;
    v26 = *v21;
    if ( v25 < v26 )
      break;
    if ( v25 > v26 )
      goto LABEL_12;
  }
  while ( v37 != v19 );
  return 0;
}
