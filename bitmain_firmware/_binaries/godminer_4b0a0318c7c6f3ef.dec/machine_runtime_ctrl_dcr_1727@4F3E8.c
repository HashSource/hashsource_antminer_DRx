void *machine_runtime_ctrl_dcr_1727()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[5], 0, 0x5Cu);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -3732;
    LOWORD(v3) = -3536;
    HIWORD(v2) = (unsigned int)&loc_4F174 >> 16;
    HIWORD(v3) = (unsigned int)&loc_4F238 >> 16;
    LOWORD(v4) = 12424;
    v8[0] = v2;
    LOWORD(v2) = 12620;
    HIWORD(v4) = (unsigned int)start_voltage_monitor_base >> 16;
    HIWORD(v2) = (unsigned int)&loc_532BC >> 16;
    v8[1] = v3;
    LOWORD(v3) = 13196;
    v8[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_534FC >> 16;
    LOWORD(v4) = -3388;
    v8[3] = v2;
    LOWORD(v2) = 13516;
    HIWORD(v4) = (unsigned int)&loc_4F2CC >> 16;
    HIWORD(v2) = (unsigned int)&loc_5363C >> 16;
    v8[4] = v3;
    v8[6] = v4;
    v8[7] = v2;
    LOWORD(v4) = 19048;
    LOWORD(v2) = 10236;
    HIWORD(v4) = (unsigned int)&loc_54BF4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = start_freq_compensate_thread_base;
    LOWORD(v3) = 13548;
    v8[9] = v4;
    HIWORD(v3) = (unsigned int)&loc_5365C >> 16;
    LOWORD(v4) = 17344;
    v8[10] = v2;
    LOWORD(v2) = 18828;
    HIWORD(v4) = (unsigned int)&loc_5454C >> 16;
    HIWORD(v2) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = v3;
    v8[12] = v4;
    v8[13] = v2;
    LOWORD(v4) = 14904;
    LOWORD(v2) = 10728;
    HIWORD(v4) = (unsigned int)&loc_53BC4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = reset_mining_base;
    v8[15] = v4;
    v8[16] = v2;
    LOWORD(v2) = -14596;
    HIWORD(v2) = (unsigned int)"start_mining_kas" >> 16;
    v8[21] = 3000000;
    v8[20] = "tu_t_table";
    v8[25] = &loc_30D40;
    v8[29] = v2;
    v8[19] = 35;
    v8[26] = 1143029760;
    v8[28] = 1065353216;
    v8[22] = 20;
    v8[24] = 1680;
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
