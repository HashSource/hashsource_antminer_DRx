int sub_46DBC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_93500 = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_93500, 0, (void *(*)(void *))sub_45600, (void *)dword_93500) )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for pic_heart_beat_func", "send_heart_beat_to_every_chain");
      sub_3F1C0(3, v1, 0);
      return -3;
    }
    else
    {
      return -3;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_93500 + 12));
    return 0;
  }
}
