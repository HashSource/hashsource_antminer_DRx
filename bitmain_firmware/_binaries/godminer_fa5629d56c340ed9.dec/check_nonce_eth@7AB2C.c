int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r6
  unsigned int v4; // r0
  unsigned int v5; // r4
  unsigned int v6; // r5
  int v8; // [sp+10h] [bp+0h]
  int v9; // [sp+14h] [bp+4h]
  int v10; // [sp+14h] [bp+4h]
  int v11; // [sp+30h] [bp+20h]
  int v12; // [sp+34h] [bp+24h]
  int v13; // [sp+3Ch] [bp+2Ch]
  int v14; // [sp+40h] [bp+30h]
  int v15; // [sp+44h] [bp+34h]
  int v16; // [sp+48h] [bp+38h]
  int v17; // [sp+4Ch] [bp+3Ch]
  int v18; // [sp+50h] [bp+40h]
  int v19; // [sp+54h] [bp+44h]
  _BYTE v20[26]; // [sp+58h] [bp+48h] BYREF
  int v21; // [sp+72h] [bp+62h]
  _DWORD v22[1025]; // [sp+78h] [bp+68h] BYREF

  v2 = *(_DWORD *)(a1 + 848);
  v11 = *(_DWORD *)(a2 + 58);
  v12 = *(_DWORD *)(a2 + 62);
  v13 = v9;
  v15 = *(_DWORD *)(a2 + 38);
  v16 = *(_DWORD *)(a2 + 42);
  v17 = *(_DWORD *)(a2 + 46);
  v18 = *(_DWORD *)(a2 + 50);
  v19 = *(_DWORD *)(a2 + 54);
  v8 = *(_DWORD *)(a2 + 26);
  v10 = *(_DWORD *)(a2 + 30);
  v22[0] = *(_DWORD *)(a2 + 34);
  v14 = v22[0];
  v22[1] = v15;
  v22[2] = v16;
  v22[3] = v17;
  v22[4] = v18;
  v22[5] = v19;
  v22[6] = v11;
  v22[7] = v12;
  v22[8] = v8;
  v22[9] = v10;
  eth_sha3_512((int)v22, 0x40u, (int)v22, 0x28u);
  v22[16] = v21;
  v22[17] = v13;
  v22[18] = v14;
  v22[19] = v15;
  v22[20] = v16;
  v22[21] = v17;
  v22[22] = v18;
  v22[23] = v19;
  eth_sha3_256((int)v20, 0x20u, (int)v22, 0x60u);
  v4 = target_to_diff_eth((int)v20);
  v5 = v4;
  if ( v4 <= 0x1F )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v22,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v5,
      *(unsigned __int8 *)(a2 + 17),
      32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "check_nonce_eth",
      15,
      1423,
      20,
      v22);
    return 2;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v2 + *(unsigned __int8 *)(a2 + 16) + 34816);
    if ( v4 < v6 )
    {
      V_LOCK();
      logfmt_raw((char *)v22, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v5, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        171,
        "check_nonce_eth",
        15,
        1429,
        20,
        v22);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
