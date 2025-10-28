void __noreturn sub_469C8()
{
  int i; // r4
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v1, "pic_heart_beat_func_new");
    sub_3F178(5, v1, 0);
  }
  for ( i = 0; ; ++i )
  {
    while ( i > 3 )
    {
      sleep(0xAu);
      i = 0;
    }
    if ( *((_BYTE *)&unk_B3AFC + i + 24) )
    {
      if ( byte_7A9B8 )
      {
        pthread_mutex_lock(&stru_7CE38);
        sub_46754((unsigned __int8)i);
        pthread_mutex_unlock(&stru_7CE38);
        sub_30140();
      }
    }
  }
}
