int __fastcall high_speed_tx_check(int a1)
{
  int v2; // r4
  int i; // r4
  unsigned __int8 v4; // r1
  int v5; // r9
  _DWORD *v6; // r5
  int *v7; // r12
  int *v8; // r4
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  char *v15; // r6
  char *v16; // r5
  int v17; // t1
  unsigned int v18; // r3
  char *v19; // r0
  int v20; // r2
  bool v21; // cc
  int v22; // [sp+4h] [bp-1128h]
  unsigned int v23; // [sp+2Ch] [bp-1100h]
  int v25; // [sp+3Ch] [bp-10F0h] BYREF
  _DWORD v26[7]; // [sp+40h] [bp-10ECh] BYREF
  int v27; // [sp+5Ch] [bp-10D0h]
  char v28; // [sp+63h] [bp-10C9h] BYREF
  int v29; // [sp+64h] [bp-10C8h] BYREF
  char v30; // [sp+A3h] [bp-1089h] BYREF
  _BYTE v31[132]; // [sp+A4h] [bp-1088h] BYREF
  _DWORD v32[2]; // [sp+128h] [bp-1004h] BYREF
  int v33; // [sp+130h] [bp-FFCh]
  int v34; // [sp+134h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v26, "chain", *(int *)(a1 + 224));
  v2 = 0;
  logfmt_raw(
    (char *)v32,
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
    "%s...",
    "high_speed_tx_check");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "high_speed_tx_check",
    19,
    320,
    60,
    v32);
  do
  {
    sub_6E768(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = i;
    sub_6E768(a1, v4, 12, 3);
  }
  v5 = 0;
  memset(v31, 0, 0x81u);
  do
  {
    v33 = 0;
    v25 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v34 = 0;
    BYTE1(v33) = v5;
    v6 = malloc(0x4Cu);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 264))(
      a1,
      v32,
      1,
      v6,
      &v25,
      v22,
      2000,
      0);
    v7 = (_DWORD *)((char *)v6 + 10);
    v8 = &v29;
    do
    {
      v9 = *v7;
      v7 += 4;
      v10 = *(v7 - 3);
      v11 = v8;
      v12 = *(v7 - 2);
      v8 += 4;
      v13 = *(v7 - 1);
      *v11 = v9;
      v11[1] = v10;
      v11[2] = v12;
      v11[3] = v13;
    }
    while ( v7 != (_DWORD *)((char *)v6 + 74) );
    free(v6);
    if ( v25 )
    {
      v15 = &v28;
      v16 = v31;
      v23 = 0;
      do
      {
        V_LOCK();
        v17 = (unsigned __int8)*++v15;
        logfmt_raw((char *)v32, 0x1000u, 0, "[DAG] for chip %1d: %02x", v5, v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "high_speed_tx_check",
          19,
          378,
          20,
          v32);
        v18 = (unsigned __int8)(v17 - 1);
        v19 = v16;
        v20 = v17;
        v21 = v18 > 0xFD;
        if ( v18 > 0xFD )
          v18 = v23;
        v16 += 2;
        if ( v21 )
          v23 = ++v18;
        sprintf(v19, "%02x", v20, v18);
      }
      while ( v15 != &v30 );
      V_LOCK();
      logfmt_raw((char *)v32, 0x1000u, 0, "counter: %d, [DAG] for chip %1d: %s", v23, v5, v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        171,
        "high_speed_tx_check",
        19,
        384,
        60,
        v32);
      if ( v23 == 64 )
      {
        V_LOCK();
        logfmt_raw((char *)v32, 0x1000u, 0, "check high speed baud tx failed!!!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "high_speed_tx_check",
          19,
          387,
          60,
          v32);
        while ( 1 )
          ;
      }
    }
    ++v5;
  }
  while ( v5 != 8 );
  return 0;
}
