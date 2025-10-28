int sub_3A67C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_73E88 = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_73E88, 0, (void *(*)(void *))sub_3978C, (void *)dword_73E88) )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for pic_heart_beat_func", "send_heart_beat_to_every_chain");
      sub_343C4(3, v1, 0);
    }
    return -3;
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_73E88 + 12));
    return 0;
  }
}
