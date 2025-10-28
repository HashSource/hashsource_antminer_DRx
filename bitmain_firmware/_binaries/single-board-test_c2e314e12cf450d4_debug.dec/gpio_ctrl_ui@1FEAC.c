int __fastcall gpio_ctrl_ui(unsigned int a1, int a2)
{
  int v6; // [sp+8h] [bp+8h]
  int v7; // [sp+Ch] [bp+Ch]

  v7 = -1;
  v6 = convert_ui_type_to_port(a1);
  if ( v6 )
  {
    printf("%s:%d", "gpio_ctrl_ui", 225);
    printf("ui type = %d, port = %d, status = %d\n", a1, v6, a2);
    if ( pthread_mutex_lock(&ui_api_mutex) )
    {
      printf("%s:%d", "gpio_ctrl_ui", 227);
      puts("failed to api lock");
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        remove_port_form_gpio_map(v6, (int *)ui_flicker_map);
        v7 = gpio_write(v6, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          add_port_to_gpio_map(v6, 200, (int *)ui_flicker_map);
        }
        else
        {
          printf("%s:%d", "gpio_ctrl_ui", 243);
          puts("unsuported led status");
          v7 = -2;
        }
      }
      else
      {
        remove_port_form_gpio_map(v6, (int *)ui_flicker_map);
        v7 = gpio_write(v6, 1);
      }
      pthread_mutex_unlock(&ui_api_mutex);
      return v7;
    }
  }
  else
  {
    printf("%s:%d", "gpio_ctrl_ui", 222);
    puts("unsuported gpio port");
    return -1;
  }
}
