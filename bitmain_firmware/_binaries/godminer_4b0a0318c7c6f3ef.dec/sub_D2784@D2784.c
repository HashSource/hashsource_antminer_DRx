int __fastcall sub_D2784(unsigned __int8 a1, char a2, _BYTE *a3)
{
  int v6; // r0
  __int16 v7; // r3
  int v8; // r5
  int v9; // r12
  int v10; // r0
  int v12; // r0
  char v13; // r3
  int v14; // [sp+1Ch] [bp-101Ch] BYREF
  int v15; // [sp+20h] [bp-1018h]
  char v16; // [sp+24h] [bp-1014h]
  int v17; // [sp+28h] [bp-1010h] BYREF
  int v18; // [sp+2Ch] [bp-100Ch]
  int v19; // [sp+30h] [bp-1008h]
  int v20; // [sp+34h] [bp-1004h]
  char v21[4096]; // [sp+38h] [bp-1000h] BYREF

  v17 = 255;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex_all);
  v6 = g_bitmain_pic_state[2 * a1];
  v14 = 839363157;
  v7 = (unsigned __int8)(2 * a2) | 1;
  *(_WORD *)((char *)&v15 + 1) = 545;
  LOBYTE(v15) = (2 * a2) | 1;
  v16 = v7 + 92;
  HIBYTE(v15) = (unsigned __int16)(v7 + 92) >> 8;
  if ( iic_write(v6, (int)&v14, 9) == 9 )
  {
    usleep(0x30D40u);
    v12 = g_bitmain_pic_state[2 * a1];
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( iic_read(v12, &v17, 5) == 5 )
    {
      if ( BYTE1(v17) == 50 )
      {
        v8 = BYTE2(v17);
        if ( BYTE2(v17) == 1 )
        {
          v13 = v18;
          *a3 = HIBYTE(v17);
          a3[1] = v13;
          goto LABEL_4;
        }
      }
      V_LOCK();
      v8 = 0;
      logfmt_raw(
        v21,
        0x1000u,
        0,
        "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
        "read_dc_dc",
        (unsigned __int8)v17,
        BYTE1(v17),
        BYTE2(v17),
        HIBYTE(v17));
      V_UNLOCK();
      v9 = 125;
      v10 = g_zc;
    }
    else
    {
      v8 = 1;
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "%s read iic err", "read_dc_dc");
      V_UNLOCK();
      v9 = 118;
      v10 = g_zc;
    }
  }
  else
  {
    v8 = 1;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "%s write iic err", "read_dc_dc");
    V_UNLOCK();
    v9 = 110;
    v10 = g_zc;
  }
  zlog(
    v10,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/isl68127.c",
    165,
    "read_dc_dc",
    10,
    v9,
    100,
    v21);
LABEL_4:
  pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex_all);
  return v8;
}
