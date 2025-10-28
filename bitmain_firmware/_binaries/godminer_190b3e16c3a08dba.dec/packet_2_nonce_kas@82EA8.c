int __fastcall packet_2_nonce_kas(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r8
  int v14; // r9
  int v15; // r1
  int *v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r3
  signed int v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r0
  signed int v25; // r1
  _DWORD v26[7]; // [sp+30h] [bp-1024h] BYREF
  int v27; // [sp+4Ch] [bp-1008h]
  char v28[4080]; // [sp+50h] [bp-1004h] BYREF

  v11 = BM_CRC5((_BYTE *)(a2 + 2), 91);
  if ( *(_BYTE *)(a2 + 2) == 8 )
    return 10;
  v13 = *(_BYTE *)(a2 + 13) & 0x1F;
  v14 = v11;
  if ( v11 != v13 && *(_BYTE *)(a1 + 230) )
  {
    v22 = *(_DWORD *)(a1 + 224);
    v23 = dword_18BF74[v22];
    dword_18BF74[v22] = v23 + 1;
    if ( v23 <= 9 )
    {
      V_LOCK();
      V_INT((int)v26, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v28,
        0x1000u,
        0,
        v27,
        v26[0],
        v26[1],
        v26[2],
        v26[3],
        v26[4],
        v26[5],
        v26[6],
        v27,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        0,
        v14,
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        171,
        "packet_2_nonce_kas",
        18,
        983,
        40,
        v28);
    }
    return 11;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 12);
    v16 = (int *)(*(_DWORD *)(a1 + 784) + 8 * v15);
    v17 = *v16;
    v18 = v16[1];
    *(_DWORD *)a3 = v17;
    *(_DWORD *)(a3 + 4) = v18;
    *a7 = v17;
    v19 = *(_DWORD *)(a2 + 7);
    *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
    *(_DWORD *)(a3 + 30) = v19;
    LOBYTE(v19) = *(_BYTE *)(a2 + 11);
    *(_BYTE *)(a3 + 16) = v15;
    *(_BYTE *)(a3 + 17) = v19;
    v20 = (unsigned int)*(unsigned __int8 *)(a2 + 6) / *(_DWORD *)(a1 + 396);
    if ( v20 >= *(_DWORD *)(a1 + 304) )
    {
      v24 = rand();
      sub_12DDD4(v24, *(_DWORD *)(a1 + 304));
      v20 = v25;
    }
    *a6 = v20;
    *(_DWORD *)(a3 + 8) = v20;
    *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x3F;
    v21 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v21;
    *a4 = 1;
    return 0;
  }
}
