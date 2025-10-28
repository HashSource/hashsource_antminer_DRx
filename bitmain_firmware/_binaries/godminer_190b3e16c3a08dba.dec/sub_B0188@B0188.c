int __fastcall sub_B0188(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int inited; // r6
  size_t v8; // r8
  void *v9; // r7
  size_t v10; // r8
  void *v11; // r7
  size_t v12; // r8
  void *v13; // r7
  size_t v14; // r9
  int v15; // r3
  bool v16; // cf
  void *v17; // r7
  int v18; // r3
  size_t v19; // r9
  char v20; // r2
  size_t v21; // r0
  void *v22; // r7
  int v23; // r3
  int v24; // r12
  size_t v25; // r9
  char v26; // r2
  int v27; // r0
  char v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r7
  size_t v33; // r2
  _BYTE *v34; // r1
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // r7
  int v38; // lr
  int v39; // r12
  int v40; // r2
  size_t v41; // r8
  size_t v42; // r0
  float v43; // s12
  void *v44; // r7
  int v45; // r3
  int v46; // r1
  size_t v47; // r10
  char *v48; // r0
  char *v49; // r7
  unsigned __int16 dest; // [sp+14h] [bp-1854h] BYREF
  unsigned __int16 v51; // [sp+16h] [bp-1852h] BYREF
  _DWORD v52[4]; // [sp+18h] [bp-1850h] BYREF
  _BYTE v53[7]; // [sp+28h] [bp-1840h] BYREF
  unsigned __int8 v54; // [sp+2Fh] [bp-1839h]
  unsigned __int8 v55; // [sp+31h] [bp-1837h]
  unsigned __int8 v56; // [sp+32h] [bp-1836h]
  unsigned __int8 v57; // [sp+33h] [bp-1835h]
  unsigned __int8 v58; // [sp+34h] [bp-1834h]
  unsigned __int8 v59; // [sp+35h] [bp-1833h]
  unsigned __int8 v60; // [sp+36h] [bp-1832h]
  unsigned __int8 v61; // [sp+37h] [bp-1831h]
  unsigned __int8 v62; // [sp+38h] [bp-1830h]
  unsigned __int8 v63; // [sp+39h] [bp-182Fh]
  unsigned __int8 v64; // [sp+3Ah] [bp-182Eh]
  unsigned __int8 v65; // [sp+3Bh] [bp-182Dh]
  unsigned __int8 v66; // [sp+3Ch] [bp-182Ch]
  unsigned __int8 v67; // [sp+3Dh] [bp-182Bh]
  unsigned __int8 v68; // [sp+3Eh] [bp-182Ah]
  unsigned __int8 v69; // [sp+3Fh] [bp-1829h]
  unsigned __int8 v70; // [sp+40h] [bp-1828h]
  unsigned __int8 v71; // [sp+41h] [bp-1827h]
  unsigned __int8 v72; // [sp+42h] [bp-1826h]
  unsigned __int8 v73; // [sp+44h] [bp-1824h]
  unsigned __int8 v74; // [sp+45h] [bp-1823h]
  unsigned __int8 v75; // [sp+46h] [bp-1822h]
  unsigned __int8 v76; // [sp+48h] [bp-1820h]
  unsigned __int8 v77; // [sp+4Ch] [bp-181Ch]
  unsigned __int8 v78; // [sp+4Dh] [bp-181Bh]
  unsigned __int8 v79; // [sp+4Eh] [bp-181Ah]
  unsigned __int8 v80; // [sp+50h] [bp-1818h]
  unsigned __int8 v81; // [sp+53h] [bp-1815h]
  unsigned __int8 v82; // [sp+5Ah] [bp-180Eh]
  unsigned __int8 n; // [sp+5Bh] [bp-180Dh]
  unsigned __int8 n_1; // [sp+5Ch] [bp-180Ch]
  unsigned __int8 n_2; // [sp+5Dh] [bp-180Bh]
  unsigned __int8 v86; // [sp+62h] [bp-1806h]
  unsigned __int8 v87; // [sp+64h] [bp-1804h]
  unsigned __int8 v88; // [sp+65h] [bp-1803h]
  char v89[2040]; // [sp+68h] [bp-1800h] BYREF
  char v90[4096]; // [sp+868h] [bp-1000h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * (*a1 >> 4));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  inited = init_eeprom_fmt_info(v53, v5);
  if ( inited )
  {
    v8 = v77;
    v9 = calloc(v77 + 1, 1u);
    *(_DWORD *)(a2 + 3) = v9;
    if ( !v9 )
    {
      inited = 0;
      strcpy(v89, "Decode SN OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        521,
        100,
        v90);
      v9 = *(void **)(a2 + 3);
      v8 = v77;
    }
    memcpy(v9, &a1[v53[3]], v8);
    v10 = v78;
    v11 = calloc(v78 + 1, 1u);
    *(_DWORD *)(a2 + 7) = v11;
    if ( !v11 )
    {
      inited = 0;
      strcpy(v89, "Decode Chip Die OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        530,
        100,
        v90);
      v11 = *(void **)(a2 + 7);
      v10 = v78;
    }
    memcpy(v11, &a1[v53[4]], v10);
    v12 = v79;
    v13 = calloc(v79 + 1, 1u);
    *(_DWORD *)(a2 + 11) = v13;
    if ( !v13 )
    {
      inited = 0;
      strcpy(v89, "Decode Chip Marking OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        539,
        100,
        v90);
      v13 = *(void **)(a2 + 11);
      v12 = v79;
    }
    memcpy(v13, &a1[v53[5]], v12);
    v14 = v80;
    v15 = *(unsigned __int8 *)(a2 + 2) - 1;
    v16 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = a1[v53[6]];
    if ( v15 != 1 && v16 )
    {
      v17 = calloc(v14 + 1, 1u);
      *(_DWORD *)(a2 + 16) = v17;
      if ( !v17 )
      {
        inited = 0;
        strcpy(v89, "Decode Chip FT Program Version OOM");
        V_LOCK();
        logfmt_raw(v90, 0x1000u, 0, v89);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          170,
          "eeprom_buf_to_layout",
          20,
          565,
          100,
          v90);
        v17 = *(void **)(a2 + 16);
        v14 = v80;
      }
      memcpy(v17, &a1[v54], v14);
    }
    else
    {
      v47 = v14 + 6;
      memset(v52, 0, sizeof(v52));
      v48 = (char *)calloc(v14 + 6, 1u);
      v49 = v48;
      *(_DWORD *)(a2 + 16) = v48;
      if ( !v48 )
      {
        inited = 0;
        strcpy(v89, "Decode Chip FT Program Version OOM");
        V_LOCK();
        logfmt_raw(v90, 0x1000u, 0, v89);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          170,
          "eeprom_buf_to_layout",
          20,
          554,
          100,
          v90);
        v14 = v80;
        v49 = *(char **)(a2 + 16);
        v47 = v80 + 6;
      }
      memcpy(v52, &a1[v54], v14);
      snprintf(v49, v47, "F%dV%02dB%dC%d", LOBYTE(v52[0]), BYTE1(v52[0]), BYTE2(v52[0]), HIBYTE(v52[0]));
    }
    v18 = v55;
    v19 = v81;
    v20 = *(_BYTE *)(a2 + 24) & 0x80 | a1[v55] & 0x7F;
    v21 = v81 + 1;
    *(_BYTE *)(a2 + 24) = v20;
    *(_BYTE *)(a2 + 24) = v20 & 0x7F | (a1[v18] >> 7 << 7);
    v22 = calloc(v21, 1u);
    *(_DWORD *)(a2 + 25) = v22;
    if ( !v22 )
    {
      inited = 0;
      strcpy(v89, "Decode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        579,
        100,
        v90);
      v22 = *(void **)(a2 + 25);
      v19 = v81;
    }
    memcpy(v22, &a1[v56], v19);
    v23 = v57;
    v24 = v58;
    v25 = v82;
    v26 = *(_BYTE *)(a2 + 29) & 0x80 | a1[v57] & 0x7F;
    v27 = v59;
    *(_BYTE *)(a2 + 29) = v26;
    v28 = v26 & 0x7F | (a1[v23] >> 7 << 7);
    v29 = v60;
    *(_BYTE *)(a2 + 29) = v28;
    *(_BYTE *)(a2 + 30) = a1[v24];
    v30 = v61;
    *(_BYTE *)(a2 + 31) = a1[v27];
    LOBYTE(v27) = a1[v29];
    v31 = v62;
    *(_BYTE *)(a2 + 32) = v27;
    *(_BYTE *)(a2 + 33) = a1[v30];
    *(_BYTE *)(a2 + 34) = a1[v31];
    v32 = calloc(v25 + 1, 1u);
    *(_DWORD *)(a2 + 35) = v32;
    if ( !v32 )
    {
      inited = 0;
      strcpy(v89, "Decode Chip Technology OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        603,
        100,
        v90);
      v32 = *(void **)(a2 + 35);
      v25 = v82;
    }
    memcpy(v32, &a1[v63], v25);
    memcpy(&dest, &a1[v64], n);
    v33 = n_1;
    v34 = &a1[v65];
    *(_WORD *)(a2 + 39) = HIBYTE(dest) | (dest << 8);
    memcpy(&v51, v34, v33);
    v35 = n_2;
    v36 = &a1[v66];
    *(_WORD *)(a2 + 41) = HIBYTE(v51) | (v51 << 8);
    memcpy(v52, v36, v35);
    v37 = v67;
    v38 = v68;
    v39 = v69;
    v40 = v70;
    v41 = v86;
    v42 = v86 + 1;
    v43 = (double)(unsigned __int16)__rev16(LOWORD(v52[0])) / 100.0;
    *(float *)(a2 + 43) = v43;
    *(_BYTE *)(a2 + 47) = a1[v37];
    *(_BYTE *)(a2 + 48) = a1[v38];
    *(_BYTE *)(a2 + 49) = a1[v39];
    *(_BYTE *)(a2 + 50) = a1[v40];
    v44 = calloc(v42, 1u);
    *(_DWORD *)(a2 + 51) = v44;
    if ( !v44 )
    {
      inited = 0;
      strcpy(v89, "Decode miner_type OOM");
      V_LOCK();
      logfmt_raw(v90, 0x1000u, 0, v89);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        639,
        100,
        v90);
      v44 = *(void **)(a2 + 51);
      v41 = v86;
    }
    memcpy(v44, &a1[v71], v41);
    v45 = v73;
    v46 = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a2 + 55) = a1[v72];
    *(_BYTE *)(a2 + 60) = a1[v45];
    if ( v46 == 4 )
    {
      memcpy((void *)(a2 + 61), &a1[v74], v87);
      memcpy((void *)(a2 + 63), &a1[v75], v88);
      *(_BYTE *)(a2 + 196) = a1[v76];
    }
  }
  return inited;
}
