int __fastcall i2c_write(int a1, int a2, int a3)
{
  _DWORD *v5; // r6
  int v6; // r7
  int v7; // r5
  int v8; // r7
  int v9; // t1
  int v10; // r4
  int v12; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1804h] BYREF
  char v15[4100]; // [sp+820h] [bp-1004h] BYREF

  v12 = a1;
  if ( pthread_mutex_lock(&stru_1B605C) )
  {
    strcpy((char *)s, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "i2c_write",
      9,
      244,
      100,
      v15);
    return -1;
  }
  else
  {
    ptr = 0;
    if ( find_c_map((int *)dword_1B6058, (int)&v12, &ptr) == 1 )
    {
      v5 = ptr;
      snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_write",
        9,
        251,
        20,
        v15);
      if ( a3 )
      {
        v6 = a2 + a3;
        v7 = a2 - 1;
        v8 = v6 - 1;
        while ( 1 )
        {
          v9 = *(unsigned __int8 *)++v7;
          v10 = v9 | (v5[1] >> 4 << 20) | (*v5 << 26) | (v5[1] << 15) & 0x70000;
          if ( !sub_D4270() )
            break;
          fpga_write(48, v10);
          if ( v8 == v7 )
            goto LABEL_8;
        }
        free(ptr);
        strcpy((char *)s, "iic not ready 4 write");
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
          171,
          "i2c_write",
          9,
          266,
          100,
          v15);
        pthread_mutex_unlock(&stru_1B605C);
        return -2;
      }
      else
      {
LABEL_8:
        free(ptr);
        pthread_mutex_unlock(&stru_1B605C);
        return a3;
      }
    }
    else
    {
      snprintf((char *)s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write", v12);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_write",
        9,
        276,
        100,
        v15);
      pthread_mutex_unlock(&stru_1B605C);
      return -2;
    }
  }
}
