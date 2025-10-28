int __fastcall stop_mining_eth(int a1)
{
  int v1; // r7
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r0
  int (**v7)(); // r0
  void (__fastcall *v8)(int, unsigned int *); // r3
  unsigned int v10; // [sp+10h] [bp-1004h] BYREF
  int v11; // [sp+14h] [bp-1000h]
  int v12; // [sp+18h] [bp-FFCh]
  int v13; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -17656;
  HIWORD(v1) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v3) = -13840;
  HIWORD(v3) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw((char *)&v10, 0x1000u, 0, v3, v1 + 704);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, v1 + 720, 15, 1728, 60, &v10);
  v6 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v7 = dev_ctrl(v6);
  ((void (__fastcall *)(_DWORD))v7[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  set_ticketmask(a1, 1);
  set_core_reset(a1);
  v11 = 0;
  v12 = 1310721;
  v13 = 0;
  v10 = 274347265;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 5373953;
  v13 = 0;
  v11 = 0;
  v10 = 9;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 5701633;
  v13 = 0;
  v11 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 276);
  v10 = 1;
  v8(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  v12 = 5636097;
  v13 = 0;
  v11 = 0;
  v10 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 276))(a1, &v10);
  usleep((__useconds_t)&stru_186A0);
  sub_78DDC(a1, 12, 2);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
