int sub_417D8()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  dword_8DCD8 = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_8DCD8, 0, (void *(*)(void *))sub_3D3B8, (void *)dword_8DCD8) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v1, 0x800u, "%s: create thread for read temp", "create_bitmain_read_temp_pthread");
      sub_343C4(7, v1, 0);
      return -7;
    }
    else
    {
      return -7;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_8DCD8 + 12));
    sub_2A7F4();
    return 0;
  }
}
