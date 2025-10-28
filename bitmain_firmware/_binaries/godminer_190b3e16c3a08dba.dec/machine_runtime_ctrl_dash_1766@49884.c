void *machine_runtime_ctrl_dash_1766()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v6; // r1
  const char *v7; // r0
  _DWORD v8[28]; // [sp+0h] [bp-74h] BYREF

  memset(&v8[4], 0, 0x60u);
  v0 = calloc(1u, 0x70u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -27116;
    LOWORD(v3) = -26732;
    HIWORD(v2) = (unsigned int)&loc_494E4 >> 16;
    HIWORD(v3) = (unsigned int)&loc_49664 >> 16;
    LOWORD(v4) = -18968;
    v8[0] = v2;
    LOWORD(v2) = -18600;
    HIWORD(v4) = (unsigned int)&loc_4C554 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4C6C4 >> 16;
    v8[1] = v3;
    LOWORD(v3) = -26776;
    v8[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_49638 >> 16;
    LOWORD(v4) = -17992;
    v8[3] = v2;
    LOWORD(v2) = -21156;
    HIWORD(v4) = (unsigned int)&loc_4C924 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4BCC8 >> 16;
    v8[6] = v3;
    v8[7] = v4;
    v8[8] = v2;
    LOWORD(v4) = -15840;
    LOWORD(v2) = -14428;
    HIWORD(v4) = (unsigned int)&loc_4D834 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4DDE8 >> 16;
    v8[9] = set_frequency_with_voltage_base;
    LOWORD(v3) = -14216;
    v8[10] = v4;
    HIWORD(v3) = (unsigned int)&loc_4DEBC >> 16;
    LOWORD(v4) = -16780;
    v8[11] = v2;
    LOWORD(v2) = -20664;
    HIWORD(v4) = (unsigned int)&loc_4CEAC >> 16;
    HIWORD(v2) = (unsigned int)&loc_4BEB4 >> 16;
    v8[12] = v3;
    v8[13] = v4;
    v8[14] = v2;
    v8[18] = "c_mutex";
    v8[19] = 3000000;
    v8[23] = &loc_30D40;
    v8[17] = 51;
    v8[24] = 1142292480;
    v8[26] = 1065353216;
    v8[20] = 17;
    v8[22] = 1500;
    memcpy(v0, v8, 0x70u);
  }
  else
  {
    LOWORD(v6) = 18612;
    LOWORD(v7) = 2052;
    HIWORD(v6) = (unsigned int)"origin_godminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c" >> 16;
    HIWORD(v7) = (unsigned int)"start_dag_gen_engine_rvn begin!" >> 16;
    printf(v7, v6);
  }
  return v1;
}
