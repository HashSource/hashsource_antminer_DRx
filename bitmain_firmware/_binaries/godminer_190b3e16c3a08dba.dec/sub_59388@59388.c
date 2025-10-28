time_t __fastcall sub_59388(int a1)
{
  float v1; // s0
  int v3; // r4
  int v4; // r5
  time_t result; // r0
  float v6; // s0
  int i; // r2

  v3 = *(_DWORD *)(a1 + 2880);
  v4 = (int)(float)(v1 / 5.0);
  result = get_miner_elapsed_time();
  v6 = 0.0;
  if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 2888) )
    v4 = *(_DWORD *)(a1 + 2888);
  if ( v4 > 0 )
  {
    result = -1240768329;
    for ( i = 0; i != v4; ++i )
    {
      v3 = (v3 + 719) % 720;
      v6 = v6 + *(float *)(a1 + 4 * v3);
    }
  }
  return result;
}
