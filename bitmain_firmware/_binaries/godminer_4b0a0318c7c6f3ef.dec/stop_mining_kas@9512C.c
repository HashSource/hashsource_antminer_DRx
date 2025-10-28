int __fastcall stop_mining_kas(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  int v6; // r0
  int (**v7)(); // r0
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -4356;
  HIWORD(v1) = (unsigned int)"set_nonce_count_zero_kas" >> 16;
  V_LOCK();
  LOWORD(v3) = -13840;
  HIWORD(v3) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v3, v1 + 1592);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v4, v5, 171, v1 + 1608, 15, 1054, 60, v9);
  v6 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v7 = dev_ctrl(v6);
  ((void (__fastcall *)(_DWORD))v7[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  sub_9131C((int *)a1, 127);
  set_reset_kas(a1);
  set_core_reset_kas(a1);
  set_inactive_kas(a1);
  return 0;
}
