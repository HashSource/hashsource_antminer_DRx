int __fastcall set_inactive_by_id(int a1)
{
  int *all_created_runtime; // r0
  int *v3; // r2
  int fake_regio_runtime; // r0
  int v5; // r3
  int v6; // t1
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v8);
  if ( v8 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (**)(void))(fake_regio_runtime + 236))();
  }
  v3 = all_created_runtime;
  fake_regio_runtime = *all_created_runtime;
  if ( a1 != *(_DWORD *)(fake_regio_runtime + 220) )
  {
    v5 = 0;
    while ( ++v5 != v8 )
    {
      v6 = v3[1];
      ++v3;
      fake_regio_runtime = v6;
      if ( a1 == *(_DWORD *)(v6 + 220) )
        return (*(int (**)(void))(fake_regio_runtime + 236))();
    }
    goto LABEL_6;
  }
  return (*(int (**)(void))(fake_regio_runtime + 236))();
}
