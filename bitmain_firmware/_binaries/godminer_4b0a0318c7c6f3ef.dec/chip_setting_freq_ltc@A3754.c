int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r3
  bool v5; // zf
  signed int v7; // r1
  signed int v8; // r4
  char v9; // r3
  unsigned int v10; // r2
  float v11; // s17
  unsigned int v12; // r7
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r3
  int v16; // r1
  int v17; // r4
  int v19; // [sp+10h] [bp-1014h] BYREF
  int v20; // [sp+14h] [bp-1010h]
  int v21; // [sp+18h] [bp-100Ch]
  int v22; // [sp+1Ch] [bp-1008h]
  char v23[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v5 = a2 == 0;
  v21 = 0;
  v20 = 0;
  v22 = 0;
  v19 = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 504);
  LOBYTE(v21) = a2;
  v7 = 7;
  if ( v5 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v21) = 8;
  BYTE1(v21) = v4;
  while ( 2 )
  {
    v8 = (unsigned __int8)v7;
    do
    {
      v9 = v8 - 1;
      v10 = (unsigned int)(float)((float)v8 * (float)((float)v7 * v3));
      if ( v10 - 800 <= 0x640 )
      {
        v12 = v8 | 0xA0000100 | (16 * v7) | ((v10 / 0x19) << 16);
        v13 = sub_1451E0(25 * (v10 / 0x19), v7);
        v11 = (float)sub_1451E0(v13, v8);
        goto LABEL_12;
      }
      v8 = (unsigned __int8)(v8 - 1);
    }
    while ( v9 );
    if ( --v7 )
      continue;
    break;
  }
  v11 = 0.0;
  v12 = 0;
LABEL_12:
  V_LOCK();
  LOWORD(v14) = -21648;
  HIWORD(v14) = (unsigned int)"rlboard_DASH_1766" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v14, v11, v3, v12, v20, v21, v22);
  V_UNLOCK();
  LOWORD(v15) = 20532;
  HIWORD(v15) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v16) = 4072;
  HIWORD(v16) = (unsigned int)"VN" >> 16;
  zlog(*v15, v16, 176, "chip_setting_freq_ltc", 21, 135, 60, v23);
  v17 = (*(int (__fastcall **)(int, int *))(a1 + 276))(a1, &v19);
  usleep(0x2710u);
  return v17;
}
