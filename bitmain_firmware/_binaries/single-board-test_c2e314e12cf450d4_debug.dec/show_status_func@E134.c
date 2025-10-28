void __fastcall __noreturn show_status_func(unsigned __int8 *a1)
{
  unsigned __int8 v1; // [sp+Bh] [bp+Bh]

  v1 = *a1;
  time_counter[*a1] = 0;
  while ( 1 )
  {
    memset(lcd_output_0, 32, 0x40u);
    sprintf(lcd_output_0, "   time %ds", time_counter[v1]);
    sprintf(s, "   nonce=%d", gValid_Nonce_Num[v1]);
    sprintf(byte_338960, "   HW=%d", gHw_Nonce_Num[v1]);
    if ( gIsReadTemp[v1] )
    {
      if ( gIsOpenCoreEnd[v1] )
        sprintf(byte_338970, "   temp %d `C", highest_temp[v1]);
    }
    write_lcd(0, (int)lcd_output_0, 0x40u);
    usleep((__useconds_t)&unk_F4240);
    ++time_counter[v1];
  }
}
