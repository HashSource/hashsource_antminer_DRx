int __fastcall single_board_print_lcd(char a1)
{
  display_level_result_on_lcd();
  if ( (a1 & 1) != 0 )
  {
    write_lcd_no_memset(1u, (int)"   Pattern OK   ", 0x10u);
    pattern_test_time = 0;
  }
  else
  {
    write_lcd_no_memset(1u, (int)"   Pattern NG   ", 0x10u);
    ++pattern_test_time;
  }
  if ( g_test_epprom )
  {
    puts("eeprom OK");
    write_lcd_no_memset(2u, (int)"   epprom OK\t", 0x10u);
  }
  else
  {
    puts("eeprom NG");
    write_lcd_no_memset(2u, (int)"   epprom NG\t", 0x10u);
  }
  if ( (a1 & 4) != 0 )
    return write_lcd_no_memset(3u, (int)" Temperature OK ", 0x10u);
  else
    return write_lcd_no_memset(3u, (int)" Temperature NG ", 0x10u);
}
