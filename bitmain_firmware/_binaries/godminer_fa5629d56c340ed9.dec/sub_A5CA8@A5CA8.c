unsigned int __fastcall sub_A5CA8(int a1, int a2, void *a3)
{
  int v3; // r4
  unsigned int *v6; // r8
  unsigned int v7; // r10
  unsigned int *v8; // r5
  unsigned int v9; // r2
  int v12; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v13[2]; // [sp+50h] [bp-1034h] BYREF
  __int16 v14; // [sp+58h] [bp-102Ch]
  __int16 v15; // [sp+5Ah] [bp-102Ah]
  int v16; // [sp+5Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+60h] [bp-1024h] BYREF
  int v18; // [sp+7Ch] [bp-1008h]
  char v19[4100]; // [sp+80h] [bp-1004h] BYREF

  v3 = 0;
  v14 = 1;
  v13[1] = 0;
  v16 = 0;
  v12 = 0;
  v13[0] = 0;
  v15 = a2;
  v6 = (unsigned int *)calloc(0x60u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned int *, int *))(a1 + 300))(a1, v13, 8, v6, &v12);
  v7 = v12;
  if ( v12 > 0 )
  {
    v8 = v6;
    do
    {
      if ( *((unsigned __int16 *)v8 + 3) == a2 )
      {
        V_LOCK();
        V_INT((int)v17, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v19,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "[Chip-%d status] asic %02x, reg_addr %04x reg_data %08x",
          v3,
          *((unsigned __int8 *)v8 + 4),
          *((unsigned __int16 *)v8 + 3),
          bswap32(*v8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_get_chip_status_RVN",
          31,
          1618,
          20,
          v19);
      }
      v7 = v12;
      ++v3;
      v8 += 3;
    }
    while ( v12 > v3 );
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 448);
    if ( v7 < v9 )
      v9 = v7;
    memcpy(a3, v6, 12 * v9);
  }
  free(v6);
  return v7;
}
