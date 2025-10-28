int __fastcall get_miner_info(char *a1)
{
  int v1; // r4
  int v3; // r2
  char *v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r4
  int v8; // r4
  int v9; // r0
  int v10; // r0
  int v12; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  v12 = 0;
  get_all_created_runtime(&v12);
  v3 = v12;
  if ( v12 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = sprintf(&a1[v1], "chain%d_voltage=%d;", ++v5, 12) + v1;
      v7 = v6 + sprintf(&a1[v6], "chain%d_voladded=%d;", v5, 0);
      v8 = v7 + sprintf(&a1[v7], "chain%d_basefreq=%d;", v5, 0);
      v9 = sprintf(&a1[v8], "chain%d_badcore=%d;", v5, 0);
      v3 = v12;
      v1 = v8 + v9;
    }
    while ( v5 < v12 );
    v4 = &a1[v1];
  }
  else
  {
    v4 = a1;
  }
  v10 = sprintf(v4, "chainnum=%d;", v3);
  return sprintf(&a1[v10 + v1], "version=%s;", 1665272);
}
