int sub_980C()
{
  int v2; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  v2 = 0;
  for ( i = 0; i <= 4; ++i )
  {
    if ( !sub_8EF4() )
    {
      usleep(0x4E20u);
      ++v2;
    }
  }
  if ( v2 != 5 )
    return 0;
  sub_8ED0();
  return 1;
}
