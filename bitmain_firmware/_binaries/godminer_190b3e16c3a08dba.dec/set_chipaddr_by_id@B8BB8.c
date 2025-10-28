int __fastcall set_chipaddr_by_id(int a1, int a2, int a3)
{
  int *all_created_runtime; // r0
  int *v7; // r2
  int fake_regio_runtime; // r0
  int v9; // r3
  int v10; // t1
  int v12; // [sp+4h] [bp-8h] BYREF

  v12 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v12);
  if ( v12 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 232))(fake_regio_runtime, a2, a3);
  }
  v7 = all_created_runtime;
  fake_regio_runtime = *all_created_runtime;
  if ( a1 != *(_DWORD *)(fake_regio_runtime + 220) )
  {
    v9 = 0;
    while ( ++v9 != v12 )
    {
      v10 = v7[1];
      ++v7;
      fake_regio_runtime = v10;
      if ( a1 == *(_DWORD *)(v10 + 220) )
        return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 232))(fake_regio_runtime, a2, a3);
    }
    goto LABEL_6;
  }
  return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 232))(fake_regio_runtime, a2, a3);
}
