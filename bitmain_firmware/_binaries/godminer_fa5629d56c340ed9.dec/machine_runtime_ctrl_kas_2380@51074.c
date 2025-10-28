void *machine_runtime_ctrl_kas_2380()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r2
  int v4; // r1
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 14360;
    HIWORD(v2) = (unsigned int)&loc_5314C >> 16;
    v8[0] = 327980;
    v8[1] = 328456;
    v8[2] = v2;
    LOWORD(v3) = 4168;
    LOWORD(v2) = 15624;
    HIWORD(v3) = (unsigned int)&loc_50BBC >> 16;
    HIWORD(v2) = (unsigned int)&loc_5363C >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v4) = 15016;
    v8[6] = v3;
    HIWORD(v4) = (unsigned int)&loc_533DC >> 16;
    v8[7] = v2;
    LOWORD(v2) = 12172;
    HIWORD(v2) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = v4;
    v8[9] = 328228;
    v8[10] = v2;
    LOWORD(v2) = 20992;
    HIWORD(v2) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = set_frequency_with_voltage_kas;
    LOWORD(v4) = 21204;
    v8[12] = 328752;
    HIWORD(v4) = (unsigned int)&loc_54BEC >> 16;
    LOWORD(v3) = 17040;
    v8[13] = v2;
    LOWORD(v2) = 12664;
    HIWORD(v3) = (unsigned int)&off_53BC4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = v4;
    v8[15] = v3;
    v8[16] = v2;
    LOWORD(v2) = -8972;
    HIWORD(v2) = (unsigned int)"orize failed reason: %s" >> 16;
    v8[21] = "t cnt: %08x";
    v8[20] = "l";
    v8[25] = &loc_30D40;
    v8[29] = v2;
    v8[28] = 1065353216;
    v8[26] = 1147617280;
    v8[19] = 35;
    v8[22] = 20;
    v8[24] = 1700;
    memcpy(v0, v8, 0x78u);
  }
  else
  {
    LOWORD(v6) = -9612;
    LOWORD(v7) = -27836;
    HIWORD(v6) = (unsigned int)"_hash to header_hash_ptr in parse_notify" >> 16;
    HIWORD(v7) = (unsigned int)"rate_real" >> 16;
    printf(v7, v6);
  }
  return v1;
}
