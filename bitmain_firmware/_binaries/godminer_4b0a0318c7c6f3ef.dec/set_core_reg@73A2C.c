int __fastcall set_core_reg(int a1, char a2, int a3, int a4)
{
  int v4; // r6
  int v9; // r3
  _DWORD *v10; // r2
  int v11; // r1
  int v13; // [sp+Ch] [bp-1018h]
  int v14; // [sp+10h] [bp-1014h] BYREF
  __int16 v15; // [sp+18h] [bp-100Ch]
  __int16 v16; // [sp+1Ah] [bp-100Ah]
  char v17; // [sp+1Ch] [bp-1008h]
  char v18; // [sp+1Dh] [bp-1007h]
  char v19[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v4) = -21460;
  HIWORD(v4) = (unsigned int)&unk_16AFEC >> 16;
  V_LOCK();
  LOWORD(v9) = -19256;
  HIWORD(v9) = (unsigned int)"get_addr_DCR_1727" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v9, v4 + 1408 + 0xC, a3, a4, v13, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v10) = 20532;
  HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v11) = -19880;
  HIWORD(v11) = (unsigned int)"_1727" >> 16;
  zlog(*v10, v11, 173, v4 + 1424 + 0xC, 0xCu, 344, 20, v19);
  v17 = a2;
  v15 = 1;
  v16 = a3;
  v14 = a4;
  v18 = 0xCu;
  return (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v14);
}
