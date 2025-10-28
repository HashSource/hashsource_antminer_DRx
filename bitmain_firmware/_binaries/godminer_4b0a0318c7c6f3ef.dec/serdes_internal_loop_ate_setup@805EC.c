int __fastcall serdes_internal_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r10
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD v13[7]; // [sp+28h] [bp+0h] BYREF
  int v14; // [sp+44h] [bp+1Ch]
  char v15[4100]; // [sp+48h] [bp+20h] BYREF

  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  LOWORD(v9) = -12460;
  HIWORD(v9) = (unsigned int)"%04x reg %02x state %08x" >> 16;
  V_INT((int)v13, v8, *(int *)(a1 + 256));
  logfmt_raw(v15, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, "%s ...", v9 + 324);
  V_UNLOCK();
  LOWORD(v10) = 20532;
  HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v11) = -11432;
  HIWORD(v11) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v10, v11, 174, v9 + 356, 30, 849, 60, v15);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  sub_7F86C(a1, a3, 77, (int)&loc_110010 + 1);
  sub_7F86C(a1, a3, 78, -2144251791);
  sub_7F86C(a1, a3, 77, 65537);
  sub_7F86C(a1, a3, 78, -2144251791);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, 65537);
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, 65537);
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, 65537);
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, 65537);
  return 0;
}
