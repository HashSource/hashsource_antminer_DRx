int __fastcall sub_3B798(unsigned __int8 *a1, int a2, unsigned __int8 *a3, int a4)
{
  char v5; // r5
  unsigned __int8 *v7; // r4
  unsigned __int8 v8; // t1
  unsigned __int8 *v9; // r4
  int v10; // r5
  int v11; // r4
  int i; // [sp+14h] [bp-818h]
  unsigned __int8 *v17; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v5 = a2;
  pthread_mutex_lock(&stru_6FCAC);
  v17 = &a1[(unsigned __int8)(v5 - 1)];
  for ( i = 1; i != 4; ++i )
  {
    if ( a2 )
    {
      v7 = a1 - 1;
      do
      {
        v8 = *++v7;
        sub_3B198(16, 1, 0, 1, 0x11u, v8);
      }
      while ( v7 != v17 );
    }
    usleep((__useconds_t)&unk_7A120);
    if ( a4 )
    {
      v9 = a3 - 1;
      do
      {
        v10 = sub_3B198(16, 1, 1, 0, 0x11u, 0);
        *++v9 = v10;
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(s, 0x800u, "%s, reply_buf[%d]=%02x", "power_send_cmd", v9 - a3, v10);
          sub_343C4(5, s, 0);
        }
      }
      while ( &a3[(unsigned __int8)(a4 - 1)] != v9 );
    }
    v11 = sub_3B6D4(a1, a3, a4);
    if ( v11 )
      break;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "power send cmd 0x%02x failed, retry for %d times\n", a1[3], i);
      sub_343C4(5, s, 0);
    }
  }
  pthread_mutex_unlock(&stru_6FCAC);
  return v11;
}
