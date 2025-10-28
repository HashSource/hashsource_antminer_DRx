int set_working_voltage_and_runtime_freq()
{
  int working_voltage; // r8
  int current_voltage; // r7
  int result; // r0
  int v3; // r10
  int v4; // r2
  unsigned __int8 v5; // r11
  int v6; // r3
  int v7; // r9
  int v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // t1
  _BOOL4 v12; // r6
  int v13; // r9
  int v14; // r4
  char *v15; // r5
  char *v16; // r6
  int v17; // t1
  int i; // r4
  int v19; // t1
  char *all_created_runtime; // [sp+14h] [bp-1018h]
  int v21; // [sp+18h] [bp-1014h]
  int v22; // [sp+24h] [bp-1008h] BYREF
  char v23[4100]; // [sp+28h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v22 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v22);
  result = is_power_init();
  v3 = result;
  if ( result )
  {
    if ( opt_algo == 8 )
    {
      if ( working_voltage < current_voltage )
        v4 = -7;
      else
        v4 = 7;
      v21 = v4;
      v5 = 0;
LABEL_18:
      if ( v22 > 0 )
      {
        v13 = 0;
        v14 = 0;
        v15 = all_created_runtime - 4;
        v16 = all_created_runtime - 4;
        do
        {
          v17 = *((_DWORD *)v16 + 1);
          v16 += 4;
          ++v14;
          v13 |= (*(int (**)(void))(v17 + 184))();
        }
        while ( v22 > v14 );
        v12 = v13 == 0;
        if ( v13 )
        {
          usleep((__useconds_t)&loc_30D40);
          if ( v22 > 0 )
          {
            for ( i = 0; i < v22; ++i )
            {
              v19 = *((_DWORD *)v15 + 1);
              v15 += 4;
              v13 |= (*(int (**)(void))(v19 + 184))();
            }
            v12 = v13 == 0;
          }
        }
      }
      else
      {
        v12 = v3;
      }
      while ( 1 )
      {
        v6 = current_voltage - working_voltage;
        if ( current_voltage - working_voltage < 0 )
          v6 = working_voltage - current_voltage;
        if ( v6 > 7 )
        {
          current_voltage += v21;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v7 = v12;
            v5 = v3;
          }
          else
          {
            v7 = v12 & v5;
          }
        }
        else
        {
          v7 = v12;
          if ( working_voltage == current_voltage )
          {
            current_voltage = working_voltage;
            v5 = v3;
          }
          else
          {
            current_voltage = working_voltage;
            v5 = v3;
            set_voltage(working_voltage, 1);
          }
        }
        v8 = 0;
        *(_DWORD *)v23 = 0;
        result = (int)get_all_created_runtime(v23);
        if ( *(int *)v23 > 0 )
        {
          v9 = result - 4;
          do
          {
            v10 = dev_ctrl(result);
            v11 = *(_DWORD *)(v9 + 4);
            v9 += 4;
            ++v8;
            result = (*(int (__fastcall **)(_DWORD))(v10 + 80))(*(_DWORD *)(v11 + 220));
          }
          while ( v8 < *(int *)v23 );
        }
        if ( v7 )
          break;
        if ( !v12 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "%s, power has not init!", "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "set_working_voltage_and_runtime_freq",
      36,
      1092,
      100,
      v23);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "set_working_voltage_and_runtime_freq",
      36,
      1093,
      100,
      v23);
    return -1;
  }
  return result;
}
