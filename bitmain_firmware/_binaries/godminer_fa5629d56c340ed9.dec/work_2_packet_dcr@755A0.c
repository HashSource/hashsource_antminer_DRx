int __fastcall work_2_packet_dcr(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r5
  char *v8; // r7
  const char *v9; // r1
  _DWORD *v10; // r8
  int v11; // r12
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r3
  int v15; // r11
  int v16; // r10
  int v17; // lr
  int v18; // r12
  int v19; // r12
  int v20; // r11
  int v21; // r10
  char v22; // r12
  __int16 v23; // r0
  int v24; // r3
  void (__fastcall *v25)(int, _DWORD *); // r3
  _DWORD v28[2]; // [sp+18h] [bp-1004h] BYREF
  int v29; // [sp+20h] [bp-FFCh]
  int v30; // [sp+24h] [bp-FF8h]

  v6 = *(_DWORD *)(a1 + 848);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (char *)(v6 + 0x8000);
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 516) == 1 )
    a3[2] = 48;
  v11 = (unsigned __int8)*v8;
  *(_QWORD *)(v6 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v6 + 32 * (v11 + 32)), v9);
  v12 = (unsigned __int8)*v8;
  *(_DWORD *)(v6 + 4 * (v12 + 7040)) = a2[55];
  v13 = (_DWORD *)(v6 + 32 * (v12 + 896));
  v14 = a2 + 56;
  v15 = a2[56];
  v16 = a2[57];
  v17 = v14[2];
  v18 = v14[3];
  *v13 = v15;
  v13[1] = v16;
  v13[2] = v17;
  v13[3] = v18;
  v19 = v14[7];
  v20 = v14[4];
  v21 = v14[5];
  v13[6] = v14[6];
  v13[7] = v19;
  v13[4] = v20;
  v13[5] = v21;
  memcpy((void *)(v6 + 180 * (unsigned __int8)*v8 + 5120), v10, 0xB4u);
  v22 = *v8;
  a3[3] = *v8;
  *v8 = (v22 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0xB4u);
  if ( !memcmp(&last_header_dcr, v10, 0xB4u) )
  {
    V_LOCK();
    logfmt_raw((char *)v28, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "work_2_packet_dcr",
      17,
      120,
      80,
      v28);
  }
  memcpy(&last_header_dcr, v10, 0xB4u);
  v23 = BM_CRC16(a3 + 2, 182);
  a3[185] = v23;
  a3[184] = HIBYTE(v23);
  v24 = *(unsigned __int8 *)(a1 + 266);
  *a4 = 186;
  if ( v24 && *(_BYTE *)(a1 + 267) )
  {
    memset(*(void **)(a1 + 480), 0, 48 * *(_DWORD *)(a1 + 356));
    sub_75478((int *)a1, 39);
    *(_BYTE *)(a1 + 266) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v28, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_DCR_1727", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bridge_reset_DCR_1727",
    33,
    167,
    20,
    v28);
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v25 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
  LOBYTE(v29) = 1;
  v28[0] = 2;
  HIWORD(v29) = 68;
  v25(a1, v28);
  usleep(0x14u);
  return 0;
}
