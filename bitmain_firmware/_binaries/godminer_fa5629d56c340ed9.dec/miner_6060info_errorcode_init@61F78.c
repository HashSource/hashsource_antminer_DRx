int miner_6060info_errorcode_init()
{
  char *v0; // r0
  double *file; // r0
  char v3[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_197BC4);
  if ( byte_197FD4 || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_197BC4);
    return 0;
  }
  else
  {
    LOWORD(v0) = -26548;
    HIWORD(v0) = (unsigned int)"new/miner_util/check_heartbeat.c" >> 16;
    file = json_load_file(v0, 0, v3);
    dword_197FD8 = (int)file;
    if ( file && !*(_DWORD *)file )
    {
      byte_197FD4 = 1;
      pthread_mutex_unlock(&stru_197BC4);
      return 1;
    }
    else
    {
      return sub_61280();
    }
  }
}
