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
  _DWORD *v20; // r4
  int v21; // r3
  int v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r1
  char *all_created_runtime; // [sp+14h] [bp-1018h]
  int v27; // [sp+18h] [bp-1014h]
  int v28; // [sp+24h] [bp-1008h] BYREF
  char v29[4100]; // [sp+28h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v28 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v28);
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
      v27 = v4;
      v5 = 0;
LABEL_18:
      if ( v28 > 0 )
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
          v13 |= (*(int (**)(void))(v17 + 188))();
        }
        while ( v28 > v14 );
        v12 = v13 == 0;
        if ( v13 )
        {
          usleep((__useconds_t)&loc_30D40);
          if ( v28 > 0 )
          {
            for ( i = 0; i < v28; ++i )
            {
              v19 = *((_DWORD *)v15 + 1);
              v15 += 4;
              v13 |= (*(int (**)(void))(v19 + 188))();
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
          current_voltage += v27;
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
        *(_DWORD *)v29 = 0;
        result = (int)get_all_created_runtime(v29);
        if ( *(int *)v29 > 0 )
        {
          v9 = result - 4;
          do
          {
            v10 = dev_ctrl(result);
            v11 = *(_DWORD *)(v9 + 4);
            v9 += 4;
            ++v8;
            result = (*(int (__fastcall **)(_DWORD))(v10 + 100))(*(_DWORD *)(v11 + 248));
          }
          while ( v8 < *(int *)v29 );
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
    LOWORD(v20) = 20532;
    V_LOCK();
    LOWORD(v21) = 31876;
    HIWORD(v21) = (unsigned int)"ig" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v21, "set_working_voltage_and_runtime_freq");
    HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v22) = 31052;
    HIWORD(v22) = (unsigned int)"rror %d" >> 16;
    zlog(*v20, v22, 139, "set_working_voltage_and_runtime_freq", 36, 1146, 100, v29);
    V_LOCK();
    LOWORD(v23) = 31900;
    LOWORD(v24) = 31232;
    HIWORD(v23) = (unsigned int)"ocol" >> 16;
    HIWORD(v24) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v29, 0x1000u, 0, v24, v23);
    V_UNLOCK();
    LOWORD(v25) = 31052;
    HIWORD(v25) = (unsigned int)"rror %d" >> 16;
    zlog(*v20, v25, 139, "set_working_voltage_and_runtime_freq", 36, 1147, 100, v29);
    return -1;
  }
  return result;
}
