int get_power_voltage_calibration_data()
{
  bool v0; // cc
  int v1; // r10
  int v2; // r4
  unsigned __int64 v3; // r2
  unsigned int v4; // r11
  _DWORD *v5; // r7
  int v6; // r4
  int v7; // r3
  int v8; // r1
  _BYTE *v9; // lr
  int v10; // r2
  __int64 v11; // r0
  int v12; // t1
  int v13; // r3
  int v14; // r8
  int v15; // r1
  double v16; // d0
  double v17; // d9
  int v18; // r7
  int v19; // s16
  int v20; // r10
  int v21; // r9
  unsigned int v22; // r1
  double *v23; // r8
  double v24; // d0
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  int v29; // r3
  _DWORD *v30; // r3
  int v31; // r1
  int v32; // [sp+1Ch] [bp-1038h] BYREF
  int v33; // [sp+20h] [bp-1034h]
  int v34; // [sp+24h] [bp-1030h] BYREF
  int v35; // [sp+28h] [bp-102Ch]
  __int16 v36; // [sp+2Ch] [bp-1028h]
  unsigned int v37[3]; // [sp+30h] [bp-1024h] BYREF
  unsigned __int8 v38; // [sp+3Ch] [bp-1018h]
  _BYTE v39[15]; // [sp+3Dh] [bp-1017h] BYREF
  unsigned __int8 v40; // [sp+4Ch] [bp-1008h]
  unsigned __int8 v41; // [sp+4Dh] [bp-1007h]
  unsigned __int8 v42; // [sp+4Eh] [bp-1006h]
  unsigned __int8 v43; // [sp+4Fh] [bp-1005h]
  char v44[4100]; // [sp+50h] [bp-1004h] BYREF

  v0 = (unsigned int)dword_1B4600 > 0x62;
  if ( dword_1B4600 != 98 )
    v0 = (unsigned int)(dword_1B4600 - 100) > 2;
  v1 = !v0;
  if ( v0 )
  {
    bitmain_power_read(64, (int)v37, 32);
    v2 = (unsigned __int16)(v43 + (v42 << 8));
    if ( POWER_CRC16((int)v37, 30) == v2 )
    {
      HIDWORD(v3) = bswap32(v37[0]) & 0x1FFFFFF;
      LODWORD(v3) = bswap32(v37[1]);
      v4 = bswap32(v37[2]);
      LOWORD(v5) = 20532;
      v34 = v1;
      v35 = v1;
      HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
      v36 = v1;
      v6 = v1;
      v32 = v1;
      v33 = v1;
      sub_C8F34((int)&v32, 12, v3);
      sub_C8F34((int)&v34 + 3, 7, __PAIR64__(v1, v4));
      V_LOCK();
      LOWORD(v7) = 30980;
      HIWORD(v7) = (unsigned int)"_enqueue of __resp_packet_queue is false" >> 16;
      logfmt_raw(v44, 0x1000u, v1, v7, "get_power_voltage_calibration_data", &v32);
      V_UNLOCK();
      LOWORD(v8) = 30196;
      HIWORD(v8) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      zlog(*v5, v8, 173, "get_power_voltage_calibration_data", 34, 1079, 100, v44);
      v9 = v39;
      v10 = (unsigned __int16)(v41 + (v40 << 8));
      v11 = 138547333LL * (unsigned __int16)(v41 + (v40 << 8));
      WORD2(v11) = (HIDWORD(v11) + ((unsigned int)(v10 - HIDWORD(v11)) >> 1)) >> 4;
      unk_1B4610 = v32;
      unk_1B4614 = v33;
      unk_1B4618 = v34;
      unk_1B461C = v35;
      word_1B4620 = v36;
      dword_1B46C8 = 100 * (WORD2(v11) % 0xCu)
                   + 100
                   + 10000 * ((unsigned __int16)(v41 + (v40 << 8)) / 0x174u)
                   + (unsigned __int16)(v10 - 31 * WORD2(v11))
                   + 1;
      while ( 1 )
      {
        v12 = (char)*++v9;
        v13 = v6 + 1;
        if ( v12 == -128 )
          break;
        ++v6;
        if ( v13 == 14 )
        {
          v14 = 15;
          dword_1B4624 = 15;
          v16 = 0.0;
          v17 = 18.2142857;
          v18 = (__int16)(v39[0] + (v38 << 8));
          v19 = v18;
          goto LABEL_16;
        }
      }
      dword_1B4624 = v6 + 1;
      v14 = v6 + 1;
      if ( (unsigned int)(v6 - 1) > 0xFE )
      {
        V_LOCK();
        logfmt_raw(v44, 0x1000u, 0, "%s power eeprom list get error!", "get_power_voltage_calibration_data");
        V_UNLOCK();
        LOWORD(v15) = 30196;
        HIWORD(v15) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
        zlog(*v5, v15, 173, "get_power_voltage_calibration_data", 34, 1103, 100, v44);
        return -1;
      }
      v17 = 255.0 / (double)v6;
      v18 = (__int16)(v39[0] + (v38 << 8));
      v19 = v18;
      v16 = v17 * 0.0;
      round();
LABEL_16:
      v20 = 1787431;
      v21 = 0;
      while ( 1 )
      {
        ++v21;
        *(_BYTE *)++v20 = (unsigned int)v16;
        if ( v21 == v14 )
          break;
        v16 = (double)v21 * v17;
        round();
      }
      sub_C83E0();
      v23 = (double *)&unk_1B4680;
      v24 = (double)v19 / 1000.0 + v16;
      dbl_1B4678 = v24;
      do
      {
        v18 += (char)v39[v22 + 1];
        sub_C83E0();
        v24 = (double)v18 / 1000.0 + v24;
        *v23++ = v24;
      }
      while ( v22 < v6 );
      return 0;
    }
    else
    {
      V_LOCK();
      LOWORD(v29) = 30968;
      HIWORD(v29) = (unsigned int)"n[%d], queue_enqueue of __resp_packet_queue is false" >> 16;
      logfmt_raw(v44, 0x1000u, v1, v29, "get_power_voltage_calibration_data");
      V_UNLOCK();
      LOWORD(v30) = 20532;
      HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v31) = 30196;
      HIWORD(v31) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      zlog(*v30, v31, 173, "get_power_voltage_calibration_data", 34, 1064, 100, v44);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v25) = 30936;
    HIWORD(v25) = (unsigned int)"new/backend/backend_base.c" >> 16;
    logfmt_raw(v44, 0x1000u, 0, v25, "get_power_voltage_calibration_data");
    V_UNLOCK();
    LOWORD(v26) = 20532;
    HIWORD(v26) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v27) = 30196;
    HIWORD(v27) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    zlog(*v26, v27, 173, "get_power_voltage_calibration_data", 34, 1043, 100, v44);
    return -1;
  }
}
