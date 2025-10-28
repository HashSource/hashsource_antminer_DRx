int __fastcall sub_44600(int a1, _BYTE *a2, unsigned int a3)
{
  pthread_mutex_t *v6; // r5
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v6 = (pthread_mutex_t *)((char *)&unk_7CDC0 + 24 * a1);
  pthread_mutex_lock(v6);
  v7 = sub_438D4(a1);
  if ( v7 < a3 )
    a3 = v7;
  if ( a3 <= 9 )
  {
    pthread_mutex_unlock(v6);
    return 0;
  }
  else
  {
    v8 = sub_43A38(a1, a2, 10 * (a3 / 0xA));
    v9 = v8;
    if ( 10 * (a3 / 0xA) != v8 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
    {
      snprintf(s, 0x800u, "!!! %s: There are %d bytes in UART, but we just read out %d bytes\n", "uart_receive", a3, v8);
      sub_3F178(3, s, 0);
    }
    pthread_mutex_unlock(v6);
  }
  return v9;
}
