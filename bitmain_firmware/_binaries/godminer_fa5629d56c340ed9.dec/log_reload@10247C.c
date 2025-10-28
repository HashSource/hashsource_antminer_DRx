int log_reload()
{
  if ( !g_zc || !g_temp_zc || !g_fan_zc || !g_hash_zc )
    return 0;
  zlog_reload(opt_zlog_conf_file);
  puts("zlog reload!");
  return 0;
}
