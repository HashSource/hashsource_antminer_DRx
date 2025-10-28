int sub_50B18()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_9A5CC = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_9A5CC, 0, (void *(*)(void *))sub_4E06C, 0) )
  {
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(v1, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_fan_pthread");
        sub_3F178(7, v1, 0);
        return -8;
      }
      else
      {
        return -8;
      }
    }
    else
    {
      return -8;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_9A5CC + 12));
    sub_30140();
    return 0;
  }
}
