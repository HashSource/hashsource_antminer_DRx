int __fastcall dram_bist_check_ltc_status_rvn(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  _DWORD *v9; // r4
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  char v21[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v9) = 24916;
  V_LOCK();
  LOWORD(v8) = 15972;
  HIWORD(v8) = (unsigned int)"" >> 16;
  HIWORD(v9) = (unsigned int)&unk_1B503C >> 16;
  logfmt_raw(v21, 0x1000u, 0, v8, "dram_bist_check_ltc_status_rvn", a4, a1, a2);
  V_UNLOCK();
  LOWORD(v10) = 15232;
  HIWORD(v10) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v9, v10, 171, "dram_bist_check_ltc_status_rvn", 30, 2557, 40, v21);
  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v16) = 16020;
      HIWORD(v16) = (unsigned int)"baud_rvn" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v16, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2561;
      break;
    case 1:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v17) = 16064;
      HIWORD(v17) = (unsigned int)"Setting_get_core_status_RVN" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v17, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2565;
      break;
    case 2:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v18) = 16108;
      HIWORD(v18) = (unsigned int)"core_status_RVN" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v18, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2569;
      break;
    case 4:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK();
      LOWORD(v19) = 16196;
      HIWORD(v19) = (unsigned int)"c_RVN" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v19, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2577;
      break;
    case 6:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v11) = 16152;
      HIWORD(v11) = (unsigned int)"RVN" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v11, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2573;
      break;
    default:
      V_LOCK();
      LOWORD(v20) = 16244;
      HIWORD(v20) = (unsigned int)"ic_RVN" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v20, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v12 = *v9;
      v13 = 2580;
      break;
  }
  LOWORD(v14) = 15232;
  HIWORD(v14) = (unsigned int)"mask_ltc" >> 16;
  zlog(v12, v14, 171, "dram_bist_check_ltc_status_rvn", 30, v13, 40, v21);
  return 0;
}
