int hal_key_reset_addr()
{
  if ( conf_loaded )
    return reset_addr;
  else
    return -1;
}
