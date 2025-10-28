int get_current_voltage()
{
  if ( byte_17B080 )
    return dword_17B09C;
  else
    return sub_54718();
}
