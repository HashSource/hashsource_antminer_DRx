int __fastcall sub_44714(int a1)
{
  size_t v2; // r0
  unsigned int v3; // r6
  _BYTE *v5; // r7
  int v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  printf("--- %s\n", "clear_uart_rx_fifo");
  pthread_mutex_lock(&stru_7CDC0[a1]);
  v2 = sub_438D4(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = malloc(v2);
    if ( v5 )
    {
      v6 = sub_43A38(a1, v5, v3);
      if ( v6 == v3 )
      {
        free(v5);
        sub_30168();
        pthread_mutex_unlock(&stru_7CDC0[a1]);
        return 1;
      }
      else
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
            "clear_uart_rx_fifo",
            a1,
            v3,
            v6);
          sub_3F178(3, s, 0);
        }
        free(v5);
        sub_30168();
        pthread_mutex_unlock(&stru_7CDC0[a1]);
        return 1;
      }
    }
    else
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
        sub_3F178(3, s, 0);
      }
      sub_30168();
      pthread_mutex_unlock(&stru_7CDC0[a1]);
      return 1;
    }
  }
  else
  {
    pthread_mutex_unlock(&stru_7CDC0[a1]);
    return 0;
  }
}
