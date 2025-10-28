void __fastcall __noreturn read_temp_func(unsigned __int8 *a1)
{
  unsigned __int8 v1; // [sp+Bh] [bp+Bh]

  v1 = *a1;
  while ( 1 )
  {
    if ( gIsReadTemp[v1] && gIsOpenCoreEnd[v1] )
    {
      gReadingTemp[v1] = 1;
      usleep(15 * dword_3368A4);
      if ( byte_3368D8 == 1 )
        read_asic_temperature(v1);
      else
        printf("\n%s: please config sensor_model in Config.ini\n", "read_temp_func");
      if ( gNotReadOutTemp[v1] != 1 )
        set_PWM_according_to_temperature();
      gReadingTemp[v1] = 0;
    }
    usleep((__useconds_t)&unk_F4240);
  }
}
