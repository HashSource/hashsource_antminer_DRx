int __fastcall set_core_mode_dash(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  int v9; // [sp+Ch] [bp-1018h]
  _DWORD v10[3]; // [sp+10h] [bp-1014h] BYREF
  int v11; // [sp+1Ch] [bp-1008h]
  char v12[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = -21460;
  HIWORD(v2) = (unsigned int)&unk_16AFEC >> 16;
  V_LOCK();
  LOWORD(v5) = -19192;
  HIWORD(v5) = (unsigned int)"ce_dcr" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v5, v2 + 1500, 1, a2, v9, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = -19880;
  HIWORD(v7) = (unsigned int)"_1727" >> 16;
  zlog(*v6, v7, 173, v2 + 1520, 18, 377, 20, v12);
  LOWORD(v11) = 3327;
  v10[2] = 65537;
  v10[0] = a2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v10);
}
