int ui_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int i; // [sp+4h] [bp+4h]

  if ( ui_inited )
    return 0;
  if ( gpio_init() )
  {
    printf("%s:%d", "ui_init", 124);
    puts("gpio init failed");
    return -1;
  }
  else
  {
    v1 = convert_ui_type_to_port(1u);
    gpio_export(v1);
    v2 = convert_ui_type_to_port(2u);
    gpio_export(v2);
    v3 = convert_ui_type_to_port(0x100u);
    gpio_export(v3);
    v4 = convert_ui_type_to_port(0x101u);
    gpio_export(v4);
    v5 = convert_ui_type_to_port(0x100u);
    gpio_reg_callback(v5, (int)gpio_key_callback);
    v6 = convert_ui_type_to_port(0x101u);
    gpio_reg_callback(v6, (int)gpio_key_callback);
    pthread_mutex_init(&ui_api_mutex, 0);
    for ( i = 0; i <= 4; ++i )
      ui_callback[i] = 0;
    ui_flicker_map = (int)new_c_map((int)gpio_compare_e_0, 0, 0);
    ui_pull_thread = 1;
    pthread_create((pthread_t *)&ui_thread, 0, (void *(*)(void *))ui_pull_function, 0);
    ui_inited = 1;
    return 0;
  }
}
