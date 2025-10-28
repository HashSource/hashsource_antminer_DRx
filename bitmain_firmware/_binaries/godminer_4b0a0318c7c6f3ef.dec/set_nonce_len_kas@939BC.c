int __fastcall set_nonce_len_kas(int a1)
{
  int v1; // r6
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[2]; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+18h] [bp-FFCh]
  int v10; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -4356;
  HIWORD(v1) = (unsigned int)"set_nonce_count_zero_kas" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v8, 0x1000u, 0, v3, v1 + 892);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v4, v5, 171, v1 + 912, 17, 147, 40, v8);
  v9 = 5505024;
  v10 = 0;
  v8[1] = 0;
  v8[0] = 7;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v9) = 1;
  v6(a1, v8);
  usleep(0x2710u);
  return 0;
}
