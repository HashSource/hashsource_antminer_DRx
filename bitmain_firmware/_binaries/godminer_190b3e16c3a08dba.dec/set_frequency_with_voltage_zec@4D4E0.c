int __fastcall set_frequency_with_voltage_zec(int a1)
{
  char *all_created_runtime; // r8
  float v3; // s17
  float v4; // s16
  int working_voltage; // r0
  float v6; // s19
  char *v7; // r4
  int v8; // r0
  char *v9; // r7
  int v10; // r11
  int v11; // t1
  int v12; // r10
  int v13; // r2
  int v14; // r0
  char *v15; // r7
  int v16; // r4
  int v17; // t1
  int result; // r0
  char *v20; // r8
  int v21; // r4
  int v22; // t1
  int v23; // [sp+10h] [bp-101Ch]
  int v24; // [sp+10h] [bp-101Ch]
  int current_voltage; // [sp+14h] [bp-1018h]
  int v26; // [sp+18h] [bp-1014h]
  int v27; // [sp+1Ch] [bp-1010h]
  int v28; // [sp+24h] [bp-1008h] BYREF
  char v29[4100]; // [sp+28h] [bp-1004h] BYREF

  v28 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v28);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 924);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 920);
  if ( v3 > *(float *)(a1 + 96) )
    v3 = *(float *)(a1 + 96);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v23 = working_voltage;
  if ( *(_DWORD *)(a1 + 84) != -64 )
    v23 = working_voltage + (*(int (__fastcall **)(int))a1)(a1);
  v6 = *(float *)(a1 + 104);
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 1 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    110,
    60,
    v29);
  (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v23);
  v7 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v7 = -1;
  strcpy(v7 + 8, "a fake work");
  *((_DWORD *)v7 + 45) = 64;
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "send a fake work to start asic");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    121,
    60,
    v29);
  if ( v28 > 0 )
  {
    ++v7[40];
    v8 = *(_DWORD *)all_created_runtime;
    if ( !*(_DWORD *)all_created_runtime )
      goto LABEL_31;
    v9 = all_created_runtime;
    v10 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v8 + 32))(v8, v7);
      if ( v28 <= ++v10 )
        break;
      ++v7[40];
      v11 = *((_DWORD *)v9 + 1);
      v9 += 4;
      v8 = v11;
      if ( !v11 )
        goto LABEL_31;
    }
  }
  free(v7);
  v26 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v26 <= 0 )
  {
LABEL_25:
    if ( v3 == v4 || v28 <= 0 )
    {
LABEL_30:
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "set freq to %.2f, current voltage %d", v3, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        179,
        "set_frequency_with_voltage_zec",
        30,
        163,
        60,
        v29);
      return 0;
    }
    else
    {
      v20 = all_created_runtime - 4;
      v21 = 0;
      while ( 1 )
      {
        v22 = *((_DWORD *)v20 + 1);
        v20 += 4;
        ++v21;
        result = (*(int (__fastcall **)(int, _DWORD))(v22 + 188))(v22, 0);
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v28 <= v21 )
          goto LABEL_30;
      }
    }
    return result;
  }
  v12 = v23;
  v13 = current_voltage - v23;
  v24 = 0;
  v27 = v26 - v13 / 10;
  while ( 1 )
  {
    v4 = v4 + 6.25;
    if ( v28 > 0 )
      break;
LABEL_18:
    if ( v12 + 20 < current_voltage && (float)(v6 * v3) < v4 && v27 <= v24 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      usleep((__useconds_t)&loc_30D40);
    }
    if ( v26 == ++v24 )
      goto LABEL_25;
  }
  v14 = *(_DWORD *)all_created_runtime;
  if ( !*(_DWORD *)all_created_runtime )
  {
LABEL_31:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
  v15 = all_created_runtime;
  v16 = 0;
  while ( 1 )
  {
    ++v16;
    result = (*(int (__fastcall **)(int, _DWORD))(v14 + 188))(v14, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 92));
    if ( v28 <= v16 )
      goto LABEL_18;
    v17 = *((_DWORD *)v15 + 1);
    v15 += 4;
    v14 = v17;
    if ( !v17 )
      goto LABEL_31;
  }
}
