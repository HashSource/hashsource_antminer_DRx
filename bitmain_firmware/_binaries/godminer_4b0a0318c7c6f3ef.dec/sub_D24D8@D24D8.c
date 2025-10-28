int __fastcall sub_D24D8(unsigned __int8 a1, int a2, char a3, char *a4, int a5)
{
  __int16 v7; // r4
  int v9; // r6
  char v10; // r3
  char v11; // r1
  int v12; // r2
  _DWORD *v13; // r1
  int v14; // r12
  int v15; // lr
  __int16 v16; // r3
  __int16 v17; // t1
  int v18; // r0
  int v19; // r5
  int v20; // r12
  int v22; // r0
  int v23; // [sp+18h] [bp-1020h] BYREF
  int v24; // [sp+1Ch] [bp-101Ch]
  int v25; // [sp+20h] [bp-1018h]
  int v26; // [sp+24h] [bp-1014h]
  _DWORD v27[4]; // [sp+28h] [bp-1010h] BYREF
  char var1000[4104]; // [sp+38h] [bp-1000h] BYREF

  v7 = (unsigned __int8)(a5 + 6);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v9 = 2 * a2;
  v23 = 255;
  memset(v27, 0, sizeof(v27));
  pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex_all);
  v10 = 85;
  v11 = *a4;
  LOWORD(v27[0]) = -21931;
  if ( a5 == 2 )
    v10 = a4[1];
  HIBYTE(v27[0]) = 50;
  if ( a5 == 2 )
    v12 = 10;
  else
    v12 = 9;
  LOBYTE(v27[1]) = v9;
  if ( a5 == 2 )
    HIBYTE(v27[1]) = v10;
  BYTE2(v27[1]) = v11;
  if ( a5 == 2 )
    v9 = v12;
  v13 = (_DWORD *)((char *)v27 + 2);
  BYTE1(v27[1]) = a3;
  BYTE2(v27[0]) = a5 + 6;
  if ( a5 == 2 )
  {
    v14 = 9;
    v15 = 8;
  }
  else
  {
    v14 = 8;
    v9 = v12;
    v15 = 7;
  }
  v16 = 0;
  while ( 1 )
  {
    v16 += v7;
    if ( (_DWORD *)((char *)&v27[1] + a5 + 1) == v13 )
      break;
    v17 = *((unsigned __int8 *)v13 + 1);
    v13 = (_DWORD *)((char *)v13 + 1);
    v7 = v17;
  }
  *((_BYTE *)v27 + v15) = HIBYTE(v16);
  v18 = g_bitmain_pic_state[2 * a1];
  *((_BYTE *)v27 + v14) = v16;
  if ( iic_write(v18, (int)v27, v12) != v9 )
  {
    v19 = 1;
    V_LOCK();
    logfmt_raw(var1000, 0x1000u, 0, "%s write iic err", "write_dc_dc");
    V_UNLOCK();
    v20 = 61;
LABEL_18:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "write_dc_dc",
      11,
      v20,
      100,
      var1000);
    goto LABEL_19;
  }
  usleep((__useconds_t)&loc_30D40);
  v22 = g_bitmain_pic_state[2 * a1];
  v24 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  if ( iic_read(v22, &v23, 5) != 5 )
  {
    v19 = 1;
    V_LOCK();
    logfmt_raw(var1000, 0x1000u, 0, "%s read iic err", "write_dc_dc");
    V_UNLOCK();
    v20 = 68;
    goto LABEL_18;
  }
  if ( BYTE1(v23) != 50 || (v19 = BYTE2(v23), BYTE2(v23) != 1) )
  {
    V_LOCK();
    v19 = 0;
    logfmt_raw(
      var1000,
      0x1000u,
      0,
      "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
      "write_dc_dc",
      (unsigned __int8)v23,
      BYTE1(v23),
      BYTE2(v23),
      HIBYTE(v23));
    V_UNLOCK();
    v20 = 75;
    goto LABEL_18;
  }
LABEL_19:
  pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex_all);
  return v19;
}
