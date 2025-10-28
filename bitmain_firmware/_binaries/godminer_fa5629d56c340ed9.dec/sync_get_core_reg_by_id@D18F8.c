int __fastcall sync_get_core_reg_by_id(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int *all_created_runtime; // r0
  int fake_regio_runtime; // r5
  int v12; // t1
  int result; // r0
  int v14; // r4
  pthread_t v15; // r0
  int v16; // [sp+14h] [bp-8h] BYREF

  v5 = 0;
  v16 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v16);
  if ( v16 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    goto LABEL_7;
  }
  fake_regio_runtime = *all_created_runtime;
  if ( a1 != *(_DWORD *)(*all_created_runtime + 252) )
  {
    while ( ++v5 != v16 )
    {
      v12 = all_created_runtime[1];
      ++all_created_runtime;
      fake_regio_runtime = v12;
      if ( a1 == *(_DWORD *)(v12 + 252) )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_DWORD *)(fake_regio_runtime + 880) == *(_DWORD *)(fake_regio_runtime + 892) )
    pthread_create(
      (pthread_t *)(fake_regio_runtime + 908),
      0,
      (void *(*)(void *))get_response,
      (void *)fake_regio_runtime);
  result = (*(int (__fastcall **)(int, int, int, int, int))(fake_regio_runtime + 320))(
             fake_regio_runtime,
             a2,
             a3,
             a4,
             a5);
  v14 = result;
  if ( *(_DWORD *)(fake_regio_runtime + 880) == *(_DWORD *)(fake_regio_runtime + 892) )
  {
    v15 = *(_DWORD *)(fake_regio_runtime + 908);
    *(_BYTE *)(fake_regio_runtime + 921) = 1;
    pthread_join(v15, 0);
    return v14;
  }
  return result;
}
