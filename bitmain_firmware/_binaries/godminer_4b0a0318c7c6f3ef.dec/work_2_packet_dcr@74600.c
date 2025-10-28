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
  const void *v23; // r0
  _DWORD *v24; // r7
  void *v25; // r0
  __int16 v26; // r0
  int v27; // r3
  int v28; // r3
  int v29; // r1
  void (__fastcall *v30)(int, _DWORD *); // r3
  int v32; // r3
  int v33; // r1
  _DWORD v35[2]; // [sp+18h] [bp-1004h] BYREF
  int v36; // [sp+20h] [bp-FFCh]
  int v37; // [sp+24h] [bp-FF8h]

  v6 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (char *)(v6 + 0x8000);
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 508) == 1 )
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
  LOWORD(v23) = 23052;
  HIWORD(v23) = (unsigned int)&unk_1B5A14 >> 16;
  if ( !memcmp(v23, v10, 0xB4u) )
  {
    V_LOCK();
    LOWORD(v32) = -23664;
    HIWORD(v32) = (unsigned int)" clock count chip_no %d" >> 16;
    LOWORD(v24) = 20532;
    logfmt_raw((char *)v35, 0x1000u, 0, v32);
    HIWORD(v24) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v33) = -18012;
    HIWORD(v33) = (unsigned int)"e_core_clk_tops" >> 16;
    zlog(*v24, v33, 171, "work_2_packet_dcr", 17, 120, 80, v35);
  }
  else
  {
    LOWORD(v24) = 20532;
    HIWORD(v24) = (unsigned int)&g_fan_zc >> 16;
  }
  LOWORD(v25) = 23052;
  HIWORD(v25) = (unsigned int)&unk_1B5A14 >> 16;
  memcpy(v25, v10, 0xB4u);
  v26 = BM_CRC16(a3 + 2, 182);
  a3[185] = v26;
  a3[184] = HIBYTE(v26);
  v27 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 186;
  if ( v27 && *(_BYTE *)(a1 + 265) )
  {
    memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
    sub_744D8((int *)a1, 39);
    *(_BYTE *)(a1 + 264) = 0;
  }
  V_LOCK();
  LOWORD(v28) = -23416;
  HIWORD(v28) = (unsigned int)" expected reg %02x, but %02x mode %d PMDATA %08x" >> 16;
  logfmt_raw((char *)v35, 0x1000u, 0, v28, "ChipSetting_bridge_reset_DCR_1727", 68);
  V_UNLOCK();
  LOWORD(v29) = -23880;
  HIWORD(v29) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v24, v29, 150, "ChipSetting_bridge_reset_DCR_1727", 33, 167, 20, v35);
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  v30 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v36) = 1;
  v35[0] = 2;
  HIWORD(v36) = 68;
  v30(a1, v35);
  usleep(0x14u);
  return 0;
}
