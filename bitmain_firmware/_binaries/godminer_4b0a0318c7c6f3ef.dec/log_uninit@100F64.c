int __fastcall log_uninit(int a1)
{
  if ( g_zc || g_temp_zc || g_fan_zc || g_hash_zc )
  {
    zlog_fini(a1);
    g_hash_zc = 0;
    g_temp_zc = 0;
    g_zc = 0;
  }
  puts("zlog uninit!");
  return 0;
}
