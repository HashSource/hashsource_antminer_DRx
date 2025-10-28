int __fastcall membist1(int a1)
{
  int v2; // r5
  char *v3; // r1
  _DWORD *v4; // r9
  int v5; // r1
  int v6; // r3
  int v7; // r6
  char *v8; // r1
  int v9; // r4
  int v10; // r1
  char *v11; // r3
  unsigned int *v12; // r4
  int v13; // r5
  int v14; // r1
  int v15; // r6
  char *v16; // r1
  int v17; // r1
  char *v18; // r3
  unsigned int *v19; // r4
  int v20; // r5
  int v21; // r1
  char *v22; // r0
  int v23; // r1
  int v24; // r12
  int v25; // r5
  unsigned int v26; // r10
  int v27; // r0
  int (**v28)(); // r0
  _DWORD *v29; // lr
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v37; // r1
  char *v38; // r2
  int v39; // r1
  char *v40; // r2
  int v41; // [sp+24h] [bp-1188h]
  char *v42; // [sp+40h] [bp-116Ch]
  char *v43; // [sp+40h] [bp-116Ch]
  __int64 v44; // [sp+40h] [bp-116Ch]
  void *ptr; // [sp+4Ch] [bp-1160h]
  unsigned int ptra; // [sp+4Ch] [bp-1160h]
  int v47; // [sp+50h] [bp-115Ch]
  __int64 v48; // [sp+50h] [bp-115Ch]
  int v49; // [sp+58h] [bp-1154h]
  _DWORD *v50; // [sp+58h] [bp-1154h]
  int v51; // [sp+5Ch] [bp-1150h]
  char *useconds; // [sp+60h] [bp-114Ch]
  int v53; // [sp+64h] [bp-1148h]
  _DWORD v54[7]; // [sp+68h] [bp-1144h] BYREF
  int v55; // [sp+84h] [bp-1128h]
  _DWORD v56[7]; // [sp+88h] [bp-1124h] BYREF
  int v57; // [sp+A4h] [bp-1108h]
  _DWORD v58[7]; // [sp+A8h] [bp-1104h] BYREF
  int v59; // [sp+C4h] [bp-10E8h]
  _DWORD v60[7]; // [sp+C8h] [bp-10E4h] BYREF
  int v61; // [sp+E4h] [bp-10C8h]
  _DWORD v62[7]; // [sp+E8h] [bp-10C4h] BYREF
  int v63; // [sp+104h] [bp-10A8h]
  _DWORD v64[7]; // [sp+108h] [bp-10A4h] BYREF
  int v65; // [sp+124h] [bp-1088h]
  _DWORD v66[7]; // [sp+128h] [bp-1084h] BYREF
  int v67; // [sp+144h] [bp-1068h]
  _DWORD v68[7]; // [sp+148h] [bp-1064h] BYREF
  _DWORD v69[9]; // [sp+164h] [bp-1048h] BYREF
  _DWORD s[8]; // [sp+188h] [bp-1024h] BYREF
  char v71[4100]; // [sp+1A8h] [bp-1004h] BYREF

  LOWORD(v2) = -14172;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v54, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw(v71, 0x1000u, 0, v55, v54[0], v54[1], v54[2], v54[3], v54[4], v54[5], v54[6], v55, v2, "membist1");
  V_UNLOCK();
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, "membist1", 8, 697, 60, v71);
  memset(s, 0, sizeof(s));
  LOWORD(v6) = -13160;
  HIWORD(v6) = (unsigned int)"e" >> 16;
  v47 = v6;
  memset(&v69[1], 0, 0x20u);
  v49 = 0;
  ptr = malloc(0x600u);
  do
  {
    sub_78F08(a1, v49, 12, 1);
    usleep(0x61A80u);
    sub_78F08(a1, v49, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x600u);
    v7 = sub_791A4(a1, (unsigned __int16)v49, 161, ptr);
    if ( v7 == 8 )
      goto LABEL_4;
    V_LOCK();
    LOWORD(v8) = 27372;
    HIWORD(v8) = (unsigned int)":" >> 16;
    V_INT((int)v56, v8, *(int *)(a1 + 256));
    LOWORD(v9) = -13244;
    HIWORD(v9) = (unsigned int)"ore_status_ETH" >> 16;
    logfmt_raw(v71, 0x1000u, 0, v57, v56[0], v56[1], v56[2], v56[3], v56[4], v56[5], v56[6], v57, v9, v7);
    V_UNLOCK();
    LOWORD(v10) = -14448;
    HIWORD(v10) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v10, 171, "membist1", 8, 721, 100, v71);
    if ( v7 > 0 )
    {
LABEL_4:
      LOWORD(v11) = 27372;
      v12 = (unsigned int *)ptr;
      HIWORD(v11) = (unsigned int)":" >> 16;
      v13 = 0;
      v42 = v11;
      do
      {
        while ( (*v12 & 0x80) == 0 )
        {
          V_LOCK();
          ++v13;
          v12 += 3;
          V_INT((int)v60, v42, *(int *)(a1 + 256));
          logfmt_raw(
            v71,
            0x1000u,
            0,
            v61,
            v60[0],
            v60[1],
            v60[2],
            v60[3],
            v60[4],
            v60[5],
            v60[6],
            v61,
            v47,
            *((unsigned __int8 *)v12 - 8),
            *((unsigned __int8 *)v12 - 4));
          V_UNLOCK();
          LOWORD(v14) = -14448;
          HIWORD(v14) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v4, v14, 171, "membist1", 8, 737, 100, v71);
          if ( v7 <= v13 )
            goto LABEL_10;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v58, v42, *(int *)(a1 + 256));
          logfmt_raw(
            v71,
            0x1000u,
            0,
            v59,
            v58[0],
            v58[1],
            v58[2],
            v58[3],
            v58[4],
            v58[5],
            v58[6],
            v59,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v12 + 4),
            *((unsigned __int8 *)v12 + 8),
            bswap32(*v12));
          V_UNLOCK();
          LOWORD(v37) = -14448;
          HIWORD(v37) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v4, v37, 171, "membist1", 8, 730, 100, v71);
          v38 = &v71[4 * *((unsigned __int8 *)v12 + 4)];
          *((_DWORD *)v38 - 8) += bswap32(*v12) & 0x7FFFFF;
        }
        ++v13;
        v12 += 3;
      }
      while ( v7 > v13 );
    }
LABEL_10:
    memset(ptr, 0, 0x600u);
    v15 = sub_791A4(a1, (unsigned __int16)v49, 162, ptr);
    if ( v15 == 8 )
      goto LABEL_12;
    V_LOCK();
    LOWORD(v16) = 27372;
    HIWORD(v16) = (unsigned int)":" >> 16;
    V_INT((int)v62, v16, *(int *)(a1 + 256));
    logfmt_raw(
      v71,
      0x1000u,
      0,
      v63,
      v62[0],
      v62[1],
      v62[2],
      v62[3],
      v62[4],
      v62[5],
      v62[6],
      v63,
      "get membist lost failed, resp_num: %d",
      v15);
    V_UNLOCK();
    LOWORD(v17) = -14448;
    HIWORD(v17) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v17, 171, "membist1", 8, 745, 100, v71);
    if ( v15 > 0 )
    {
LABEL_12:
      LOWORD(v18) = 27372;
      v19 = (unsigned int *)ptr;
      HIWORD(v18) = (unsigned int)":" >> 16;
      v20 = 0;
      v43 = v18;
      do
      {
        while ( (*v19 & 0x80) == 0 )
        {
          V_LOCK();
          ++v20;
          v19 += 3;
          V_INT((int)v66, v43, *(int *)(a1 + 256));
          logfmt_raw(
            v71,
            0x1000u,
            0,
            v67,
            v66[0],
            v66[1],
            v66[2],
            v66[3],
            v66[4],
            v66[5],
            v66[6],
            v67,
            v47,
            *((unsigned __int8 *)v19 - 8),
            *((unsigned __int8 *)v19 - 4));
          V_UNLOCK();
          LOWORD(v21) = -14448;
          HIWORD(v21) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v4, v21, 171, "membist1", 8, 761, 100, v71);
          if ( v15 <= v20 )
            goto LABEL_18;
        }
        if ( (*v19 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v64, v43, *(int *)(a1 + 256));
          logfmt_raw(
            v71,
            0x1000u,
            0,
            v65,
            v64[0],
            v64[1],
            v64[2],
            v64[3],
            v64[4],
            v64[5],
            v64[6],
            v65,
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v19 + 4),
            *((unsigned __int8 *)v19 + 8),
            bswap32(*v19));
          V_UNLOCK();
          LOWORD(v39) = -14448;
          HIWORD(v39) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v4, v39, 171, "membist1", 8, 754, 100, v71);
          v40 = &v71[4 * *((unsigned __int8 *)v19 + 4)];
          *((_DWORD *)v40 - 16) += bswap32(*v19) & 0x7FFFFF;
        }
        ++v20;
        v19 += 3;
      }
      while ( v15 > v20 );
    }
LABEL_18:
    ++v49;
  }
  while ( v49 != 16 );
  LOWORD(v22) = 27372;
  LOWORD(v23) = -13036;
  HIWORD(v22) = (unsigned int)":" >> 16;
  LOWORD(v24) = -14448;
  v25 = 0;
  HIWORD(v23) = (unsigned int)"up" >> 16;
  useconds = v22;
  HIWORD(v24) = (unsigned int)" lost cnt: %08x" >> 16;
  v44 = 0;
  v48 = 0;
  v51 = v23;
  v53 = v24;
  free(ptr);
  v50 = v69;
  do
  {
    v26 = s[v25];
    ptra = v50[1];
    ++v50;
    V_LOCK();
    v44 += v26;
    v48 += ptra;
    V_INT((int)v68, useconds, *(int *)(a1 + 256));
    v41 = v25++;
    logfmt_raw(
      v71,
      0x1000u,
      0,
      v69[0],
      v68[0],
      v68[1],
      v68[2],
      v68[3],
      v68[4],
      v68[5],
      v68[6],
      v69[0],
      v51,
      v41,
      ptra,
      v26,
      v48,
      v44);
    V_UNLOCK();
    v27 = zlog(*v4, v53, 171, "membist1", 8, 774, 100, v71);
  }
  while ( v25 != 8 );
  v28 = dev_ctrl(v27);
  ((void (__fastcall *)(_DWORD))v28[25])(*(_DWORD *)(a1 + 248));
  LOWORD(v29) = 15808;
  v30 = s[1];
  v31 = s[2];
  v32 = s[3];
  HIWORD(v29) = (unsigned int)&unk_1A3DC8 >> 16;
  *v29 = s[0];
  v29[1] = v30;
  v29[2] = v31;
  v29[3] = v32;
  v29 += 4;
  v33 = s[5];
  v34 = s[6];
  v35 = s[7];
  *v29 = s[4];
  v29[1] = v33;
  v29[2] = v34;
  v29[3] = v35;
  return 0;
}
