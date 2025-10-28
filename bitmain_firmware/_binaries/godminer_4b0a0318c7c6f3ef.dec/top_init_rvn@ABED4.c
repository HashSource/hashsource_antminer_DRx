int __fastcall top_init_rvn(int a1)
{
  int v2; // r8
  char *v3; // r1
  _DWORD *v4; // r7
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  char *v9; // r1
  int v10; // r4
  int v11; // r1
  _DWORD v13[7]; // [sp+28h] [bp-1044h] BYREF
  int v14; // [sp+44h] [bp-1028h]
  _DWORD v15[7]; // [sp+48h] [bp-1024h] BYREF
  int v16; // [sp+64h] [bp-1008h]
  char v17[4100]; // [sp+68h] [bp-1004h] BYREF

  LOWORD(v2) = -14460;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v13, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v2, "top_init_rvn");
  V_UNLOCK();
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, "top_init_rvn", 12, 2283, 60, v17);
  if ( !sub_A5790((int *)a1) )
  {
    reset_chip_reg_rvn(a1);
    sleep(0xAu);
    v6 = 0;
    v7 = *(_DWORD *)(a1 + 504) - 1;
    do
      *(_BYTE *)++v7 = v6++;
    while ( v6 != 8 );
    v8 = *(_DWORD *)(a1 + 504);
    *(_DWORD *)(a1 + 444) = 1;
    (*(void (__fastcall **)(int, int))(a1 + 268))(a1, v8);
    sub_A5790((int *)a1);
    setup_clk_rvn(a1);
    set_baud_rvn(a1, (int)"tu_t_table");
    sub_A4884(a1, 5250832);
    usleep(0x2710u);
    cache_and_dag_gen_rvn(a1);
    while ( 1 )
      ;
  }
  V_LOCK();
  LOWORD(v9) = 27372;
  HIWORD(v9) = (unsigned int)":" >> 16;
  V_INT((int)v15, v9, *(int *)(a1 + 256));
  LOWORD(v10) = -13784;
  HIWORD(v10) = (unsigned int)"nvalid!" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v10, "top_init_rvn");
  V_UNLOCK();
  LOWORD(v11) = 9076;
  HIWORD(v11) = (unsigned int)"" >> 16;
  zlog(*v4, v11, 171, "top_init_rvn", 12, 2287, 100, v17);
  return 12;
}
