int sub_4DECC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_869E8 = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_869E8, 0, (void *(*)(void *))sub_4154C, (void *)dword_869E8) )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(
          v1,
          0x800u,
          "%s: create thread for get hashrate from asic failed",
          "create_bitmain_get_hash_rate_pthread");
        sub_3F1C0(7, v1, 0);
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
    pthread_detach(*(_DWORD *)(dword_869E8 + 12));
    sub_2FF20();
    return 0;
  }
}
