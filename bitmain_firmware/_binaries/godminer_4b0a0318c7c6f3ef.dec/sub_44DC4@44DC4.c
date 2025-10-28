int __fastcall sub_44DC4(int a1, int a2, int a3)
{
  const char *v3; // r3
  int v6; // r5
  int v7; // r4

  v3 = *(const char **)(a1 + 1132);
  if ( v3 || (v3 = (const char *)calloc(1u, 0x6Bu), (*(_DWORD *)(a1 + 1132) = v3) != 0) )
  {
    v6 = *(_DWORD *)(a2 + 1588);
    if ( v6 )
    {
      if ( !strncasecmp(v3, *(const char **)(a2 + 1588), 0x20u) )
      {
        if ( !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 464), 0x20u) )
          v7 = 0;
        else
          v7 = 2;
      }
      else
      {
        v7 = 2;
      }
      set_cur_seed_2282((_DWORD *)v6);
      set_cur_block_num_2282(*(_QWORD *)(v6 + 96));
      return v7;
    }
    else
    {
      printf(aInvalidPointer, "pool->work.private", a3, v3);
      return 0;
    }
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
