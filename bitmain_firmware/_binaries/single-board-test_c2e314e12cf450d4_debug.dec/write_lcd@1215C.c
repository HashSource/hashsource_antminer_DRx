int __fastcall write_lcd(unsigned __int8 a1, int a2, unsigned int a3)
{
  lcd_clear_result();
  return lcd_show_result(a1, a2, a3);
}
