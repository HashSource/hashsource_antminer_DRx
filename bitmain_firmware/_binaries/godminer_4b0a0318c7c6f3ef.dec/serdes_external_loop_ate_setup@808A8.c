int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  char *v7; // r1
  _DWORD *v8; // r11
  int v9; // r7
  int v10; // r1
  int v11; // r8
  char *v12; // r1
  int v13; // r1
  char *v14; // r3
  char *v15; // r1
  int v16; // r1
  _DWORD v19[7]; // [sp+30h] [bp-1064h] BYREF
  int v20; // [sp+4Ch] [bp-1048h]
  _DWORD v21[7]; // [sp+50h] [bp-1044h] BYREF
  int v22; // [sp+6Ch] [bp-1028h]
  _DWORD v23[7]; // [sp+70h] [bp-1024h] BYREF
  int v24; // [sp+8Ch] [bp-1008h]
  char v25[4100]; // [sp+90h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = 27372;
  HIWORD(v7) = (unsigned int)":" >> 16;
  LOWORD(v8) = 20532;
  HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v19, v7, *(int *)(a1 + 256));
  LOWORD(v9) = -13840;
  HIWORD(v9) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    v9,
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v10) = -11432;
  HIWORD(v10) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  LOWORD(v11) = -11180;
  zlog(*v8, v10, 174, "serdes_external_loop_ate_setup", 30, 1544, 60, v25);
  V_LOCK();
  LOWORD(v12) = 27372;
  HIWORD(v12) = (unsigned int)":" >> 16;
  V_INT((int)v21, v12, *(int *)(a1 + 256));
  HIWORD(v11) = (unsigned int)"verriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r" >> 16;
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    v11,
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v13) = -11432;
  HIWORD(v13) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v8, v13, 174, "serdes_external_loop_ate_setup", 30, 1546, 60, v25);
  if ( LFSR31 )
  {
    sub_7F86C(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&loc_110010 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&dword_10000 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&loc_110010 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    v14 = (char *)&dword_10000 + 1;
  }
  else
  {
    sub_7F86C(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, 1638425);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, (int)&loc_90008 + 1);
    sub_7F86C(a1, a3, 78, -2144251757);
    sub_7F86C(a1, a3, 77, 1638425);
    sub_7F86C(a1, a3, 78, -2144251757);
    v14 = (char *)&loc_90008;
  }
  sub_7F86C(a1, a3, 77, (int)v14);
  sub_7F86C(a1, a3, 78, -2144251757);
  usleep(0xFA0u);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK();
  LOWORD(v15) = 27372;
  HIWORD(v15) = (unsigned int)":" >> 16;
  V_INT((int)v23, v15, *(int *)(a1 + 256));
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v24,
    v23[0],
    v23[1],
    v23[2],
    v23[3],
    v23[4],
    v23[5],
    v23[6],
    v24,
    "%s Introducing error",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  LOWORD(v16) = -11432;
  HIWORD(v16) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v8, v16, 174, "serdes_external_loop_ate_setup", 30, 1575, 60, v25);
  sub_7F86C(a1, a3, 77, 716778169);
  sub_7F86C(a1, a3, 78, -2144251791);
  sub_7F86C(a1, a3, 77, 715729577);
  sub_7F86C(a1, a3, 78, -2144251791);
  usleep((__useconds_t)&stru_13880);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, (int)&dword_10000 + 1);
  return 0;
}
