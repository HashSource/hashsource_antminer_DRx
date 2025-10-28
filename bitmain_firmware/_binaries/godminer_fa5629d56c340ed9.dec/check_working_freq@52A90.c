void __fastcall __noreturn check_working_freq(int a1)
{
  float v1; // s0
  signed int temp; // r0
  float v3; // s18
  _DWORD *v4; // r6
  int i; // r8
  int v6; // r3
  int v7; // t1
  int v8; // r4
  int v9; // r5
  int v10; // r3
  float v11; // s16
  float v12; // s17
  float v13; // s16
  int v14; // [sp+24h] [bp-4Ch]
  char *v16; // [sp+40h] [bp-30h]
  int v17; // [sp+4Ch] [bp-24h] BYREF
  _DWORD v18[7]; // [sp+50h] [bp-20h] BYREF
  int v19; // [sp+6Ch] [bp-4h]
  char v20[4100]; // [sp+70h] [bp+0h] BYREF

  v17 = 0;
  v16 = (char *)get_all_created_runtime(&v17) - 4;
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, signed int))(a1 + 36))(a1, temp);
      v3 = v1;
      if ( v17 > 0 )
      {
        v4 = v16;
        for ( i = 0; i < v17; ++i )
        {
          v7 = v4[1];
          ++v4;
          v6 = v7;
          if ( *(int *)(v7 + 356) > 0 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(v6 + 552) + v8 + 20));
              v10 = *(_DWORD *)(*v4 + 552) + v8;
              v11 = *(float *)(v10 + 4);
              v12 = *(float *)(v10 + 12);
              *(float *)(v10 + 8) = v3;
              pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
              v13 = v3 + v11;
              if ( v13 != v12 )
              {
                if ( !v9 )
                {
                  V_LOCK();
                  logfmt_raw(
                    v20,
                    0x1000u,
                    0,
                    "before set_frequency_by_temp base freq %.2f bias freq %.2f cur freq %.2f",
                    *(float *)(*(_DWORD *)(*v4 + 552) + v8 + 4),
                    *(float *)(*(_DWORD *)(*v4 + 552) + v8 + 8),
                    *(float *)(*(_DWORD *)(*v4 + 552) + v8 + 12));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                    166,
                    "check_working_freq",
                    18,
                    443,
                    20,
                    v20);
                  if ( v13 < v12 && v3 < -1.0 )
                  {
                    V_LOCK();
                    V_INT((int)v18, "chain", *(int *)(*v4 + 260));
                    logfmt_raw(
                      v20,
                      0x1000u,
                      0,
                      v19,
                      v18[0],
                      v18[1],
                      v18[2],
                      v18[3],
                      v18[4],
                      v18[5],
                      v18[6],
                      v19,
                      "Chip temperature is too high, enable protection. Bias freq:%.2f",
                      v14,
                      v3);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                      166,
                      "check_working_freq",
                      18,
                      446,
                      80,
                      v20);
                  }
                }
                v1 = v13;
                (*(void (**)(void))(*v4 + 196))();
              }
              v6 = *v4;
              ++v9;
              v8 += 44;
            }
            while ( *(_DWORD *)(*v4 + 356) > v9 );
          }
        }
      }
    }
    sleep(1u);
  }
}
