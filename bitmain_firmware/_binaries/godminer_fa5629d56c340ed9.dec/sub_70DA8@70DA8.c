int __fastcall sub_70DA8(int a1, int a2)
{
  int v4; // r2
  int v5; // r7
  int v6; // r7
  int v7; // r7
  int *v8; // r6
  int v9; // r0
  int v10; // r12
  int v11; // r2
  int v12; // r3
  int v13; // r8
  int v15; // [sp+4h] [bp-10E8h]
  int v16; // [sp+38h] [bp-10B4h]
  int *ptr; // [sp+4Ch] [bp-10A0h]
  int v18; // [sp+54h] [bp-1098h] BYREF
  _DWORD v19[2]; // [sp+58h] [bp-1094h] BYREF
  int v20; // [sp+60h] [bp-108Ch]
  int v21; // [sp+64h] [bp-1088h]
  _DWORD v22[7]; // [sp+68h] [bp-1084h] BYREF
  int v23; // [sp+84h] [bp-1068h]
  _DWORD v24[7]; // [sp+88h] [bp-1064h] BYREF
  int v25; // [sp+A4h] [bp-1048h]
  _DWORD v26[7]; // [sp+A8h] [bp-1044h] BYREF
  int v27; // [sp+C4h] [bp-1028h]
  _DWORD v28[7]; // [sp+C8h] [bp-1024h] BYREF
  int v29; // [sp+E4h] [bp-1008h]
  char v30[4100]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v30,
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
    "set clock delay chip_no %d, value %08x",
    *(_DWORD *)(a1 + 356),
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_clock_delay_DASH_1766",
    33,
    911,
    40,
    v30);
  v19[1] = 0;
  v21 = 255;
  v19[0] = a2;
  v20 = 1;
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 284))(a1, v19) < 0 )
  {
    V_LOCK();
    v16 = -1;
    V_INT((int)v24, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v30,
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
      "%s failed, set reg:%02x",
      "ChipSetting_clock_delay_DASH_1766",
      HIWORD(v20));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_clock_delay_DASH_1766",
      33,
      920,
      100,
      v30);
  }
  else
  {
    usleep((__useconds_t)&stru_18698.st_size);
    v4 = *(_DWORD *)(a1 + 356);
    v5 = *(_DWORD *)(a1 + 360);
    LOBYTE(v21) = 0;
    v6 = v5 * v4;
    ptr = (int *)calloc(12 * v6, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD))(a1 + 320))(
      a1,
      v19,
      v6,
      ptr,
      &v18,
      v15,
      2000,
      0);
    if ( v18 > 0 )
    {
      v7 = 0;
      v16 = 0;
      v8 = ptr;
      do
      {
        v12 = *v8;
        v13 = *((unsigned __int16 *)v8 + 3);
        HIBYTE(v24[0]) = *v8;
        BYTE2(v24[0]) = BYTE1(v12);
        BYTE1(v24[0]) = BYTE2(v12);
        LOBYTE(v24[0]) = HIBYTE(v12);
        V_LOCK();
        if ( v13 )
        {
          V_INT((int)v28, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v29,
            v28[0],
            v28[1],
            v28[2],
            v28[3],
            v28[4],
            v28[5],
            v28[6],
            v29,
            "[DP] chip %02x, expected reg %02x, but %02x, data %08x",
            *((unsigned __int8 *)v8 + 4),
            0,
            *((unsigned __int16 *)v8 + 3),
            v24[0]);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 100;
          v11 = 939;
        }
        else
        {
          ++v16;
          V_INT((int)v26, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v30,
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
            "[DP] chip %02x, core %02x, reg %02x, clk_delay %08x",
            *((unsigned __int8 *)v8 + 4),
            *((unsigned __int8 *)v8 + 8),
            *((unsigned __int16 *)v8 + 3),
            v24[0]);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 20;
          v11 = 936;
        }
        ++v7;
        v8 += 3;
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_clock_delay_DASH_1766",
          33,
          v11,
          v10,
          v30);
      }
      while ( v18 > v7 );
    }
    else
    {
      v16 = 0;
    }
    free(ptr);
  }
  return v16;
}
