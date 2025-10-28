bool __fastcall sub_49A5C(unsigned __int8 *a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v5; // r4
  unsigned __int8 v6; // t1
  int v7; // r4
  int v8; // r0
  int v10; // [sp+Ch] [bp-820h]
  unsigned int v13; // [sp+18h] [bp-814h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_7CE38);
  v10 = 1;
  while ( 1 )
  {
    v13 = (unsigned __int8)v10;
    if ( a2 )
    {
      v5 = a1 - 1;
      do
      {
        v6 = *++v5;
        sub_491A8(0x10u, 1, 0, 1, 0x11u, v6);
      }
      while ( v5 != &a1[(unsigned __int8)(a2 - 1)] );
    }
    usleep((__useconds_t)&off_7A120);
    if ( a4 )
    {
      v7 = 0;
      do
      {
        v8 = sub_491A8(0x10u, 1, 1, 0, 0x11u, 0);
        a3[v7] = v8;
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "%s, reply_buf[%d]=%02x", "power_send_cmd", v7, v8);
          sub_3F178(5, s, 0);
        }
        ++v7;
      }
      while ( v7 != (unsigned __int8)(a4 - 1) + 1 );
    }
    if ( sub_49914(a1, a3, a4) )
      break;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "power send cmd 0x%02x failed, retry for %d times\n", a1[3], v10);
      sub_3F178(5, s, 0);
    }
    if ( ++v10 == 4 )
      goto LABEL_19;
  }
  v13 = (unsigned __int8)(v10 - 1);
LABEL_19:
  pthread_mutex_unlock(&stru_7CE38);
  return v13 <= 2;
}
