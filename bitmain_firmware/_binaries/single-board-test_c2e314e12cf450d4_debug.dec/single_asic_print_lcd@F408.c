int __fastcall single_asic_print_lcd(int a1, char a2)
{
  char v4[20]; // [sp+8h] [bp+8h] BYREF

  qmemcpy(v4, "      HW:       ", 16);
  display_level_result_on_lcd();
  if ( (a2 & 1) != 0 )
    write_lcd_no_memset(2u, (int)"   Pattern OK   ", 0x10u);
  else
    write_lcd_no_memset(2u, (int)"   Pattern NG   ", 0x10u);
  sprintf(&v4[10], "%d", gHw_Nonce_Num[(unsigned __int8)gChain]);
  return write_lcd_no_memset(1u, (int)v4, 0x10u);
}
