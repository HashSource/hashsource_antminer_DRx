int __fastcall sub_4DDD0(void *a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  dword_869EC = (int)calloc(1u, 0x40u);
  if ( sub_346C4(dword_869EC, 0, (void *(*)(void *))sub_4BCCC, a1) )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(v3, 0x800u, "%s: create thread for check miner_status", "create_bitmain_check_miner_status_pthread");
        sub_3F1C0(7, v3, 0);
        return -5;
      }
      else
      {
        return -5;
      }
    }
    else
    {
      return -5;
    }
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_869EC + 12));
    sub_2FF20();
    return 0;
  }
}
