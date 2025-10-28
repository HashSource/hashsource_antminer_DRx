int __fastcall get_timeout_count(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r4
  char v7[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, "get_timeout_count");
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = -14448;
  HIWORD(v4) = (unsigned int)" lost cnt: %08x" >> 16;
  v5 = 23;
  zlog(*v3, v4, 171, "get_timeout_count", 17, 190, 0x14u, v7);
  do
  {
    sub_791A4(a1, 255, v5++, 0);
    usleep(0x2710u);
  }
  while ( v5 != 29 );
  return 0;
}
