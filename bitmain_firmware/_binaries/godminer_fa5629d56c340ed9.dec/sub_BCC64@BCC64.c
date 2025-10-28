int __fastcall sub_BCC64(int a1, int a2, int a3, unsigned __int8 *a4)
{
  int v5; // r0
  int v7; // lr
  __int16 v8; // r3
  char v9; // r2
  __int16 v10; // r3
  int v11; // r1
  unsigned __int8 *v12; // r2
  int v13; // r1
  unsigned __int8 *v14; // r12
  char v15; // t1
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v20; // r6
  int v21; // r0
  int v22; // r2
  char v23; // [sp+10h] [bp-1824h]
  int v24; // [sp+18h] [bp-181Ch]
  char v27[2048]; // [sp+30h] [bp-1804h] BYREF
  char v28[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = BYTE1(a1);
  v7 = BYTE1(a1) + 4;
  v8 = (unsigned __int8)(BYTE1(a1) + 4);
  *(_BYTE *)(a3 + 3) = a1;
  v9 = v8 + a1;
  *(_BYTE *)(a3 + 2) = v8;
  v10 = v8 + (unsigned __int8)a1;
  *(_WORD *)a3 = -21931;
  if ( a2 )
  {
    if ( v5 )
    {
      v12 = (unsigned __int8 *)(a2 - 1);
      v13 = a3 + 3;
      v14 = (unsigned __int8 *)(a2 + (unsigned __int8)(v5 - 1));
      do
      {
        v15 = *++v12;
        *(_BYTE *)++v13 = v15;
        v10 += *v12;
      }
      while ( v12 != v14 );
      v11 = v5 + 5;
    }
    else
    {
      v11 = 5;
      v7 = 4;
    }
    *(_BYTE *)(a3 + v7) = HIBYTE(v10);
    *(_BYTE *)(a3 + v11) = v10;
  }
  else
  {
    *(_BYTE *)(a3 + 5) = v9;
    *(_BYTE *)(a3 + 4) = HIBYTE(v10);
  }
  v24 = (unsigned __int8)(v5 + 6);
  v23 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    iic_write(g_bitmain_pic_state[2 * HIBYTE(a1)], a3, v24);
    usleep(0x2710u);
    iic_read(g_bitmain_pic_state[2 * HIBYTE(a1)], a4, BYTE2(a1));
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( BYTE2(a1) == 2 )
      break;
    if ( BYTE2(a1) > 2u )
    {
      if ( __PAIR64__(a4[1], *a4) == __PAIR64__((unsigned __int8)a1, BYTE2(a1)) )
      {
        snprintf(v27, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        v20 = 1;
        logfmt_raw(v28, 0x1000u, 0, v27);
        V_UNLOCK();
        v21 = g_zc;
        v22 = 140;
        goto LABEL_23;
      }
      snprintf(v27, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, v27);
      V_UNLOCK();
      v16 = g_zc;
      v17 = 145;
      goto LABEL_15;
    }
    snprintf(v27, 0x800u, "ret_len = %d should never happen!!", BYTE2(a1));
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, v27);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic_process_cmd",
      15,
      150,
      20,
      v28);
LABEL_16:
    v18 = (unsigned __int8)(v23 - 1);
    v23 = v18;
    if ( !v18 )
      return 0;
  }
  if ( *a4 != (unsigned __int8)a1 || a4[1] != 1 )
  {
    snprintf(v27, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, v27);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 132;
LABEL_15:
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic_process_cmd",
      15,
      v17,
      20,
      v28);
    sleep(1u);
    goto LABEL_16;
  }
  v20 = 1;
  snprintf(v27, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
  V_LOCK();
  logfmt_raw(v28, 0x1000u, 0, v27);
  V_UNLOCK();
  v21 = g_zc;
  v22 = 127;
LABEL_23:
  zlog(
    v21,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "pic_process_cmd",
    15,
    v22,
    20,
    v28);
  return v20;
}
