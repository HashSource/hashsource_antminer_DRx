void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 12784;
  HIWORD(v1) = (unsigned int)&unk_1735B0 >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 - 3840);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 - 3808, 30, 3679, 40, v6);
  dram_bist_rvn(a1);
}
