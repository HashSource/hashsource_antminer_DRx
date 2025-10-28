int __fastcall i2c_read(int a1, _BYTE *a2, int a3)
{
  _DWORD *v5; // r9
  int v6; // r5
  _BYTE *v7; // r10
  _BYTE *v8; // r0
  int v10; // [sp+14h] [bp-180Ch] BYREF
  _DWORD *v11; // [sp+1Ch] [bp-1804h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1800h] BYREF
  char v13[4096]; // [sp+820h] [bp-1000h] BYREF

  v10 = a1;
  if ( pthread_mutex_lock(&stru_1B4F3C) )
  {
    strcpy((char *)s, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "i2c_read",
      8,
      179,
      100,
      v13);
    return -1;
  }
  else
  {
    v11 = 0;
    if ( find_c_map((int *)dword_1B4F38, (int)&v10, &v11) == 1 )
    {
      v5 = v11;
      snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d", *v11, v11[1]);
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_read",
        8,
        186,
        20,
        v13);
      v6 = (*v5 << 26) | 0x2000000 | (v5[1] >> 4 << 20) | (v5[1] << 15) & 0x70000;
      if ( a3 )
      {
        v7 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_D2DC4() )
          {
            free(v11);
            strcpy((char *)s, "iic not ready 4 read1");
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
              171,
              "i2c_read",
              8,
              204,
              100,
              v13);
            pthread_mutex_unlock(&stru_1B4F3C);
            return -2;
          }
          fpga_write(48, v6);
          v8 = a2++;
          if ( !sub_D2E20(v8) )
            break;
          if ( a2 == v7 )
            goto LABEL_9;
        }
        free(v11);
        strcpy((char *)s, "iic not ready 4 read2");
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
          171,
          "i2c_read",
          8,
          216,
          100,
          v13);
        pthread_mutex_unlock(&stru_1B4F3C);
        return -3;
      }
      else
      {
LABEL_9:
        free(v11);
        pthread_mutex_unlock(&stru_1B4F3C);
        return a3;
      }
    }
    else
    {
      snprintf((char *)s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read", v10);
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_read",
        8,
        223,
        100,
        v13);
      pthread_mutex_unlock(&stru_1B4F3C);
      return -2;
    }
  }
}
