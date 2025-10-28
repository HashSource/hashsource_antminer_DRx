int __fastcall check_nonce_dash(int a1, int a2)
{
  int v2; // r9
  int v4; // r4
  unsigned int v5; // r7
  int v6; // r12
  char *v7; // r2
  char *v8; // r3
  char v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r4
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  unsigned int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r1
  _BYTE v22[32]; // [sp+18h] [bp-1070h] BYREF
  _DWORD v23[20]; // [sp+38h] [bp-1050h] BYREF
  char v24[4096]; // [sp+88h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 840);
  v4 = *(unsigned __int8 *)(a2 + 53);
  v5 = *(_DWORD *)(v2 + 4 * (v4 + 3840));
  ++dword_1A3DB4;
  v6 = *(_DWORD *)(v2 + 12 * v4 + 19968);
  *(_DWORD *)(a2 + 58) = *(_DWORD *)(v2 + 12 * v4 + 19972);
  *(_DWORD *)(a2 + 54) = v6;
  memcpy(v23, (const void *)(v2 + 80 * v4 + 5120), sizeof(v23));
  v7 = (char *)v23;
  v8 = (char *)(v2 + 80 * v4 + 5120);
  do
  {
    v9 = *v8;
    v8 += 4;
    v7[3] = v9;
    v7[2] = *(v8 - 3);
    v7[1] = *(v8 - 2);
    *v7 = *(v8 - 1);
    v7 += 4;
  }
  while ( v7 != v24 );
  v23[19] = *(_DWORD *)(a2 + 48);
  Xhash(v22, v23);
  v10 = target_to_diff_dash((int)v22);
  v11 = v10;
  if ( v10 <= 0x22 )
  {
    ++dword_1A3DB8;
    V_LOCK();
    LOWORD(v12) = -19664;
    HIWORD(v12) = (unsigned int)"Setting_software_reset_DCR_1727" >> 16;
    logfmt_raw(v24, 0x1000u, 0, v12, v11, *(unsigned __int8 *)(a2 + 52), 35);
    V_UNLOCK();
    LOWORD(v13) = 20532;
    HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v14) = -19880;
    HIWORD(v14) = (unsigned int)"e crc error calc value %04x expected value %04x\n" >> 16;
    zlog(*v13, v14, 173, "check_nonce_dash", 16, 790, 20, v24);
    return 2;
  }
  v16 = *(unsigned __int8 *)(a2 + 52);
  if ( v16 == v10 )
  {
    if ( v5 <= v16 )
      return 0;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v5);
    V_UNLOCK();
    LOWORD(v17) = 20532;
    HIWORD(v17) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v18) = -19880;
    HIWORD(v18) = (unsigned int)"e crc error calc value %04x expected value %04x\n" >> 16;
    zlog(*v17, v18, 173, "check_nonce_dash", 16, 823, 20, v24);
    return 1;
  }
  else
  {
    if ( v5 <= v10 )
      return 0;
    V_LOCK();
    LOWORD(v19) = -22252;
    HIWORD(v19) = (unsigned int)" nonce crc error calc value %04x expected value %04x" >> 16;
    logfmt_raw(v24, 0x1000u, 0, v19, v11, *(unsigned __int8 *)(a2 + 52), v5);
    V_UNLOCK();
    LOWORD(v20) = 20532;
    HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v21) = -19880;
    HIWORD(v21) = (unsigned int)"e crc error calc value %04x expected value %04x\n" >> 16;
    zlog(*v20, v21, 173, "check_nonce_dash", 16, 800, 20, v24);
    return 3;
  }
}
