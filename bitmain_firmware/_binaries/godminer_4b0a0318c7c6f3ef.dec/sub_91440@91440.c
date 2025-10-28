signed int __fastcall sub_91440(int a1, int a2, char a3, __int16 a4)
{
  float v4; // s0
  signed int v5; // r8
  int v6; // r2
  float v7; // s18
  signed int v8; // r11
  unsigned int v9; // r10
  signed int v10; // r5
  int v11; // r3
  int v12; // r6
  float v13; // s16
  int v14; // r0
  int v15; // r0
  float v16; // s26
  int v17; // r3
  int v19; // r4
  int v20; // r6
  int v24; // [sp+44h] [bp-1038h]
  _DWORD v25[2]; // [sp+48h] [bp-1034h] BYREF
  int v26; // [sp+50h] [bp-102Ch]
  int v27; // [sp+54h] [bp-1028h]
  int v28; // [sp+58h] [bp-1024h] BYREF
  int v29; // [sp+5Ch] [bp-1020h]
  int v30; // [sp+60h] [bp-101Ch]
  int v31; // [sp+64h] [bp-1018h]
  __int64 v32; // [sp+68h] [bp-1014h]
  int v33; // [sp+70h] [bp-100Ch]
  int v34; // [sp+74h] [bp-1008h]
  char v35[4100]; // [sp+78h] [bp-1004h] BYREF

  v26 = 0;
  BYTE1(v26) = a4;
  if ( !a2 )
    a4 = 8;
  v25[1] = 0;
  LOBYTE(v26) = a3;
  v27 = 0;
  v25[0] = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v26) = 12;
  }
  else
  {
    HIWORD(v26) = a4;
  }
  v5 = 2;
  v6 = -1068236443;
  v24 = 2;
LABEL_8:
  v7 = (float)v5;
  v8 = 0;
LABEL_9:
  v10 = v8;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)v10 * (float)((float)v8 * v4)) * v7) / 25.0) * 100.0);
    v12 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v12;
    if ( (unsigned int)(v12 - 16) <= 0xEA )
    {
      v13 = (float)((float)v12 * 25.0) / v7;
      if ( (v5 != 1 || v13 <= 3125.0) && v13 <= 3200.0 && v13 >= 2000.0 )
      {
        v14 = sub_1451E0(25 * v12, v5);
        v15 = sub_1451E0(v14, v8);
        v16 = (float)sub_1451E0(v15, v10);
        v17 = v13 > 2400.0;
        v9 = (v5 << 8) | 0xC0000000 | (16 * v8);
        v6 = v10 & 7 | v9 | (v12 << 16) | (v17 << 28);
        if ( fabsf(v16 - v4) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      if ( ++v8 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v24 == 1 )
      {
        v25[0] = v6;
        V_LOCK();
        V_INT((int)&v28, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v35,
          0x1000u,
          0,
          v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          "KAS_set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_freq_kas_KAS_2380",
          29,
          763,
          40,
          v35);
        goto LABEL_24;
      }
      v24 = 1;
      goto LABEL_8;
    }
  }
  v19 = v12;
  v20 = v10 & 7 | v9 | (v12 << 16) | (v17 << 28);
  V_LOCK();
  logfmt_raw(
    v35,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v4,
    v16,
    v13,
    v19,
    v5,
    v8,
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "inferred_plldivider_kas",
    23,
    686,
    20,
    v35);
  v25[0] = v20;
  V_LOCK();
  V_INT((int)&v28, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v35,
    0x1000u,
    0,
    v34,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    "KAS_set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v16,
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_kas_KAS_2380",
    29,
    763,
    40,
    v35);
  if ( v16 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v25);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
