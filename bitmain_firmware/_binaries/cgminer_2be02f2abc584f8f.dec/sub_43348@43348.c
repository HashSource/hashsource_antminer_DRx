int __fastcall sub_43348(int a1)
{
  size_t v2; // r0
  unsigned int v3; // r6
  _BYTE *v5; // r7
  int v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  printf("--- %s\n", "clear_uart_rx_fifo");
  pthread_mutex_lock(&stru_75D08[a1]);
  v2 = sub_425F4(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = malloc(v2);
    if ( v5 )
    {
      v6 = sub_42758(a1, v5, v3);
      if ( v6 == v3 )
      {
        free(v5);
        sub_2FF48();
        pthread_mutex_unlock(&stru_75D08[a1]);
        return 1;
      }
      else
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(
            s,
            0x800u,
            "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
            "clear_uart_rx_fifo",
            a1,
            v3,
            v6);
          sub_3F1C0(3, s, 0);
        }
        free(v5);
        sub_2FF48();
        pthread_mutex_unlock(&stru_75D08[a1]);
        return 1;
      }
    }
    else
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(s, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
        sub_3F1C0(3, s, 0);
      }
      sub_2FF48();
      pthread_mutex_unlock(&stru_75D08[a1]);
      return 1;
    }
  }
  else
  {
    pthread_mutex_unlock(&stru_75D08[a1]);
    return 0;
  }
}
