int __fastcall sub_98F10(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v7; // r8
  int v12; // r11
  _DWORD *v13; // r7
  int v14; // r3
  int v15; // lr
  char v16; // r3
  char v17; // r3
  signed int v18; // r0
  int v19; // r11
  int v20; // r4
  int v21; // r2
  int v23; // r2
  __int64 v24; // r0
  int v25; // r7
  int v26; // r0
  signed int v27; // r1
  _DWORD v28[7]; // [sp+30h] [bp-1024h] BYREF
  int v29; // [sp+4Ch] [bp-1008h]
  char v30[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 840);
  v12 = *(_BYTE *)(a2 + 9) & 0x7F;
  v13 = (_DWORD *)(a3 + 80);
  v14 = *(_DWORD *)(v7 + 8 * v12);
  v15 = *(_DWORD *)(v7 + 8 * v12 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy((char *)(a3 + 16), (const char *)(v7 + ((v12 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
  *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 7);
  v16 = *(_BYTE *)(v7 + 3 * v12 + 45826);
  *(_WORD *)(a3 + 85) = *(_WORD *)(v7 + 3 * v12 + 45824);
  *(_BYTE *)(a3 + 87) = v16;
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 89) = v12;
  *(_BYTE *)(a3 + 88) = v17;
  v18 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 444);
  if ( v18 >= *(_DWORD *)(a1 + 352) )
  {
    v26 = rand();
    sub_145474(v26, *(_DWORD *)(a1 + 352));
    v18 = v27;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  v20 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v19 != v20 && *(_BYTE *)(a1 + 265) )
  {
    v23 = dword_1ABEEC;
    v24 = 274877907LL * (unsigned int)dword_1ABEEC++;
    v25 = v23 - 1000 * (HIDWORD(v24) >> 6);
    if ( v23 == 1000 * (HIDWORD(v24) >> 6) )
    {
      V_LOCK();
      V_INT((int)v28, "chain", *(int *)(a1 + 256));
      logfmt_raw(
        v30,
        0x1000u,
        v25,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "chip id %3d, get nonce crc error calc value %04x expected value %04x\n",
        *a6,
        v19,
        v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        171,
        "packet_2_nonce_kda",
        18,
        223,
        100,
        v30);
    }
    return 11;
  }
  else
  {
    v21 = v13[1];
    *a5 = *v13;
    a5[1] = v21;
    *a4 = 1;
    return 0;
  }
}
