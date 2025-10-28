int __fastcall sub_748C8(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  unsigned int v4; // r6
  int v5; // r7
  float v6; // s11
  int v7; // r10
  int v8; // r8
  int v9; // r9
  int v10; // r5
  float v11; // s6
  float v12; // s15
  int v13; // r3
  int v14; // r1
  float v15; // s16
  float v16; // s17
  int v18; // r4
  __int64 v20; // [sp+38h] [bp-48h]
  int v23; // [sp+4Ch] [bp-34h]
  _DWORD v24[2]; // [sp+50h] [bp-30h] BYREF
  int v25; // [sp+58h] [bp-28h]
  int v26; // [sp+5Ch] [bp-24h]
  int v27; // [sp+60h] [bp-20h] BYREF
  int v28; // [sp+64h] [bp-1Ch]
  int v29; // [sp+68h] [bp-18h]
  int v30; // [sp+6Ch] [bp-14h]
  __int64 v31; // [sp+70h] [bp-10h]
  int v32; // [sp+78h] [bp-8h]
  int v33; // [sp+7Ch] [bp-4h]
  char v34[4100]; // [sp+80h] [bp+0h] BYREF

  v3 = 0;
  v25 = 0;
  v24[1] = 0;
  v26 = 0;
  v24[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v25) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v25) = 12;
  }
  else
  {
    HIWORD(v25) = v3;
  }
  v4 = -1068236443;
  v5 = 2;
  v23 = 2;
LABEL_8:
  v6 = (float)v5;
  v7 = 0;
  v8 = 0;
LABEL_9:
  v9 = v8 + 1;
  v10 = v8;
  v11 = (float)(v8 + 1);
  while ( 1 )
  {
    v12 = (float)(v10 + 1);
    v13 = (int)(float)((float)((float)((float)((float)(v2 * v11) * v12) * v6) / 25.0) * 100.0);
    v20 = 1374389535LL * v13;
    v14 = v13 / 100;
    if ( v13 % 100 > 50 )
      ++v14;
    if ( (unsigned int)(v14 - 16) <= 0xEA )
    {
      v15 = (float)((float)v14 * 25.0) / v6;
      if ( (v5 != 1 || v15 <= 3125.0) && v15 <= 3200.0 && v15 >= 2000.0 )
      {
        v4 = v10 & 7 | (v5 << 8) | 0xC0000000 | v7 | (v14 << 16) | ((v15 > 2400.0) << 28);
        v16 = (float)(v15 / v11) / v12;
        if ( fabsf(v16 - v2) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      v7 += 16;
      ++v8;
      if ( v9 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v23 == 1 )
      {
        v24[0] = v4;
        V_LOCK();
        V_INT((int)&v27, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v34,
          0x1000u,
          0,
          v33,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          "set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v2,
          v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_freq_DCR_1727",
          25,
          813,
          40,
          v34);
        goto LABEL_24;
      }
      v23 = 1;
      goto LABEL_8;
    }
  }
  v18 = v14;
  V_LOCK();
  logfmt_raw(
    v34,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v2,
    v16,
    v15,
    v18,
    v5,
    v8,
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "inferred_plldivider",
    19,
    636,
    20,
    v34);
  v24[0] = v4;
  V_LOCK();
  V_INT((int)&v27, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v34,
    0x1000u,
    0,
    v33,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v16,
    v2,
    v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_DCR_1727",
    25,
    813,
    40,
    v34);
  if ( v16 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v24);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
