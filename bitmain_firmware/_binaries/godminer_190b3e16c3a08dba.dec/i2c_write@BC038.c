int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v3; // r4
  int *v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r9
  int v9; // r1
  int v10; // r7
  int v11; // r5
  int v12; // r7
  int v13; // t1
  int v14; // r4
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r1
  _DWORD *v23; // r3
  int v24; // r1
  int *v25; // lr
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // lr
  _DWORD *v31; // r3
  int v32; // r1
  int v33; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v36; // [sp+24h] [bp-1800h]
  int v37; // [sp+28h] [bp-17FCh]
  int v38; // [sp+2Ch] [bp-17F8h]
  int v39; // [sp+30h] [bp-17F4h]
  __int16 v40; // [sp+34h] [bp-17F0h]
  char v41[4100]; // [sp+820h] [bp-1004h] BYREF

  LOWORD(v3) = -12632;
  HIWORD(v3) = (unsigned int)&unk_18C650 >> 16;
  v33 = a1;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 8)) )
  {
    LOWORD(v25) = -17048;
    HIWORD(v25) = (unsigned int)"489" >> 16;
    v26 = *v25;
    v27 = v25[1];
    v28 = v25[2];
    v29 = v25[3];
    v30 = v25[4];
    s = v26;
    v36 = v27;
    v37 = v28;
    v38 = v29;
    LOWORD(v39) = v30;
    BYTE2(v39) = BYTE2(v30);
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v31) = -12376;
    HIWORD(v31) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v32) = -6796;
    HIWORD(v32) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v31, v32, 171, "i2c_write", 9, 244, 100, v41);
    return -1;
  }
  else
  {
    v6 = *(int **)(v3 + 4);
    ptr = 0;
    if ( find_c_map(v6, (int)&v33, &ptr) == 1 )
    {
      v7 = ptr;
      LOWORD(v8) = -12376;
      HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
      snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v9) = -6796;
      HIWORD(v9) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v8, v9, 171, "i2c_write", 9, 251, 20, v41);
      if ( a3 )
      {
        v10 = a2 + a3;
        v11 = a2 - 1;
        v12 = v10 - 1;
        while ( 1 )
        {
          v13 = *(unsigned __int8 *)++v11;
          v14 = v13 | (v7[1] >> 4 << 20) | (*v7 << 26) | (v7[1] << 15) & 0x70000;
          if ( !sub_BB720() )
            break;
          fpga_write(48, v14);
          if ( v12 == v11 )
            goto LABEL_8;
        }
        free(ptr);
        LOWORD(v15) = -6444;
        HIWORD(v15) = (unsigned int)&unk_159804 >> 16;
        v16 = *v15;
        v17 = v15[1];
        v18 = v15[2];
        v19 = v15[3];
        v15 += 4;
        s = v16;
        v36 = v17;
        v37 = v18;
        v38 = v19;
        v20 = v15[1];
        v39 = *v15;
        v40 = v20;
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v21) = -6796;
        HIWORD(v21) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v8, v21, 171, "i2c_write", 9, 266, 100, v41);
        pthread_mutex_unlock(&stru_18CEB0);
        return -2;
      }
      else
      {
LABEL_8:
        free(ptr);
        pthread_mutex_unlock(&stru_18CEB0);
        return a3;
      }
    }
    else
    {
      snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write", v33);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v23) = -12376;
      HIWORD(v23) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v24) = -6796;
      HIWORD(v24) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v23, v24, 171, "i2c_write", 9, 276, 100, v41);
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
      return -2;
    }
  }
}
