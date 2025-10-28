int get_current_voltage()
{
  if ( byte_196AF8 )
    return dword_196B14;
  else
    return sub_5CF10();
}
