void __fastcall __noreturn check_working_freq(int a1)
{
  float v1; // s0
  int v2; // r4
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r11
  int temp; // r0
  float v7; // s18
  _DWORD *v8; // r6
  int i; // r8
  int v10; // r3
  int v11; // t1
  int v12; // r4
  int v13; // r5
  int v14; // r3
  float v15; // s16
  float v16; // s17
  float v17; // s16
  char *v18; // r1
  int v19; // [sp+24h] [bp-4Ch]
  int v20; // [sp+34h] [bp-3Ch]
  int v21; // [sp+38h] [bp-38h]
  char *v23; // [sp+40h] [bp-30h]
  int v24; // [sp+44h] [bp-2Ch]
  int v25; // [sp+4Ch] [bp-24h] BYREF
  _DWORD v26[7]; // [sp+50h] [bp-20h] BYREF
  int v27; // [sp+6Ch] [bp-4h]
  char v28[4100]; // [sp+70h] [bp+0h] BYREF

  LOWORD(v5) = 20532;
  LOWORD(v2) = -11604;
  v25 = 0;
  LOWORD(v3) = -11680;
  LOWORD(v4) = -11848;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v2) = (unsigned int)"evice: %d" >> 16;
  HIWORD(v3) = (unsigned int)"y_device_num error code %d and then exit" >> 16;
  HIWORD(v4) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  v24 = v2;
  v23 = (char *)get_all_created_runtime(&v25) - 4;
  v21 = v3;
  v20 = v4;
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, int))(a1 + 36))(a1, temp);
      v7 = v1;
      if ( v25 > 0 )
      {
        v8 = v23;
        for ( i = 0; i < v25; ++i )
        {
          v11 = v8[1];
          ++v8;
          v10 = v11;
          if ( *(int *)(v11 + 352) > 0 )
          {
            v12 = 0;
            v13 = 0;
            do
            {
              pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(v10 + 544) + v12 + 20));
              v14 = *(_DWORD *)(*v8 + 544) + v12;
              v15 = *(float *)(v14 + 4);
              v16 = *(float *)(v14 + 12);
              *(float *)(v14 + 8) = v7;
              pthread_mutex_unlock((pthread_mutex_t *)(v14 + 20));
              v17 = v7 + v15;
              if ( v17 != v16 )
              {
                if ( !v13 )
                {
                  V_LOCK();
                  logfmt_raw(
                    v28,
                    0x1000u,
                    0,
                    v21,
                    *(float *)(*(_DWORD *)(*v8 + 544) + v12 + 4),
                    *(float *)(*(_DWORD *)(*v8 + 544) + v12 + 8),
                    *(float *)(*(_DWORD *)(*v8 + 544) + v12 + 12));
                  V_UNLOCK();
                  zlog(*v5, v20, 166, "check_working_freq", 18, 400, 20, v28);
                  if ( v17 < v16 && v7 < -1.0 )
                  {
                    V_LOCK();
                    LOWORD(v18) = 27372;
                    HIWORD(v18) = (unsigned int)":" >> 16;
                    V_INT((int)v26, v18, *(int *)(*v8 + 256));
                    logfmt_raw(
                      v28,
                      0x1000u,
                      0,
                      v27,
                      v26[0],
                      v26[1],
                      v26[2],
                      v26[3],
                      v26[4],
                      v26[5],
                      v26[6],
                      v27,
                      v24,
                      v19,
                      v7);
                    V_UNLOCK();
                    zlog(*v5, v20, 166, "check_working_freq", 18, 403, 80, v28);
                  }
                }
                v1 = v17;
                (*(void (**)(void))(*v8 + 196))();
              }
              v10 = *v8;
              ++v13;
              v12 += 44;
            }
            while ( *(_DWORD *)(*v8 + 352) > v13 );
          }
        }
      }
    }
    sleep(1u);
  }
}
