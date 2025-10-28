int platform_init()
{
  unsigned int v2; // [sp+Ch] [bp+4h] BYREF
  char s[512]; // [sp+10h] [bp+8h] BYREF
  char *v4; // [sp+210h] [bp+208h]
  unsigned int v5; // [sp+214h] [bp+20Ch]

  if ( platform_inited )
    return 0;
  if ( fpga_init() )
  {
    printf("%s:%d", "platform_init", 47);
    puts("fpga init failed");
    return -1;
  }
  else if ( gpio_init() )
  {
    printf("%s:%d", "platform_init", 51);
    puts("gpio init failed");
    return -2;
  }
  else
  {
    memset(capability, 0, sizeof(capability));
    v4 = getenv("HAL_CONFIG_PATH");
    if ( v4 )
      snprintf(s, 0x200u, "%s/%s", v4, "hal_conf.json");
    else
      snprintf(s, 0x200u, "/media/card/%s", "hal_conf.json");
    printf("%s:%d", "platform_init", 65);
    printf("hal config path = %s\n", s);
    if ( hal_load_conf(s) )
    {
      fpga_uninit();
      gpio_uninit();
      printf("%s:%d", "platform_init", 69);
      puts("failed to load hal config");
      return -3;
    }
    else
    {
      v2 = 0;
      v5 = 0;
      fpga_read(2, &v2);
      if ( v2 )
      {
        if ( (v2 & 0xFF000000) != 0 )
        {
          platform_is_t9 = 1;
          v2 >>= 24;
          printf("%s:%d", "platform_init", 81);
          printf("HASH_ON_PLUG T9 = 0x%x\n", v2);
        }
        else
        {
          platform_is_t9 = 0;
          v2 = (unsigned __int16)v2;
          printf("%s:%d", "platform_init", 87);
          printf("HASH_ON_PLUG V9 = 0x%x\n", v2);
          while ( v2 )
          {
            if ( (v2 & 1) != 0 )
            {
              printf("%s:%d", "platform_init", 90);
              printf("slot %d pluged\n", v5);
              capability[18 * capability[0] + 1] = v5;
              capability[18 * capability[0] + 3 + capability[18 * capability[0] + 2]++] = v5;
              ++capability[0];
            }
            v2 >>= 1;
            ++v5;
          }
        }
      }
      else
      {
        printf("%s:%d", "platform_init", 76);
        puts("Cannot Find Any Plug In!\r");
      }
      if ( platform_is_t9 )
        fpga_read(t9_fpga_map, &v2);
      else
        fpga_read(v9_fpga_map, &v2);
      v2 |= 0x20000000u;
      printf("%s:%d", "platform_init", 104);
      printf("HARDWARE_VERSION = 0x%x\n", v2);
      if ( platform_is_t9 )
        fpga_write(t9_fpga_map, v2);
      else
        fpga_write(v9_fpga_map, v2);
      platform_dump_capability(capability);
      platform_inited = 1;
      fan_init();
      ui_init();
      uart_init();
      return 0;
    }
  }
}
