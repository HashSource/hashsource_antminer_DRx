int __fastcall sub_A3700(int a1, int a2)
{
  _DWORD *v3; // r9
  int v4; // r7
  int v5; // r3
  int v6; // r0
  int v7; // r2
  _DWORD *v8; // r7
  int v9; // r6
  int v10; // r3
  int v11; // r0
  int v12; // r2
  int v14; // [sp+40h] [bp-10DCh]
  int v15; // [sp+40h] [bp-10DCh]
  int v16; // [sp+44h] [bp-10D8h]
  int v17; // [sp+44h] [bp-10D8h]
  _DWORD *v19; // [sp+4Ch] [bp-10D0h]
  int v20; // [sp+50h] [bp-10CCh] BYREF
  int v21; // [sp+54h] [bp-10C8h] BYREF
  _DWORD v22[7]; // [sp+58h] [bp-10C4h] BYREF
  int v23; // [sp+74h] [bp-10A8h]
  _DWORD v24[7]; // [sp+78h] [bp-10A4h] BYREF
  int v25; // [sp+94h] [bp-1088h]
  _DWORD v26[7]; // [sp+98h] [bp-1084h] BYREF
  int v27; // [sp+B4h] [bp-1068h]
  _DWORD v28[7]; // [sp+B8h] [bp-1064h] BYREF
  int v29; // [sp+D4h] [bp-1048h]
  _DWORD v30[7]; // [sp+D8h] [bp-1044h] BYREF
  int v31; // [sp+F4h] [bp-1028h]
  _DWORD v32[7]; // [sp+F8h] [bp-1024h] BYREF
  int v33; // [sp+114h] [bp-1008h]
  char v34[4100]; // [sp+118h] [bp-1004h] BYREF

  v16 = *(_DWORD *)(a1 + 364);
  if ( v16 > 0 )
  {
    v3 = *(_DWORD **)(a1 + 356);
    v14 = 0;
    v19 = v3;
    do
    {
      v4 = 5;
      do
      {
        (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
          a1,
          &v21,
          &v20,
          *v3,
          v3[1],
          v3[2],
          v3[3],
          v3[4],
          v3[5]);
        if ( v20 )
        {
          v5 = v21;
          if ( v21 >= -63 )
            goto LABEL_9;
          V_LOCK();
          V_INT((int)v24, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v34,
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
            "sensor[%d] invalid temp, retry",
            *v3);
          V_UNLOCK();
          v6 = g_zc;
          v7 = 480;
        }
        else
        {
          V_LOCK();
          V_INT((int)v22, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v34,
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
            "sensor[%d] read lost, retry",
            *v3);
          V_UNLOCK();
          v6 = g_zc;
          v7 = 478;
        }
        zlog(
          v6,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          v7,
          20,
          v34);
        usleep((__useconds_t)&loc_30D40);
        --v4;
      }
      while ( v4 );
      v21 = -64;
      V_LOCK();
      V_INT((int)v26, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v34,
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
        "read sensor[%d] local temp failed after retry %d times",
        *v3,
        5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "read_temperature_zec_1746",
        25,
        488,
        100,
        v34);
      v5 = v21;
LABEL_9:
      v3 += 6;
      *(_DWORD *)(a2 + 8 * v14++) = v5;
    }
    while ( v16 != v14 );
    v8 = v19;
    v15 = a2;
    v17 = a2 + 8 * v16;
    do
    {
      v9 = 5;
      do
      {
        (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
          a1,
          &v21,
          &v20,
          *v8,
          v8[1],
          v8[2],
          v8[3],
          v8[4],
          v8[5]);
        if ( v20 )
        {
          v10 = v21;
          if ( v21 >= -63 )
            goto LABEL_17;
          V_LOCK();
          V_INT((int)v30, "chain", *(int *)(a1 + 224));
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
            "sensor[%d] invalid temp, retry",
            *v8);
          V_UNLOCK();
          v11 = g_zc;
          v12 = 502;
        }
        else
        {
          V_LOCK();
          V_INT((int)v28, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v34,
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
            "sensor[%d] read lost, retry",
            *v8);
          V_UNLOCK();
          v11 = g_zc;
          v12 = 500;
        }
        zlog(
          v11,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          v12,
          20,
          v34);
        usleep((__useconds_t)&loc_30D40);
        --v9;
      }
      while ( v9 );
      v21 = -64;
      V_LOCK();
      V_INT((int)v32, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v34,
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
        "read sensor[%d] remote temp failed after retry %d times",
        *v8,
        5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "read_temperature_zec_1746",
        25,
        510,
        100,
        v34);
      v10 = v21;
LABEL_17:
      v8 += 6;
      *(_DWORD *)(v15 + 4) = v10;
      v15 += 8;
    }
    while ( v17 != v15 );
  }
  return 0;
}
