int __fastcall serdes_external_loop_ate_setup_rvn(int a1, int a2, int a3, int a4)
{
  char *v7; // r9
  int v8; // r7
  int v9; // r8
  int v10; // r11
  _DWORD *v11; // r10
  _DWORD v14[7]; // [sp+38h] [bp-1044h] BYREF
  int v15; // [sp+54h] [bp-1028h]
  _DWORD v16[7]; // [sp+58h] [bp-1024h] BYREF
  int v17; // [sp+74h] [bp-1008h]
  char v18[4100]; // [sp+78h] [bp-1004h] BYREF

  LOWORD(v7) = 27372;
  V_LOCK();
  HIWORD(v7) = (unsigned int)":" >> 16;
  LOWORD(v8) = 10604;
  LOWORD(v9) = -13840;
  HIWORD(v8) = (unsigned int)"ore %d reg %04x rdata %08x" >> 16;
  LOWORD(v10) = 11320;
  V_INT((int)v14, v7, *(int *)(a1 + 256));
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  LOWORD(v11) = 20532;
  HIWORD(v9) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v9, v8 + 432);
  V_UNLOCK();
  zlog(*v11, v10, 174, v8 + 468, 34, 710, 60, v18);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  V_LOCK();
  V_INT((int)v16, v7, *(int *)(a1 + 256));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s Introducing error",
    "serdes_external_loop_ate_setup_rvn");
  V_UNLOCK();
  zlog(*v11, v10, 174, v8 + 468, 34, 721, 60, v18);
  sub_AEAEC(a1, a3, 77, (int)&loc_110010 + 1);
  sub_AEAEC(a1, a3, 78, -2144251791);
  sub_AEAEC(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AEAEC(a1, a3, 78, -2144251791);
  usleep(0xAu);
  serdes_wait_status_rvn(a1, a2, a3, 4244, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4244, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4756, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4756, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5268, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5268, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5780, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5780, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  return 0;
}
