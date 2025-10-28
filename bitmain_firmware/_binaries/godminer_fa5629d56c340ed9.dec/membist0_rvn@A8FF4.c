int __fastcall membist0_rvn(int a1)
{
  int v2; // r5
  char *v3; // r4
  int v4; // r0
  char *v5; // r5
  char *v6; // r4
  int v7; // r0
  char *v8; // r5
  char *v9; // r3
  char *v10; // r4
  int v11; // r0
  char *v12; // r5
  char *v13; // r3
  char *v14; // r5
  int *v15; // r9
  int v16; // r3
  __int64 v17; // r0
  unsigned int v18; // r2
  int v19; // t1
  int v20; // r0
  int (**v21)(); // r0
  char *v23; // r3
  int v24; // [sp+38h] [bp-12E4h]
  size_t n; // [sp+3Ch] [bp-12E0h]
  char *ptr; // [sp+40h] [bp-12DCh]
  int *v27; // [sp+54h] [bp-12C8h]
  _DWORD v28[5]; // [sp+64h] [bp-12B8h] BYREF
  _DWORD v29[7]; // [sp+78h] [bp-12A4h] BYREF
  int v30; // [sp+94h] [bp-1288h]
  _DWORD v31[7]; // [sp+98h] [bp-1284h] BYREF
  int v32; // [sp+B4h] [bp-1268h]
  _DWORD v33[7]; // [sp+B8h] [bp-1264h] BYREF
  int v34; // [sp+D4h] [bp-1248h]
  _DWORD v35[7]; // [sp+D8h] [bp-1244h] BYREF
  int v36; // [sp+F4h] [bp-1228h]
  _DWORD v37[7]; // [sp+F8h] [bp-1224h] BYREF
  int v38; // [sp+114h] [bp-1208h]
  char s[512]; // [sp+118h] [bp-1204h] BYREF
  char v40[4100]; // [sp+318h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "%s...", "membist0_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "membist0_rvn",
    12,
    814,
    20,
    v40);
  v28[0] = -2023406815;
  v28[1] = 1266163410;
  v28[2] = 2015285835;
  v28[3] = 517098360;
  v28[4] = -766805986;
  memset(s, 0, sizeof(s));
  v27 = v28;
  v24 = 0;
  ptr = (char *)malloc(0x1800u);
  do
  {
    V_LOCK();
    V_INT((int)v29, "chain", *(int *)(a1 + 260));
    v2 = *v27++;
    n = 0;
    logfmt_raw(
      v40,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "membist final pattern %08x",
      v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "membist0_rvn",
      12,
      823,
      60,
      v40);
    sub_A55C8(a1, 164, v2);
    do
    {
      sub_A56BC(a1, n, 28, 1);
      sub_A56BC(a1, n, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v3 = ptr;
      v4 = sub_A5A30(a1, (unsigned __int16)n, 161, ptr);
      if ( v4 > 0 )
      {
        v5 = &ptr[12 * v4];
        do
        {
          while ( (*(_DWORD *)v3 & 0x80) == 0 )
          {
            V_LOCK();
            v3 += 12;
            V_INT((int)v33, "chain", *(int *)(a1 + 260));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v34,
              v33[0],
              v33[1],
              v33[2],
              v33[3],
              v33[4],
              v33[5],
              v33[6],
              v34,
              "chip %02x core %02x membist not done!",
              (unsigned __int8)*(v3 - 8),
              (unsigned __int8)*(v3 - 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "membist0_rvn",
              12,
              845,
              100,
              v40);
            if ( v3 == v5 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v3 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v31, "chain", *(int *)(a1 + 260));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v32,
              v31[0],
              v31[1],
              v31[2],
              v31[3],
              v31[4],
              v31[5],
              v31[6],
              v32,
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v3[4],
              (unsigned __int8)v3[8],
              bswap32(*(_DWORD *)v3));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "membist0_rvn",
              12,
              839,
              100,
              v40);
            v23 = &v40[64 * (unsigned __int8)v3[4] + 4 * v24];
            *((_DWORD *)v23 - 128) += bswap32(*(_DWORD *)v3) & 0x7FFFFF;
          }
          v3 += 12;
        }
        while ( v3 != v5 );
      }
LABEL_10:
      v6 = ptr;
      v7 = sub_A5A30(a1, (unsigned __int16)n, 162, ptr);
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
          V_INT((int)v35, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v36,
            v35[0],
            v35[1],
            v35[2],
            v35[3],
            v35[4],
            v35[5],
            v35[6],
            v36,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v6 - 8),
            (unsigned __int8)*(v6 - 4),
            bswap32(*((_DWORD *)v6 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist0_rvn",
            12,
            854,
            100,
            v40);
          v9 = &v40[64 * (unsigned __int8)*(v6 - 8) + 4 * v24];
          *((_DWORD *)v9 - 128) += bswap32(*((_DWORD *)v6 - 3)) & 0x7FFFFF;
        }
        while ( v6 != v8 );
      }
LABEL_16:
      v10 = ptr;
      v11 = sub_A5A30(a1, (unsigned __int16)n, 163, ptr);
      if ( v11 > 0 )
      {
        v12 = &ptr[12 * v11];
        do
        {
          while ( (*(_DWORD *)v10 & 0xFFFF00) == 0 || (*(_DWORD *)v10 & 0xC0) == 0 )
          {
            v10 += 12;
            if ( v12 == v10 )
              goto LABEL_22;
          }
          V_LOCK();
          v10 += 12;
          V_INT((int)v37, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v38,
            v37[0],
            v37[1],
            v37[2],
            v37[3],
            v37[4],
            v37[5],
            v37[6],
            v38,
            "chip %02x core %02x rvnbist err cnt: %08x",
            (unsigned __int8)*(v10 - 8),
            (unsigned __int8)*(v10 - 4),
            bswap32(*((_DWORD *)v10 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist0_rvn",
            12,
            864,
            100,
            v40);
          v13 = &v40[64 * (unsigned __int8)*(v10 - 8) + 4 * v24];
          *((_DWORD *)v13 - 128) += bswap32(*((_DWORD *)v10 - 3)) & 0x7FFF;
        }
        while ( v12 != v10 );
      }
LABEL_22:
      ++n;
    }
    while ( n != 64 );
    ++v24;
  }
  while ( v24 != 5 );
  v14 = s;
  free(ptr);
  memset(v40, 0, 0x40u);
  v15 = v28;
  do
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)&v14[64 * v16++];
      v17 += v18;
    }
    while ( v16 != 8 );
    v19 = *v15++;
    v14 += 4;
    v20 = sprintf(v40, "<mbist0 %08x> %ld", v19, 8);
  }
  while ( &s[20] != v14 );
  v21 = dev_ctrl(v20);
  ((void (__fastcall *)(_DWORD))v21[25])(*(_DWORD *)(a1 + 252));
  return 0;
}
