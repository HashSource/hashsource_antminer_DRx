int __fastcall iic_init(int a1)
{
  pthread_mutex_t *v2; // r0
  int v3; // r5
  const char *v4; // r2
  _DWORD *v5; // r6
  int v6; // r3
  int v7; // r1
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // lr
  int *v26; // r3
  int v27; // r0
  int v28; // r1
  int *v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int *v33; // r3
  int v34; // r0
  int v35; // r1
  int *v36; // r12
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r12
  int *v42; // lr
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // lr
  int *v48; // r3
  int v49; // r0
  int v50; // r1
  int s; // [sp+10h] [bp-1800h] BYREF
  int v52; // [sp+14h] [bp-17FCh]
  int v53; // [sp+18h] [bp-17F8h]
  int v54; // [sp+1Ch] [bp-17F4h]
  int v55; // [sp+20h] [bp-17F0h]
  char v56; // [sp+24h] [bp-17ECh]
  char v57[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -15964;
  HIWORD(v2) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v42) = -17372;
    HIWORD(v42) = (unsigned int)"set uart relay, chip:%02x, %08x" >> 16;
    v43 = *v42;
    v44 = v42[1];
    v45 = v42[2];
    v46 = v42[3];
    v3 = -4;
    v47 = v42[4];
    s = v43;
    v52 = v44;
    v53 = v45;
    v54 = v46;
    LOWORD(v55) = v47;
    BYTE2(v55) = BYTE2(v47);
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v48) = -12376;
    HIWORD(v48) = (unsigned int)&unk_18C750 >> 16;
    v49 = *v48;
    LOWORD(v48) = -17452;
    LOWORD(v50) = -17352;
    HIWORD(v48) = (unsigned int)"2110/backend_kda_2110.c" >> 16;
    HIWORD(v50) = (unsigned int)":%02x, %08x" >> 16;
    zlog(v49, v50, 171, v48, 8, 20, 100, v57);
    return v3;
  }
  if ( a1 )
  {
    v3 = i2c_init();
    if ( v3 < 0 )
    {
      LOWORD(v20) = -17180;
      HIWORD(v20) = (unsigned int)"%04x\n" >> 16;
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v3 = -1;
      v25 = v20[4];
      s = v21;
      v52 = v22;
      v53 = v23;
      v54 = v24;
      LOWORD(v55) = v25;
      BYTE2(v55) = BYTE2(v25);
      V_LOCK();
      logfmt_raw(v57, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v26) = -12376;
      HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
      v27 = *v26;
      LOWORD(v26) = -17452;
      LOWORD(v28) = -17352;
      HIWORD(v26) = (unsigned int)"2110/backend_kda_2110.c" >> 16;
      HIWORD(v28) = (unsigned int)":%02x, %08x" >> 16;
      zlog(v27, v28, 171, v26, 8, 32, 100, v57);
    }
    else
    {
      LOWORD(v4) = -17160;
      HIWORD(v4) = (unsigned int)"kda" >> 16;
      LOWORD(v5) = -12376;
      snprintf(
        (char *)&s,
        0x800u,
        v4,
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 7));
      V_LOCK();
      logfmt_raw(v57, 0x1000u, 0, &s);
      HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
      V_UNLOCK();
      LOWORD(v6) = -17452;
      LOWORD(v7) = -17352;
      HIWORD(v6) = (unsigned int)"2110/backend_kda_2110.c" >> 16;
      HIWORD(v7) = (unsigned int)":%02x, %08x" >> 16;
      zlog(*v5, v7, 171, v6, 8, 36, 20, v57);
      if ( i2c_select(v3, *(unsigned __int16 *)(a1 + 4)) )
      {
        LOWORD(v8) = -17092;
        HIWORD(v8) = (unsigned int)"dump_work_ltc" >> 16;
        v9 = *v8;
        v10 = v8[1];
        v11 = v8[2];
        v12 = v8[3];
        v8 += 4;
        s = v9;
        v52 = v10;
        v53 = v11;
        v54 = v12;
        v13 = v8[1];
        v55 = *v8;
        v56 = v13;
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        v14 = *v5;
        v15 = 38;
        goto LABEL_6;
      }
      if ( i2c_ioctl(v3, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        LOWORD(v36) = -17068;
        HIWORD(v36) = (unsigned int)"ing_analog_mux_LTC_1489" >> 16;
        v37 = *v36;
        v38 = v36[1];
        v39 = v36[2];
        v40 = v36[3];
        v41 = v36[4];
        s = v37;
        v52 = v38;
        v53 = v39;
        v54 = v40;
        v55 = v41;
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        v14 = *v5;
        v15 = 43;
LABEL_6:
        LOWORD(v16) = -17452;
        LOWORD(v17) = -17352;
        HIWORD(v16) = (unsigned int)"2110/backend_kda_2110.c" >> 16;
        HIWORD(v17) = (unsigned int)":%02x, %08x" >> 16;
        zlog(v14, v17, 171, v16, 8, v15, 100, v57);
        if ( v3 )
        {
          v18 = v3;
          v3 = -1;
          i2c_uninit(v18);
        }
        else
        {
          v3 = -1;
        }
      }
    }
  }
  else
  {
    LOWORD(v29) = 4676;
    HIWORD(v29) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v3 = -3;
    s = v30;
    v52 = v31;
    LOWORD(v53) = v32;
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v33) = -12376;
    HIWORD(v33) = (unsigned int)&unk_18C750 >> 16;
    v34 = *v33;
    LOWORD(v33) = -17452;
    LOWORD(v35) = -17352;
    HIWORD(v33) = (unsigned int)"2110/backend_kda_2110.c" >> 16;
    HIWORD(v35) = (unsigned int)":%02x, %08x" >> 16;
    zlog(v34, v35, 171, v33, 8, 26, 100, v57);
  }
  pthread_mutex_unlock(&stru_18C1A4);
  return v3;
}
