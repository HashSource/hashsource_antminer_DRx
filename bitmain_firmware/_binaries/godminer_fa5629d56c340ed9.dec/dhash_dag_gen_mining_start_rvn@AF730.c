void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 18940;
  HIWORD(v1) = (unsigned int)"n" >> 16;
  V_LOCK();
  LOWORD(v3) = -8076;
  HIWORD(v3) = (unsigned int)"" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 - 3840);
  V_UNLOCK();
  LOWORD(v4) = 24916;
  HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v5) = 15232;
  HIWORD(v5) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v4, v5, 171, v1 - 3808, 30, 3679, 40, v6);
  dram_bist_rvn(a1);
}
