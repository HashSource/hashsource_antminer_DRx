int __fastcall i2c_uninit(int a1)
{
  int v1; // r6
  int v2; // r4
  const char *v3; // r2
  _DWORD *v4; // r8
  int v5; // r1
  int (**v6)(void); // r5
  const char *v7; // r2
  int v8; // r1
  int result; // r0
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // lr
  _DWORD *v16; // r3
  int v17; // r1
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r12
  int v24; // r1
  void (__fastcall ***v25)(_DWORD); // r0
  const char *v26; // r2
  int v27; // r1
  int v28; // [sp+14h] [bp-7FCh] BYREF
  int s; // [sp+18h] [bp-7F8h] BYREF
  int v30; // [sp+1Ch] [bp-7F4h]
  int v31; // [sp+20h] [bp-7F0h]
  int v32; // [sp+24h] [bp-7ECh]
  __int16 v33; // [sp+28h] [bp-7E8h]
  char v34; // [sp+2Ah] [bp-7E6h]
  char v35[4100]; // [sp+818h] [bp+8h] BYREF

  LOWORD(v1) = -12632;
  HIWORD(v1) = (unsigned int)&unk_18C650 >> 16;
  v28 = a1;
  v2 = pthread_mutex_lock((pthread_mutex_t *)(v1 + 8));
  if ( v2 )
  {
    LOWORD(v10) = -17048;
    HIWORD(v10) = (unsigned int)"489" >> 16;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v15 = v10[4];
    s = v11;
    v30 = v12;
    v31 = v13;
    v32 = v14;
    v33 = v15;
    v34 = BYTE2(v15);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v16) = -12376;
    HIWORD(v16) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v17) = -6796;
    HIWORD(v17) = (unsigned int)&unk_1596A4 >> 16;
    return zlog(*v16, v17, 171, "i2c_uninit", 10, 61, 100, v35);
  }
  else
  {
    if ( exists_c_map(*(int **)(v1 + 4), (int)&v28) == (int *)1 )
    {
      LOWORD(v26) = -18268;
      HIWORD(v26) = (unsigned int)"uart_relay_KDA_2110" >> 16;
      LOWORD(v4) = -12376;
      snprintf((char *)&s, 0x800u, v26, v28);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, &s);
      HIWORD(v4) = (unsigned int)&unk_18C750 >> 16;
      V_UNLOCK();
      LOWORD(v27) = -6796;
      HIWORD(v27) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v4, v27, 171, "i2c_uninit", 10, 65, 20, v35);
      remove_c_map(*(int **)(v1 + 4), (int)&v28);
    }
    else
    {
      LOWORD(v3) = -6624;
      HIWORD(v3) = (unsigned int)&unk_159750 >> 16;
      LOWORD(v4) = -12376;
      snprintf((char *)&s, 0x800u, v3, v28);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, &s);
      HIWORD(v4) = (unsigned int)&unk_18C750 >> 16;
      V_UNLOCK();
      LOWORD(v5) = -6796;
      HIWORD(v5) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v4, v5, 171, "i2c_uninit", 10, 68, 80, v35);
    }
    v6 = (int (**)(void))new_iterator_c_map(*(_DWORD *)(v1 + 4));
    if ( (*v6)() )
    {
      do
        ++v2;
      while ( ((int (__fastcall *)(int (**)(void)))*v6)(v6) );
      delete_iterator_c_map(v6);
      pthread_mutex_unlock(&stru_18CEB0);
      LOWORD(v7) = -6580;
      HIWORD(v7) = (unsigned int)&unk_15977C >> 16;
      snprintf((char *)&s, 0x800u, v7, v2);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v8) = -6796;
      HIWORD(v8) = (unsigned int)&unk_1596A4 >> 16;
      return zlog(*v4, v8, 171, "i2c_uninit", 10, 84, 20, v35);
    }
    else
    {
      delete_iterator_c_map(v6);
      pthread_mutex_unlock(&stru_18CEB0);
      LOWORD(v18) = -6600;
      HIWORD(v18) = (unsigned int)&unk_159768 >> 16;
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      v23 = v18[4];
      s = v19;
      v30 = v20;
      v31 = v21;
      v32 = v22;
      LOBYTE(v33) = v23;
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v24) = -6796;
      HIWORD(v24) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v4, v24, 171, "i2c_uninit", 10, 79, 20, v35);
      v25 = *(void (__fastcall ****)(_DWORD))(v1 + 4);
      *(_DWORD *)v1 = 0;
      result = delete_c_map(v25);
      *(_DWORD *)(v1 + 4) = 0;
    }
  }
  return result;
}
