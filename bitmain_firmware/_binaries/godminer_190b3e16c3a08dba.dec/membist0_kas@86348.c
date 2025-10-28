int __fastcall membist0_kas(int a1)
{
  int v2; // r4
  char *v3; // r4
  int v4; // r0
  char *v5; // r5
  char *v6; // r4
  int v7; // r0
  char *v8; // r5
  char *v9; // r4
  int v10; // r0
  char *v11; // r5
  _DWORD *v12; // r4
  int *v13; // r8
  int v14; // r3
  __int64 v15; // r0
  unsigned int v16; // r2
  int v17; // t1
  int v18; // r0
  int (**v19)(); // r0
  int v21; // [sp+38h] [bp-2E0h]
  int v22; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  int *v24; // [sp+54h] [bp-2C4h]
  _DWORD v25[5]; // [sp+64h] [bp-2B4h] BYREF
  _DWORD v26[7]; // [sp+78h] [bp-2A0h] BYREF
  int v27; // [sp+94h] [bp-284h]
  _DWORD v28[7]; // [sp+98h] [bp-280h] BYREF
  int v29; // [sp+B4h] [bp-264h]
  _DWORD v30[7]; // [sp+B8h] [bp-260h] BYREF
  int v31; // [sp+D4h] [bp-244h]
  _DWORD v32[7]; // [sp+D8h] [bp-240h] BYREF
  int v33; // [sp+F4h] [bp-224h]
  _DWORD v34[7]; // [sp+F8h] [bp-220h] BYREF
  int v35; // [sp+114h] [bp-204h]
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v37[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "%s...", "membist0_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "membist0_kas",
    12,
    542,
    20,
    v37);
  v25[0] = -2023406815;
  v25[1] = 1266163410;
  v25[2] = 2015285835;
  v25[3] = 517098360;
  v25[4] = -766805986;
  memset(s, 0, sizeof(s));
  v24 = v25;
  v21 = 0;
  ptr = (char *)malloc(0x300u);
  do
  {
    V_LOCK();
    V_INT((int)v26, "chain", *(int *)(a1 + 224));
    v2 = *v24++;
    v22 = 0;
    logfmt_raw(
      v37,
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
      "membist final pattern %08x",
      v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      171,
      "membist0_kas",
      12,
      551,
      60,
      v37);
    sub_828BC(a1, 164, v2);
    do
    {
      sub_82900(a1, v22, 28, 1);
      sub_82900(a1, v22, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v3 = ptr;
      v4 = sub_82C6C(a1, (unsigned __int16)v22, 161, ptr);
      if ( v4 > 0 )
      {
        v5 = &ptr[12 * v4];
        do
        {
          while ( (*(_DWORD *)v3 & 0x80) == 0 )
          {
            V_LOCK();
            v3 += 12;
            V_INT((int)v30, "chain", *(int *)(a1 + 224));
            logfmt_raw(
              v37,
              0x1000u,
              0,
              v31,
              v30[0],
              v30[1],
              v30[2],
              v30[3],
              v30[4],
              v30[5],
              v30[6],
              v31,
              "chip %02x core %02x membist not done!",
              (unsigned __int8)*(v3 - 8),
              (unsigned __int8)*(v3 - 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
              171,
              "membist0_kas",
              12,
              573,
              100,
              v37);
            if ( v3 == v5 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v3 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v28, "chain", *(int *)(a1 + 224));
            logfmt_raw(
              v37,
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
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v3[4],
              (unsigned __int8)v3[8],
              bswap32(*(_DWORD *)v3));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
              171,
              "membist0_kas",
              12,
              567,
              100,
              v37);
            s[16 * (unsigned __int8)v3[4] + v21] += bswap32(*(_DWORD *)v3) & 0x7FFFFF;
          }
          v3 += 12;
        }
        while ( v3 != v5 );
      }
LABEL_10:
      v6 = ptr;
      v7 = sub_82C6C(a1, (unsigned __int16)v22, 162, ptr);
      if ( v7 > 0 )
      {
        v8 = &ptr[12 * v7];
        do
        {
          while ( (*(_DWORD *)v6 & 0xFFFFFF00) == 0 || (*(_DWORD *)v6 & 0x80) == 0 )
          {
            v6 += 12;
            if ( v6 == v8 )
              goto LABEL_16;
          }
          V_LOCK();
          v6 += 12;
          V_INT((int)v32, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v37,
            0x1000u,
            0,
            v33,
            v32[0],
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v33,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v6 - 8),
            (unsigned __int8)*(v6 - 4),
            bswap32(*((_DWORD *)v6 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
            171,
            "membist0_kas",
            12,
            582,
            100,
            v37);
          s[16 * (unsigned __int8)*(v6 - 8) + v21] += bswap32(*((_DWORD *)v6 - 3)) & 0x7FFFFF;
        }
        while ( v6 != v8 );
      }
LABEL_16:
      v9 = ptr;
      v10 = sub_82C6C(a1, (unsigned __int16)v22, 163, ptr);
      if ( v10 > 0 )
      {
        v11 = &ptr[12 * v10];
        do
        {
          while ( (*(_DWORD *)v9 & 0xFFFF00) == 0 || (*(_DWORD *)v9 & 0xC0) == 0 )
          {
            v9 += 12;
            if ( v11 == v9 )
              goto LABEL_22;
          }
          V_LOCK();
          v9 += 12;
          V_INT((int)v34, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v37,
            0x1000u,
            0,
            v35,
            v34[0],
            v34[1],
            v34[2],
            v34[3],
            v34[4],
            v34[5],
            v34[6],
            v35,
            "chip %02x core %02x kasbist err cnt: %08x",
            (unsigned __int8)*(v9 - 8),
            (unsigned __int8)*(v9 - 4),
            bswap32(*((_DWORD *)v9 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
            171,
            "membist0_kas",
            12,
            592,
            100,
            v37);
          s[16 * (unsigned __int8)*(v9 - 8) + v21] += bswap32(*((_DWORD *)v9 - 3)) & 0x7FFF;
        }
        while ( v11 != v9 );
      }
LABEL_22:
      ++v22;
    }
    while ( v22 != 8 );
    ++v21;
  }
  while ( v21 != 5 );
  v12 = s;
  free(ptr);
  memset(v37, 0, 0x40u);
  v13 = v25;
  do
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = v12[16 * v14++];
      v15 += v16;
    }
    while ( v14 != 8 );
    v17 = *v13++;
    ++v12;
    v18 = sprintf(v37, "<mbist0 %08x> %lld", v17, v15);
  }
  while ( &s[5] != v12 );
  v19 = dev_ctrl(v18);
  ((void (__fastcall *)(_DWORD))v19[20])(*(_DWORD *)(a1 + 220));
  return 0;
}
