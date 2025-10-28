int __fastcall work_2_packet_hns(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v7; // r5
  const char *v9; // r1
  _DWORD *v10; // r8
  int v11; // r12
  int v12; // r2
  _DWORD *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  int v16; // r11
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r10
  int v21; // r12
  int v22; // r11
  char v23; // r12
  const void *v24; // r0
  _DWORD *v25; // r7
  void *v26; // r0
  __int16 v27; // r0
  int v28; // r3
  int v29; // r3
  int v30; // r1
  void (__fastcall *v31)(int, _DWORD *); // r3
  int v33; // r3
  int v34; // r1
  _DWORD v35[2]; // [sp+10h] [bp-1004h] BYREF
  int v36; // [sp+18h] [bp-FFCh]
  int v37; // [sp+1Ch] [bp-FF8h]

  v7 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v11 = *(unsigned __int8 *)(v7 + 42496);
  *(_QWORD *)(v7 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v7 + 32 * (v11 + 32)), v9);
  v12 = *(unsigned __int8 *)(v7 + 42496);
  v13 = a2 + 10;
  *(_DWORD *)(v7 + 4 * (v12 + 9472)) = a2[74];
  v14 = (_DWORD *)(v7 + 32 * (v12 + 1200));
  v15 = a2 + 75;
  v16 = a2[75];
  v17 = a2[76];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[5];
  v21 = v15[7];
  v22 = v15[4];
  v14[6] = v15[6];
  v14[5] = v20;
  v14[7] = v21;
  v14[4] = v22;
  memcpy((void *)(v7 + ((*(unsigned __int8 *)(v7 + 42496) + 20) << 8)), v13, 0x100u);
  v23 = *(_BYTE *)(v7 + 42496);
  a3[3] = v23;
  *(_BYTE *)(v7 + 42496) = (v23 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0x100u);
  LOWORD(v24) = 23232;
  HIWORD(v24) = (unsigned int)&unk_1B5AC8 >> 16;
  if ( !memcmp(v24, v10, 0x100u) )
  {
    V_LOCK();
    LOWORD(v33) = -23664;
    HIWORD(v33) = (unsigned int)" chip %02x, expected reg %02x, but %02x, data %08x" >> 16;
    LOWORD(v25) = 20532;
    logfmt_raw((char *)v35, 0x1000u, 0, v33);
    HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v34) = -4920;
    HIWORD(v34) = (unsigned int)"_hns" >> 16;
    zlog(*v25, v34, 171, "work_2_packet_hns", 17, 124, 80, v35);
  }
  else
  {
    LOWORD(v25) = 20532;
    HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
  }
  LOWORD(v26) = 23232;
  HIWORD(v26) = (unsigned int)&unk_1B5AC8 >> 16;
  memcpy(v26, v10, 0x100u);
  v27 = BM_CRC16(a3 + 2, 258);
  a3[261] = v27;
  a3[260] = HIBYTE(v27);
  v28 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 262;
  if ( v28 && *(_BYTE *)(a1 + 265) )
  {
    memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
    sub_8C80C((int *)a1, 36);
    *(_BYTE *)(a1 + 264) = 0;
  }
  V_LOCK();
  LOWORD(v29) = -23416;
  HIWORD(v29) = (unsigned int)"02x cnt %08x" >> 16;
  logfmt_raw((char *)v35, 0x1000u, 0, v29, "ChipSetting_bridge_reset_HNS_2130", 68);
  V_UNLOCK();
  LOWORD(v30) = -23880;
  HIWORD(v30) = (unsigned int)" %08x" >> 16;
  zlog(*v25, v30, 150, "ChipSetting_bridge_reset_HNS_2130", 33, 167, 20, v35);
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  v31 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v36) = 1;
  v35[0] = 2;
  HIWORD(v36) = 68;
  v31(a1, v35);
  usleep(0x14u);
  return 0;
}
