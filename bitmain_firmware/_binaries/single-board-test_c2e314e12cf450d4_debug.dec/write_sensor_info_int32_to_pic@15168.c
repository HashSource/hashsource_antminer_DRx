int __fastcall write_sensor_info_int32_to_pic(char a1, char a2)
{
  _BYTE v5[8]; // [sp+8h] [bp+8h] BYREF

  printf("\n--- %s\n", "write_sensor_info_int32_to_pic");
  v5[0] = byte_3368AC;
  v5[1] = 0;
  v5[2] = byte_3368AD;
  v5[3] = 0;
  v5[4] = byte_3368AE;
  v5[5] = 0;
  v5[6] = byte_3368D8 | 0x20;
  v5[7] = dword_3368DC;
  return set_temperature_offset_value(a1, a2, (int)v5);
}
