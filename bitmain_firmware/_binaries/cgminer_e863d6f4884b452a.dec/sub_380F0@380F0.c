unsigned int __fastcall sub_380F0(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v6; // r4
  unsigned int v7; // r0
  unsigned int v8; // r7
  int v9; // r0
  unsigned int v10; // r6
  unsigned int v11; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v6 = (pthread_mutex_t *)((char *)&unk_6FC34 + 24 * a1);
  pthread_mutex_lock(v6);
  v7 = sub_3772C(a1);
  if ( a3 >= v7 )
    a3 = v7;
  if ( a3 > 9 )
  {
    v9 = a1;
    v10 = 10 * (a3 / 0xA);
    v11 = sub_378CC(v9, a2, v10);
    v8 = v11;
    if ( v10 != v11 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
    {
      snprintf(
        s,
        0x800u,
        "!!! %s: There are %d bytes in UART, but we just read out %d bytes\n",
        "uart_receive",
        a3,
        v11);
      sub_343C4(3, s, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  pthread_mutex_unlock(v6);
  return v8;
}
