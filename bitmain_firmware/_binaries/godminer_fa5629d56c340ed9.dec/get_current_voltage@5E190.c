int get_current_voltage()
{
  if ( byte_197B10 )
    return dword_197B2C;
  else
    return sub_5DAF0();
}
