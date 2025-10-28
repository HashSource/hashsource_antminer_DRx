int __fastcall sub_96B40(int a1, int a2, char a3)
{
  int v4; // r6
  _DWORD *v5; // r10
  _DWORD *v6; // r4
  int (__fastcall *v7)(int, _DWORD *); // r3
  int result; // r0
  int v9; // [sp+40h] [bp-1094h]
  int v10; // [sp+44h] [bp-1090h]
  char v11; // [sp+48h] [bp-108Ch]
  char v12; // [sp+50h] [bp-1084h]
  int v14; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v15[2]; // [sp+60h] [bp-1074h] BYREF
  int v16; // [sp+68h] [bp-106Ch]
  int v17; // [sp+6Ch] [bp-1068h]
  _DWORD v18[7]; // [sp+70h] [bp-1064h] BYREF
  int v19; // [sp+8Ch] [bp-1048h]
  _DWORD v20[7]; // [sp+90h] [bp-1044h] BYREF
  int v21; // [sp+ACh] [bp-1028h]
  _DWORD v22[7]; // [sp+B0h] [bp-1024h] BYREF
  int v23; // [sp+CCh] [bp-1008h]
  char v24[4100]; // [sp+D0h] [bp-1004h] BYREF

  v9 = a3 & 1;
  v14 = 0;
  if ( a2 == -1 || *(_DWORD *)(a1 + 352) < a2 )
  {
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v11 = *(_BYTE *)(*(_DWORD *)(a1 + 504) + a2);
  }
  v4 = 0;
  v16 = 0x10000;
  v15[1] = 0;
  v15[0] = 0;
  BYTE1(v16) = v11;
  v17 = 0;
  v5 = calloc(0xCu, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 316))(a1, v15, 1, v5, &v14);
  if ( v14 <= 0 )
  {
    v10 = v9;
  }
  else
  {
    v6 = v5;
    v10 = v9;
    do
    {
      if ( *((_WORD *)v6 + 3) == 1 )
      {
        V_LOCK();
        V_INT((int)v18, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v24,
          0x1000u,
          0,
          v19,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v19,
          "%s chip %02x, core %02x, reg %02x, core_mode %08x",
          "ChipSetting_same_nonce_KDA_2110",
          *((unsigned __int8 *)v6 + 4),
          *((unsigned __int8 *)v6 + 8),
          *((unsigned __int16 *)v6 + 3),
          *v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_same_nonce_KDA_2110",
          31,
          431,
          20,
          v24);
        v10 = v9 | *v6;
      }
      else
      {
        V_LOCK();
        V_INT((int)v20, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v24,
          0x1000u,
          0,
          v21,
          v20[0],
          v20[1],
          v20[2],
          v20[3],
          v20[4],
          v20[5],
          v20[6],
          v21,
          "%s chip %02x, expected reg %02x, but %02x, core_mode %08x",
          "ChipSetting_same_nonce_KDA_2110",
          *((unsigned __int8 *)v6 + 4),
          5,
          *((unsigned __int16 *)v6 + 3),
          *v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_same_nonce_KDA_2110",
          31,
          435,
          100,
          v24);
      }
      ++v4;
      v6 += 3;
    }
    while ( v14 > v4 );
  }
  free(v5);
  HIWORD(v16) = 1;
  LOBYTE(v17) = -1;
  LOBYTE(v16) = v12;
  v7 = *(int (__fastcall **)(int, _DWORD *))(a1 + 280);
  BYTE1(v16) = v11;
  v15[0] = v10;
  result = v7(a1, v15);
  if ( result < 0 )
  {
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 256));
    logfmt_raw(
      v24,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "set same nonce failed! chip_id:%d",
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_same_nonce_KDA_2110",
      31,
      448,
      100,
      v24);
    return -1;
  }
  return result;
}
