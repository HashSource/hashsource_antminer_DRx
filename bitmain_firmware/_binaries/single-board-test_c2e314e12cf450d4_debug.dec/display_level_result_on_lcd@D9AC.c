int display_level_result_on_lcd()
{
  char s[8]; // [sp+4h] [bp+4h] BYREF
  unsigned int i; // [sp+Ch] [bp+Ch]

  qmemcpy(s, "     ", 5);
  sprintf(s, "%2d", (unsigned __int8)pattern_test_time + 1);
  for ( i = 0; i <= 2; ++i )
    lcd_buffer[i + 10] = s[i];
  write_lcd(0, (int)lcd_buffer, 0x10u);
  return printf("Level: %d\n\n", (unsigned __int8)pattern_test_time + 1);
}
