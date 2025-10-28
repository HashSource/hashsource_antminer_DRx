void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( ui_inited )
  {
    ui_pull_thread = 0;
    pthread_join(ui_thread, 0);
    delete_c_map((void ****)ui_flicker_map);
    pthread_mutex_destroy(&ui_api_mutex);
    v0 = convert_ui_type_to_port(0x100u);
    gpio_unreg_callback(v0, (int)gpio_key_callback);
    v1 = convert_ui_type_to_port(0x101u);
    gpio_unreg_callback(v1, (int)gpio_key_callback);
    v2 = convert_ui_type_to_port(1u);
    gpio_unexport(v2);
    v3 = convert_ui_type_to_port(2u);
    gpio_unexport(v3);
    v4 = convert_ui_type_to_port(0x100u);
    gpio_unexport(v4);
    v5 = convert_ui_type_to_port(0x101u);
    gpio_unexport(v5);
    gpio_uninit();
    ui_inited = 0;
  }
}
