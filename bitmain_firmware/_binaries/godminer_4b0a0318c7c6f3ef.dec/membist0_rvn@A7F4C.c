int __fastcall membist0_rvn(int a1)
{
  int v2; // r3
  _DWORD *v3; // r9
  int v4; // r1
  char *v5; // r4
  _DWORD *v6; // r11
  int v7; // r5
  int v8; // r1
  char *v9; // r4
  int v10; // r0
  char *v11; // r5
  int v12; // r1
  char *v13; // r4
  int v14; // r0
  char *v15; // r5
  int v16; // r1
  char *v17; // r3
  char *v18; // r4
  int v19; // r0
  int v20; // r9
  char *v21; // r5
  int v22; // r1
  char *v23; // r3
  char *v24; // r5
  const char *v25; // r4
  int *v26; // r9
  int v27; // r3
  __int64 v28; // r0
  unsigned int v29; // r2
  int v30; // t1
  int v31; // r0
  int (**v32)(); // r0
  int v34; // r1
  char *v35; // r3
  char *v36; // [sp+30h] [bp-12ECh]
  int v37; // [sp+38h] [bp-12E4h]
  size_t n; // [sp+3Ch] [bp-12E0h]
  char *ptr; // [sp+40h] [bp-12DCh]
  char *v40; // [sp+44h] [bp-12D8h]
  int *v41; // [sp+54h] [bp-12C8h]
  _DWORD v42[5]; // [sp+64h] [bp-12B8h] BYREF
  _DWORD v43[7]; // [sp+78h] [bp-12A4h] BYREF
  int v44; // [sp+94h] [bp-1288h]
  _DWORD v45[7]; // [sp+98h] [bp-1284h] BYREF
  int v46; // [sp+B4h] [bp-1268h]
  _DWORD v47[7]; // [sp+B8h] [bp-1264h] BYREF
  int v48; // [sp+D4h] [bp-1248h]
  _DWORD v49[7]; // [sp+D8h] [bp-1244h] BYREF
  int v50; // [sp+F4h] [bp-1228h]
  _DWORD v51[7]; // [sp+F8h] [bp-1224h] BYREF
  int v52; // [sp+114h] [bp-1208h]
  char s[512]; // [sp+118h] [bp-1204h] BYREF
  char v54[4100]; // [sp+318h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  LOWORD(v3) = 20532;
  logfmt_raw(v54, 0x1000u, 0, v2, "membist0_rvn");
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v4) = 9076;
  HIWORD(v4) = (unsigned int)"" >> 16;
  zlog(*v3, v4, 171, "membist0_rvn", 12, 814, 20, v54);
  LOWORD(v5) = 27372;
  v42[0] = -2023406815;
  v42[1] = 1266163410;
  v42[2] = 2015285835;
  v42[3] = 517098360;
  HIWORD(v5) = (unsigned int)":" >> 16;
  v36 = v5;
  LOWORD(v5) = -13160;
  v42[4] = -766805986;
  memset(s, 0, sizeof(s));
  v41 = v42;
  HIWORD(v5) = (unsigned int)"e" >> 16;
  v40 = v5;
  v37 = 0;
  ptr = (char *)malloc(0x1800u);
  do
  {
    V_LOCK();
    v6 = v3;
    V_INT((int)v43, v36, *(int *)(a1 + 256));
    v7 = *v41++;
    n = 0;
    logfmt_raw(
      v54,
      0x1000u,
      0,
      v44,
      v43[0],
      v43[1],
      v43[2],
      v43[3],
      v43[4],
      v43[5],
      v43[6],
      v44,
      "membist final pattern %08x",
      v7);
    V_UNLOCK();
    LOWORD(v8) = 9076;
    HIWORD(v8) = (unsigned int)"" >> 16;
    zlog(*v3, v8, 171, "membist0_rvn", 12, 823, 60, v54);
    sub_A4520(a1, 164, v7);
    do
    {
      sub_A4614(a1, n, 28, 1);
      sub_A4614(a1, n, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v9 = ptr;
      v10 = sub_A4988(a1, (unsigned __int16)n, 161, ptr);
      if ( v10 > 0 )
      {
        v11 = &ptr[12 * v10];
        do
        {
          while ( (*(_DWORD *)v9 & 0x80) == 0 )
          {
            V_LOCK();
            v9 += 12;
            V_INT((int)v47, v36, *(int *)(a1 + 256));
            logfmt_raw(
              v54,
              0x1000u,
              0,
              v48,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              v47[5],
              v47[6],
              v48,
              v40,
              (unsigned __int8)*(v9 - 8),
              (unsigned __int8)*(v9 - 4));
            V_UNLOCK();
            LOWORD(v12) = 9076;
            HIWORD(v12) = (unsigned int)"" >> 16;
            zlog(*v6, v12, 171, "membist0_rvn", 12, 845, 100, v54);
            if ( v9 == v11 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v9 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v45, v36, *(int *)(a1 + 256));
            logfmt_raw(
              v54,
              0x1000u,
              0,
              v46,
              v45[0],
              v45[1],
              v45[2],
              v45[3],
              v45[4],
              v45[5],
              v45[6],
              v46,
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v9[4],
              (unsigned __int8)v9[8],
              bswap32(*(_DWORD *)v9));
            V_UNLOCK();
            LOWORD(v34) = 9076;
            HIWORD(v34) = (unsigned int)"" >> 16;
            zlog(*v6, v34, 171, "membist0_rvn", 12, 839, 100, v54);
            v35 = &v54[64 * (unsigned __int8)v9[4] + 4 * v37];
            *((_DWORD *)v35 - 128) += bswap32(*(_DWORD *)v9) & 0x7FFFFF;
          }
          v9 += 12;
        }
        while ( v9 != v11 );
      }
LABEL_10:
      v13 = ptr;
      v14 = sub_A4988(a1, (unsigned __int16)n, 162, ptr);
      if ( v14 > 0 )
      {
        v15 = &ptr[12 * v14];
        do
        {
          while ( (*(_DWORD *)v13 & 0xFFFFFF00) == 0 || (*(_DWORD *)v13 & 0x80) == 0 )
          {
            v13 += 12;
            if ( v13 == v15 )
              goto LABEL_16;
          }
          V_LOCK();
          v13 += 12;
          V_INT((int)v49, v36, *(int *)(a1 + 256));
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v50,
            v49[0],
            v49[1],
            v49[2],
            v49[3],
            v49[4],
            v49[5],
            v49[6],
            v50,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v13 - 8),
            (unsigned __int8)*(v13 - 4),
            bswap32(*((_DWORD *)v13 - 3)));
          V_UNLOCK();
          LOWORD(v16) = 9076;
          HIWORD(v16) = (unsigned int)"" >> 16;
          zlog(*v6, v16, 171, "membist0_rvn", 12, 854, 100, v54);
          v17 = &v54[64 * (unsigned __int8)*(v13 - 8) + 4 * v37];
          *((_DWORD *)v17 - 128) += bswap32(*((_DWORD *)v13 - 3)) & 0x7FFFFF;
        }
        while ( v13 != v15 );
      }
LABEL_16:
      v18 = ptr;
      v19 = sub_A4988(a1, (unsigned __int16)n, 163, ptr);
      if ( v19 > 0 )
      {
        LOWORD(v20) = 9440;
        v21 = &ptr[12 * v19];
        do
        {
          while ( (*(_DWORD *)v18 & 0xFFFF00) == 0 || (*(_DWORD *)v18 & 0xC0) == 0 )
          {
            v18 += 12;
            if ( v21 == v18 )
              goto LABEL_22;
          }
          V_LOCK();
          v18 += 12;
          V_INT((int)v51, v36, *(int *)(a1 + 256));
          HIWORD(v20) = (unsigned int)"atus %02x" >> 16;
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v52,
            v51[0],
            v51[1],
            v51[2],
            v51[3],
            v51[4],
            v51[5],
            v51[6],
            v52,
            v20,
            (unsigned __int8)*(v18 - 8),
            (unsigned __int8)*(v18 - 4),
            bswap32(*((_DWORD *)v18 - 3)));
          V_UNLOCK();
          LOWORD(v22) = 9076;
          HIWORD(v22) = (unsigned int)"" >> 16;
          zlog(*v6, v22, 171, "membist0_rvn", 12, 864, 100, v54);
          v23 = &v54[64 * (unsigned __int8)*(v18 - 8) + 4 * v37];
          *((_DWORD *)v23 - 128) += bswap32(*((_DWORD *)v18 - 3)) & 0x7FFF;
        }
        while ( v21 != v18 );
      }
LABEL_22:
      ++n;
    }
    while ( n != 64 );
    v3 = v6;
    ++v37;
  }
  while ( v37 != 5 );
  v24 = s;
  LOWORD(v25) = 9484;
  free(ptr);
  memset(v54, 0, 0x40u);
  v26 = v42;
  do
  {
    v27 = 0;
    v28 = 0;
    do
    {
      v29 = *(_DWORD *)&v24[64 * v27++];
      v28 += v29;
    }
    while ( v27 != 8 );
    v30 = *v26++;
    v24 += 4;
    HIWORD(v25) = (unsigned int)"gen done" >> 16;
    v31 = sprintf(v54, v25, v30, 8, v28);
  }
  while ( &s[20] != v24 );
  v32 = dev_ctrl(v31);
  ((void (__fastcall *)(_DWORD))v32[25])(*(_DWORD *)(a1 + 248));
  return 0;
}
