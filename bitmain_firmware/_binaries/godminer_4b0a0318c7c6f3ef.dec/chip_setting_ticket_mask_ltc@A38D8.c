int __fastcall chip_setting_ticket_mask_ltc(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r8
  int v5; // r3
  int v6; // r1
  int v7; // r3
  void (__fastcall *v8)(_DWORD *, unsigned int *); // r3
  int v9; // r3
  int v10; // r9
  int i; // r2
  int v12; // r3
  int v13; // r1
  int v15; // r4
  int v16; // [sp+Ch] [bp-1014h]
  unsigned int v17; // [sp+10h] [bp-1010h] BYREF
  int v18; // [sp+18h] [bp-1008h]
  char v19; // [sp+1Ch] [bp-1004h]
  char v20; // [sp+1Dh] [bp-1003h]
  char v21; // [sp+1Eh] [bp-1002h]
  char v22[4096]; // [sp+20h] [bp-1000h] BYREF

  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_LOCK();
  LOWORD(v5) = 4276;
  HIWORD(v5) = (unsigned int)"ops_rvn" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v5, "chip_setting_ticket_mask_ltc", 2, a2, v16, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v6) = 4072;
  HIWORD(v6) = (unsigned int)"VN" >> 16;
  zlog(*v4, v6, 176, "chip_setting_ticket_mask_ltc", 28, 146, 60, v22);
  v7 = a1[89];
  v18 = 131073;
  v17 = (unsigned __int16)a2;
  v20 = v7;
  v21 = 1;
  v8 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[70];
  v19 = 0;
  v8(a1, &v17);
  usleep(0x3E8u);
  v9 = a1[89];
  v18 = 262145;
  v21 = 1;
  v17 = HIWORD(a2);
  v20 = v9;
  v19 = 0;
  v10 = ((int (__fastcall *)(_DWORD *, unsigned int *))a1[70])(a1, &v17);
  if ( (a2 & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
    }
    v15 = i + 17;
  }
  else
  {
    v15 = 16;
  }
  a1[112] = v15;
  V_LOCK();
  LOWORD(v12) = 4308;
  HIWORD(v12) = (unsigned int)"debug_ctrl_rvn" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v12, v15);
  V_UNLOCK();
  LOWORD(v13) = 4072;
  HIWORD(v13) = (unsigned int)"VN" >> 16;
  zlog(*v4, v13, 176, "chip_setting_ticket_mask_ltc", 28, 177, 60, v22);
  return v10;
}
