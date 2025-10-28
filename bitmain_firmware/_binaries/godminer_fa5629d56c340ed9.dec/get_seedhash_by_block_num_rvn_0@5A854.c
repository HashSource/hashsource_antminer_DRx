_DWORD *__fastcall get_seedhash_by_block_num_rvn_0(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v5; // r0
  unsigned __int64 v6; // r6
  unsigned int v7; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD v15[9]; // [sp+0h] [bp-24h] BYREF

  memset(v15, 0, 0x20u);
  LODWORD(v5) = sub_146F74(a2, 0xEA60u);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      eth_sha3_256((int)v15, 0x20u, (int)v15, 0x20u);
      ++v7;
    }
    while ( v7 < v6 );
  }
  v8 = v15[1];
  v9 = v15[2];
  v10 = v15[3];
  *a1 = v15[0];
  a1[1] = v8;
  a1[2] = v9;
  a1[3] = v10;
  v11 = v15[5];
  v12 = v15[6];
  v13 = v15[7];
  a1[4] = v15[4];
  a1[5] = v11;
  a1[6] = v12;
  a1[7] = v13;
  return a1;
}
