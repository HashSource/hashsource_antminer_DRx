int __fastcall sub_6D6F4(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v8; // r4
  int v12; // r9
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r12
  int v17; // r0
  int v18; // r3
  signed int v19; // r0
  int v20; // r11
  int v21; // r4
  int v22; // r12
  int v23; // r1
  int v24; // r2
  int v26; // r2
  __int64 v27; // r0
  int v28; // r6
  int v29; // r0
  signed int v30; // r1
  _DWORD v31[7]; // [sp+30h] [bp-1024h] BYREF
  int v32; // [sp+4Ch] [bp-1008h]
  char v33[4080]; // [sp+50h] [bp-1004h] BYREF

  v8 = *(_DWORD *)(a1 + 840);
  v12 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v8 + 8 * v12);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 4);
  v15 = (_DWORD *)(a3 + 48);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v8 + 32 * (v12 + 32)));
  v16 = *(_DWORD *)(v8 + 48 * v12 + 5156);
  v17 = *(_DWORD *)(v8 + 48 * v12 + 5160);
  v18 = *(_DWORD *)(v8 + 48 * v12 + 5164);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v8 + 48 * v12 + 5152);
  *(_DWORD *)(a3 + 52) = v16;
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  LOBYTE(v18) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = v12;
  *(_BYTE *)(a3 + 64) = v18;
  v19 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 444);
  if ( v19 >= *(_DWORD *)(a1 + 352) )
  {
    v29 = rand();
    sub_145474(v29, *(_DWORD *)(a1 + 352));
    v19 = v30;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 3)
                       + 4 * ((*(_BYTE *)(a2 + 7) << 6) & 0x40 | (*(unsigned __int8 *)(a2 + 8) >> 2));
  v20 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v21 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v20 != v21 && *(_BYTE *)(a1 + 265) )
  {
    v26 = dword_1A3DAC;
    v27 = 274877907LL * (unsigned int)dword_1A3DAC++;
    v28 = v26 - 1000 * (HIDWORD(v27) >> 6);
    if ( v26 == 1000 * (HIDWORD(v27) >> 6) )
    {
      V_LOCK();
      V_INT((int)v31, "chain", *(int *)(a1 + 256));
      logfmt_raw(
        v33,
        0x1000u,
        v28,
        v32,
        v31[0],
        v31[1],
        v31[2],
        v31[3],
        v31[4],
        v31[5],
        v31[6],
        v32,
        "chip id %3d, get nonce crc error calc value %04x expected value %04x",
        *a6,
        v20,
        v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "packet_2_nonce_ckb",
        18,
        207,
        100,
        v33);
    }
    return 11;
  }
  else
  {
    v22 = v15[1];
    v23 = v15[2];
    v24 = v15[3];
    *a5 = *v15;
    a5[1] = v22;
    a5[2] = v23;
    a5[3] = v24;
    *a4 = 1;
    return 0;
  }
}
