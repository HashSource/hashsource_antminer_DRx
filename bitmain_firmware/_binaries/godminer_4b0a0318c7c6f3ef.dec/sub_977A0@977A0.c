int __fastcall sub_977A0(int a1)
{
  int v2; // r6
  int (__fastcall *v3)(int, _DWORD *); // r3
  int v4; // r8
  int v5; // r2
  int v6; // r5
  int v7; // r5
  _WORD *v8; // r5
  int v9; // r0
  int v10; // r12
  int v11; // r2
  int v13; // [sp+3Ch] [bp-1088h]
  _WORD *ptr; // [sp+44h] [bp-1080h]
  int v15; // [sp+48h] [bp-107Ch]
  int v16; // [sp+4Ch] [bp-1078h]
  _DWORD v17[2]; // [sp+50h] [bp-1074h] BYREF
  int v18; // [sp+58h] [bp-106Ch]
  int v19; // [sp+5Ch] [bp-1068h]
  _DWORD v20[7]; // [sp+60h] [bp-1064h] BYREF
  int v21; // [sp+7Ch] [bp-1048h]
  _DWORD v22[7]; // [sp+80h] [bp-1044h] BYREF
  int v23; // [sp+9Ch] [bp-1028h]
  _DWORD v24[7]; // [sp+A0h] [bp-1024h] BYREF
  int v25; // [sp+BCh] [bp-1008h]
  char v26[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v26,
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
    "get pmdata chip_no %d",
    *(_DWORD *)(a1 + 352));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pmdata_KDA_2110",
    27,
    953,
    20,
    v26);
  v2 = 0;
  v18 = 0;
  v19 = 0;
  v13 = 0;
  v17[1] = 0;
  v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 280);
  while ( 1 )
  {
    if ( v2 == 3 )
      goto LABEL_12;
    LOBYTE(v18) = 1;
    HIWORD(v18) = 255;
    v17[0] = (16 * v2) | 1;
    LOBYTE(v19) = -1;
    if ( v3(a1, v17) < 0 )
      break;
    v4 = 0;
    usleep(0x4E20u);
    v5 = *(_DWORD *)(a1 + 352);
    v6 = *(_DWORD *)(a1 + 356);
    v18 = 327681;
    v7 = v6 * v5;
    LOBYTE(v19) = 0;
    ptr = calloc(12 * v7, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int))(a1 + 316))(a1, v17, v7);
    if ( v15 > 0 )
    {
      v8 = ptr;
      do
      {
        HIBYTE(v16) = *(_DWORD *)v8;
        BYTE2(v16) = BYTE1(*(_DWORD *)v8);
        BYTE1(v16) = BYTE2(*(_DWORD *)v8);
        LOBYTE(v16) = HIBYTE(*(_DWORD *)v8);
        if ( v8[3] == 5 )
        {
          V_LOCK();
          ++v13;
          V_INT((int)v22, "chain", *(int *)(a1 + 256));
          logfmt_raw(
            v26,
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
            "[PM data] chip %02x, reg %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)v8 + 4),
            (unsigned __int16)v8[3],
            v2,
            v16);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 40;
          v11 = 985;
        }
        else
        {
          V_LOCK();
          V_INT((int)v24, "chain", *(int *)(a1 + 256));
          logfmt_raw(
            v26,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "[PM data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)v8 + 4),
            5,
            (unsigned __int16)v8[3],
            v2,
            v16);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 100;
          v11 = 988;
        }
        ++v4;
        v8 += 6;
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_pmdata_KDA_2110",
          27,
          v11,
          v10,
          v26);
      }
      while ( v15 > v4 );
    }
    if ( v2 == 6 )
    {
      free(ptr);
      return v13;
    }
    v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 280);
LABEL_12:
    ++v2;
  }
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, "%s failed, set reg:%02x", "ChipSetting_pmdata_KDA_2110", HIWORD(v18));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pmdata_KDA_2110",
    27,
    966,
    100,
    v26);
  return -1;
}
