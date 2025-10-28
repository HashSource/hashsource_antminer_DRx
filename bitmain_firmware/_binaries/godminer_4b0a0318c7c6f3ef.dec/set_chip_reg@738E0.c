int __fastcall set_chip_reg(int a1, char a2, char a3, int a4, int a5)
{
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD v11[2]; // [sp+10h] [bp-1010h] BYREF
  char v12; // [sp+18h] [bp-1008h]
  char v13; // [sp+19h] [bp-1007h]
  __int16 v14; // [sp+1Ah] [bp-1006h]
  int v15; // [sp+1Ch] [bp-1004h]
  char v16[4064]; // [sp+20h] [bp-1000h] BYREF

  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = 0;
  v11[1] = 0;
  v11[0] = a5;
  V_LOCK();
  LOWORD(v7) = -19288;
  HIWORD(v7) = (unsigned int)"trlboard_DCR_1727" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v7, a4, a5);
  V_UNLOCK();
  LOWORD(v8) = 20532;
  HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v9) = -19880;
  HIWORD(v9) = (unsigned int)"_1727" >> 16;
  zlog(*v8, v9, 173, "set_chip_reg", 12, 314, 40, v16);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v11);
}
