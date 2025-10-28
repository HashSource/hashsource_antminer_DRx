int __fastcall sub_74DE0(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int *i; // r8
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r3
  int v13; // r2
  int v14; // r2
  int *v16; // [sp+38h] [bp-109Ch]
  int v17; // [sp+40h] [bp-1094h] BYREF
  int v18; // [sp+44h] [bp-1090h] BYREF
  int v19; // [sp+48h] [bp-108Ch] BYREF
  int v20; // [sp+4Ch] [bp-1088h] BYREF
  _DWORD v21[7]; // [sp+50h] [bp-1084h] BYREF
  int v22; // [sp+6Ch] [bp-1068h]
  _DWORD v23[7]; // [sp+70h] [bp-1064h] BYREF
  int v24; // [sp+8Ch] [bp-1048h]
  _DWORD v25[7]; // [sp+90h] [bp-1044h] BYREF
  int v26; // [sp+ACh] [bp-1028h]
  _DWORD v27[7]; // [sp+B0h] [bp-1024h] BYREF
  int v28; // [sp+CCh] [bp-1008h]
  char v29[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 412);
  v3 = *(_DWORD **)(a1 + 404);
  v17 = -64;
  v18 = -64;
  if ( v2 > 0 )
  {
    v16 = &a2[2 * v2];
    for ( i = a2; v16 != i; i += 2 )
    {
      v19 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v17,
        &v19,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v19 )
      {
        v6 = v17;
        if ( v17 >= -63 )
          goto LABEL_4;
        v17 = -64;
        V_LOCK();
        V_INT((int)v21, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v22,
          v21[0],
          v21[1],
          v21[2],
          v21[3],
          v21[4],
          v21[5],
          v21[6],
          v22,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v13 = 285;
      }
      else
      {
        v17 = -64;
        V_LOCK();
        V_INT((int)v23, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v24,
          v23[0],
          v23[1],
          v23[2],
          v23[3],
          v23[4],
          v23[5],
          v23[6],
          v24,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v13 = 290;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        171,
        "read_temperature_dcr",
        20,
        v13,
        100,
        v29);
      v6 = v17;
LABEL_4:
      *i = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 160);
      v20 = 0;
      v11(a1, &v18, &v20, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v20 )
      {
        v18 = -64;
        V_LOCK();
        V_INT((int)v27, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v28,
          v27[0],
          v27[1],
          v27[2],
          v27[3],
          v27[4],
          v27[5],
          v27[6],
          v28,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v14 = 305;
LABEL_11:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
          171,
          "read_temperature_dcr",
          20,
          v14,
          100,
          v29);
        v12 = v18;
        goto LABEL_6;
      }
      v12 = v18;
      if ( v18 < -63 )
      {
        v18 = -64;
        V_LOCK();
        V_INT((int)v25, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v26,
          v25[0],
          v25[1],
          v25[2],
          v25[3],
          v25[4],
          v25[5],
          v25[6],
          v26,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v14 = 300;
        goto LABEL_11;
      }
LABEL_6:
      i[1] = v12;
      v3 += 6;
    }
  }
  return 0;
}
