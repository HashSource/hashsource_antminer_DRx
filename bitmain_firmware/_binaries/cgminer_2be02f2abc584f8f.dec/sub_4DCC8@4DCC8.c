int sub_4DCC8()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_86A6C = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_86A6C, 0, (void *(*)(void *))sub_4B5C0, 0) )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(v1, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_fan_pthread");
        sub_3F1C0(7, v1, 0);
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
    pthread_detach(*(_DWORD *)(dword_86A6C + 12));
    sub_2FF20();
    return 0;
  }
}
