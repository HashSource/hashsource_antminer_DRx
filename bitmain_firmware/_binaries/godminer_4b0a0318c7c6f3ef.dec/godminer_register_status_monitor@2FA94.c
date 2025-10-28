int godminer_register_status_monitor()
{
  int v0; // r0
  int v1; // r0

  LOWORD(v0) = -6212;
  HIWORD(v0) = (unsigned int)&loc_2CF0C >> 16;
  add_chip_status_observer(v0);
  LOWORD(v1) = -5844;
  HIWORD(v1) = (unsigned int)&loc_2D1A0 >> 16;
  return add_fanspeed_observer(v1);
}
