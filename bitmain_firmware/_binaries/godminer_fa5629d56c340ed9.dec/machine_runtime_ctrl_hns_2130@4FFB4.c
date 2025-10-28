void *machine_runtime_ctrl_hns_2130()
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
    LOWORD(v2) = -624;
    LOWORD(v3) = -776;
    HIWORD(v2) = (unsigned int)&loc_4F904 >> 16;
    HIWORD(v3) = (unsigned int)&off_4F86C >> 16;
    LOWORD(v4) = 14360;
    v8[0] = v2;
    LOWORD(v2) = 14728;
    HIWORD(v4) = (unsigned int)&loc_5314C >> 16;
    HIWORD(v2) = (unsigned int)&loc_532BC >> 16;
    v8[1] = v3;
    LOWORD(v3) = 15304;
    v8[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_534FC >> 16;
    LOWORD(v4) = -120;
    v8[3] = v2;
    LOWORD(v2) = 15624;
    HIWORD(v4) = (unsigned int)&loc_4FAFC >> 16;
    HIWORD(v2) = (unsigned int)&loc_5363C >> 16;
    v8[4] = v3;
    v8[6] = v4;
    v8[7] = v2;
    LOWORD(v4) = 21212;
    LOWORD(v2) = 12172;
    HIWORD(v4) = (unsigned int)&loc_54BF4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_528C0 >> 16;
    v8[8] = start_freq_compensate_thread_base;
    LOWORD(v3) = 15656;
    v8[9] = v4;
    HIWORD(v3) = (unsigned int)&loc_5365C >> 16;
    LOWORD(v4) = 19480;
    v8[10] = v2;
    LOWORD(v2) = 20992;
    HIWORD(v4) = (unsigned int)&loc_5454C >> 16;
    HIWORD(v2) = (unsigned int)&loc_54B18 >> 16;
    v8[11] = v3;
    v8[12] = v4;
    v8[13] = v2;
    LOWORD(v4) = 17040;
    LOWORD(v2) = 12664;
    HIWORD(v4) = (unsigned int)&off_53BC4 >> 16;
    HIWORD(v2) = (unsigned int)&loc_52AAC >> 16;
    v8[14] = reset_mining_base;
    v8[15] = v4;
    v8[16] = v2;
    LOWORD(v2) = -8972;
    HIWORD(v2) = (unsigned int)"orize failed reason: %s" >> 16;
    v8[21] = 3000000;
    v8[20] = "l";
    v8[25] = &loc_493E0;
    v8[29] = v2;
    v8[19] = 37;
    v8[26] = 1141882880;
    v8[28] = 1065353216;
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
