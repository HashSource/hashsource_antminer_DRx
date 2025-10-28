int __fastcall judge_load_config(char *a1)
{
  unsigned int *file; // r0
  unsigned int *v3; // r6
  unsigned int v4; // r7
  int v5; // r8
  int v6; // r0
  int v7; // r12
  int v8; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // r10
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  const char *v17; // r0
  int v18; // r0
  char *v19; // r9
  _DWORD *v20; // r0
  _DWORD *v21; // r8
  unsigned int v22; // r6
  int v23; // r6
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  const char *v30; // r11
  int v31; // r9
  int v32; // r8
  int v33; // r10
  int v34; // r0
  const char *v35; // r1
  int v36; // r7
  int v37; // t1
  char *v38; // [sp+4h] [bp-1130h]
  unsigned int *v39; // [sp+28h] [bp-110Ch]
  char v40[92]; // [sp+34h] [bp-1100h] BYREF
  char v41[160]; // [sp+90h] [bp-10A4h] BYREF
  char v42[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "start %s", "judge_load_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "judge_load_config",
    17,
    617,
    20,
    v42);
  if ( a1 )
  {
    file = (unsigned int *)json_load_file(a1, 0, v40);
    v3 = file;
    if ( !file || (v4 = *file) != 0 )
    {
      V_LOCK();
      v38 = a1;
      v5 = 0;
      logfmt_raw(v42, 0x1000u, 0, "%s: JSON decode of file '%s' failed %s", "judge_load_config", v38, v41);
      V_UNLOCK();
      v6 = g_zc;
      v7 = 100;
      v8 = 632;
LABEL_5:
      zlog(
        v6,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        v8,
        v7,
        v42);
      return v5;
    }
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "%s: after json_load_file", "judge_load_config");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "judge_load_config",
      17,
      635,
      20,
      v42);
    v10 = (_DWORD *)json_object_get(v3, "pools");
    v11 = v10;
    if ( !v10 || *v10 != 1 )
      goto LABEL_8;
    v19 = (char *)&unk_17A1C8;
    dword_17A1C4 = (int)json_array_size(v10);
    v39 = v3;
    while ( (unsigned int)json_array_size(v11) > v4 )
    {
      v20 = json_array_get(v11, v4);
      v21 = v20;
      if ( !v20 )
        break;
      v22 = __clz(v4 - 3);
      ++v4;
      v23 = v22 >> 5;
      if ( *v20 )
        v23 = 1;
      if ( v23 )
        break;
      v24 = (_DWORD *)json_object_get(v20, "url");
      if ( !v24 )
        break;
      if ( *v24 != 2 )
        break;
      v25 = json_string_value(v24);
      snprintf(v19, 0x100u, "%s", v25);
      v26 = (_DWORD *)json_object_get(v21, "user");
      if ( !v26 )
        break;
      if ( *v26 != 2 )
        break;
      v27 = json_string_value(v26);
      snprintf(v19 + 256, 0x100u, "%s", v27);
      v28 = (_DWORD *)json_object_get(v21, "pass");
      if ( !v28 || *v28 != 2 )
        break;
      v29 = json_string_value(v28);
      snprintf(v19 + 512, 0x100u, "%s", v29);
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "%s %s %s", v19, v19 + 256, v19 + 512);
      V_UNLOCK();
      v19 += 768;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "judge_load_config",
        17,
        659,
        20,
        v42);
    }
    v3 = v39;
    v30 = (const char *)&unk_17A1C8;
    v31 = total_pools;
    if ( total_pools == dword_17A1C4 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v5 = 0;
        goto LABEL_9;
      }
      v32 = 0;
      v33 = pools - 4;
      while ( 1 )
      {
        v37 = *(_DWORD *)(v33 + 4);
        v33 += 4;
        v36 = v37;
        ++v32;
        if ( strcmp(*(const char **)(v37 + 12), v30) )
          break;
        v34 = strcmp(*(const char **)(v36 + 16), v30 + 256);
        v35 = v30 + 512;
        v30 += 768;
        if ( v34 || strcmp(*(const char **)(v36 + 20), v35) )
          break;
        if ( v31 == v32 )
          goto LABEL_8;
      }
    }
    v5 = 1;
LABEL_9:
    json_object_get(v3, "bitmain-freq-level");
    v12 = (_DWORD *)json_object_get(v3, "bitmain-fan-ctrl");
    if ( v12 && (unsigned int)(*v12 - 5) <= 1 && fan_pwm_fixed != (*v12 == 5) )
    {
      v5 |= 4u;
      fan_pwm_fixed = *v12 == 5;
    }
    v13 = (_DWORD *)json_object_get(v3, "bitmain-fan-pwm");
    if ( v13 )
    {
      if ( *v13 == 2 )
      {
        v17 = (const char *)json_string_value(v13);
        v18 = strtol(v17, 0, 10);
        if ( fan_pwm != v18 )
        {
          v5 |= 8u;
          fan_pwm = v18;
        }
      }
    }
    if ( v3[1] != -1 )
    {
      v14 = v3 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v16 = v15 - 1;
      }
      while ( __strex(v16, v14) );
      if ( !v16 )
        json_delete(v3);
    }
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "ret = 0x%x", v5);
    V_UNLOCK();
    v6 = g_zc;
    v7 = 20;
    v8 = 718;
    goto LABEL_5;
  }
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "%s: bad param", "judge_load_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "judge_load_config",
    17,
    626,
    100,
    v42);
  return 0;
}
