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
  int v14; // r4
  int v16; // [sp+10h] [bp-1014h] BYREF
  int v17; // [sp+14h] [bp-1010h]
  int v18; // [sp+18h] [bp-100Ch]
  int v19; // [sp+1Ch] [bp-1008h]
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v5 = a2 == 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v16 = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 512);
  LOBYTE(v18) = a2;
  v7 = 7;
  if ( v5 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v18) = 8;
  BYTE1(v18) = v4;
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
        v13 = sub_146690(25 * (v10 / 0x19), v7);
        v11 = (float)sub_146690(v13, v8);
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
  logfmt_raw(v20, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v11, v3, v12, v17, v18, v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v20);
  v14 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v16);
  usleep(0x2710u);
  return v14;
}
