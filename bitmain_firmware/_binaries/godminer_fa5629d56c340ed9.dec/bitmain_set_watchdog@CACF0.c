int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r2
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r1
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_1B571C )
  {
    v3 = sub_CA67C();
    if ( v3 < 0 )
    {
      LOWORD(v4) = -28548;
      HIWORD(v4) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/re"
                                 "lease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_uart.c" >> 16;
      snprintf((char *)s, 0x800u, v4, "bitmain_set_watchdog");
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v5) = 24916;
      HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
      v6 = 604;
LABEL_7:
      LOWORD(v14) = -28900;
      HIWORD(v14) = (unsigned int)"" >> 16;
      zlog(*v5, v14, 173, "bitmain_set_watchdog", 20, v6, 100, v16);
      return v3;
    }
  }
  result = sub_CA184((void *)dword_1B5718, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    LOWORD(v7) = -28284;
    HIWORD(v7) = (unsigned int)"ing fpga uart%d clear send fifo space ...\n" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v7 += 4;
    s[0] = v8;
    s[1] = v9;
    s[2] = v10;
    s[3] = v11;
    v12 = v7[1];
    v13 = v7[2];
    s[4] = *v7;
    s[5] = v12;
    s[6] = v13;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = 24916;
    HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
    v6 = 616;
    goto LABEL_7;
  }
  return result;
}
