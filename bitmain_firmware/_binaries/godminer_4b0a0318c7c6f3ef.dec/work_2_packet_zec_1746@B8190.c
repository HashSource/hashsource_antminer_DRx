int __fastcall work_2_packet_zec_1746(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r5
  _DWORD *v7; // r3
  int v8; // r0
  _QWORD *v9; // r7
  __int64 v10; // r10
  _QWORD *v11; // r1
  int v12; // r12
  _DWORD *v13; // r2
  int v14; // t1
  int v15; // lr
  int v16; // r12
  int v17; // r12
  char v18; // r12
  const void *v19; // r0
  void *v20; // r0
  __int16 v21; // r0
  int v22; // r3
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  char v28[4100]; // [sp+18h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v7 = a2;
  v8 = *(unsigned __int8 *)(v6 + 27648);
  v9 = a2 + 5;
  v10 = *a2;
  v11 = a2 + 1;
  v12 = *((_DWORD *)v11 + 43);
  *(_QWORD *)(v6 + 8 * v8) = v10;
  *(_DWORD *)(v6 + 4 * (v8 + 5760)) = v12;
  v13 = (_DWORD *)(v6 + 32 * (v8 + 736));
  v14 = v7[46];
  v7 += 46;
  LODWORD(v10) = v7[1];
  v15 = v7[2];
  v16 = v7[3];
  *v13 = v14;
  v13[1] = v10;
  v13[2] = v15;
  v13[3] = v16;
  v17 = v7[7];
  HIDWORD(v10) = v7[4];
  LODWORD(v10) = v7[5];
  v13[6] = v7[6];
  v13[7] = v17;
  v13[4] = HIDWORD(v10);
  v13[5] = v10;
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 27648) + 32)), (const char *)v11);
  memcpy((void *)(v6 + 140 * *(unsigned __int8 *)(v6 + 27648) + 5120), v9, 0x8Cu);
  v18 = *(_BYTE *)(v6 + 27648);
  LOWORD(v19) = 23856;
  HIWORD(v19) = (unsigned int)&unk_1B5D38 >> 16;
  a3[3] = v18;
  *(_BYTE *)(v6 + 27648) = (v18 + 1) & 0x7F;
  if ( !memcmp(v19, v9, 0x8Cu) )
  {
    V_LOCK();
    LOWORD(v24) = -23664;
    HIWORD(v24) = (unsigned int)" clock count chip_no %d" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v24);
    V_UNLOCK();
    LOWORD(v25) = 20532;
    HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v26) = 18512;
    HIWORD(v26) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    zlog(*v25, v26, 171, "work_2_packet_zec_1746", 22, 260, 80, v28);
  }
  else
  {
    LOWORD(v20) = 23856;
    HIWORD(v20) = (unsigned int)&unk_1B5D38 >> 16;
    memcpy(v20, v9, 0x8Cu);
  }
  memcpy(a3 + 4, v9, 0x8Cu);
  v21 = BM_CRC16(a3 + 2, 142);
  a3[145] = v21;
  a3[144] = HIBYTE(v21);
  v22 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 146;
  if ( !v22 || !*(_BYTE *)(a1 + 265) )
    return 0;
  memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
  sub_B7F9C(a1, 18);
  usleep(0x64u);
  *(_BYTE *)(a1 + 264) = 0;
  return 0;
}
