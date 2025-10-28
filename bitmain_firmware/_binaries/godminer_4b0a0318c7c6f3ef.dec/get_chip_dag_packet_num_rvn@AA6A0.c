int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  _DWORD *v2; // r11
  int v3; // r8
  int v4; // r3
  char *v5; // r2
  int v6; // r1
  int v7; // r0
  signed int v8; // r9
  unsigned __int64 v9; // kr00_8
  int v10; // lr
  int v11; // r6
  int v12; // r12
  int v13; // r1
  char *v15; // r1
  int v16; // r4
  int v17; // r1
  char *v18; // r1
  int v19; // r1
  char *v20; // [sp+40h] [bp-1084h]
  char *ptr; // [sp+44h] [bp-1080h]
  signed int v22; // [sp+48h] [bp-107Ch]
  int v23; // [sp+4Ch] [bp-1078h]
  int v24; // [sp+50h] [bp-1074h]
  int v25; // [sp+54h] [bp-1070h]
  char *s; // [sp+58h] [bp-106Ch]
  int v27; // [sp+5Ch] [bp-1068h]
  _DWORD v28[7]; // [sp+60h] [bp-1064h] BYREF
  int v29; // [sp+7Ch] [bp-1048h]
  _DWORD v30[7]; // [sp+80h] [bp-1044h] BYREF
  int v31; // [sp+9Ch] [bp-1028h]
  _DWORD v32[7]; // [sp+A0h] [bp-1024h] BYREF
  int v33; // [sp+BCh] [bp-1008h]
  char v34[4100]; // [sp+C0h] [bp-1004h] BYREF

  ptr = (char *)malloc(0x60u);
  v20 = (char *)malloc(0x60u);
  if ( sub_A4C00(a1, 115, ptr) == 8 )
  {
    LOWORD(v2) = 20532;
    HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
    v27 = 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v15) = 27372;
    HIWORD(v15) = (unsigned int)":" >> 16;
    LOWORD(v2) = 20532;
    HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
    V_INT((int)v28, v15, *(int *)(a1 + 256));
    LOWORD(v16) = 9668;
    HIWORD(v16) = (unsigned int)"tus_RVN" >> 16;
    v27 = 12;
    logfmt_raw(v34, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, v16);
    V_UNLOCK();
    LOWORD(v17) = 9076;
    HIWORD(v17) = (unsigned int)"" >> 16;
    zlog(*v2, v17, 171, "get_chip_dag_packet_num_rvn", 27, 2091, 100, v34);
  }
  v22 = sub_A4C00(a1, 116, v20);
  if ( v22 == 8 )
    goto LABEL_4;
  V_LOCK();
  LOWORD(v18) = 27372;
  HIWORD(v18) = (unsigned int)":" >> 16;
  V_INT((int)v30, v18, *(int *)(a1 + 256));
  logfmt_raw(
    v34,
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
    "get chip dag crc status failed");
  V_UNLOCK();
  LOWORD(v19) = 9076;
  HIWORD(v19) = (unsigned int)"" >> 16;
  zlog(*v2, v19, 171, "get_chip_dag_packet_num_rvn", 27, 2098, 100, v34);
  v27 = 12;
  if ( v22 > 0 )
  {
LABEL_4:
    v3 = 0;
    LOWORD(v4) = 9732;
    LOWORD(v5) = 27372;
    LOWORD(v6) = -22276;
    LOWORD(v7) = -31760;
    v8 = 0;
    HIWORD(v4) = (unsigned int)"hip_core_status_RVN" >> 16;
    HIWORD(v5) = (unsigned int)":" >> 16;
    HIWORD(v6) = (unsigned int)"0000000080020000" >> 16;
    HIWORD(v7) = (unsigned int)"easons" >> 16;
    v23 = v4;
    s = v5;
    v24 = v6;
    v25 = v7;
    do
    {
      ++v8;
      v9 = (unsigned __int64)(bswap32(*(_DWORD *)&ptr[v3]) & 0x7FFFFFFF) << 6;
      V_LOCK();
      V_INT((int)v32, s, *(int *)(a1 + 256));
      v10 = (unsigned __int8)ptr[v3 + 4];
      v11 = v24;
      v12 = *(_DWORD *)&v20[v3];
      v3 += 12;
      if ( !v12 )
        v11 = v25;
      logfmt_raw(v34, 0x1000u, 0, v33, v32[0], v32[1], v32[2], v32[3], v32[4], v32[5], v32[6], v33, v23, v10, v9, v11);
      V_UNLOCK();
      LOWORD(v13) = 9076;
      HIWORD(v13) = (unsigned int)"" >> 16;
      zlog(*v2, v13, 171, "get_chip_dag_packet_num_rvn", 27, 2107, 60, v34);
    }
    while ( v22 > v8 );
  }
  free(ptr);
  free(v20);
  return v27;
}
