int __fastcall close_core_clk_tops(int a1)
{
  int v1; // r6
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[2]; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+18h] [bp-FFCh]
  int v10; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -17656;
  HIWORD(v1) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v8, 0x1000u, 0, v3, v1 + 600);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, v1 + 620, 19, 138, 20, v8);
  v9 = 1441792;
  v10 = 0;
  v8[1] = 0;
  v8[0] = -2147483642;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v9) = 1;
  v6(a1, v8);
  usleep(0x2710u);
  return 0;
}
