int __fastcall membist1_rvn(int a1)
{
  _DWORD *v2; // r8
  char *v3; // r1
  _DWORD *v4; // r10
  int v5; // r5
  int v6; // r1
  int v7; // r8
  char *v8; // r1
  int v9; // r1
  char *v10; // r3
  unsigned int *v11; // r4
  int v12; // r5
  int v13; // r1
  int v14; // r6
  char *v15; // r1
  int v16; // r4
  int v17; // r1
  char *v18; // r3
  unsigned int *v19; // r4
  int v20; // r5
  int v21; // r1
  __int64 v22; // r4
  _DWORD *v23; // r3
  unsigned int v24; // t1
  const char *v25; // r1
  int v26; // r0
  int (**v27)(); // r0
  int v29; // r1
  int v30; // r1
  char *v31; // [sp+30h] [bp-138h]
  char *v32; // [sp+30h] [bp-138h]
  void *ptr; // [sp+38h] [bp-130h]
  size_t n; // [sp+3Ch] [bp-12Ch]
  _DWORD v35[7]; // [sp+48h] [bp-120h] BYREF
  int v36; // [sp+64h] [bp-104h]
  _DWORD v37[7]; // [sp+68h] [bp-100h] BYREF
  int v38; // [sp+84h] [bp-E4h]
  _DWORD v39[7]; // [sp+88h] [bp-E0h] BYREF
  int v40; // [sp+A4h] [bp-C4h]
  _DWORD v41[7]; // [sp+A8h] [bp-C0h] BYREF
  int v42; // [sp+C4h] [bp-A4h]
  _DWORD v43[7]; // [sp+C8h] [bp-A0h] BYREF
  int v44; // [sp+E4h] [bp-84h]
  _DWORD v45[7]; // [sp+E8h] [bp-80h] BYREF
  int v46; // [sp+104h] [bp-64h]
  _DWORD v47[7]; // [sp+108h] [bp-60h] BYREF
  int v48; // [sp+124h] [bp-44h]
  _DWORD v49[8]; // [sp+128h] [bp-40h] BYREF
  _DWORD s[8]; // [sp+148h] [bp-20h] BYREF
  char v51[4100]; // [sp+168h] [bp+0h] BYREF

  LOWORD(v2) = 20532;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
  v4 = v2;
  V_INT((int)v35, v3, *(int *)(a1 + 256));
  LOWORD(v5) = -14172;
  HIWORD(v5) = (unsigned int)": %d" >> 16;
  n = 0;
  logfmt_raw(v51, 0x1000u, 0, v36, v35[0], v35[1], v35[2], v35[3], v35[4], v35[5], v35[6], v36, v5, "membist1_rvn");
  V_UNLOCK();
  LOWORD(v6) = 9076;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v2, v6, 171, "membist1_rvn", 12, 894, 60, v51);
  memset(s, 0, sizeof(s));
  memset(v49, 0, sizeof(v49));
  ptr = malloc(0x1800u);
  do
  {
    sub_A4614(a1, n, 28, 1);
    usleep(0x61A80u);
    sub_A4614(a1, n, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x1800u);
    v7 = sub_A4988(a1, (unsigned __int16)n, 161, ptr);
    if ( v7 == 8 )
      goto LABEL_4;
    V_LOCK();
    LOWORD(v8) = 27372;
    HIWORD(v8) = (unsigned int)":" >> 16;
    V_INT((int)v37, v8, *(int *)(a1 + 256));
    logfmt_raw(
      v51,
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
      "get membist err cnt failed!");
    V_UNLOCK();
    LOWORD(v9) = 9076;
    HIWORD(v9) = (unsigned int)"" >> 16;
    zlog(*v4, v9, 171, "membist1_rvn", 12, 914, 100, v51);
    if ( v7 > 0 )
    {
LABEL_4:
      LOWORD(v10) = 27372;
      v11 = (unsigned int *)ptr;
      HIWORD(v10) = (unsigned int)":" >> 16;
      v12 = 0;
      v31 = v10;
      do
      {
        while ( (*v11 & 0x80) == 0 )
        {
          V_LOCK();
          ++v12;
          v11 += 3;
          V_INT((int)v41, v31, *(int *)(a1 + 256));
          logfmt_raw(
            v51,
            0x1000u,
            0,
            v42,
            v41[0],
            v41[1],
            v41[2],
            v41[3],
            v41[4],
            v41[5],
            v41[6],
            v42,
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v11 - 8),
            *((unsigned __int8 *)v11 - 4));
          V_UNLOCK();
          LOWORD(v13) = 9076;
          HIWORD(v13) = (unsigned int)"" >> 16;
          zlog(*v4, v13, 171, "membist1_rvn", 12, 930, 100, v51);
          if ( v7 <= v12 )
            goto LABEL_10;
        }
        if ( (*v11 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v39, v31, *(int *)(a1 + 256));
          logfmt_raw(
            v51,
            0x1000u,
            0,
            v40,
            v39[0],
            v39[1],
            v39[2],
            v39[3],
            v39[4],
            v39[5],
            v39[6],
            v40,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v11 + 4),
            *((unsigned __int8 *)v11 + 8),
            bswap32(*v11));
          V_UNLOCK();
          LOWORD(v29) = 9076;
          HIWORD(v29) = (unsigned int)"" >> 16;
          zlog(*v4, v29, 171, "membist1_rvn", 12, 923, 100, v51);
          s[*((unsigned __int8 *)v11 + 4)] += bswap32(*v11) & 0x7FFFFF;
        }
        ++v12;
        v11 += 3;
      }
      while ( v7 > v12 );
    }
LABEL_10:
    memset(ptr, 0, 0x1800u);
    v14 = sub_A4988(a1, (unsigned __int16)n, 162, ptr);
    if ( v14 == 8 )
      goto LABEL_12;
    V_LOCK();
    LOWORD(v15) = 27372;
    HIWORD(v15) = (unsigned int)":" >> 16;
    V_INT((int)v43, v15, *(int *)(a1 + 256));
    LOWORD(v16) = 9532;
    HIWORD(v16) = (unsigned int)" %02x, core: %02x dag load done" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v44, v43[0], v43[1], v43[2], v43[3], v43[4], v43[5], v43[6], v44, v16);
    V_UNLOCK();
    LOWORD(v17) = 9076;
    HIWORD(v17) = (unsigned int)"" >> 16;
    zlog(*v4, v17, 171, "membist1_rvn", 12, 938, 100, v51);
    if ( v14 > 0 )
    {
LABEL_12:
      LOWORD(v18) = 27372;
      v19 = (unsigned int *)ptr;
      HIWORD(v18) = (unsigned int)":" >> 16;
      v20 = 0;
      v32 = v18;
      do
      {
        while ( (*v19 & 0x80) == 0 )
        {
          V_LOCK();
          ++v20;
          v19 += 3;
          V_INT((int)v47, v32, *(int *)(a1 + 256));
          logfmt_raw(
            v51,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v19 - 8),
            *((unsigned __int8 *)v19 - 4));
          V_UNLOCK();
          LOWORD(v21) = 9076;
          HIWORD(v21) = (unsigned int)"" >> 16;
          zlog(*v4, v21, 171, "membist1_rvn", 12, 954, 100, v51);
          if ( v14 <= v20 )
            goto LABEL_18;
        }
        if ( (*v19 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v45, v32, *(int *)(a1 + 256));
          logfmt_raw(
            v51,
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
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v19 + 4),
            *((unsigned __int8 *)v19 + 8),
            bswap32(*v19));
          V_UNLOCK();
          LOWORD(v30) = 9076;
          HIWORD(v30) = (unsigned int)"" >> 16;
          zlog(*v4, v30, 171, "membist1_rvn", 12, 947, 100, v51);
          v49[*((unsigned __int8 *)v19 + 4)] += bswap32(*v19) & 0x7FFFFF;
        }
        ++v20;
        v19 += 3;
      }
      while ( v14 > v20 );
    }
LABEL_18:
    ++n;
  }
  while ( n != 64 );
  v22 = 0;
  free(ptr);
  memset(v51, 0, 0x40u);
  v23 = &v49[7];
  do
  {
    v24 = v23[1];
    ++v23;
    v22 += v24;
  }
  while ( &s[7] != v23 );
  LOWORD(v25) = 9564;
  HIWORD(v25) = (unsigned int)"%s all core dag gen done" >> 16;
  v26 = sprintf(v51, v25, v22);
  v27 = dev_ctrl(v26);
  ((void (__fastcall *)(_DWORD))v27[25])(*(_DWORD *)(a1 + 248));
  unk_1B3FCC = s[0];
  unk_1B3FD0 = s[1];
  unk_1B3FD4 = s[2];
  unk_1B3FD8 = s[3];
  unk_1B3FDC = s[4];
  unk_1B3FE0 = s[5];
  unk_1B3FE4 = s[6];
  unk_1B3FE8 = s[7];
  return 0;
}
