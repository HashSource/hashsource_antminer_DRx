int __fastcall sub_410A0(int a1, int a2)
{
  const char *v2; // r3
  int v5; // r5
  int v6; // r4

  v2 = *(const char **)(a1 + 1132);
  if ( v2 || (v2 = (const char *)calloc(1u, 0x6Bu), (*(_DWORD *)(a1 + 1132) = v2) != 0) )
  {
    v5 = *(_DWORD *)(a2 + 1588);
    if ( v5 )
    {
      if ( !strncasecmp(v2, *(const char **)(a2 + 1588), 0x20u) )
      {
        if ( !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 464), 0x20u) )
          v6 = 0;
        else
          v6 = 2;
      }
      else
      {
        v6 = 2;
      }
      set_cur_seed((_DWORD *)v5);
      set_cur_block_num(*(_QWORD *)(v5 + 96));
      return v6;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
