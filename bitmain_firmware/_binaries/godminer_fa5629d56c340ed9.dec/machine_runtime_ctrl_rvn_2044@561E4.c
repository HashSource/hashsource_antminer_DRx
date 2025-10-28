void *machine_runtime_ctrl_rvn_2044()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[30]; // [sp+0h] [bp-78h] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 25052;
    LOWORD(v3) = 25052;
    HIWORD(v2) = (unsigned int)&loc_55AF4 >> 16;
    LOWORD(v4) = 14360;
    HIWORD(v3) = (unsigned int)&loc_55AF4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    v8[0] = v2;
    v8[1] = v3;
    v8[2] = v4;
    LOWORD(v3) = 15624;
    LOWORD(v4) = 15016;
    HIWORD(v3) = (unsigned int)&loc_5363C >> 16;
    HIWORD(v4) = (unsigned int)&loc_533DC >> 16;
    v8[3] = start_voltage_monitor_base;
    LOWORD(v2) = 21212;
    v8[7] = v3;
    HIWORD(v2) = (unsigned int)&loc_54BF4 >> 16;
    LOWORD(v3) = 12172;
    v8[8] = v4;
    LOWORD(v4) = 15656;
    HIWORD(v3) = (unsigned int)&loc_528C0 >> 16;
    HIWORD(v4) = (unsigned int)&loc_5365C >> 16;
    v8[9] = v2;
    v8[10] = v3;
    v8[11] = v4;
    LOWORD(v3) = 20992;
    LOWORD(v4) = 21204;
    HIWORD(v3) = (unsigned int)&loc_54B18 >> 16;
    HIWORD(v4) = (unsigned int)&loc_54BEC >> 16;
    v8[12] = start_mining_base;
    LOWORD(v2) = 17040;
    v8[13] = v3;
    HIWORD(v2) = (unsigned int)&off_53BC4 >> 16;
    LOWORD(v3) = 12664;
    v8[14] = v4;
    LOWORD(v4) = -8960;
    HIWORD(v3) = (unsigned int)&loc_52AAC >> 16;
    HIWORD(v4) = (unsigned int)" reason: %s" >> 16;
    v8[15] = v2;
    v8[16] = v3;
    v8[29] = v4;
    v8[19] = 35;
    v8[26] = 1145569280;
    v8[28] = 1065353216;
    v8[20] = 19200;
    v8[21] = 19200;
    v8[22] = 20;
    v8[24] = 1480;
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
