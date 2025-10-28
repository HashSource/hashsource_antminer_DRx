void __noreturn sub_45600()
{
  int i; // r4
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(v1, "pic_heart_beat_func_new");
    sub_3F1C0(5, v1, 0);
  }
  for ( i = 0; ; ++i )
  {
    while ( i > 3 )
    {
      sleep(0xAu);
      i = 0;
    }
    if ( *((_BYTE *)&unk_93504 + i + 8) )
    {
      if ( byte_73970 )
      {
        pthread_mutex_lock(&stru_75D80);
        sub_4538C((unsigned __int8)i);
        pthread_mutex_unlock(&stru_75D80);
        sub_2FF20();
      }
    }
  }
}
