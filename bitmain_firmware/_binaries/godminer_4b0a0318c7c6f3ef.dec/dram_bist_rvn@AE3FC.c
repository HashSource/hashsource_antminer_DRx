void __fastcall __noreturn dram_bist_rvn(int a1)
{
  int v1; // r8
  int v3; // r3
  _DWORD *v4; // r9
  int v5; // r1
  char *v6; // r11
  int v7; // r10
  _DWORD v8[4]; // [sp+30h] [bp-1124h] BYREF
  int v9; // [sp+40h] [bp-1114h] BYREF
  int v10; // [sp+44h] [bp-1110h]
  int v11; // [sp+48h] [bp-110Ch]
  int v12; // [sp+4Ch] [bp-1108h]
  int v13; // [sp+50h] [bp-1104h]
  int v14; // [sp+54h] [bp-1100h]
  int v15; // [sp+58h] [bp-10FCh]
  int v16; // [sp+5Ch] [bp-10F8h]
  _DWORD v17[7]; // [sp+60h] [bp-10F4h] BYREF
  int v18; // [sp+7Ch] [bp-10D8h]
  _BYTE s[208]; // [sp+80h] [bp-10D4h] BYREF
  char v20[4100]; // [sp+150h] [bp-1004h] BYREF

  LOWORD(v1) = 12784;
  HIWORD(v1) = (unsigned int)&unk_1735B0 >> 16;
  memset(s, 0, sizeof(s));
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v20, 0x1000u, 0, v3, v1 - 3944);
  V_UNLOCK();
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 - 3928, 13, 3330, 40, v20);
  LOWORD(v6) = 27372;
  sub_A4884(a1, 9699344);
  v9 = -58331;
  HIWORD(v6) = (unsigned int)":" >> 16;
  v11 = 6356993;
  v12 = 0;
  LOWORD(v7) = -23880;
  v10 = 0;
  HIWORD(v7) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  V_LOCK();
  V_INT((int)v17, v6, *(int *)(a1 + 256));
  logfmt_raw(
    v20,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "set bist err num threshold %08x",
    v9);
  V_UNLOCK();
  zlog(*v4, v7, 150, v1 - 3912, 38, 302, 40, v20);
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  v8[1] = 0;
  v8[2] = 6553601;
  v8[3] = 0;
  v8[0] = 1100;
  V_LOCK();
  V_INT((int)&v9, v6, *(int *)(a1 + 256));
  logfmt_raw(v20, 0x1000u, 0, v16, v9, v10, v11, v12, v13, v14, v15, v16, "set retin on %08x", 1100);
  V_UNLOCK();
  zlog(*v4, v7, 150, v1 - 3872, 28, 316, 40, v20);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v8);
  usleep(0x2710u);
  dram_pre_bist0_rvn(a1, 0);
  dram_pre_bist1_rvn(a1, 0);
  dram_bist_check_and_repair_rvn(a1, 0, 0);
}
