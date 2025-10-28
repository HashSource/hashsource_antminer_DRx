int __fastcall top_init_eth(int a1)
{
  int v2; // r4
  char *v3; // r1
  _DWORD *v4; // r7
  int v5; // r1
  int v6; // r2
  int v7; // r3
  void (__fastcall *v8)(int, int); // r3
  int v9; // r1
  char *v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r3
  int result; // r0
  char *v15; // r1
  int v16; // r4
  int v17; // r1
  char *v18; // r1
  int v19; // r5
  int v20; // r1
  _DWORD v21[7]; // [sp+28h] [bp-1080h] BYREF
  int v22; // [sp+44h] [bp-1064h]
  _DWORD v23[7]; // [sp+48h] [bp-1060h] BYREF
  int v24; // [sp+64h] [bp-1044h]
  int v25; // [sp+68h] [bp-1040h] BYREF
  int v26; // [sp+6Ch] [bp-103Ch]
  int v27; // [sp+70h] [bp-1038h]
  int v28; // [sp+74h] [bp-1034h]
  int v29; // [sp+78h] [bp-1030h]
  int v30; // [sp+7Ch] [bp-102Ch]
  int v31; // [sp+80h] [bp-1028h]
  int v32; // [sp+84h] [bp-1024h]
  _DWORD v33[7]; // [sp+88h] [bp-1020h] BYREF
  int v34; // [sp+A4h] [bp-1004h]
  char v35[4096]; // [sp+A8h] [bp-1000h] BYREF

  LOWORD(v2) = -14460;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v21, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(v35, 0x1000u, 0, v22, v21[0], v21[1], v21[2], v21[3], v21[4], v21[5], v21[6], v22, v2, "top_init_eth");
  V_UNLOCK();
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, "top_init_eth", 12, 1969, 60, v35);
  if ( sub_7A750((int *)a1) )
  {
    V_LOCK();
    LOWORD(v18) = 27372;
    HIWORD(v18) = (unsigned int)":" >> 16;
    V_INT((int)v23, v18, *(int *)(a1 + 256));
    LOWORD(v19) = -13784;
    HIWORD(v19) = (unsigned int)"nvalid!" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v24, v23[0], v23[1], v23[2], v23[3], v23[4], v23[5], v23[6], v24, v19, "top_init_eth");
    V_UNLOCK();
    LOWORD(v20) = -14448;
    HIWORD(v20) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v20, 171, "top_init_eth", 12, 1973, 100, v35);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v6 = 0;
    v7 = *(_DWORD *)(a1 + 504) - 1;
    do
      *(_BYTE *)++v7 = v6++;
    while ( v6 != 8 );
    v8 = *(void (__fastcall **)(int, int))(a1 + 268);
    v9 = *(_DWORD *)(a1 + 504);
    *(_DWORD *)(a1 + 444) = 1;
    v8(a1, v9);
    if ( sub_7A750((int *)a1) )
    {
      V_LOCK();
      LOWORD(v15) = 27372;
      HIWORD(v15) = (unsigned int)":" >> 16;
      LOWORD(v16) = -13760;
      V_INT((int)&v25, v15, *(int *)(a1 + 256));
      HIWORD(v16) = (unsigned int)"ket num failed, resp_num: %d, retry_time: %d" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v32, v25, v26, v27, v28, v29, v30, v31, v32, v16, "top_init_eth");
      V_UNLOCK();
      LOWORD(v17) = -14448;
      HIWORD(v17) = (unsigned int)" lost cnt: %08x" >> 16;
      zlog(*v4, v17, 171, "top_init_eth", 12, 1987, 100, v35);
      return 12;
    }
    else
    {
      set_debug_ctrl(a1, 19);
      v26 = 0;
      v28 = 0;
      v25 = 3;
      v27 = 4718593;
      V_LOCK();
      LOWORD(v10) = 27372;
      HIWORD(v10) = (unsigned int)":" >> 16;
      V_INT((int)v33, v10, *(int *)(a1 + 256));
      logfmt_raw(
        v35,
        0x1000u,
        0,
        v34,
        v33[0],
        v33[1],
        v33[2],
        v33[3],
        v33[4],
        v33[5],
        v33[6],
        v34,
        "set analog value %08x",
        v25);
      V_UNLOCK();
      LOWORD(v11) = -23880;
      HIWORD(v11) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
      zlog(*v4, v11, 150, "ChipSetting_analog_mux_ETH", 26, 1058, 40, v35);
      (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v25);
      v12 = sub_78924(a1);
      v13 = *(unsigned __int8 *)(a1 + 476);
      if ( !v12 )
        *(_DWORD *)(a1 + 528) = 1;
      result = 0;
      if ( !v13 )
        *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
    }
  }
  return result;
}
