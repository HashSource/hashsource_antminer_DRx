int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  double v4; // r0
  float v5; // s14
  double v6; // d7
  char *v8; // r1
  int v9; // r4
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r4
  char *v13; // r1
  _DWORD *v14; // r3
  int v15; // r1
  float v16; // [sp+2Ch] [bp-1048h] BYREF
  _DWORD v17[7]; // [sp+30h] [bp-1044h] BYREF
  int v18; // [sp+4Ch] [bp-1028h]
  _DWORD v19[7]; // [sp+50h] [bp-1024h] BYREF
  int v20; // [sp+6Ch] [bp-1008h]
  char v21[4100]; // [sp+70h] [bp-1004h] BYREF

  v16 = 1.0;
  if ( is_eeprom_loaded() )
  {
    LODWORD(v4) = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 248), &v16);
    if ( LODWORD(v4) )
    {
      v16 = 1.0;
      V_LOCK();
      LOWORD(v8) = 27372;
      HIWORD(v8) = (unsigned int)":" >> 16;
      V_INT((int)v19, v8, *(int *)(a1 + 256));
      LOWORD(v9) = -13948;
      HIWORD(v9) = (unsigned int)"%x, total_lost/total_err: 0x%llx/0x%llx" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, v9);
      V_UNLOCK();
      LOWORD(v10) = 20532;
      HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v11) = -14448;
      HIWORD(v11) = (unsigned int)" lost cnt: %08x" >> 16;
      LODWORD(v4) = zlog(*v10, v11, 171, "get_theory_hashrate_eth", 23, 1454, 100, v21);
      v5 = v16 * 1920.0;
    }
    else
    {
      if ( v16 == 0.0 )
      {
        v6 = 1900000000.0;
        goto LABEL_6;
      }
      v5 = (float)(v16 / 100.0) * 1920.0;
    }
    floor(v4);
    v6 = (double)(50 * (unsigned int)(v5 / 50.0)) * 1000.0 * 1000.0;
LABEL_6:
    *a2 = v6;
    return 0;
  }
  LOWORD(v12) = -14000;
  *a2 = 1.0;
  V_LOCK();
  LOWORD(v13) = 27372;
  HIWORD(v13) = (unsigned int)":" >> 16;
  V_INT((int)v17, v13, *(int *)(a1 + 256));
  HIWORD(v12) = (unsigned int)"8x" >> 16;
  logfmt_raw(v21, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v12);
  V_UNLOCK();
  LOWORD(v14) = 20532;
  HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v15) = -14448;
  HIWORD(v15) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v14, v15, 171, "get_theory_hashrate_eth", 23, 1445, 100, v21);
  return 32;
}
