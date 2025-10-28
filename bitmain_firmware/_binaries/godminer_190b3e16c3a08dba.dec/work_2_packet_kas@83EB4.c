int __fastcall work_2_packet_kas(int a1, int *a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // r7
  int *v8; // r0
  int *v9; // r3
  int v10; // r10
  int v11; // r9
  int v12; // r6
  _DWORD *v13; // r12
  int *v14; // r2
  int v15; // r11
  int v16; // r10
  int v17; // r9
  int v18; // r6
  int v19; // r6
  int v20; // r3
  int *v21; // r3
  int v22; // r10
  int v23; // r9
  int v24; // r12
  int v25; // r2
  int v26; // r2
  __int64 v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r6
  __int16 v31; // r0
  _WORD *v33; // r7
  int v34; // r6
  int v35; // r1
  _WORD *ptr; // [sp+34h] [bp-1048h]
  int v37; // [sp+44h] [bp-1038h] BYREF
  _DWORD v38[2]; // [sp+48h] [bp-1034h] BYREF
  char v39; // [sp+50h] [bp-102Ch]
  char v40; // [sp+51h] [bp-102Bh]
  __int16 v41; // [sp+52h] [bp-102Ah]
  int v42; // [sp+54h] [bp-1028h]
  _DWORD v43[7]; // [sp+58h] [bp-1024h] BYREF
  int v44; // [sp+74h] [bp-1008h]
  char v45[4100]; // [sp+78h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 784);
  if ( v4 )
  {
    *a3 = 85;
    a3[2] = 48;
    v8 = a2 + 4;
    a3[1] = -86;
    v9 = a2 + 4;
    v10 = a2[3];
    v11 = *a2;
    v12 = a2[1];
    v13 = (_DWORD *)(v4 + 8 * *(unsigned __int8 *)(v4 + 10368));
    v13[256] = a2[2];
    v13[257] = v10;
    *v13 = v11;
    v14 = (int *)(a3 + 4);
    v13[1] = v12;
    do
    {
      v15 = *v9;
      v9 += 4;
      v16 = *(v9 - 3);
      v14 += 4;
      v17 = *(v9 - 2);
      v18 = *(v9 - 1);
      *(v14 - 4) = v15;
      *(v14 - 3) = v16;
      *(v14 - 2) = v17;
      *(v14 - 1) = v18;
    }
    while ( v9 != a2 + 12 );
    v19 = *v9;
    v20 = v9[1];
    *v14 = v19;
    v14[1] = v20;
    v21 = (int *)(v4 + 40 * *(unsigned __int8 *)(v4 + 10368) + 4096);
    do
    {
      v22 = *v8;
      v8 += 4;
      v23 = *(v8 - 3);
      v21 += 4;
      v24 = *(v8 - 2);
      v25 = *(v8 - 1);
      *(v21 - 4) = v22;
      *(v21 - 3) = v23;
      *(v21 - 2) = v24;
      *(v21 - 1) = v25;
    }
    while ( v8 != a2 + 12 );
    v26 = v8[1];
    *v21 = *v8;
    v21[1] = v26;
    v27 = *((_QWORD *)a2 + 9);
    a3[51] = v27;
    a3[47] = BYTE4(v27);
    a3[50] = BYTE1(v27);
    a3[49] = BYTE2(v27);
    a3[48] = BYTE3(v27);
    a3[46] = BYTE5(v27);
    a3[45] = BYTE6(v27);
    a3[44] = HIBYTE(v27);
    v28 = *(unsigned __int8 *)(v4 + 10368);
    v29 = a2[18];
    v30 = ((_BYTE)v28 + 1) & 0x7F;
    *(_DWORD *)(v4 + 8 * (v28 + 256)) = 0;
    *(_DWORD *)(v4 + 8 * (v28 + 256) + 4) = v29;
    a3[3] = v28;
    *(_BYTE *)(v4 + 10368) = v30;
    if ( (((_BYTE)v28 + 1) & 0x7F) == 0 )
    {
      v40 = BYTE1(v30);
      v41 = 60;
      v39 = 1;
      v37 = ((_BYTE)v28 + 1) & 0x7F;
      v38[0] = v37;
      v38[1] = v37;
      v42 = v37;
      ptr = calloc(0x60u, 1u);
      (*(void (__fastcall **)(int, _DWORD *, int, _WORD *, int *))(a1 + 260))(a1, v38, 8, ptr, &v37);
      if ( v37 > 0 )
      {
        v33 = ptr;
        do
        {
          while ( 1 )
          {
            ++v30;
            if ( v33[3] == 60 )
              break;
            v33 += 6;
            if ( v30 >= v37 )
              goto LABEL_13;
          }
          V_LOCK();
          v33 += 6;
          V_INT((int)v43, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v45,
            0x1000u,
            0,
            v44,
            v43[0],
            v43[1],
            v43[2],
            v43[3],
            v43[4],
            v43[5],
            v43[6],
            v44,
            "[Chip status] asic %02x, reg %02x state %08x",
            *((unsigned __int8 *)v33 - 8),
            (unsigned __int16)*(v33 - 3),
            *((_DWORD *)v33 - 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_get_chip_status_KAS",
            31,
            1161,
            20,
            v45);
        }
        while ( v30 < v37 );
      }
LABEL_13:
      v34 = 0;
      free(ptr);
      do
      {
        v35 = (unsigned __int16)v34++;
        sub_82C6C(a1, v35, 9, 0);
      }
      while ( v34 != 45 );
    }
    v31 = BM_CRC16(a3 + 2, 50);
    a3[53] = v31;
    a3[52] = HIBYTE(v31);
    *a4 = 54;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "id_map is null", "work_2_packet_kas");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      171,
      "work_2_packet_kas",
      17,
      881,
      0x14u,
      v45);
    return 3;
  }
}
