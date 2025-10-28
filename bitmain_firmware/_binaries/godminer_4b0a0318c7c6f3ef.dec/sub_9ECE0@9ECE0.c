int __fastcall sub_9ECE0(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r5
  int *v5; // r7
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r2
  int v13; // r1
  int v14; // r12
  int v15; // r0
  int v16; // r3
  bool v17; // zf
  int v18; // r8
  int v19; // r9
  int v20; // r2
  int v21; // r2
  int *v23; // [sp+3Ch] [bp-10E0h]
  int v24; // [sp+48h] [bp-10D4h] BYREF
  int v25; // [sp+4Ch] [bp-10D0h] BYREF
  int v26; // [sp+50h] [bp-10CCh] BYREF
  int v27; // [sp+54h] [bp-10C8h] BYREF
  _DWORD v28[7]; // [sp+58h] [bp-10C4h] BYREF
  int v29; // [sp+74h] [bp-10A8h]
  _DWORD v30[7]; // [sp+78h] [bp-10A4h] BYREF
  int v31; // [sp+94h] [bp-1088h]
  _DWORD v32[7]; // [sp+98h] [bp-1084h] BYREF
  int v33; // [sp+B4h] [bp-1068h]
  _DWORD v34[7]; // [sp+B8h] [bp-1064h] BYREF
  int v35; // [sp+D4h] [bp-1048h]
  _DWORD v36[7]; // [sp+D8h] [bp-1044h] BYREF
  int v37; // [sp+F4h] [bp-1028h]
  _DWORD v38[7]; // [sp+F8h] [bp-1024h] BYREF
  int v39; // [sp+114h] [bp-1008h]
  char v40[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 412);
  v3 = *(_DWORD **)(a1 + 404);
  v24 = -64;
  v25 = -64;
  if ( v2 > 0 )
  {
    v23 = &a2[2 * v2];
    v5 = a2;
    do
    {
      v26 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v24,
        &v26,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v26 )
      {
        v6 = v24;
        if ( v24 >= -63 )
          goto LABEL_4;
        v24 = -64;
        V_LOCK();
        V_INT((int)v28, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v40,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v20 = 350;
      }
      else
      {
        v24 = -64;
        V_LOCK();
        V_INT((int)v30, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v40,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v20 = 355;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        171,
        "read_temperature_ltc",
        20,
        v20,
        100,
        v40);
      v6 = v24;
LABEL_4:
      *v5 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 160);
      v27 = 0;
      v11(a1, &v25, &v27, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v27 )
      {
        v25 = -64;
        V_LOCK();
        V_INT((int)v34, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v40,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v21 = 371;
LABEL_28:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          171,
          "read_temperature_ltc",
          20,
          v21,
          100,
          v40);
        v12 = v25;
        goto LABEL_6;
      }
      v12 = v25;
      if ( v25 < -63 )
      {
        v25 = -64;
        V_LOCK();
        V_INT((int)v32, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v40,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v21 = 366;
        goto LABEL_28;
      }
LABEL_6:
      v5[1] = v12;
      v13 = v24;
      v14 = dword_193AE4;
      v15 = dword_193AE8;
      v16 = v12 - *(unsigned __int8 *)(a1 + 1008) - v24;
      if ( v16 < 0 )
        v16 = v24 - (v12 - *(unsigned __int8 *)(a1 + 1008));
      if ( v16 > 3 )
      {
        v17 = dword_193AE4 == -64;
        if ( dword_193AE4 == -64 )
          v17 = dword_193AE8 == -64;
        if ( v17 )
        {
          v15 = -64;
          v14 = -64;
        }
        else
        {
          v18 = v24 - dword_193AE4;
          v19 = v12 - dword_193AE8;
          if ( v24 - dword_193AE4 < 0 )
            v18 = dword_193AE4 - v24;
          if ( v19 < 0 )
            v19 = dword_193AE8 - v12;
          if ( v18 > v19 )
          {
            V_LOCK();
            V_INT((int)v36, "chain", *(int *)(a1 + 256));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v37,
              v36[0],
              v36[1],
              v36[2],
              v36[3],
              v36[4],
              v36[5],
              v36[6],
              v37,
              "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
              v24,
              v25 - *(unsigned __int8 *)(a1 + 1008),
              v18,
              v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              171,
              "read_temperature_ltc",
              20,
              383,
              20,
              v40);
            v12 = v25;
            v14 = dword_193AE4;
            v15 = dword_193AE8;
            v13 = v25 - *(unsigned __int8 *)(a1 + 1008);
            v24 = v13;
            *v5 = v13;
          }
          else if ( v18 < v19 )
          {
            V_LOCK();
            V_INT((int)v38, "chain", *(int *)(a1 + 256));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v39,
              v38[0],
              v38[1],
              v38[2],
              v38[3],
              v38[4],
              v38[5],
              v38[6],
              v39,
              "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
              v25,
              *(unsigned __int8 *)(a1 + 1008) + v24,
              v18,
              v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              171,
              "read_temperature_ltc",
              20,
              388,
              20,
              v40);
            v13 = v24;
            v14 = dword_193AE4;
            v15 = dword_193AE8;
            v12 = *(unsigned __int8 *)(a1 + 1008) + v24;
            v25 = v12;
            v5[1] = v12;
          }
        }
      }
      if ( v14 != v13 )
        dword_193AE4 = v13;
      v5 += 2;
      v3 += 6;
      if ( v15 != v12 )
        dword_193AE8 = v12;
    }
    while ( v23 != v5 );
  }
  return 0;
}
