int log_init()
{
  char *v0; // r12
  int v1; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v0 = (char *)opt_zlog_conf_file;
  if ( !opt_zlog_conf_file )
  {
    v0 = (char *)malloc(0xFu);
    if ( v0 )
      strcpy(v0, "/etc/zlog.conf");
    opt_zlog_conf_file = (int)v0;
  }
  v1 = zlog_init(v0);
  if ( v1 )
  {
    v1 = -1;
    puts("zlog init failed");
  }
  else
  {
    g_zc = zlog_get_category("miner_zc");
    if ( g_zc )
    {
      g_temp_zc = zlog_get_category("miner_temp_zc");
      if ( g_temp_zc )
      {
        g_fan_zc = zlog_get_category("miner_fan_zc");
        if ( g_fan_zc )
        {
          g_hash_zc = zlog_get_category("miner_hash_zc");
          if ( g_hash_zc )
          {
            puts("zlog init OK!");
          }
          else
          {
            v1 = -4;
            v6 = puts("zlog get miner_hash_zc category fail");
            zlog_fini(v6);
          }
        }
        else
        {
          v1 = -3;
          v5 = puts("zlog get miner_fan_zc category fail");
          zlog_fini(v5);
        }
      }
      else
      {
        v1 = -3;
        v3 = puts("zlog get miner_temp_zc category fail");
        zlog_fini(v3);
      }
    }
    else
    {
      v1 = -2;
      v4 = puts("zlog get miner_zc category fail");
      zlog_fini(v4);
    }
  }
  return v1;
}
