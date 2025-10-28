int __fastcall sub_381A4(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r5
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  printf("--- %s\n", "clear_uart_rx_fifo");
  v2 = (pthread_mutex_t *)((char *)&unk_6FC34 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_3772C(a1);
  v4 = v3;
  if ( !v3 )
  {
LABEL_9:
    pthread_mutex_unlock(v2);
    return v4;
  }
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_378CC(a1, (int)v5, v4);
    if ( v4 != v7 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
    {
      snprintf(s, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n", "clear_uart_rx_fifo", a1, v4, v7);
      sub_343C4(3, s, 0);
    }
    v4 = 1;
    free(v6);
    sub_2A810();
    goto LABEL_9;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
    sub_343C4(3, s, 0);
  }
  sub_2A810();
  pthread_mutex_unlock(v2);
  return 1;
}
