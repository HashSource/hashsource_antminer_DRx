int frontend_runtime_instance()
{
  int *v0; // r3
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v0) = 30364;
  HIWORD(v0) = (unsigned int)&unk_196694 >> 16;
  v1 = *v0;
  if ( !*v0 )
  {
    V_LOCK();
    LOWORD(v3) = -12804;
    HIWORD(v3) = (unsigned int)"tranonce1" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 24916;
    HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v5) = -12964;
    HIWORD(v5) = (unsigned int)"authentication failed, req_id=%d" >> 16;
    zlog(*v4, v5, 157, "frontend_runtime_instance", 25, 79, 100, v6);
  }
  return v1;
}
