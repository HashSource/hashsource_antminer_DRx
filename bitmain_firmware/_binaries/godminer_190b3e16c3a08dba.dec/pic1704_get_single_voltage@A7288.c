int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int *v8; // r7
  unsigned __int8 *i; // r2
  __int16 v10; // t1
  unsigned __int16 v11; // r8
  int v12; // [sp+10h] [bp-181Ch] BYREF
  __int16 v13; // [sp+14h] [bp-1818h]
  unsigned __int8 v14[8]; // [sp+18h] [bp-1814h] BYREF
  int v15; // [sp+20h] [bp-180Ch]
  int v16; // [sp+24h] [bp-1808h]
  char v17[2040]; // [sp+28h] [bp-1804h] BYREF
  char v18[4100]; // [sp+828h] [bp-1004h] BYREF

  LOWORD(v2) = 0;
  BYTE2(v15) = 7;
  LOWORD(v15) = 58;
  *(_DWORD *)v14 = 255;
  HIBYTE(v15) = a1;
  v16 = 0;
  v12 = 0;
  *(_DWORD *)&v14[3] = 0;
  v13 = 0;
  result = sub_A6724(v15, 0, (int)&v12, v14);
  if ( result )
  {
    v5 = v14[2];
    v6 = v14[0];
    v7 = v14[1];
    if ( v14[2] == 1 && v14[0] > 3u )
    {
      for ( i = &v14[3]; ; ++i )
      {
        v2 = (unsigned __int16)(v2 + v6);
        LOWORD(v6) = v7;
        if ( i == &v14[v14[0]] )
          break;
        LOWORD(v7) = v5;
        v10 = *i;
        LOWORD(v5) = v10;
      }
      v8 = &g_zc;
      v11 = __rev16(*(unsigned __int16 *)&v14[v14[0] - 2]);
      snprintf(v17, 0x800u, "sum1,sum2 = %d,%d", v2, v11);
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "check_pic_crc",
        13,
        399,
        20,
        v18);
      if ( v2 == v11 )
      {
        *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v14[3]);
        snprintf(v17, 0x800u, "Received one voltage response: vol = %d.");
        V_LOCK();
        logfmt_raw(v18, 0x1000u, 0, v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          165,
          "pic1704_get_single_voltage",
          26,
          486,
          20,
          v18);
        return 1;
      }
      v6 = v14[0];
      v5 = v14[2];
      v7 = v14[1];
    }
    else
    {
      v8 = &g_zc;
    }
    snprintf(v17, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v6, v7, v5);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, v17);
    V_UNLOCK();
    zlog(
      *v8,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_get_single_voltage",
      26,
      482,
      20,
      v18);
    return 1;
  }
  return result;
}
