int __fastcall top_init_dash(int *a1)
{
  char *v2; // r1
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r0
  int v9; // r1
  char v10; // r3
  void (__fastcall *v11)(int *, int, int); // r3
  _DWORD v13[7]; // [sp+28h] [bp-1024h] BYREF
  int v14; // [sp+44h] [bp-1008h]
  char v15[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v13, v2, a1[64]);
  LOWORD(v3) = -19324;
  HIWORD(v3) = (unsigned int)"Setting_read_sensor_temp_remote_on_ctrlboard_DCR_1727" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -19880;
  HIWORD(v5) = (unsigned int)"_1727" >> 16;
  zlog(*v4, v5, 173, "top_init_dash", 13, 640, 40, v15);
  v6 = a1[88];
  v7 = a1[126];
  v8 = sub_1451E0(256, (unsigned __int8)v6);
  if ( (_BYTE)v6 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v9 != v7 - 1 + (unsigned __int8)v6 );
    v7 = a1[126];
  }
  v11 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v8;
  v11(a1, v7, v6);
  usleep(0x2710u);
  sub_6F998((int)a1, 0);
  usleep(0x2710u);
  sub_734F8((int)a1);
  return 0;
}
