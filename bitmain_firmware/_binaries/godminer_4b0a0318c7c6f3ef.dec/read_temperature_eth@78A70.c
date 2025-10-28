int __fastcall read_temperature_eth(int a1, int *a2)
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
  _DWORD *v13; // r3
  int v14; // r2
  int v15; // r1
  _DWORD *v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r9
  int v20; // r4
  int *v22; // [sp+38h] [bp-109Ch]
  int v23; // [sp+40h] [bp-1094h] BYREF
  int v24; // [sp+44h] [bp-1090h] BYREF
  int v25; // [sp+48h] [bp-108Ch] BYREF
  int v26; // [sp+4Ch] [bp-1088h] BYREF
  _DWORD v27[7]; // [sp+50h] [bp-1084h] BYREF
  int v28; // [sp+6Ch] [bp-1068h]
  _DWORD v29[7]; // [sp+70h] [bp-1064h] BYREF
  int v30; // [sp+8Ch] [bp-1048h]
  _DWORD v31[7]; // [sp+90h] [bp-1044h] BYREF
  int v32; // [sp+ACh] [bp-1028h]
  _DWORD v33[7]; // [sp+B0h] [bp-1024h] BYREF
  int v34; // [sp+CCh] [bp-1008h]
  char v35[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 412);
  v3 = *(_DWORD **)(a1 + 404);
  v23 = -64;
  v24 = -64;
  if ( v2 > 0 )
  {
    v22 = &a2[2 * v2];
    for ( i = a2; v22 != i; i += 2 )
    {
      v25 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v23,
        &v25,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v25 )
      {
        v6 = v23;
        if ( v23 >= -63 )
          goto LABEL_4;
        LOWORD(v19) = -23368;
        v23 = -64;
        V_LOCK();
        V_INT((int)v27, "chain", *(int *)(a1 + 256));
        HIWORD(v19) = (unsigned int)"" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v28, v27[0], v27[1], v27[2], v27[3], v27[4], v27[5], v27[6], v28, v19, *v3, v3[5]);
        V_UNLOCK();
        LOWORD(v13) = 20532;
        HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
        v14 = 1590;
      }
      else
      {
        v23 = -64;
        V_LOCK();
        V_INT((int)v29, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v35,
          0x1000u,
          0,
          v30,
          v29[0],
          v29[1],
          v29[2],
          v29[3],
          v29[4],
          v29[5],
          v29[6],
          v30,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        LOWORD(v13) = 20532;
        HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
        v14 = 1597;
      }
      LOWORD(v15) = -14448;
      HIWORD(v15) = (unsigned int)" lost cnt: %08x" >> 16;
      zlog(*v13, v15, 171, "read_temperature_eth", 20, v14, 100, v35);
      v6 = v23;
LABEL_4:
      *i = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 160);
      v26 = 0;
      v11(a1, &v24, &v26, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v26 )
      {
        v24 = -64;
        V_LOCK();
        V_INT((int)v33, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v35,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        LOWORD(v16) = 20532;
        HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
        v17 = 1616;
LABEL_11:
        LOWORD(v18) = -14448;
        HIWORD(v18) = (unsigned int)" lost cnt: %08x" >> 16;
        zlog(*v16, v18, 171, "read_temperature_eth", 20, v17, 100, v35);
        v12 = v24;
        goto LABEL_6;
      }
      v12 = v24;
      if ( v24 < -63 )
      {
        LOWORD(v20) = -23368;
        v24 = -64;
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 256));
        HIWORD(v20) = (unsigned int)"" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v32, v31[0], v31[1], v31[2], v31[3], v31[4], v31[5], v31[6], v32, v20, *v3, v3[5]);
        V_UNLOCK();
        LOWORD(v16) = 20532;
        HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
        v17 = 1609;
        goto LABEL_11;
      }
LABEL_6:
      i[1] = v12;
      v3 += 6;
    }
  }
  return 0;
}
