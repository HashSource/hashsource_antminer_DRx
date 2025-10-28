int get_theory_hashrate()
{
  double v0; // d0
  int v1; // r4
  char *all_created_runtime; // r5
  double v3; // d8
  double v4; // d9
  int v5; // r6
  char *v6; // r5
  int v7; // t1
  bool v8; // cc
  int v9; // r0
  int *v11; // r1
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+Ch] [bp-24h] BYREF
  double v16[2]; // [sp+10h] [bp-20h] BYREF
  char v17[12]; // [sp+24h] [bp-Ch] BYREF

  v1 = 0;
  v15 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v15);
  v3 = 0.0;
  get_miner_elapsed_time();
  v4 = v0;
  v16[0] = 0.0;
  if ( v15 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 136))();
      v3 = v3 + v16[1];
    }
    while ( v15 > v1 );
  }
  else
  {
    v5 = 0;
  }
  v8 = (unsigned int)opt_algo > 0xA;
  if ( opt_algo != 10 )
    v8 = (unsigned int)(opt_algo - 6) > 1;
  if ( !v8 )
    v4 = v0 - 2700.0;
  if ( v4 < 1.0 )
  {
    freq_scan_status = 0;
    return (int)v16[0];
  }
  else
  {
    v9 = frontend_runtime_instance();
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v9 + 72) + 16), v16, v17);
    if ( v5 )
    {
      LOWORD(v11) = -26952;
      LOWORD(v12) = 25344;
      HIWORD(v11) = (unsigned int)"ice %d wc %llu nc %llu detail: " >> 16;
      v13 = *v11;
      HIWORD(v12) = (unsigned int)&unk_1B51E8 >> 16;
      freq_scan_status = 2;
      *v12 = v13;
      return v14;
    }
    else
    {
      freq_scan_status = 1;
      return (int)v16[0];
    }
  }
}
