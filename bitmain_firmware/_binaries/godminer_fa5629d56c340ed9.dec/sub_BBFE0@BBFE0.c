int __fastcall sub_BBFE0(int a1, int a2, void *src, size_t a4, void *a5, size_t a6)
{
  _DWORD *v7; // r0
  size_t v8; // r9
  int v11; // r8
  _DWORD *v12; // r2
  __int16 v13; // r12
  __int16 v14; // t1
  char *v15; // r9
  int v16; // r5
  int v17; // r12
  int v19; // r0
  int v20; // r5
  int v21; // r6
  int v22; // r3
  char *v23; // r2
  __int16 v24; // t1
  int v26; // [sp+Ch] [bp-1018h] BYREF
  int v27; // [sp+10h] [bp-1014h] BYREF
  _BYTE v28[12]; // [sp+14h] [bp-1010h] BYREF
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = &g_bitmain_pic_state[2 * a1];
  if ( a4 )
    v8 = a4;
  else
    v8 = 1;
  if ( v8 >= 8 )
    v8 = 8;
  if ( !v7[1] )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s this chain not inited", "pic_1704_cmd");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "pic_1704_cmd",
      12,
      108,
      100,
      var1004);
  }
  HIBYTE(v27) = a2;
  v11 = (unsigned __int8)(v8 + 6);
  BYTE2(v27) = v8 + 4;
  LOWORD(v27) = -21931;
  memcpy(v28, src, v8);
  v12 = (int *)((char *)&v27 + 1);
  v13 = 0;
  do
  {
    v14 = *((unsigned __int8 *)v12 + 1);
    v12 = (_DWORD *)((char *)v12 + 1);
    v13 += v14;
  }
  while ( (int *)((char *)&v26 + v11 + 1) != v12 );
  v15 = (char *)&v27;
  *((_BYTE *)&v27 + v11 - 2) = HIBYTE(v13);
  *((_BYTE *)&v26 + v11 + 3) = v13;
  sub_BBF04((int)"pic tx", (int)&v27, v11);
  pthread_mutex_lock(&i2c_mutex_all);
  if ( iic_write(g_bitmain_pic_state[2 * a1], (int)&v27, v11) != v11 )
  {
    v16 = 1;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s write iic err", "pic_1704_cmd");
    V_UNLOCK();
    v17 = 124;
LABEL_12:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "pic_1704_cmd",
      12,
      v17,
      100,
      var1004);
    goto LABEL_13;
  }
  usleep(0x2710u);
  v19 = g_bitmain_pic_state[2 * a1];
  v27 = 0;
  memset(v28, 0, sizeof(v28));
  v20 = (unsigned __int8)(a6 + 5);
  v21 = v20;
  if ( iic_read(v19, &v27, v20) != v20 )
  {
    v16 = 2;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s read iic err", "pic_1704_cmd");
    V_UNLOCK();
    v17 = 143;
    goto LABEL_12;
  }
  sub_BBF04((int)"pic rx", (int)&v27, v20);
  if ( (unsigned __int8)v27 != v20 )
    goto LABEL_18;
  if ( BYTE1(v27) != a2 )
    goto LABEL_18;
  LOWORD(v22) = BYTE2(v27);
  if ( BYTE2(v27) )
    goto LABEL_18;
  v23 = (char *)&v26 + v20 + 1;
  while ( 1 )
  {
    v22 = (unsigned __int16)(v22 + v20);
    if ( v15 == v23 )
      break;
    v24 = (unsigned __int8)*++v15;
    LOWORD(v20) = v24;
  }
  if ( !(v22 ? *((unsigned __int8 *)&v26 + v21 + 3) : *((unsigned __int8 *)&v26 + v21 + 3) | 1) )
  {
LABEL_18:
    v16 = 3;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s recv data format err", "pic_1704_cmd");
    V_UNLOCK();
    v17 = 158;
    goto LABEL_12;
  }
  v16 = (int)a5;
  if ( a5 )
    v16 = 1;
  if ( !a6 )
    v16 = 0;
  if ( v16 )
  {
    v16 = 0;
    memcpy(a5, (char *)&v27 + 3, a6);
  }
LABEL_13:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v16;
}
