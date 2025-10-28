int __fastcall sub_51C08(void *a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  dword_9A54C = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_9A54C, 0, (void *(*)(void *))sub_50E24, a1) )
  {
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(v3, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_miner_status_pthread");
        sub_3F178(7, v3, 0);
        return -5;
      }
      else
      {
        return -5;
      }
    }
    else
    {
      return -5;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_9A54C + 12));
    sub_30140();
    return 0;
  }
}
