int __fastcall sub_B3030(void *a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  __int16 v13; // t1
  int v14; // r0
  int v15; // r12
  int v16; // r5
  unsigned __int8 *v17; // r4
  int v18; // t1
  int v19; // r3
  int v20; // r4
  int v22; // [sp+0h] [bp-850h]
  int v25; // [sp+28h] [bp-828h]
  unsigned __int8 *v27; // [sp+38h] [bp-818h]
  unsigned __int8 *v28; // [sp+3Ch] [bp-814h]
  unsigned __int8 *v29; // [sp+40h] [bp-810h]
  unsigned __int8 *v30; // [sp+44h] [bp-80Ch]
  unsigned __int8 v31; // [sp+4Fh] [bp-801h] BYREF
  char s[2048]; // [sp+50h] [bp-800h] BYREF
  char v33[4080]; // [sp+850h] [bp+0h] BYREF

  v31 = 0;
  v25 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&power_mutex);
  v27 = &a4[a5 - 1];
  v28 = &a4[a5 - 2];
  v30 = a4 + 1;
  v29 = a4 - 3;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      iic_write_reg((int)a1, &v31, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    LOBYTE(v9) = 0;
    usleep((__useconds_t)&loc_61A80);
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      iic_read_reg(a1, &v31, 1, (int)&a4[v10], 1u);
      v10 = v9;
    }
    while ( v9 < a5 );
    usleep((__useconds_t)&stru_18698.st_size);
    v11 = v30;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( &v29[a5] != v11 );
    if ( v12 != (unsigned __int16)(*v28 + (*v27 << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x",
        v12,
        (unsigned __int16)(*v28 + (*v27 << 8)));
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, s);
      V_UNLOCK();
      v14 = g_zc;
      v15 = 90;
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data");
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
    V_UNLOCK();
    v14 = g_zc;
    v15 = 96;
LABEL_10:
    v16 = 0;
    zlog(
      v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "check_read_back_data",
      20,
      v15,
      20,
      v33);
    v17 = a4 - 1;
    do
    {
      v18 = *++v17;
      v19 = v16++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v19, v18);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "check_read_back_data",
        20,
        102,
        20,
        v33);
    }
    while ( &a4[a5 - 1] != v17 );
    v22 = v25++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d", a2[3], v22);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "exec_power_cmd",
      14,
      196,
      20,
      v33);
    if ( v25 == 3 )
    {
      v20 = -2147482880;
      goto LABEL_14;
    }
  }
  v20 = 0;
LABEL_14:
  pthread_mutex_unlock((pthread_mutex_t *)&power_mutex);
  return v20;
}
