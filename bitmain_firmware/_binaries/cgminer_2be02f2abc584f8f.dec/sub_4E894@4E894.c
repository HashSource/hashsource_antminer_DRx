int sub_4E894()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_86A70 = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_86A70, 0, (void *(*)(void *))sub_4E11C, (void *)dword_86A70) )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for bitmain_scanreg", "creat_bitmain_scanreg_pthread");
      sub_3F1C0(3, v1, 0);
      return -4;
    }
    else
    {
      return -4;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_86A70 + 12));
    sub_2FF20();
    return 0;
  }
}
