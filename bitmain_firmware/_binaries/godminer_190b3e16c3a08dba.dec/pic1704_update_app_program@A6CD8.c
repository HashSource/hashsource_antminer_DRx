int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r6
  char *v3; // r10
  char *v4; // r5
  unsigned int v5; // r0
  int v6; // r9
  int v7; // r7
  int v8; // r2
  char *v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v15; // r0
  int v16; // r3
  unsigned __int8 v17[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v19; // [sp+20h] [bp-1814h] BYREF
  int v20; // [sp+24h] [bp-1810h]
  int v21; // [sp+28h] [bp-180Ch]
  int v22; // [sp+2Ch] [bp-1808h]
  int v23[512]; // [sp+30h] [bp-1804h] BYREF
  char v24[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v25; // [sp+844h] [bp-FF0h]

  *(_DWORD *)s = 0;
  v19 = 0;
  *(_DWORD *)&s[3] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", 1394128);
  if ( !v2 )
  {
    snprintf(
      (char *)v23,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    v6 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      274,
      20,
      v24);
    return v6;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    snprintf((char *)v23, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    v6 = -1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      281,
      20,
      v24);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, 1246128, 1249156);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      282,
      100,
      v24);
    return v6;
  }
  v4 = v3;
  fseek(v2, 0, 0);
  do
  {
    v4 += 4;
    fgets(s, 7, v2);
    v5 = strtoul(s, 0, 16);
    *(v4 - 1) = v5;
    *(v4 - 4) = HIBYTE(v5);
    *(v4 - 3) = BYTE2(v5);
    *(v4 - 2) = BYTE1(v5);
  }
  while ( v3 + 14080 != v4 );
  fclose(v2);
  if ( pic1704_reset(a1) )
  {
    v6 = pic1704_erase_program(a1);
    if ( !v6 )
    {
      snprintf((char *)v23, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v23);
      V_UNLOCK();
      v8 = 317;
LABEL_12:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "pic1704_update_app_program",
        26,
        v8,
        20,
        v24);
      free(v3);
      return v6;
    }
    v7 = 0;
    do
    {
      v9 = &v3[16 * v7];
      v23[1] = (int)&v19;
      v10 = *(_DWORD *)v9;
      v11 = *((_DWORD *)v9 + 1);
      v12 = *((_DWORD *)v9 + 2);
      v13 = *((_DWORD *)v9 + 3);
      ++v7;
      HIBYTE(v23[0]) = a1;
      LOWORD(v23[0]) = 4098;
      v19 = v10;
      v20 = v11;
      v21 = v12;
      v22 = v13;
      BYTE2(v23[0]) = 2;
      v17[1] = 0;
      memset(v24, 0, sizeof(v24));
      v25 = 0;
      v17[0] = -1;
      if ( !sub_A6724(v23[0], (int)&v19, (int)v24, v17) )
      {
        v6 = 0;
        snprintf((char *)v23, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, v23);
        V_UNLOCK();
        v8 = 337;
        goto LABEL_12;
      }
    }
    while ( v7 != 880 );
    if ( pic1704_reset(a1) )
    {
      v6 = 1;
      free(v3);
      return v6;
    }
    snprintf((char *)v23, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      347,
      20,
      v24);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, 1420912, a1);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 348;
  }
  else
  {
    snprintf((char *)v23, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      307,
      20,
      v24);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, 1420912, a1);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 308;
  }
  zlog(
    v15,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "pic1704_update_app_program",
    26,
    v16,
    100,
    v24);
  free(v3);
  return 0;
}
