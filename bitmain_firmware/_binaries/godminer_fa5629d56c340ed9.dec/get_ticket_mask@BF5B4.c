int get_ticket_mask()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(140, &v1);
  return v1;
}
