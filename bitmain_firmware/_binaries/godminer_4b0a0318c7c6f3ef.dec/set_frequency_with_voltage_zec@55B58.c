int __fastcall set_frequency_with_voltage_zec(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r8
  float v5; // s17
  float v6; // s16
  int working_voltage; // r0
  float v8; // s19
  char *v9; // r5
  int v10; // r0
  _DWORD *v11; // r10
  int v12; // t1
  int v13; // r10
  int v14; // r0
  _DWORD *v15; // r5
  int v16; // r4
  int v17; // t1
  int result; // r0
  _DWORD *v19; // r8
  int v20; // r4
  int v21; // t1
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v23; // [sp+14h] [bp-1018h]
  int v24; // [sp+18h] [bp-1014h]
  int v25; // [sp+1Ch] [bp-1010h]
  int v26; // [sp+24h] [bp-1008h] BYREF
  char v27[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = 0;
  v26 = 0;
  all_created_runtime = get_all_created_runtime(&v26);
  v4 = all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v6 = *(float *)(*all_created_runtime + 992);
  if ( *(float *)(*all_created_runtime + 996) <= v5 )
    v5 = *(float *)(*all_created_runtime + 996);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v8 = *(float *)(a1 + 112);
  v24 = working_voltage;
  V_LOCK();
  logfmt_raw(v27, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 1 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    220,
    60,
    v27);
  v9 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v9 = -1;
  strcpy(v9 + 8, "a fake work");
  *((_DWORD *)v9 + 45) = 64;
  V_LOCK();
  logfmt_raw(v27, 0x1000u, 0, "send a fake work to start asic");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    229,
    60,
    v27);
  if ( v26 > 0 )
  {
    ++v9[40];
    v10 = *v4;
    if ( !*v4 )
      goto LABEL_18;
    v11 = v4;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v10 + 36))(v10, v9);
      if ( v26 <= ++v1 )
        break;
      ++v9[40];
      v12 = v11[1];
      ++v11;
      v10 = v12;
      if ( !v12 )
        goto LABEL_18;
    }
  }
  free(v9);
  v23 = (int)(float)((float)(v5 - v6) / 6.25);
  if ( v23 <= 0 )
  {
LABEL_25:
    if ( v5 == v6 || v26 <= 0 )
    {
LABEL_31:
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "set freq to %.2f, current voltage %d", v5, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        179,
        "set_frequency_with_voltage_zec",
        30,
        268,
        60,
        v27);
      return 0;
    }
    else
    {
      v19 = v4 - 1;
      v20 = 0;
      while ( 1 )
      {
        v21 = v19[1];
        ++v19;
        ++v20;
        result = (*(int (**)(void))(v21 + 192))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v26 <= v20 )
          goto LABEL_31;
      }
    }
    return result;
  }
  v13 = 0;
  v25 = v23 - (current_voltage - v24) / 10;
  while ( 1 )
  {
    v6 = v6 + 6.25;
    if ( v26 > 0 )
      break;
LABEL_19:
    if ( v24 + 20 < current_voltage && (float)(v8 * v5) < v6 && v25 <= v13 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      usleep((__useconds_t)&loc_30D40);
    }
    if ( v23 == ++v13 )
      goto LABEL_25;
  }
  v14 = *v4;
  if ( !*v4 )
  {
LABEL_18:
    printf(aInvalidPointer, "be_runtimes[b]");
    return 3;
  }
  v15 = v4;
  v16 = 0;
  while ( 1 )
  {
    ++v16;
    result = (*(int (__fastcall **)(int, _DWORD))(v14 + 192))(v14, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v26 <= v16 )
      goto LABEL_19;
    v17 = v15[1];
    ++v15;
    v14 = v17;
    if ( !v17 )
      goto LABEL_18;
  }
}
