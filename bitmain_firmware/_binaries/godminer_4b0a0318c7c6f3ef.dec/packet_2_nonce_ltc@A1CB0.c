int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r3
  _DWORD *v12; // r4
  int v13; // r1
  int v15; // r2
  int v16; // r9
  int v17; // r1
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r3
  unsigned int v22; // r9
  int v23; // r0
  int v24; // r2
  int v25; // r3
  int v26; // r1
  const char *v27; // r0
  int v28; // r0
  int v29; // r1
  char v30[4080]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v12) = 20532;
  V_LOCK();
  LOWORD(v11) = 3236;
  HIWORD(v11) = (unsigned int)"new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
  HIWORD(v12) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v30, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v13) = 2556;
  HIWORD(v13) = (unsigned int)"ltc" >> 16;
  zlog(*v12, v13, 171, "packet_2_nonce_ltc", 18, 239, 40, v30);
  if ( (unsigned __int8)a2[8] >> 5 != 4 )
    return 10;
  v15 = BM_CRC5(a2 + 2, 51);
  if ( v15 == (a2[8] & 0x1F) )
  {
    v16 = a1[210];
    v17 = (unsigned __int8)a2[7];
    v18 = *(_DWORD *)(v16 + 8 * v17);
    v19 = *(_DWORD *)(v16 + 8 * v17 + 4);
    *(_DWORD *)a3 = v18;
    *(_DWORD *)(a3 + 4) = v19;
    *a7 = v18;
    strcpy((char *)(a3 + 16), (const char *)(v16 + ((v17 + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
    v20 = (unsigned __int8)a2[7];
    *(_BYTE *)(a3 + 85) = v20;
    memcpy((void *)(a3 + 86), (const void *)(v16 + 16 * (v20 + 1504)), *(_DWORD *)(v16 + 4 * (v20 + 6528)));
    v21 = (unsigned __int8)a2[7];
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v16 + 4 * (v21 + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v16 + 4 * (v21 + 6656));
    v22 = (unsigned __int8)a2[2];
    v23 = ((unsigned __int8)((_BYTE)v22 << 7) | ((unsigned __int8)a2[3] >> 1)) / a1[111];
    if ( v23 >= a1[88] )
    {
      v28 = rand();
      sub_145474(v28, a1[88]);
      v23 = v29;
      *a6 = v29;
      v22 = (unsigned __int8)a2[2];
    }
    else
    {
      *a6 = v23;
    }
    v24 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a3 + 8) = v23;
    *(_DWORD *)(a3 + 12) = v22 >> 1;
    *a5 = v24;
    *a4 = 1;
    V_LOCK();
    LOWORD(v25) = 3328;
    HIWORD(v25) = (unsigned int)"%s reg %02x tm %08x" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v25);
    V_UNLOCK();
    LOWORD(v26) = 2556;
    HIWORD(v26) = (unsigned int)"ltc" >> 16;
    zlog(*v12, v26, 171, "packet_2_nonce_ltc", 18, 286, 40, v30);
    return 0;
  }
  else
  {
    LOWORD(v27) = 3260;
    HIWORD(v27) = (unsigned int)"1489/chip_setting_ltc_1489.c" >> 16;
    printf(v27, a1[62], v15);
    return 11;
  }
}
