int __fastcall chip_speed_test(_DWORD *a1)
{
  float *v1; // r7
  void (__fastcall *v2)(_DWORD *, int *); // r3
  _DWORD *v4; // r6
  int v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r3
  float v9; // s15
  int v10; // r2
  int v11; // r12
  int v12; // r7
  int v13; // r8
  unsigned int v14; // s15
  _DWORD *v15; // r1
  unsigned int v16; // r10
  unsigned int v17; // t1
  int v18; // lr
  bool v19; // zf
  char *v20; // r10
  int v21; // r3
  int v22; // r5
  int v23; // r2
  int *v24; // r1
  int v25; // t1
  int v27; // r3
  int v28; // r3
  int v29; // r1
  int *v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  const char *v35; // r11
  int *v36; // r7
  int v37; // r8
  int v38; // r9
  int v39; // t1
  int v40; // r3
  int v41; // r3
  int v42; // r1
  int *v43; // r3
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // [sp+10h] [bp+0h] BYREF
  int v49; // [sp+14h] [bp+4h] BYREF
  unsigned __int8 v50; // [sp+1Ah] [bp+Ah]
  _BYTE v51[64]; // [sp+20h] [bp+10h] BYREF
  int v52; // [sp+60h] [bp+50h] BYREF
  int v53; // [sp+64h] [bp+54h]
  int v54; // [sp+68h] [bp+58h]
  char v55; // [sp+6Ch] [bp+5Ch]
  char v56[4100]; // [sp+460h] [bp+450h] BYREF

  v2 = (void (__fastcall *)(_DWORD *, int *))a1[37];
  *v1 = 0.0;
  v2(a1, &v48);
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  *v1 = *v1 * 120.0;
  V_LOCK();
  LOWORD(v5) = -31852;
  HIWORD(v5) = (unsigned int)"e" >> 16;
  logfmt_raw(v56, 0x1000u, 0, v5, *v1);
  V_UNLOCK();
  LOWORD(v6) = -31868;
  LOWORD(v7) = -31828;
  HIWORD(v6) = (unsigned int)"check_temperature" >> 16;
  HIWORD(v7) = (unsigned int)"check_temperature, local:%d, remote:%d" >> 16;
  zlog(*v4, v7, 193, v6, 15, 35, 20, v56);
  get_miner_working_status((int)&v49);
  v8 = v50;
  if ( v50 )
  {
    V_LOCK();
    LOWORD(v27) = -31632;
    HIWORD(v27) = (unsigned int)"ate_miner_status/update_temperature.c" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v27);
    V_UNLOCK();
    LOWORD(v28) = -31868;
    LOWORD(v29) = -31828;
    HIWORD(v28) = (unsigned int)"check_temperature" >> 16;
    HIWORD(v29) = (unsigned int)"check_temperature, local:%d, remote:%d" >> 16;
    zlog(*v4, v29, 193, v28, 15, 43, 20, v56);
    return 0;
  }
  else
  {
    if ( (int)a1[88] <= 0 )
    {
      if ( (int)a1[135] >= 0 )
        return 0;
      LOWORD(v43) = -31572;
      HIWORD(v43) = (unsigned int)"read no sensor pcb temp exceed limit! (%d)" >> 16;
      v44 = *v43;
      v45 = v43[1];
      v46 = v43[2];
      v47 = v43[3];
      v52 = v44;
      v53 = v45;
      v54 = v46;
      v55 = v47;
    }
    else
    {
      v9 = *v1;
      v10 = v50;
      v11 = v50;
      v12 = a1[136];
      v13 = v50;
      v14 = (unsigned int)v9;
      v15 = (_DWORD *)(a1[124] - 4);
      do
      {
        v17 = v15[1];
        ++v15;
        v16 = v17;
        v18 = v12 + v8;
        if ( v17 < v14 )
        {
          v19 = v16 == 0;
          v20 = &v56[4 * (v11++ & 0xF)];
          if ( v19 )
          {
            *((_DWORD *)v20 - 272) = v10;
            *(_DWORD *)(v18 + 16) = 2;
          }
          else
          {
            *(_DWORD *)(v18 + 16) = 3;
            *((_DWORD *)v20 - 272) = v10;
          }
        }
        else
        {
          *(_DWORD *)(v18 + 16) = v13;
        }
        *v15 = v13;
        ++v10;
        v8 += 44;
      }
      while ( a1[88] > v10 );
      v21 = a1[135];
      if ( v11 >= 16 )
        v22 = 16;
      else
        v22 = v11;
      if ( v21 >= v11 )
      {
        if ( v11 > 0 )
        {
          v23 = 0;
          v24 = (int *)v51;
          do
          {
            v25 = *v24++;
            ++v23;
            *(_DWORD *)(v12 + 44 * v25 + 16) = 0;
          }
          while ( v23 < v22 );
        }
        return 0;
      }
      LOWORD(v30) = -31572;
      HIWORD(v30) = (unsigned int)"read no sensor pcb temp exceed limit! (%d)" >> 16;
      v31 = *v30;
      v32 = v30[1];
      v33 = v30[2];
      v34 = v30[3];
      v52 = v31;
      v53 = v32;
      v54 = v33;
      v55 = v34;
      if ( v11 > 0 )
      {
        LOWORD(v35) = -31556;
        v36 = (int *)v51;
        v37 = 12;
        v38 = 0;
        do
        {
          ++v38;
          v39 = *v36++;
          HIWORD(v35) = (unsigned int)"cb temp exceed limit! (%d)" >> 16;
          v37 += snprintf((char *)&v52 + v37, 1024 - v37, v35, v39);
        }
        while ( v38 < v22 );
      }
    }
    V_LOCK();
    LOWORD(v40) = -27680;
    HIWORD(v40) = (unsigned int)"space" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v40, &v52);
    V_UNLOCK();
    LOWORD(v41) = -31868;
    LOWORD(v42) = -31828;
    HIWORD(v41) = (unsigned int)"check_temperature" >> 16;
    HIWORD(v42) = (unsigned int)"check_temperature, local:%d, remote:%d" >> 16;
    zlog(*v4, v42, 193, v41, 15, 109, 40, v56);
    return 0;
  }
}
