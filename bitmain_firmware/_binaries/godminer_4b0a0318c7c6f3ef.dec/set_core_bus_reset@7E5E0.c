int __fastcall set_core_bus_reset(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  unsigned __int8 v7; // r1
  int v9; // [sp+20h] [bp-28h]
  _DWORD v10[7]; // [sp+28h] [bp-20h] BYREF
  int v11; // [sp+44h] [bp-4h]
  char v12[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v10, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  v9 = v3;
  v4 = 0;
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    v9,
    "set_core_bus_reset");
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v6, 171, "set_core_bus_reset", 18, 944, 60, v12);
  do
  {
    sub_78F08(a1, v4, 201, 0);
    usleep((__useconds_t)&stru_186A0);
    v7 = v4++;
    sub_78F08(a1, v7, 201, 1);
    usleep((__useconds_t)&stru_186A0);
  }
  while ( v4 != 16 );
  return 0;
}
