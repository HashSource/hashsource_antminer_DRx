int __fastcall send_func(unsigned __int8 *a1)
{
  int v1; // r3
  char s[186]; // [sp+14h] [bp+Ch] BYREF
  __int16 v4; // [sp+CEh] [bp+C6h]
  void *src; // [sp+D0h] [bp+C8h]
  int v6; // [sp+D4h] [bp+CCh]
  int v7; // [sp+D8h] [bp+D0h]
  int v8; // [sp+DCh] [bp+D4h]
  unsigned __int8 v9; // [sp+E3h] [bp+DBh]
  unsigned __int8 *v10; // [sp+E4h] [bp+DCh]
  int m; // [sp+E8h] [bp+E0h]
  unsigned int k; // [sp+ECh] [bp+E4h]
  unsigned int j; // [sp+F0h] [bp+E8h]
  unsigned int i; // [sp+F4h] [bp+ECh]

  v10 = a1;
  v9 = *a1;
  j = 0;
  k = 0;
  v8 = 0;
  v7 = 0;
  m = 0;
  memset(s, 0, 0xB8u);
  for ( i = 0; dword_336848 > i; ++i )
  {
    v6 = *((_DWORD *)&cgpu + i + 131112);
    for ( j = 0; dword_33684C > j; ++j )
    {
      for ( k = 0; dword_33681C > k; ++k )
      {
        src = (void *)(v6 + 204 * (j * dword_33681C + k));
        s[0] = 48;
        if ( dword_336850 == 1722 )
        {
          s[1] = k;
        }
        else if ( dword_336850 == 1725 )
        {
          s[1] = k | 0x80;
        }
        for ( m = 0; m <= 179; ++m )
          s[m + 2] = *((_BYTE *)src + m + 8);
        if ( s[0] == 48 )
          s[146] = 0;
        v4 = CRC16(s, 182);
        s[182] = HIBYTE(v4);
        s[183] = v4;
        dcr_uart_send(v9, s, 0xB8u);
        pthread_mutex_lock(&HW_check_mutex[v9]);
        for ( m = 8; m >= 0; --m )
          memcpy(
            (char *)&gWorks_For_Hw_Check + 2040 * v9 + 204 * m + 204,
            (char *)&gWorks_For_Hw_Check + 2040 * v9 + 204 * m,
            0xCCu);
        if ( (unsigned __int8)++gWork_Num_For_Hw_Check[v9] > 8u )
          gWork_Num_For_Hw_Check[v9] = 9;
        memcpy((char *)&gWorks_For_Hw_Check + 2040 * v9, src, 0xCCu);
        pthread_mutex_unlock(&HW_check_mutex[v9]);
        ++gSend_Work_Num[v9];
        usleep(dword_3368A4);
      }
    }
  }
  while ( gSend_Work_Num[v9] < (unsigned int)(dword_336848 * dword_33684C * dword_33681C) )
    printf(
      "\n\n---%s: Chain%d send work num : %d, less than %d\n",
      "send_func",
      v9,
      gSend_Work_Num[v9],
      276 * dword_336848 * dword_33681C);
  printf("\n\n---%s: Chain%d send work num : %d\n", "send_func", v9, gSend_Work_Num[v9]);
  puts("\nsend test pattern done");
  system("date");
  putchar(10);
  start_receive[v9] = 0;
  puts("to stop receive");
  return v1;
}
