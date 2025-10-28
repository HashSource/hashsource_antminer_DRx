int __fastcall pwm_init(unsigned int a1, int a2)
{
  _DWORD *v2; // r2
  int v4; // r2
  int result; // r0
  int *v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  int *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int *v21; // r3
  int v22; // r0
  int v23; // r1
  int v24; // [sp+10h] [bp-1804h] BYREF
  int v25; // [sp+14h] [bp-1800h]
  int v26; // [sp+18h] [bp-17FCh]
  int v27; // [sp+1Ch] [bp-17F8h]
  int v28; // [sp+20h] [bp-17F4h]
  int v29; // [sp+24h] [bp-17F0h]
  int v30; // [sp+28h] [bp-17ECh]
  char v31; // [sp+2Ch] [bp-17E8h]
  char v32[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v2) = -16388;
  HIWORD(v2) = (unsigned int)&unk_18B744 >> 16;
  if ( *v2 )
  {
    if ( a1 > 1 )
    {
      LOWORD(v6) = 4676;
      HIWORD(v6) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v24 = v7;
      v25 = v8;
      LOWORD(v26) = v9;
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, &v24);
      V_UNLOCK();
      LOWORD(v10) = -12376;
      HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
      v11 = *v10;
      LOWORD(v10) = -17028;
      LOWORD(v12) = -16988;
      HIWORD(v10) = (unsigned int)"_ltc" >> 16;
      HIWORD(v12) = (unsigned int)"ChipSetting_nonce_counter_LTC_1489" >> 16;
      zlog(v11, v12, 171, v10, 8, 30, 100, v32);
      return -3;
    }
    else
    {
      LOWORD(v4) = -15940;
      result = a1 + 1;
      HIWORD(v4) = (unsigned int)&unk_18B904 >> 16;
      *(_DWORD *)(v4 + 8 * a1) = a2;
      *(_BYTE *)(v4 + 8 * a1 + 4) = 1;
    }
  }
  else
  {
    LOWORD(v13) = -19552;
    HIWORD(v13) = (unsigned int)"m_kas" >> 16;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v13 += 4;
    v24 = v14;
    v25 = v15;
    v26 = v16;
    v27 = v17;
    v18 = v13[1];
    v19 = v13[2];
    v20 = v13[3];
    v28 = *v13;
    v29 = v18;
    v30 = v19;
    v31 = v20;
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, &v24);
    V_UNLOCK();
    LOWORD(v21) = -12376;
    HIWORD(v21) = (unsigned int)&unk_18C750 >> 16;
    v22 = *v21;
    LOWORD(v21) = -17028;
    LOWORD(v23) = -16988;
    HIWORD(v21) = (unsigned int)"_ltc" >> 16;
    HIWORD(v23) = (unsigned int)"ChipSetting_nonce_counter_LTC_1489" >> 16;
    zlog(v22, v23, 171, v21, 8, 25, 100, v32);
    return -2;
  }
  return result;
}
