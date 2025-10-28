void *__fastcall init_temp_senor_info(int a1)
{
  void *result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // [sp+4h] [bp-4h] BYREF

  result = get_all_created_runtime(&v8);
  v3 = v8;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v3 > 0 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)result + 412);
    v5 = *(_DWORD *)(*(_DWORD *)result + 404);
    if ( v4 > 0 )
    {
      v6 = v5 + 24 * v4;
      do
      {
        while ( 1 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          if ( v7 )
            break;
          v5 += 24;
          ++*(_DWORD *)(a1 + 24);
          if ( v5 == v6 )
            return result;
        }
        v5 += 24;
        if ( v7 == 1 )
          ++*(_DWORD *)(a1 + 28);
      }
      while ( v5 != v6 );
    }
  }
  return result;
}
