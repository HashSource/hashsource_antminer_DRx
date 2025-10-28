int __fastcall i2c_read_reg(void *a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v6; // r5
  _DWORD *v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r4
  void *ptr; // [sp+1Ch] [bp-804h] BYREF
  _DWORD *v19; // [sp+24h] [bp-7FCh] BYREF
  _DWORD s[512]; // [sp+28h] [bp-7F8h] BYREF
  char _828[4120]; // [sp+828h] [bp+8h] BYREF

  ptr = a1;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    strcpy((char *)s, "more than one byte reg address is not supported");
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "i2c_read_reg",
      12,
      298,
      100,
      _828);
    return -3;
  }
  else
  {
    v6 = pthread_mutex_lock(&stru_1B605C);
    if ( v6 )
    {
      strcpy((char *)s, "failed to i2c lock");
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_read_reg",
        12,
        302,
        100,
        _828);
      return -1;
    }
    else
    {
      v19 = 0;
      if ( find_c_map((int *)dword_1B6058, (int)&ptr, &v19) == 1 )
      {
        v7 = v19;
        snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d", *v19, v19[1]);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
          171,
          "i2c_read_reg",
          12,
          309,
          20,
          _828);
        if ( a5 )
        {
          while ( 1 )
          {
            v9 = v7[1];
            v10 = v9 >> 4 << 20;
            v11 = *v7 << 26;
            v12 = (v9 << 15) & 0x70000;
            if ( a3 == 2 )
              v13 = v11 | 0x3000000;
            else
              v13 = v11 | 0x3080000;
            v14 = v13 | v10 | v12 | ((*a2 + v6) << 8);
            if ( !sub_D4270() )
            {
              strcpy((char *)s, "iic not ready 4 read1");
              V_LOCK();
              logfmt_raw(_828, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
                171,
                "i2c_read_reg",
                12,
                331,
                100,
                _828);
              free(v19);
              pthread_mutex_unlock(&stru_1B605C);
              return -2;
            }
            fpga_write(48, v14);
            snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d, config = %08x", *v7, v7[1], v14);
            V_LOCK();
            logfmt_raw(_828, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
              171,
              "i2c_read_reg",
              12,
              337,
              20,
              _828);
            v8 = sub_D42CC((_BYTE *)(a4 + v6));
            v6 += a3 + 1;
            if ( !v8 )
              break;
            if ( a5 <= v6 )
              goto LABEL_13;
          }
          strcpy((char *)s, "iic failed to read data");
          V_LOCK();
          logfmt_raw(_828, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
            171,
            "i2c_read_reg",
            12,
            344,
            100,
            _828);
          free(v19);
          pthread_mutex_unlock(&stru_1B605C);
          return -3;
        }
        else
        {
LABEL_13:
          free(v19);
          pthread_mutex_unlock(&stru_1B605C);
          return a5;
        }
      }
      else
      {
        snprintf((char *)s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_reg", ptr);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
          171,
          "i2c_read_reg",
          12,
          352,
          100,
          _828);
        pthread_mutex_unlock(&stru_1B605C);
        return -2;
      }
    }
  }
}
