int sub_41738()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_73E80 = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_73E80, 0, (void *(*)(void *))sub_4116C, (void *)dword_73E80) )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(v1, 0x800u, "%s: create thread error for bitmain_scanreg", "creat_bitmain_scanreg_pthread");
      sub_343C4(3, v1, 0);
    }
    return -4;
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_73E80 + 12));
    sub_2A7F4();
    return 0;
  }
}
