int __fastcall get_epoch_number_rvn(const void *a1)
{
  int v2; // r4
  _DWORD v4[8]; // [sp+0h] [bp-44h] BYREF
  _DWORD v5[9]; // [sp+20h] [bp-24h] BYREF

  v2 = 1;
  memset(v4, 0, sizeof(v4));
  while ( 1 )
  {
    eth_sha3_256((int)v5, 0x20u, (int)v4, 0x20u);
    v4[0] = v5[0];
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4[7] = v5[7];
    if ( !memcmp(v4, a1, 0x20u) )
      break;
    if ( ++v2 == 2048 )
      return 0;
  }
  if ( v2 > 525 )
    v2 >>= 1;
  return v2;
}
