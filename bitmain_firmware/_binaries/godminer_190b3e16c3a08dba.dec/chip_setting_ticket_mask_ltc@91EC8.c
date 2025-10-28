int __fastcall chip_setting_ticket_mask_ltc(_DWORD *a1, unsigned int a2)
{
  int v4; // r3
  void (__fastcall *v5)(_DWORD *, unsigned int *); // r3
  int v6; // r3
  int v7; // r9
  int i; // r2
  int v10; // r4
  int v11; // [sp+Ch] [bp-1014h]
  unsigned int v12; // [sp+10h] [bp-1010h] BYREF
  int v13; // [sp+18h] [bp-1008h]
  char v14; // [sp+1Ch] [bp-1004h]
  char v15; // [sp+1Dh] [bp-1003h]
  char v16; // [sp+1Eh] [bp-1002h]
  char v17[4096]; // [sp+20h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "ticket_mask %s reg %02x tm %08x", "chip_setting_ticket_mask_ltc", 2, a2, v11, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v17);
  v4 = a1[77];
  v13 = 131073;
  v12 = (unsigned __int16)a2;
  v15 = v4;
  v16 = 1;
  v5 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[61];
  v14 = 0;
  v5(a1, &v12);
  usleep(0x3E8u);
  v6 = a1[77];
  v13 = 262145;
  v16 = 1;
  v12 = HIWORD(a2);
  v15 = v6;
  v14 = 0;
  v7 = ((int (__fastcall *)(_DWORD *, unsigned int *))a1[61])(a1, &v12);
  if ( (a2 & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
    }
    v10 = i + 17;
  }
  else
  {
    v10 = 16;
  }
  a1[100] = v10;
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "cal mask %d", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_ticket_mask_ltc",
    28,
    177,
    60,
    v17);
  return v7;
}
