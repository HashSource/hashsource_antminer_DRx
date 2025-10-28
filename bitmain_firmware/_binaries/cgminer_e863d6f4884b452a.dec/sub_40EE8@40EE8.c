int __fastcall sub_40EE8(void *a1)
{
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  dword_73ED4 = (int)calloc(1u, 0x40u);
  if ( sub_2D7E0(dword_73ED4, 0, (void *(*)(void *))sub_40760, a1) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v3, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_miner_status_pthread");
      sub_343C4(7, v3, 0);
      return -5;
    }
    else
    {
      return -5;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_73ED4 + 12));
    sub_2A7F4();
    return 0;
  }
}
