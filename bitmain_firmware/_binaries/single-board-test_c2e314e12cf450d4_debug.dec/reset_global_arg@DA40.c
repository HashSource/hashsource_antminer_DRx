void *reset_global_arg()
{
  int v1; // [sp+4h] [bp+4h]
  unsigned int m; // [sp+8h] [bp+8h]
  unsigned int k; // [sp+Ch] [bp+Ch]
  unsigned int j; // [sp+10h] [bp+10h]
  unsigned int i; // [sp+14h] [bp+14h]

  printf("\n--- %s\n", "reset_global_arg");
  memset(lcd_output_0, 32, 0x40u);
  write_lcd(0, (int)lcd_output_0, 0x40u);
  memset(gReceive_Nonce_Num, 0, sizeof(gReceive_Nonce_Num));
  memset(gValid_Nonce_Num, 0, sizeof(gValid_Nonce_Num));
  memset(gHw_Nonce_Num, 0, sizeof(gHw_Nonce_Num));
  memset((void *)reg_value_buf, 0, 0x1410u);
  memset(&gWorks_For_Hw_Check, 0, 0x7F8u);
  pthread_mutex_init(&reg_mutex, 0);
  for ( i = 0; i <= 3; ++i )
  {
    time_counter[i] = 0;
    gWork_Num_For_Hw_Check[i] = 0;
    gIsOpenCoreEnd[i] = 0;
    gStartTest[i] = 0;
    if ( !pattern_test_time )
    {
      gT1_offset_value[i] = 0;
      gT2_offset_value[i] = 0;
      gT3_offset_value[i] = 0;
    }
    Sensor1_OK[i] = 1;
    Sensor2_OK[i] = 1;
    Sensor3_OK[i] = 1;
    Sensor1_temp[i] = 0;
    Sensor2_temp[i] = 0;
    Sensor3_temp[i] = 0;
    last_Sensor1_temp[i] = 0;
    last_Sensor2_temp[i] = 0;
    last_Sensor3_temp[i] = 0;
    highest_temp[i] = 0;
    lowest_temp[i] = 0;
    gGlobalHighestTemp[i] = 0;
    temp_change[i] = 0;
    gHigherThanAlarmTemp[i] = 0;
    gHigherThanMaxTempGap[i] = 0;
    gMaxTempGap_value[i] = 0;
    gIsReadTemp[i] = 1;
    gReadingTemp[i] = 0;
    gNotReadOutTemp[i] = 0;
    pthread_mutex_init(&HW_check_mutex[i], 0);
    *((_BYTE *)&cgpu + i + 1049784) = 0;
    gRepeated_Nonce_Id[i] = 0;
    gValid_Nonce_Num[i] = 0;
    gSend_Work_Num[i] = 0;
    for ( j = 0; dword_336848 > j; ++j )
    {
      v1 = *((_DWORD *)&cgpu + j + 131112);
      for ( k = 0; dword_33684C > k; ++k )
      {
        *((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((i << 8) + j) + k) = 0;
        for ( m = 0; dword_33681C > m; ++m )
          *(_DWORD *)(v1 + 204 * (k * dword_33681C + m) + 4 * (i + 46) + 4) = 0;
      }
    }
  }
  return clear_register_value_buf();
}
