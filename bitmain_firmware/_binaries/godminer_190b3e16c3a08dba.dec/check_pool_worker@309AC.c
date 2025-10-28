int check_pool_worker()
{
  int v0; // r4
  int v1; // r8
  _DWORD *v2; // r7
  int v3; // r6
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r10
  int v7; // r1
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( total_pools <= 0 )
    goto LABEL_10;
  v0 = 0;
  LOWORD(v1) = 4120;
  LOWORD(v2) = -12376;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(pools + 4 * v0);
      if ( **(_BYTE **)(v4 + 12) )
        break;
LABEL_3:
      if ( total_pools <= ++v0 )
        goto LABEL_8;
    }
    v5 = *(_BYTE **)(v4 + 16);
    v6 = (unsigned __int8)*v5;
    if ( *v5 )
    {
      ++v3;
      goto LABEL_3;
    }
    ++v0;
    V_LOCK();
    HIWORD(v1) = (unsigned int)"g.submit\", \"params\":[\"%s\",\"%s\",\"%s\"]}" >> 16;
    logfmt_raw(v12, 0x1000u, v6, v1);
    V_UNLOCK();
    LOWORD(v7) = 3632;
    HIWORD(v7) = (unsigned int)"getdiff:%d" >> 16;
    HIWORD(v2) = (unsigned int)&unk_18C750 >> 16;
    zlog(*v2, v7, 134, "check_pool_worker", 17, 419, 100, v12);
  }
  while ( total_pools > v0 );
LABEL_8:
  if ( v3 )
    return 0;
LABEL_10:
  V_LOCK();
  LOWORD(v9) = 4072;
  HIWORD(v9) = (unsigned int)"0x%s\",\"0x%s\",\"0x%s\"]}" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v9);
  V_UNLOCK();
  LOWORD(v10) = -12376;
  HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v11) = 3632;
  HIWORD(v11) = (unsigned int)"getdiff:%d" >> 16;
  zlog(*v10, v11, 134, "check_pool_worker", 17, 425, 100, v12);
  return -1;
}
