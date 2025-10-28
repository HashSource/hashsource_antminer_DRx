int __fastcall sub_6CC20(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v7; // r6
  int v11; // r7
  int v13; // r3
  int v14; // r12
  unsigned int v15; // r6
  int v16; // r2
  char v17; // r3
  signed int v18; // r0
  int v19; // r6
  int v20; // r5
  int v22; // r0
  signed int v23; // r1
  char v24[4080]; // [sp+10h] [bp-1000h] BYREF

  v7 = a1[196];
  v11 = *(_BYTE *)(a2 + 9) & 0x7F;
  v13 = *(_DWORD *)(v7 + 8 * v11);
  v14 = *(_DWORD *)(v7 + 8 * v11 + 4);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v7 + 32 * (v11 + 32)));
  v15 = v7 + 180 * (__int16)v11 + 5260;
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 3);
  v16 = *(_DWORD *)(v15 + 4);
  *(_DWORD *)(a3 + 53) = *(_DWORD *)v15;
  *(_DWORD *)(a3 + 57) = v16;
  LOBYTE(v16) = *(_BYTE *)(v15 + 10);
  *(_WORD *)(a3 + 61) = *(_WORD *)(v15 + 8);
  *(_BYTE *)(a3 + 63) = v16;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 4);
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 65) = v11;
  *(_BYTE *)(a3 + 64) = v17;
  v18 = *(unsigned __int8 *)(a2 + 3) / a1[99];
  if ( v18 >= (int)a1[76] )
  {
    v22 = rand();
    sub_12DDD4(v22, a1[76]);
    v18 = v23;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(unsigned __int8 *)(a2 + 5) >> 6) + 4 * *(unsigned __int8 *)(a2 + 4);
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  v20 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v19 == v20 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "get nonce crc error calc value %04x expected value %04x", v19, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "packet_2_nonce_dcr",
      18,
      212,
      80,
      v24);
    return 11;
  }
}
