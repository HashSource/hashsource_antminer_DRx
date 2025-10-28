int hal_fan_number()
{
  int i; // [sp+0h] [bp+0h]
  int v3; // [sp+4h] [bp+4h]

  v3 = 0;
  if ( !conf_loaded )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( fans[3 * i] != -1 )
      ++v3;
  }
  return v3;
}
