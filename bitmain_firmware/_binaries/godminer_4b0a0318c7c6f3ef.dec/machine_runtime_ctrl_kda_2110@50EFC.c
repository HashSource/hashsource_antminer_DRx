void *machine_runtime_ctrl_kda_2110()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 3304;
    LOWORD(v3) = 3644;
    LOWORD(v4) = 12424;
    HIWORD(v4) = (unsigned int)start_voltage_monitor_base >> 16;
    HIWORD(v2) = (unsigned int)&loc_50D54 >> 16;
    v8[0] = v2;
    HIWORD(v3) = (unsigned int)&loc_50EA8 >> 16;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 3792;
    LOWORD(v4) = 13516;
    HIWORD(v3) = (unsigned int)&loc_50F3C >> 16;
    HIWORD(v4) = (unsigned int)&loc_5363C >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 12908;
    v8[6] = v3;
    HIWORD(v2) = (unsigned int)&loc_533DC >> 16;
    LOWORD(v3) = 19048;
    v8[7] = v4;
    LOWORD(v4) = 10236;
    HIWORD(v3) = (unsigned int)&loc_54BF4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = v2;
    v8[9] = v3;
    v8[10] = v4;
    LOWORD(v3) = 17344;
    LOWORD(v4) = 18828;
    HIWORD(v3) = (unsigned int)&loc_5454C >> 16;
    HIWORD(v4) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = set_frequency_with_voltage_base;
    LOWORD(v2) = 19040;
    v8[12] = v3;
    HIWORD(v2) = (unsigned int)&loc_54BEC >> 16;
    LOWORD(v3) = 14904;
    v8[13] = v4;
    LOWORD(v4) = 10728;
    HIWORD(v3) = (unsigned int)&loc_53BC4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = v2;
    v8[15] = v3;
    v8[16] = v4;
    LOWORD(v4) = -14596;
    HIWORD(v4) = (unsigned int)"start_mining_kas" >> 16;
    v8[21] = 3000000;
    v8[20] = "tu_t_table";
    v8[25] = &loc_30D40;
    v8[29] = v4;
    v8[28] = 1065353216;
    v8[26] = 1143521280;
    v8[19] = 35;
    v8[22] = 23;
    v8[24] = 1700;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = -15236;
    LOWORD(v7) = 32240;
    HIWORD(v6) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c" >> 16;
    HIWORD(v7) = (unsigned int)"age" >> 16;
    printf(v7, v6);
  }
  return v1;
}
