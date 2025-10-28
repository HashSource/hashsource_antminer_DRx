int __fastcall sub_8CF48(int a1, int a2)
{
  _DWORD *v2; // r6
  int v3; // r2
  int *v5; // r10
  int v6; // r11
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  void (__fastcall *v12)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // lr
  bool v19; // cc
  int v20; // r12
  bool v21; // zf
  int v22; // r7
  int v23; // r8
  int v24; // r2
  int v25; // r2
  int v27; // r3
  int v28; // [sp+44h] [bp-10E0h]
  int v29; // [sp+50h] [bp-10D4h] BYREF
  int v30; // [sp+54h] [bp-10D0h] BYREF
  int v31; // [sp+58h] [bp-10CCh] BYREF
  int v32; // [sp+5Ch] [bp-10C8h] BYREF
  _DWORD v33[7]; // [sp+60h] [bp-10C4h] BYREF
  int v34; // [sp+7Ch] [bp-10A8h]
  _DWORD v35[7]; // [sp+80h] [bp-10A4h] BYREF
  int v36; // [sp+9Ch] [bp-1088h]
  _DWORD v37[7]; // [sp+A0h] [bp-1084h] BYREF
  int v38; // [sp+BCh] [bp-1068h]
  _DWORD v39[7]; // [sp+C0h] [bp-1064h] BYREF
  int v40; // [sp+DCh] [bp-1048h]
  _DWORD v41[7]; // [sp+E0h] [bp-1044h] BYREF
  int v42; // [sp+FCh] [bp-1028h]
  _DWORD v43[7]; // [sp+100h] [bp-1024h] BYREF
  int v44; // [sp+11Ch] [bp-1008h]
  char v45[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(_DWORD **)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 412);
  v28 = v3;
  v29 = -64;
  v30 = -64;
  if ( v3 > 0 )
  {
    v5 = (int *)(a2 + 4);
    v6 = 0;
    do
    {
      v31 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v29,
        &v31,
        *v2,
        v2[1],
        v2[2],
        v2[3],
        v2[4],
        v2[5]);
      if ( v31 )
      {
        v7 = v29;
        if ( v29 >= -63 )
          goto LABEL_4;
        v29 = -64;
        V_LOCK();
        V_INT((int)v33, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v24 = 292;
      }
      else
      {
        v29 = -64;
        V_LOCK();
        V_INT((int)v35, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v24 = 297;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        v24,
        100,
        v45);
      v7 = v29;
LABEL_4:
      *(v5 - 1) = v7;
      v8 = v2[1];
      v9 = v2[2];
      v10 = v2[3];
      v11 = v2[4];
      v12 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 160);
      v32 = 0;
      v12(a1, &v30, &v32, *v2, v8, v9, v10, v11, v2[5]);
      if ( v32 )
      {
        v13 = v30;
        if ( v30 >= -63 )
          goto LABEL_6;
        v30 = -64;
        V_LOCK();
        V_INT((int)v37, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v25 = 308;
      }
      else
      {
        v30 = -64;
        V_LOCK();
        V_INT((int)v39, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v2,
          v2[5]);
        V_UNLOCK();
        v25 = 313;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        v25,
        100,
        v45);
      v13 = v30;
LABEL_6:
      *v5 = v13;
      v14 = v29;
      v15 = v6 + 2 * *(_DWORD *)(a1 + 248);
      v16 = v13 - *(unsigned __int8 *)(a1 + 1008) - v29;
      v17 = v15;
      if ( v16 < 0 )
        v16 = v29 - (v13 - *(unsigned __int8 *)(a1 + 1008));
      v18 = dword_1939BC[v15];
      v19 = v16 <= 3;
      v20 = dword_1939BC[v17 + 6];
      if ( v19 )
        goto LABEL_18;
      v21 = v18 == -64;
      if ( v18 == -64 )
        v21 = v20 == -64;
      if ( v21 )
      {
        v20 = -64;
        v18 = -64;
        goto LABEL_18;
      }
      v22 = v29 - v18;
      v23 = v13 - v20;
      if ( v29 - v18 < 0 )
        v22 = v18 - v29;
      if ( v23 < 0 )
        v23 = v20 - v13;
      if ( v22 > v23 )
      {
        V_LOCK();
        V_INT((int)v41, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
          v29,
          v30 - *(unsigned __int8 *)(a1 + 1008),
          v22,
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          325,
          20,
          v45);
        v13 = v30;
        v14 = v30 - *(unsigned __int8 *)(a1 + 1008);
        *(v5 - 1) = v14;
        v27 = *(_DWORD *)(a1 + 248);
        v29 = v14;
LABEL_32:
        v15 = v6 + 2 * v27;
        v17 = v15;
        v18 = dword_1939BC[v15];
        v20 = dword_1939BC[v15 + 6];
        goto LABEL_18;
      }
      if ( v22 < v23 )
      {
        V_LOCK();
        V_INT((int)v43, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v45,
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
          "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
          v30,
          *(unsigned __int8 *)(a1 + 1008) + v29,
          v22,
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          330,
          20,
          v45);
        v14 = v29;
        v13 = *(unsigned __int8 *)(a1 + 1008) + v29;
        *v5 = v13;
        v30 = v13;
        v27 = *(_DWORD *)(a1 + 248);
        goto LABEL_32;
      }
LABEL_18:
      ++v6;
      if ( v18 != v14 )
        dword_1939BC[v15] = v14;
      if ( v20 != v13 )
        dword_1939BC[v17 + 6] = v13;
      v2 += 6;
      v5 += 2;
    }
    while ( v28 != v6 );
  }
  return 0;
}
