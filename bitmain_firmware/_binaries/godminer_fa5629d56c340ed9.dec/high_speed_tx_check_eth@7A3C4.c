int __fastcall high_speed_tx_check_eth(int a1)
{
  int v2; // r4
  int i; // r4
  unsigned __int8 v4; // r1
  int v5; // r11
  char *v6; // r5
  char *v7; // r6
  char *v8; // r5
  int v9; // t1
  unsigned int v10; // r3
  char *v11; // r0
  int v12; // r2
  bool v13; // cc
  int v15; // [sp+4h] [bp-1148h]
  unsigned int v16; // [sp+28h] [bp-1124h]
  int v17; // [sp+30h] [bp-111Ch]
  int *v19; // [sp+38h] [bp-1114h]
  int v20; // [sp+44h] [bp-1108h] BYREF
  _DWORD v21[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v22[7]; // [sp+60h] [bp-10ECh] BYREF
  int v23; // [sp+7Ch] [bp-10D0h]
  char v24; // [sp+83h] [bp-10C9h] BYREF
  _BYTE dest[196]; // [sp+84h] [bp-10C8h] BYREF
  _DWORD v26[2]; // [sp+148h] [bp-1004h] BYREF
  int v27; // [sp+150h] [bp-FFCh]
  int v28; // [sp+154h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 260));
  v2 = 0;
  logfmt_raw(
    (char *)v26,
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
    "%s...",
    "high_speed_tx_check_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "high_speed_tx_check_eth",
    23,
    338,
    60,
    v26);
  do
  {
    sub_79EB0(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = i;
    sub_79EB0(a1, v4, 12, 3);
  }
  v19 = v21;
  memset(&dest[64], 0, 0x81u);
  v21[0] = 0;
  v21[1] = 4;
  v21[2] = 7000000;
  v21[3] = 7000004;
  v21[4] = 14090220;
  v21[5] = 14090224;
  do
  {
    v5 = 0;
    v17 = *v19++;
    do
    {
      v20 = 0;
      v26[1] = v17;
      v27 = 1;
      v26[0] = 0;
      v28 = 0;
      BYTE1(v27) = v5;
      v6 = (char *)calloc(0x94u, 1u);
      (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 308))(
        a1,
        v26,
        1,
        v6,
        &v20,
        v15,
        2000,
        0);
      memcpy(dest, v6 + 18, 0x80u);
      free(v6);
      if ( v20 )
      {
        v7 = &v24;
        v8 = &dest[64];
        v16 = 0;
        do
        {
          V_LOCK();
          v9 = (unsigned __int8)*++v7;
          logfmt_raw((char *)v26, 0x1000u, 0, "DAG READ for chip %1d: %02x", v5, v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "high_speed_tx_check_eth",
            23,
            396,
            20,
            v26);
          v10 = (unsigned __int8)(v9 - 1);
          v11 = v8;
          v12 = v9;
          v13 = v10 > 0xFD;
          if ( v10 > 0xFD )
            v10 = v16;
          v8 += 2;
          if ( v13 )
            v16 = ++v10;
          sprintf(v11, "%02x", v12, v10);
        }
        while ( v7 != &dest[63] );
        V_LOCK();
        logfmt_raw((char *)v26, 0x1000u, 0, "node_index[%08x] DAG READ for chip %1d: %s", v17, v5, &dest[64]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "high_speed_tx_check_eth",
          23,
          403,
          60,
          v26);
        if ( v16 == 64 )
        {
          V_LOCK();
          logfmt_raw((char *)v26, 0x1000u, 0, "check high speed baud tx failed!!!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "high_speed_tx_check_eth",
            23,
            406,
            60,
            v26);
          while ( 1 )
            ;
        }
      }
      ++v5;
    }
    while ( v5 != 8 );
  }
  while ( v19 != v22 );
  return 0;
}
