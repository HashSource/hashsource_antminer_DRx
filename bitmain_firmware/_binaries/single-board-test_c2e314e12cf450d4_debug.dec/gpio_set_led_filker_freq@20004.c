int __fastcall gpio_set_led_filker_freq(unsigned int a1, int a2)
{
  int v5; // [sp+Ch] [bp+Ch]

  v5 = convert_ui_type_to_port(a1);
  if ( v5 )
  {
    if ( a2 == 200 )
    {
      printf("%s:%d", "gpio_set_led_filker_freq", 266);
      puts("interval is same with default");
    }
    else
    {
      update_filcker_freq(v5, a2, ui_flicker_map);
    }
    return 0;
  }
  else
  {
    printf("%s:%d", "gpio_set_led_filker_freq", 262);
    puts("unsuported led port");
    return -1;
  }
}
