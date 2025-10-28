int hal_key_ipreport_addr()
{
  if ( conf_loaded )
    return ipreport_addr;
  else
    return -1;
}
