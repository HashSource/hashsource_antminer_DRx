int __fastcall hal_fan_addr(int a1)
{
  int i; // [sp+Ch] [bp+Ch]

  if ( !conf_loaded )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( fans[3 * i] == a1 )
      return fans[3 * i + 1];
  }
  return -2;
}
