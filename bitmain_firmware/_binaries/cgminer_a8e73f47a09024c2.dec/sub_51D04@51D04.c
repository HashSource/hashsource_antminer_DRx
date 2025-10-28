int sub_51D04()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_9A548 = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_9A548, 0, (void *(*)(void *))sub_42600, (void *)dword_9A548) )
  {
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(
          v1,
          0x800u,
          "%s: create thread for get hashrate from asic failed",
          "create_bitmain_get_hash_rate_pthread");
        sub_3F178(7, v1, 0);
        return -6;
      }
      else
      {
        return -6;
      }
    }
    else
    {
      return -6;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_9A548 + 12));
    sub_30140();
    return 0;
  }
}
