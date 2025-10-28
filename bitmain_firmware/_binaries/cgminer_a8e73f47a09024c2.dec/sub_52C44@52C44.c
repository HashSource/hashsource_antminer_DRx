int sub_52C44()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_9A5C8 = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_9A5C8, 0, (void *(*)(void *))sub_4BB7C, (void *)dword_9A5C8) )
  {
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(v1, 0x800u, "%s: create thread for read temp", "create_bitmain_read_temp_pthread");
        sub_3F178(7, v1, 0);
        return -7;
      }
      else
      {
        return -7;
      }
    }
    else
    {
      return -7;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_9A5C8 + 12));
    sub_30140();
    return 0;
  }
}
