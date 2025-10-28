int sub_40658()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_73E7C = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_73E7C, 0, (void *(*)(void *))sub_367EC, 0) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v1, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_fan_pthread");
      sub_343C4(7, v1, 0);
      return -8;
    }
    else
    {
      return -8;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_73E7C + 12));
    sub_2A7F4();
    return 0;
  }
}
