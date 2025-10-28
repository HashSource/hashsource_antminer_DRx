int miner_6060info_errorcode_init()
{
  char *v0; // r0
  double *file; // r0
  char v3[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock((pthread_mutex_t *)&unk_196BB0);
  if ( byte_196FC0 || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock((pthread_mutex_t *)&unk_196BB0);
    return 0;
  }
  else
  {
    LOWORD(v0) = -32476;
    HIWORD(v0) = (unsigned int)"p count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
    file = json_load_file(v0, 0, v3);
    dword_196FC4 = (int)file;
    if ( file && !*(_DWORD *)file )
    {
      byte_196FC0 = 1;
      pthread_mutex_unlock((pthread_mutex_t *)&unk_196BB0);
      return 1;
    }
    else
    {
      return sub_6057C();
    }
  }
}
