int __fastcall stop_mining_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r0
  int (**v7)(); // r0
  char v9[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v1) = 4600;
  HIWORD(v1) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_LOCK();
  LOWORD(v3) = -13840;
  HIWORD(v3) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v3, v1 + 796);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 + 812, 15, 2140, 60, v9);
  v6 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v7 = dev_ctrl(v6);
  ((void (__fastcall *)(_DWORD))v7[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  set_ticketmask_rvn(a1, 63);
  set_reset_rvn(a1);
  set_core_reset_rvn(a1);
  set_inactive_rvn(a1);
  return 0;
}
