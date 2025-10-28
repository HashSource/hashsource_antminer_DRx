int __fastcall judge_load_config(char *a1)
{
  int v2; // r3
  _DWORD *v3; // r5
  int v4; // r1
  unsigned int *file; // r0
  unsigned int *v6; // r6
  unsigned int v7; // r7
  int v8; // r3
  int v9; // r8
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r1
  int v15; // r3
  int v16; // r1
  char *v17; // r1
  _DWORD *v18; // r0
  _DWORD *v19; // r10
  char *v20; // r1
  char *v21; // r1
  _DWORD *v22; // r0
  _BYTE *v23; // r2
  int v24; // r3
  char *v25; // r1
  _DWORD *v26; // r0
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  int v30; // r3
  int v31; // r3
  int v32; // r1
  const char *v33; // r0
  int v34; // r0
  char *v35; // r9
  _DWORD *v36; // r0
  char *v37; // r3
  char *v38; // r2
  char *v39; // r1
  _DWORD *v40; // r0
  _DWORD *v41; // r8
  unsigned int v42; // r6
  int v43; // r6
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  char *v48; // r1
  _DWORD *v49; // r0
  _DWORD *v50; // r0
  int v51; // r3
  const char *v52; // r11
  int v53; // r9
  int v54; // r8
  int v55; // r10
  int v56; // r0
  const char *v57; // r1
  int v58; // r7
  int v59; // t1
  char *v60; // [sp+4h] [bp-1130h]
  char *format; // [sp+10h] [bp-1124h]
  char *v62; // [sp+18h] [bp-111Ch]
  char *v63; // [sp+20h] [bp-1114h]
  unsigned int *v64; // [sp+28h] [bp-110Ch]
  char v65[92]; // [sp+34h] [bp-1100h] BYREF
  char v66[160]; // [sp+90h] [bp-10A4h] BYREF
  char v67[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -29944;
  HIWORD(v2) = (unsigned int)" port: %d" >> 16;
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v67, 0x1000u, 0, v2, "judge_load_config");
  V_UNLOCK();
  LOWORD(v4) = -30968;
  HIWORD(v4) = (unsigned int)"d = %d" >> 16;
  zlog(*v3, v4, 134, "judge_load_config", 17, 657, 20, v67);
  if ( a1 )
  {
    file = (unsigned int *)json_load_file(a1, 0, v65);
    v6 = file;
    if ( !file || (v7 = *file) != 0 )
    {
      V_LOCK();
      LOWORD(v8) = -29916;
      HIWORD(v8) = (unsigned int)"reat failed" >> 16;
      v60 = a1;
      v9 = 0;
      logfmt_raw(v67, 0x1000u, 0, v8, "judge_load_config", v60, v66);
      V_UNLOCK();
      v10 = *v3;
      v11 = 100;
      v12 = 672;
LABEL_5:
      LOWORD(v13) = -30968;
      HIWORD(v13) = (unsigned int)"d = %d" >> 16;
      zlog(v10, v13, 134, "judge_load_config", 17, v12, v11, v67);
      return v9;
    }
    V_LOCK();
    LOWORD(v15) = -29876;
    HIWORD(v15) = (unsigned int)"failed (ignored): %s" >> 16;
    logfmt_raw(v67, 0x1000u, 0, v15, "judge_load_config");
    V_UNLOCK();
    LOWORD(v16) = -30968;
    HIWORD(v16) = (unsigned int)"d = %d" >> 16;
    zlog(*v3, v16, 134, "judge_load_config", 17, 675, 20, v67);
    LOWORD(v17) = -30272;
    HIWORD(v17) = (unsigned int)"odminer-new/stratum_handler.c" >> 16;
    v18 = (_DWORD *)json_object_get(v6, v17);
    v19 = v18;
    if ( !v18 || *v18 != 1 )
      goto LABEL_8;
    v35 = (char *)&unk_195B98;
    v36 = json_array_size(v18);
    LOWORD(v37) = 26500;
    LOWORD(v38) = -27680;
    LOWORD(v39) = -28724;
    HIWORD(v37) = (unsigned int)"freq_avg" >> 16;
    HIWORD(v38) = (unsigned int)"space" >> 16;
    HIWORD(v39) = (unsigned int)&unk_1492DC >> 16;
    dword_195B94 = (int)v36;
    v62 = v37;
    format = v38;
    v63 = v39;
    v64 = v6;
    while ( (unsigned int)json_array_size(v19) > v7 )
    {
      v40 = json_array_get(v19, v7);
      v41 = v40;
      if ( !v40 )
        break;
      v42 = __clz(v7 - 3);
      ++v7;
      v43 = v42 >> 5;
      if ( *v40 )
        v43 = 1;
      if ( v43 )
        break;
      v44 = (_DWORD *)json_object_get(v40, v62);
      if ( !v44 )
        break;
      if ( *v44 != 2 )
        break;
      v45 = json_string_value(v44);
      snprintf(v35, 0x100u, format, v45);
      v46 = (_DWORD *)json_object_get(v41, v63);
      if ( !v46 )
        break;
      if ( *v46 != 2 )
        break;
      v47 = json_string_value(v46);
      snprintf(v35 + 256, 0x100u, format, v47);
      LOWORD(v48) = 32672;
      HIWORD(v48) = (unsigned int)"ner status" >> 16;
      v49 = (_DWORD *)json_object_get(v41, v48);
      if ( !v49 || *v49 != 2 )
        break;
      v50 = json_string_value(v49);
      snprintf(v35 + 512, 0x100u, format, v50);
      V_LOCK();
      LOWORD(v51) = -29848;
      HIWORD(v51) = (unsigned int)"no %d res_init error" >> 16;
      logfmt_raw(v67, 0x1000u, 0, v51, v35, v35 + 256, v35 + 512);
      V_UNLOCK();
      v35 += 768;
      zlog(
        *v3,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        699,
        20,
        v67);
    }
    v6 = v64;
    v52 = (const char *)&unk_195B98;
    v53 = total_pools;
    if ( total_pools == dword_195B94 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v9 = 0;
        goto LABEL_9;
      }
      v54 = 0;
      v55 = pools - 4;
      while ( 1 )
      {
        v59 = *(_DWORD *)(v55 + 4);
        v55 += 4;
        v58 = v59;
        ++v54;
        if ( strcmp(*(const char **)(v59 + 12), v52) )
          break;
        v56 = strcmp(*(const char **)(v58 + 16), v52 + 256);
        v57 = v52 + 512;
        v52 += 768;
        if ( v56 || strcmp(*(const char **)(v58 + 20), v57) )
          break;
        if ( v53 == v54 )
          goto LABEL_8;
      }
    }
    v9 = 1;
LABEL_9:
    LOWORD(v20) = -32756;
    HIWORD(v20) = (unsigned int)"ard" >> 16;
    json_object_get(v6, v20);
    LOWORD(v21) = 32724;
    HIWORD(v21) = (unsigned int)" %s" >> 16;
    v22 = (_DWORD *)json_object_get(v6, v21);
    if ( v22 )
    {
      if ( (unsigned int)(*v22 - 5) <= 1 )
      {
        LOWORD(v23) = 27380;
        HIWORD(v23) = (unsigned int)&byte_196AFC >> 16;
        v24 = *v22 == 5;
        if ( (unsigned __int8)*v23 != v24 )
        {
          v9 |= 4u;
          *v23 = v24;
        }
      }
    }
    LOWORD(v25) = 32744;
    HIWORD(v25) = (unsigned int)"t miner sn" >> 16;
    v26 = (_DWORD *)json_object_get(v6, v25);
    if ( v26 )
    {
      if ( *v26 == 2 )
      {
        v33 = (const char *)json_string_value(v26);
        v34 = strtol(v33, 0, 10);
        if ( fan_pwm != v34 )
        {
          v9 |= 8u;
          fan_pwm = v34;
        }
      }
    }
    if ( v6[1] != -1 )
    {
      v27 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v28 = __ldrex(v27);
        v29 = v28 - 1;
      }
      while ( __strex(v29, v27) );
      if ( !v29 )
        json_delete(v6);
    }
    V_LOCK();
    LOWORD(v30) = -29836;
    HIWORD(v30) = (unsigned int)"it error" >> 16;
    logfmt_raw(v67, 0x1000u, 0, v30, v9);
    V_UNLOCK();
    v10 = *v3;
    v11 = 20;
    v12 = 758;
    goto LABEL_5;
  }
  V_LOCK();
  LOWORD(v31) = -29932;
  HIWORD(v31) = (unsigned int)"stratum socket creat failed" >> 16;
  logfmt_raw(v67, 0x1000u, 0, v31, "judge_load_config");
  V_UNLOCK();
  LOWORD(v32) = -30968;
  HIWORD(v32) = (unsigned int)"d = %d" >> 16;
  zlog(*v3, v32, 134, "judge_load_config", 17, 666, 100, v67);
  return 0;
}
