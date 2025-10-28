int __fastcall set_core_reg_by_id(int a1, int a2)
{
  int *all_created_runtime; // r0
  int *v5; // r2
  int fake_regio_runtime; // r0
  int v7; // r3
  int v8; // t1
  int v10; // [sp+4h] [bp-4h] BYREF

  v10 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v10);
  if ( v10 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (__fastcall **)(int, int, int *))(fake_regio_runtime + 244))(fake_regio_runtime, a2, v5);
  }
  v5 = all_created_runtime;
  fake_regio_runtime = *all_created_runtime;
  if ( a1 != *(_DWORD *)(fake_regio_runtime + 220) )
  {
    v7 = 0;
    while ( ++v7 != v10 )
    {
      v8 = v5[1];
      ++v5;
      fake_regio_runtime = v8;
      if ( a1 == *(_DWORD *)(v8 + 220) )
        return (*(int (__fastcall **)(int, int, int *))(fake_regio_runtime + 244))(fake_regio_runtime, a2, v5);
    }
    goto LABEL_6;
  }
  return (*(int (__fastcall **)(int, int, int *))(fake_regio_runtime + 244))(fake_regio_runtime, a2, v5);
}
