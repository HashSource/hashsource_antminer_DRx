int sub_48138()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_B3AF8 = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_B3AF8, 0, (void *(*)(void *))sub_469C8, (void *)dword_B3AF8) )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for pic_heart_beat_func", "send_heart_beat_to_every_chain");
      sub_3F178(3, v1, 0);
      return -3;
    }
    else
    {
      return -3;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_B3AF8 + 12));
    return 0;
  }
}
