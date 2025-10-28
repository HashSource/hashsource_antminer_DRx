int __fastcall sub_76D5C(int a1)
{
  int v2; // r6
  int v3; // r2
  int v4; // r0
  int v5; // r9
  int *v6; // r5
  int v7; // r0
  int v8; // r12
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v13; // [sp+4h] [bp-10E0h]
  int v14; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v16; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD v17[2]; // [sp+50h] [bp-1094h] BYREF
  int v18; // [sp+58h] [bp-108Ch]
  int v19; // [sp+5Ch] [bp-1088h]
  _DWORD v20[7]; // [sp+60h] [bp-1084h] BYREF
  int v21; // [sp+7Ch] [bp-1068h]
  _DWORD v22[7]; // [sp+80h] [bp-1064h] BYREF
  int v23; // [sp+9Ch] [bp-1048h]
  _DWORD v24[7]; // [sp+A0h] [bp-1044h] BYREF
  int v25; // [sp+BCh] [bp-1028h]
  _DWORD v26[7]; // [sp+C0h] [bp-1024h] BYREF
  int v27; // [sp+DCh] [bp-1008h]
  char v28[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 260));
  v2 = 0;
  logfmt_raw(
    v28,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "get hash clock count chip_no %d",
    *(_DWORD *)(a1 + 356));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_hash_clock_count_DCR_1727",
    37,
    1006,
    20,
    v28);
  v18 = 393217;
  v17[1] = 0;
  v17[0] = 1;
  v19 = 255;
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 284))(a1, v17) < 0 )
  {
    V_LOCK();
    v14 = -1;
    V_INT((int)v22, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "%s failed, set reg:%02x",
      "ChipSetting_hash_clock_count_DCR_1727",
      HIWORD(v18));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_hash_clock_count_DCR_1727",
      37,
      1015,
      100,
      v28);
  }
  else
  {
    usleep(0x4E20u);
    v3 = *(_DWORD *)(a1 + 356);
    v4 = *(_DWORD *)(a1 + 360);
    v18 = 458753;
    v5 = v4 * v3;
    LOBYTE(v19) = 0;
    ptr = (int *)calloc(12 * v4 * v3, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD))(a1 + 320))(
      a1,
      v17,
      v5,
      ptr,
      &v16,
      v13,
      2000,
      0);
    v14 = 0;
    if ( v16 > 0 )
    {
      v6 = ptr;
      do
      {
        v10 = *v6;
        v11 = *((unsigned __int16 *)v6 + 3);
        HIBYTE(v22[0]) = *v6;
        BYTE2(v22[0]) = BYTE1(v10);
        BYTE1(v22[0]) = BYTE2(v10);
        LOBYTE(v22[0]) = HIBYTE(v10);
        if ( v11 == 7 )
        {
          V_LOCK();
          ++v14;
          V_INT((int)v24, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v28,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "[Hash clk cnt] chip %02x, core %02x, reg %02x, clk_cnt %08x",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            *((unsigned __int16 *)v6 + 3),
            v22[0]);
          V_UNLOCK();
          v7 = g_zc;
          v8 = 40;
          v9 = 1034;
        }
        else
        {
          V_LOCK();
          V_INT((int)v26, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v28,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "[Hash clk cnt] chip %02x, expected reg %02x, but %02x, clk_cnt %08x",
            *((unsigned __int8 *)v6 + 4),
            7,
            *((unsigned __int16 *)v6 + 3),
            v22[0]);
          V_UNLOCK();
          v7 = g_zc;
          v8 = 100;
          v9 = 1037;
        }
        ++v2;
        v6 += 3;
        zlog(
          v7,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_hash_clock_count_DCR_1727",
          37,
          v9,
          v8,
          v28);
      }
      while ( v16 > v2 );
    }
    free(ptr);
  }
  return v14;
}
