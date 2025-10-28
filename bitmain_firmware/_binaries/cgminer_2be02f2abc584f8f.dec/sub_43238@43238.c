int __fastcall sub_43238(int a1, _BYTE *a2, unsigned int a3)
{
  pthread_mutex_t *v6; // r5
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v6 = (pthread_mutex_t *)((char *)&unk_75D08 + 24 * a1);
  pthread_mutex_lock(v6);
  v7 = sub_425F4(a1);
  if ( v7 < a3 )
    a3 = v7;
  if ( a3 <= 8 )
  {
    pthread_mutex_unlock(v6);
    return 0;
  }
  else
  {
    v8 = sub_42758(a1, a2, 9 * (a3 / 9));
    v9 = v8;
    if ( 9 * (a3 / 9) != v8 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
    {
      snprintf(s, 0x800u, "!!! %s: There are %d bytes in UART, but we just read out %d bytes\n", "uart_receive", a3, v8);
      sub_3F1C0(3, s, 0);
    }
    pthread_mutex_unlock(v6);
  }
  return v9;
}
