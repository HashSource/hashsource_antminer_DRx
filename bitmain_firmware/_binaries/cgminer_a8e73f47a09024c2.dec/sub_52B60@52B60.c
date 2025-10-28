int sub_52B60()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_9A5D0 = (int)calloc(1u, 0x40u);
  if ( sub_34744(dword_9A5D0, 0, (void *(*)(void *))sub_5204C, (void *)dword_9A5D0) )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for bitmain_scanreg", "creat_bitmain_scanreg_pthread");
      sub_3F178(3, v1, 0);
      return -4;
    }
    else
    {
      return -4;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_9A5D0 + 12));
    sub_30140();
    return 0;
  }
}
