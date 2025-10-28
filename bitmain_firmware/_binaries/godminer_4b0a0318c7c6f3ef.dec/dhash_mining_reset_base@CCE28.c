int __fastcall dhash_mining_reset_base(int a1)
{
  char *v2; // r1
  int v3; // r5
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r0
  int (**v7)(); // r0
  unsigned int v8; // r0
  int (**v9)(); // r0
  unsigned int v10; // r0
  int (**v11)(); // r0
  int v12; // r0
  int (**v13)(); // r0
  _DWORD v15[7]; // [sp+28h] [bp-1020h] BYREF
  int v16; // [sp+44h] [bp-1004h]
  char v17[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v15, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 32456;
  HIWORD(v3) = (unsigned int)"d " >> 16;
  logfmt_raw(v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 31772;
  HIWORD(v5) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  zlog(*v4, v5, 150, "dhash_mining_reset_base", 23, 706, 80, v17);
  v6 = (*(int (__fastcall **)(int))(a1 + 4))(a1);
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  v7 = dev_ctrl(v6);
  ((void (__fastcall *)(_DWORD))v7[8])(*(_DWORD *)(a1 + 248));
  v8 = sleep(0xAu);
  v9 = dev_ctrl(v8);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v9[7])(
    *(_DWORD *)(a1 + 248),
    *(_DWORD *)(a1 + 1000),
    *(_DWORD *)(a1 + 1024));
  v10 = sleep(1u);
  v11 = dev_ctrl(v10);
  v12 = ((int (__fastcall *)(_DWORD))v11[14])(*(_DWORD *)(a1 + 248));
  v13 = dev_ctrl(v12);
  ((void (__fastcall *)(_DWORD))v13[1])(*(_DWORD *)(a1 + 248));
  return (*(int (__fastcall **)(int))(a1 + 16))(a1);
}
