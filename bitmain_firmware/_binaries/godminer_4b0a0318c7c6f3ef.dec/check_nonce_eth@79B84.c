int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r5
  unsigned int v4; // r0
  int v6; // [sp+0h] [bp-C8h]
  int v7; // [sp+4h] [bp-C4h]
  int v8; // [sp+Ch] [bp-BCh]
  int v9; // [sp+10h] [bp-B8h]
  int v10; // [sp+14h] [bp-B4h]
  int v11; // [sp+18h] [bp-B0h]
  int v12; // [sp+1Ch] [bp-ACh]
  int v13; // [sp+20h] [bp-A8h]
  int v14; // [sp+24h] [bp-A4h]
  int v15; // [sp+28h] [bp-A0h]
  int v16; // [sp+2Ch] [bp-9Ch]
  int v17; // [sp+30h] [bp-98h]
  int v18; // [sp+34h] [bp-94h]
  int v19; // [sp+38h] [bp-90h]
  int v20; // [sp+3Ch] [bp-8Ch]
  int v21; // [sp+40h] [bp-88h]
  int v22; // [sp+44h] [bp-84h]
  _BYTE v23[32]; // [sp+48h] [bp-80h] BYREF
  _DWORD v24[24]; // [sp+68h] [bp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 840);
  v8 = *(_DWORD *)(a2 + 38);
  v9 = *(_DWORD *)(a2 + 42);
  v10 = *(_DWORD *)(a2 + 46);
  v11 = *(_DWORD *)(a2 + 50);
  v12 = *(_DWORD *)(a2 + 54);
  v13 = *(_DWORD *)(a2 + 58);
  v14 = *(_DWORD *)(a2 + 62);
  v15 = *(_DWORD *)(a2 + 98);
  v16 = *(_DWORD *)(a2 + 102);
  v17 = *(_DWORD *)(a2 + 106);
  v18 = *(_DWORD *)(a2 + 110);
  v19 = *(_DWORD *)(a2 + 114);
  v20 = *(_DWORD *)(a2 + 118);
  v21 = *(_DWORD *)(a2 + 122);
  v22 = *(_DWORD *)(a2 + 126);
  v6 = *(_DWORD *)(a2 + 26);
  v7 = *(_DWORD *)(a2 + 30);
  v24[0] = *(_DWORD *)(a2 + 34);
  v24[1] = v8;
  v24[2] = v9;
  v24[3] = v10;
  v24[4] = v11;
  v24[5] = v12;
  v24[6] = v13;
  v24[7] = v14;
  v24[8] = v6;
  v24[9] = v7;
  eth_sha3_512((int)v24, 0x40u, (int)v24, 0x28u);
  v24[16] = v15;
  v24[17] = v16;
  v24[18] = v17;
  v24[19] = v18;
  v24[20] = v19;
  v24[21] = v20;
  v24[22] = v21;
  v24[23] = v22;
  eth_sha3_256((int)v23, 0x20u, (int)v24, 0x60u);
  v4 = target_to_diff_eth((int)v23);
  if ( v4 > 0x1F )
    return v4 < *(unsigned __int8 *)(v2 + *(unsigned __int8 *)(a2 + 16) + 34816);
  else
    return 2;
}
