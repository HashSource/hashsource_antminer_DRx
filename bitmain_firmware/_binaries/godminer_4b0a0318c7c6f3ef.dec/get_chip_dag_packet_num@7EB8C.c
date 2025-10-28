int __fastcall get_chip_dag_packet_num(int a1)
{
  char *v1; // r9
  int v2; // r8
  _DWORD *v4; // r11
  int v5; // r4
  unsigned int v6; // r7
  int v7; // r1
  char *v8; // r3
  int v9; // r2
  int v10; // r7
  signed int v11; // r10
  int v12; // r1
  char *v14; // r1
  int v15; // lr
  int v16; // r1
  char *v17; // r1
  int v18; // r9
  char *v19; // r7
  char *v20; // lr
  int v21; // r1
  char *v22; // r2
  int v23; // r8
  unsigned __int8 *v24; // r4
  _DWORD *v25; // r7
  unsigned int v26; // r3
  unsigned __int64 v27; // r10
  char *v28; // r9
  char *v29; // r1
  int v30; // r6
  int v31; // r1
  int v32; // [sp+28h] [bp-1104h]
  int v33; // [sp+28h] [bp-1104h]
  char *s; // [sp+38h] [bp-10F4h]
  unsigned __int64 sa; // [sp+38h] [bp-10F4h]
  unsigned __int8 *ptr; // [sp+40h] [bp-10ECh]
  _DWORD *v37; // [sp+44h] [bp-10E8h]
  int v38; // [sp+48h] [bp-10E4h]
  int v39; // [sp+48h] [bp-10E4h]
  char *v40; // [sp+50h] [bp-10DCh]
  char *v41; // [sp+54h] [bp-10D8h]
  _DWORD *v42; // [sp+5Ch] [bp-10D0h]
  signed int v43; // [sp+60h] [bp-10CCh]
  int v44; // [sp+64h] [bp-10C8h]
  _DWORD v45[7]; // [sp+68h] [bp-10C4h] BYREF
  int v46; // [sp+84h] [bp-10A8h]
  _DWORD v47[7]; // [sp+88h] [bp-10A4h] BYREF
  int v48; // [sp+A4h] [bp-1088h]
  _DWORD v49[7]; // [sp+A8h] [bp-1084h] BYREF
  int v50; // [sp+C4h] [bp-1068h]
  _DWORD v51[7]; // [sp+C8h] [bp-1064h] BYREF
  int v52; // [sp+E4h] [bp-1048h]
  _DWORD v53[7]; // [sp+E8h] [bp-1044h] BYREF
  int v54; // [sp+104h] [bp-1028h]
  _DWORD v55[7]; // [sp+108h] [bp-1024h] BYREF
  int v56; // [sp+124h] [bp-1008h]
  char v57[4100]; // [sp+128h] [bp-1004h] BYREF

  LOWORD(v4) = 20532;
  LOWORD(v1) = 27372;
  LOWORD(v2) = -12816;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  v5 = 0;
  ptr = (unsigned __int8 *)malloc(0x60u);
  v37 = malloc(0x60u);
  while ( 1 )
  {
    v6 = sub_797B0(a1, 86, ptr);
    if ( v6 == 8 )
      break;
    V_LOCK();
    HIWORD(v1) = (unsigned int)":" >> 16;
    V_INT((int)v45, v1, *(int *)(a1 + 256));
    v32 = v5++;
    HIWORD(v2) = (unsigned int)"_bist" >> 16;
    logfmt_raw(v57, 0x1000u, 0, v46, v45[0], v45[1], v45[2], v45[3], v45[4], v45[5], v45[6], v46, v2, v6, v32);
    V_UNLOCK();
    LOWORD(v7) = -14448;
    HIWORD(v7) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v7, 171, "get_chip_dag_packet_num", 23, 1668, 100, v57);
    if ( v5 == 5 )
    {
      v44 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v44 = 0;
LABEL_6:
  LOWORD(v8) = 27372;
  LOWORD(v9) = -12752;
  v10 = 0;
  HIWORD(v8) = (unsigned int)":" >> 16;
  HIWORD(v9) = (unsigned int)"rx_adapt" >> 16;
  s = v8;
  v38 = v9;
  while ( 1 )
  {
    v11 = sub_797B0(a1, 83, v37);
    if ( v11 == 8 )
      goto LABEL_14;
    V_LOCK();
    V_INT((int)v47, s, *(int *)(a1 + 256));
    v33 = v10++;
    logfmt_raw(v57, 0x1000u, 0, v48, v47[0], v47[1], v47[2], v47[3], v47[4], v47[5], v47[6], v48, v38, v11, v33);
    V_UNLOCK();
    LOWORD(v12) = -14448;
    HIWORD(v12) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v12, 171, "get_chip_dag_packet_num", 23, 1682, 100, v57);
    if ( v10 == 5 )
      break;
    usleep(0x2710u);
  }
  if ( !v11 )
  {
LABEL_11:
    v44 = 12;
    goto LABEL_12;
  }
  V_LOCK();
  LOWORD(v14) = 27372;
  HIWORD(v14) = (unsigned int)":" >> 16;
  v44 = 12;
  V_INT((int)v49, v14, *(int *)(a1 + 256));
  LOWORD(v15) = -12688;
  HIWORD(v15) = (unsigned int)"es_external_loop_ate_init" >> 16;
  logfmt_raw(v57, 0x1000u, 0, v50, v49[0], v49[1], v49[2], v49[3], v49[4], v49[5], v49[6], v50, v15, 8 - v11);
  V_UNLOCK();
  LOWORD(v16) = -14448;
  HIWORD(v16) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v16, 171, "get_chip_dag_packet_num", 23, 1695, 100, v57);
LABEL_14:
  sa = (unsigned __int64)(bswap32(*(_DWORD *)ptr) & 0x7FFFFFFF) << 6;
  if ( sa )
  {
    V_LOCK();
    LOWORD(v17) = 27372;
    HIWORD(v17) = (unsigned int)":" >> 16;
    LOWORD(v18) = -12624;
    LOWORD(v19) = -22276;
    HIWORD(v19) = (unsigned int)"0000000080020000" >> 16;
    V_INT((int)v53, v17, *(int *)(a1 + 256));
    HIWORD(v18) = (unsigned int)"read_config_ini" >> 16;
    v39 = v18;
    v20 = "no";
    if ( *v37 )
      v20 = v19;
    logfmt_raw(v57, 0x1000u, 0, v54, v53[0], v53[1], v53[2], v53[3], v53[4], v53[5], v53[6], v54, v18, ptr[4], sa, v20);
    V_UNLOCK();
    LOWORD(v21) = -14448;
    HIWORD(v21) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v21, 171, "get_chip_dag_packet_num", 23, 1707, 60, v57);
    if ( v11 > 1 )
    {
      LOWORD(v22) = 27372;
      HIWORD(v22) = (unsigned int)":" >> 16;
      v40 = v19;
      v41 = v22;
      v23 = 1;
      v24 = ptr;
      v25 = v37;
      v43 = v11;
      v42 = v4;
      do
      {
        v26 = *((_DWORD *)v24 + 3);
        ++v23;
        v25 += 3;
        v24 += 12;
        v27 = (unsigned __int64)(bswap32(v26) & 0x7FFFFFFF) << 6;
        V_LOCK();
        V_INT((int)v55, v41, *(int *)(a1 + 256));
        v28 = "no";
        if ( *v25 )
          v28 = v40;
        logfmt_raw(
          v57,
          0x1000u,
          0,
          v56,
          v55[0],
          v55[1],
          v55[2],
          v55[3],
          v55[4],
          v55[5],
          v55[6],
          v56,
          v39,
          v24[4],
          v27,
          v28);
        V_UNLOCK();
        zlog(
          *v42,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "get_chip_dag_packet_num",
          23,
          1713,
          60,
          v57);
        if ( sa != v27 )
          goto LABEL_11;
      }
      while ( v23 != v43 );
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v29) = 27372;
    v44 = 12;
    HIWORD(v29) = (unsigned int)":" >> 16;
    V_INT((int)v51, v29, *(int *)(a1 + 256));
    LOWORD(v30) = -12660;
    HIWORD(v30) = (unsigned int)"serdes_external_loop_ate_init" >> 16;
    logfmt_raw(v57, 0x1000u, 0, v52, v51[0], v51[1], v51[2], v51[3], v51[4], v51[5], v51[6], v52, v30);
    V_UNLOCK();
    LOWORD(v31) = -14448;
    HIWORD(v31) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v4, v31, 171, "get_chip_dag_packet_num", 23, 1703, 100, v57);
  }
LABEL_12:
  free(ptr);
  free(v37);
  return v44;
}
