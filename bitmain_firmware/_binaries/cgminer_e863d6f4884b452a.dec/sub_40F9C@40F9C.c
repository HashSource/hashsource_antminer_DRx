int sub_40F9C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_73E78 = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_73E78, 0, (void *(*)(void *))sub_3694C, (void *)dword_73E78) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(
        v1,
        0x800u,
        "%s: create thread for get hashrate from asic failed",
        "create_bitmain_get_hash_rate_pthread");
      sub_343C4(7, v1, 0);
      return -6;
    }
    else
    {
      return -6;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_73E78 + 12));
    sub_2A7F4();
    return 0;
  }
}
