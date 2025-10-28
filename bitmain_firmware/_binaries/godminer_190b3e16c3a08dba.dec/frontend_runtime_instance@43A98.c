int frontend_runtime_instance()
{
  int v0; // r4
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = dword_17AC68;
  if ( !dword_17AC68 )
  {
    V_LOCK();
    LOWORD(v2) = 15844;
    HIWORD(v2) = (unsigned int)&unk_1366FC >> 16;
    logfmt_raw(v5, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -12376;
    HIWORD(v3) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v4) = 15684;
    HIWORD(v4) = (unsigned int)&unk_13665C >> 16;
    zlog(*v3, v4, 157, "frontend_runtime_instance", 25, 74, 100, v5);
  }
  return v0;
}
