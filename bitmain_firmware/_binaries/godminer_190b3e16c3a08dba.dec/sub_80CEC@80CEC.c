int __fastcall sub_80CEC(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // r7
  int v11; // r6
  int v13; // r3
  int v14; // r12
  const char *v15; // r1
  int v16; // r7
  char v17; // r3
  signed int v18; // r0
  signed int v19; // r6
  unsigned int v20; // r1
  int v21; // r7
  int v22; // r5
  int v24; // r1
  int v25; // r2
  int v26; // r0
  _DWORD v27[7]; // [sp+30h] [bp-1020h] BYREF
  int v28; // [sp+4Ch] [bp-1004h]
  char v29[4080]; // [sp+50h] [bp-1000h] BYREF

  v7 = *(_DWORD *)(a1 + 784);
  v11 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v7 + 8 * v11);
  v14 = *(_DWORD *)(v7 + 8 * v11 + 4);
  v15 = (const char *)(v7 + 32 * (v11 + 32));
  v16 = v7 + (v11 << 8);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), v15);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(v16 + 5241);
  *(_BYTE *)(a3 + 53) = *(_BYTE *)(v16 + 5240);
  *(_BYTE *)(a3 + 54) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a3 + 55) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 5);
  v17 = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 57) = v11;
  *(_BYTE *)(a3 + 56) = v17;
  v18 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 396);
  v19 = v18;
  if ( v18 >= *(_DWORD *)(a1 + 304) )
  {
    v26 = rand();
    sub_12DDD4(v26, *(_DWORD *)(a1 + 304));
    *a6 = v20;
  }
  else
  {
    v20 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 396);
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v20;
  *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 8) & 0x3F;
  v21 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v22 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v21 != v22 && *(_BYTE *)(a1 + 230) )
  {
    v24 = *(_DWORD *)(a1 + 224);
    v25 = dword_18BF68[v24];
    dword_18BF68[v24] = v25 + 1;
    if ( v25 <= 9 )
    {
      V_LOCK();
      V_INT((int)v27, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v29,
        0x1000u,
        0,
        v28,
        v27[0],
        v27[1],
        v27[2],
        v27[3],
        v27[4],
        v27[5],
        v27[6],
        v28,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        v19,
        v21,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "packet_2_nonce_hns",
        18,
        232,
        40,
        v29);
    }
    return 11;
  }
  else
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
}
