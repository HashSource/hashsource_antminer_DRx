int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B571C )
    return sub_CA290((void *)dword_1B5718, a1);
  v2 = sub_CA67C();
  if ( v2 >= 0 )
    return sub_CA290((void *)dword_1B5718, a1);
  LOWORD(v4) = -28548;
  HIWORD(v4) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/releas"
                             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_uart.c" >> 16;
  snprintf(s, 0x800u, v4, "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = 24916;
  HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v6) = -28900;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v5, v6, 173, "bitmain_set_voltage_by_n", 24, 730, 100, v8);
  return v2;
}
