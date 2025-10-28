int sub_4E978()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_86A68 = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_86A68, 0, (void *(*)(void *))sub_48554, (void *)dword_86A68) )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(v1, 0x800u, "%s: create thread for read temp", "create_bitmain_read_temp_pthread");
        sub_3F1C0(7, v1, 0);
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
    pthread_detach(*(_DWORD *)(dword_86A68 + 12));
    sub_2FF20();
    return 0;
  }
}
