void __noreturn sub_3978C()
{
  unsigned __int8 *v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v2, "pic_heart_beat_func_new");
    sub_343C4(5, v2, 0);
  }
  while ( 1 )
  {
    v0 = (unsigned __int8 *)&unk_73EF0;
    do
    {
      if ( *v0++ )
      {
        if ( byte_6D7E8 )
        {
          pthread_mutex_lock(&stru_6FCAC);
          sub_395EC((unsigned __int8)(~(unsigned int)&unk_73EF0 + (_BYTE)v0));
          pthread_mutex_unlock(&stru_6FCAC);
          sub_2A7F4();
        }
      }
    }
    while ( v0 != (unsigned __int8 *)&unk_73EF4 );
    sleep(0xAu);
  }
}
