int __fastcall set_temperature_offset_value(char a1, char a2, int a3)
{
  printf("\n--- %s\n", "set_temperature_offset_value");
  write_temperature_offset_PIC16F1704(a1, a2, a3);
  return usleep(0x186A0u);
}
