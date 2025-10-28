int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v11; // r0
  __int16 v12; // lr
  unsigned __int8 v13; // r12
  char v14; // r0
  int v15; // r2
  int v16; // r2
  int v17; // r11
  __int16 v19; // r1
  int v20; // r3
  char v21; // r2
  int v22; // [sp+24h] [bp-1030h]
  int v23; // [sp+2Ch] [bp-1028h]
  unsigned __int8 v24[2]; // [sp+34h] [bp-1020h] BYREF
  int v25; // [sp+36h] [bp-101Eh] BYREF
  __int16 v26; // [sp+3Ah] [bp-101Ah]
  int v27[2]; // [sp+3Ch] [bp-1018h] BYREF
  unsigned __int8 v28; // [sp+44h] [bp-1010h] BYREF
  unsigned __int8 v29; // [sp+45h] [bp-100Fh]
  char v30; // [sp+46h] [bp-100Eh] BYREF
  unsigned __int8 v31; // [sp+47h] [bp-100Dh]
  unsigned __int8 v32; // [sp+48h] [bp-100Ch]
  unsigned __int8 v33; // [sp+49h] [bp-100Bh]
  unsigned __int8 v34; // [sp+4Ah] [bp-100Ah]
  unsigned __int8 v35; // [sp+4Bh] [bp-1009h]
  char v36; // [sp+4Ch] [bp-1008h]
  char v37[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  v25 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v24[0] = 85;
  v24[1] = -86;
  v12 = *(_WORD *)(a2 + 10);
  v13 = *(_BYTE *)(a2 + 12);
  v25 = (16 * (v11 & 1)) & 0x1A | 0x45;
  BYTE1(v25) = 6;
  HIBYTE(v25) = v12;
  v26 = v13;
  v14 = BM_CRC5(&v25, 40);
  v15 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v26) = HIBYTE(v26) & 0xE0 | v14 & 0x1F;
  if ( !v15 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v23 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  queue_clear(*(_DWORD *)(a1 + 892));
  v7 = 0;
  send_command_packet(a1, v24, 8u);
  sub_146F74(a6, 0x3E8u);
  v27[1] = 1000000 * v16;
  v22 = 0;
  v27[0] = sub_146F74(a6, 0x3E8u);
  while ( v22 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), (char *)&v28, 9u, v27) == 110 )
      {
        v7 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      logfmt_raw(
        v37,
        0x1000u,
        0,
        "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
        v28,
        v29,
        v34,
        v35,
        v31,
        v32,
        v33);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base_3",
        24,
        788,
        20,
        v37);
      if ( v28 != 170 || v29 != 85 || (v36 & 0x40) == 0 )
      {
        v7 = 1;
        goto LABEL_14;
      }
      v17 = v36 & 0x1F;
      if ( v17 == BM_CRC5(&v30, 51) )
        break;
      v7 = 2;
    }
    ++v22;
    v19 = v35;
    v20 = (v32 << 16) | (v33 << 24) | v31;
    v21 = v30;
    *(_BYTE *)(v23 + 4) = v34;
    *(_WORD *)(v23 + 6) = v19;
    *(_BYTE *)(v23 + 8) = v21;
    *(_DWORD *)v23 = v20;
    v23 += 12;
  }
LABEL_14:
  *a5 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
  return v7;
}
