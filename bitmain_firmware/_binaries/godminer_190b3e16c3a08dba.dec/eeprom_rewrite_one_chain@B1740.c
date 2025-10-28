int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r10
  int v7; // r8
  int v8; // r8
  unsigned __int8 *v9; // r5
  unsigned __int8 v10; // r3
  unsigned __int8 v11; // lr
  unsigned __int8 v12; // r2
  __int16 v13; // r1
  int v14; // r1
  const void *v15; // r10
  const void *v16; // r8
  const void *v17; // r8
  const void *v18; // r8
  const void *v19; // r8
  int v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  const void *v25; // r8
  int v26; // r1
  int v27; // r2
  int v28; // r3
  const void *v29; // r8
  int v30; // r8
  unsigned int v31; // r8
  int v32; // r3
  int v33; // r1
  bool v34; // zf
  char v35; // r12
  int v36; // r10
  int v37; // r0
  int v38; // r2
  int v39; // r1
  int v41; // r0
  int v42; // r2
  int v44; // [sp+10h] [bp-1C1Ch]
  int v45; // [sp+14h] [bp-1C18h]
  char v46; // [sp+14h] [bp-1C18h]
  __int16 src; // [sp+22h] [bp-1C0Ah] BYREF
  __int16 v50; // [sp+24h] [bp-1C08h] BYREF
  __int16 v51; // [sp+26h] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+28h] [bp-1C04h] BYREF
  unsigned __int8 v53[256]; // [sp+128h] [bp-1B04h] BYREF
  _WORD v54[128]; // [sp+228h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+328h] [bp-1904h] BYREF
  char v56[2040]; // [sp+428h] [bp-1804h] BYREF
  _DWORD v57[1025]; // [sp+C28h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  v45 = *(_DWORD *)(a2 + 4 * a1);
  v6 = 3;
  while ( 1 )
  {
    v7 = eeprom_read(a1, 0, (int)s, 256);
    if ( v7 )
    {
      snprintf(v56, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_rewrite_one_chain",
        24,
        871,
        100,
        v57);
      return v7;
    }
    if ( !eeprom_decode_fixture_info_0(s, v53) )
      break;
    snprintf(v56, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw((char *)v57, 0x1000u, 0, v56);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      885,
      100,
      v57);
    usleep(0x7A120u);
    if ( !--v6 )
      goto LABEL_6;
  }
  v9 = (unsigned __int8 *)v45;
  if ( !sub_B0188(v53, v45) || !sub_AF030(v53, (unsigned __int8 *)v45) )
  {
LABEL_6:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v56, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    v8 = -1;
    logfmt_raw((char *)v57, 0x1000u, 0, v56);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      902,
      100,
      v57);
    return v8;
  }
  v44 = a2 + a1;
  *(_BYTE *)(v44 + 64) = 1;
  snprintf(
    v56,
    0x800u,
    "chain[%d], modify voltage from %d to %d, freq from %d to %d",
    a1,
    *(unsigned __int16 *)(v45 + 39),
    *(unsigned __int16 *)(v45 + 39) + a3,
    *(unsigned __int16 *)(v45 + 41),
    *(unsigned __int16 *)(v45 + 41) + a4);
  V_LOCK();
  logfmt_raw((char *)v57, 0x1000u, 0, v56);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_rewrite_one_chain",
    24,
    908,
    100,
    v57);
  v10 = *(_BYTE *)v45;
  v11 = *(_BYTE *)(v45 + 2);
  v12 = *(_BYTE *)(v45 + 1);
  v13 = *(_WORD *)(v45 + 41) + a4;
  *(_WORD *)(v45 + 39) += a3;
  *(_WORD *)(v45 + 41) = v13;
  v53[2] = v11;
  v53[0] = v10;
  v14 = *(unsigned __int8 *)(v45 + 2);
  v53[1] = v12;
  if ( init_eeprom_fmt_info(dest, v14) )
  {
    v15 = *(const void **)(v45 + 3);
    if ( !v15 )
    {
      strcpy(v56, "encode serial_number OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        690,
        100,
        v57);
      v15 = *(const void **)(v45 + 3);
    }
    memcpy(&v53[HIBYTE(dest[0])], v15, LOBYTE(dest[9]));
    v16 = *(const void **)(v45 + 7);
    if ( !v16 )
    {
      strcpy(v56, "encode chip_die OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        697,
        100,
        v57);
      v16 = *(const void **)(v45 + 7);
    }
    memcpy(&v53[LOBYTE(dest[1])], v16, BYTE1(dest[9]));
    v17 = *(const void **)(v45 + 11);
    if ( !v17 )
    {
      strcpy(v56, "encode chip_marking OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        704,
        100,
        v57);
      v17 = *(const void **)(v45 + 11);
    }
    memcpy(&v53[BYTE1(dest[1])], v17, BYTE2(dest[9]));
    v53[BYTE2(dest[1])] = *(_BYTE *)(v45 + 15);
    v18 = *(const void **)(v45 + 16);
    if ( !v18 )
    {
      strcpy(v56, "encode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        714,
        100,
        v57);
      v18 = *(const void **)(v45 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v45 + 2) - 1 <= 1 )
    {
      memset(v57, 0, 16);
      _isoc99_sscanf(v18, "F%dV%02dB%dC%d", v57, (char *)v57 + 1, (char *)v57 + 2, (char *)v57 + 3);
      memcpy(&v53[HIBYTE(dest[1])], v57, LOBYTE(dest[10]));
    }
    else
    {
      memcpy(&v53[HIBYTE(dest[1])], v18, LOBYTE(dest[10]));
    }
    v53[BYTE1(dest[2])] = *(_BYTE *)(v45 + 24);
    v19 = *(const void **)(v45 + 25);
    if ( !v19 )
    {
      strcpy(v56, "Decode asic_sensor_addr OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        734,
        100,
        v57);
      v19 = *(const void **)(v45 + 25);
    }
    memcpy(&v53[BYTE2(dest[2])], v19, HIBYTE(dest[10]));
    v20 = LOBYTE(dest[3]);
    v21 = BYTE1(dest[3]);
    v53[HIBYTE(dest[2])] = *(_BYTE *)(v45 + 29);
    v22 = BYTE2(dest[3]);
    v23 = HIBYTE(dest[3]);
    v53[v20] = *(_BYTE *)(v45 + 30);
    v53[v21] = *(_BYTE *)(v45 + 31);
    v24 = LOBYTE(dest[4]);
    v53[v22] = *(_BYTE *)(v45 + 32);
    v53[v23] = *(_BYTE *)(v45 + 33);
    v53[v24] = *(_BYTE *)(v45 + 34);
    v25 = *(const void **)(v45 + 35);
    if ( !v25 )
    {
      strcpy(v56, "Decode Chip Technology OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        756,
        100,
        v57);
      v25 = *(const void **)(v45 + 35);
    }
    memcpy(&v53[BYTE1(dest[4])], v25, BYTE2(dest[12]));
    src = HIBYTE(*(_WORD *)(v45 + 39)) | (*(_WORD *)(v45 + 39) << 8);
    memcpy(&v53[BYTE2(dest[4])], &src, HIBYTE(dest[12]));
    v50 = HIBYTE(*(_WORD *)(v45 + 41)) | (*(_WORD *)(v45 + 41) << 8);
    memcpy(&v53[HIBYTE(dest[4])], &v50, LOBYTE(dest[13]));
    v51 = (unsigned int)(float)(*(float *)(v45 + 43) * 100.0);
    memcpy(&v53[LOBYTE(dest[5])], &v51, BYTE1(dest[13]));
    v26 = BYTE2(dest[5]);
    v27 = HIBYTE(dest[5]);
    v53[BYTE1(dest[5])] = *(_BYTE *)(v45 + 47);
    v28 = LOBYTE(dest[6]);
    v53[v26] = *(_BYTE *)(v45 + 48);
    v53[v27] = *(_BYTE *)(v45 + 49);
    v53[v28] = *(_BYTE *)(v45 + 50);
    v29 = *(const void **)(v45 + 51);
    if ( !v29 )
    {
      strcpy(v56, "Decode miner_type OOM");
      V_LOCK();
      logfmt_raw((char *)v57, 0x1000u, 0, v56);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        788,
        100,
        v57);
      v29 = *(const void **)(v45 + 51);
    }
    memcpy(&v53[BYTE1(dest[6])], v29, BYTE2(dest[14]));
    v30 = LOBYTE(dest[7]);
    v53[BYTE2(dest[6])] = *(_BYTE *)(v45 + 55);
    v53[v30] = BM_CRC5(v53, 8 * (*(unsigned __int8 *)(v45 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v31 = v53[1] - 2;
  v32 = v53[0] & 0xF;
  v33 = v53[0] >> 4;
  if ( (unsigned __int8)(v53[1] - 2) > 0xFDu )
  {
    snprintf(
      v56,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      v53[1],
      v53[1] - 2,
      v53[1]);
    V_LOCK();
    v8 = -1;
    logfmt_raw((char *)v57, 0x1000u, 0, v56);
    V_UNLOCK();
    v41 = g_zc;
    v42 = 320;
    goto LABEL_49;
  }
  v34 = v33 == 1;
  if ( v33 == 1 )
    v34 = v32 == 1;
  v35 = !v34;
  if ( v34 )
  {
    v46 = v35;
    memcpy(dest, &v53[2], v53[1] - 2);
    data_enc(dest, v31, 1, 1);
    v36 = 3;
    v54[0] = *(_WORD *)v53;
    memcpy(&v54[1], dest, v31);
    while ( 1 )
    {
      eeprom_write(a1, 0, (int)v54, v9[1]);
      memset(s, 0, sizeof(s));
      v8 = eeprom_read(a1, 0, (int)s, 256);
      if ( v8 )
      {
        snprintf(v56, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw((char *)v57, 0x1000u, 0, v56);
        V_UNLOCK();
        v37 = g_zc;
        v38 = 926;
        LOWORD(v39) = -14132;
      }
      else
      {
        if ( eeprom_decode_fixture_info_0(s, v53) )
        {
          snprintf(v56, 0x800u, "Data decode fail for chain %d.", a1);
          V_LOCK();
          logfmt_raw((char *)v57, 0x1000u, 0, v56);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
            170,
            "eeprom_rewrite_one_chain",
            24,
            940,
            100,
            v57);
          usleep(0x7A120u);
          goto LABEL_43;
        }
        if ( sub_B0188(v53, (int)v9) && sub_AF030(v53, v9) )
        {
          *(_BYTE *)(v44 + 64) = 1;
          return v8;
        }
        v8 = -1;
        *(_BYTE *)(v44 + 64) = v46;
        snprintf(v56, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw((char *)v57, 0x1000u, 0, v56);
        V_UNLOCK();
        v37 = g_zc;
        v38 = 955;
        LOWORD(v39) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
      }
      HIWORD(v39) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v37, v39, 170, "eeprom_rewrite_one_chain", 24, v38, 100, v57);
LABEL_43:
      if ( !--v36 )
        return v8;
    }
  }
  snprintf(
    v56,
    0x800u,
    "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
    v32,
    v53[0] >> 4);
  V_LOCK();
  v8 = -1;
  logfmt_raw((char *)v57, 0x1000u, 0, v56);
  V_UNLOCK();
  v41 = g_zc;
  v42 = 326;
LABEL_49:
  zlog(
    v41,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "encode_eeprom_fixture_info",
    26,
    v42,
    100,
    v57);
  return v8;
}
