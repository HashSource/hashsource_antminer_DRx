int __fastcall i2c_read(int a1, _BYTE *a2, int a3)
{
  int v3; // r5
  int *v6; // r0
  _DWORD *v7; // r9
  _DWORD *v8; // r8
  int v9; // r1
  int v10; // r5
  _BYTE *v11; // r10
  _BYTE *v12; // r0
  int *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r1
  int *v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r1
  _DWORD *v28; // r3
  int v29; // r1
  int *v30; // lr
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // lr
  _DWORD *v36; // r3
  int v37; // r1
  int v38; // [sp+14h] [bp-180Ch] BYREF
  _DWORD *v39; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v41; // [sp+24h] [bp-17FCh]
  int v42; // [sp+28h] [bp-17F8h]
  int v43; // [sp+2Ch] [bp-17F4h]
  int v44; // [sp+30h] [bp-17F0h]
  __int16 v45; // [sp+34h] [bp-17ECh]
  char v46[4096]; // [sp+820h] [bp-1000h] BYREF

  LOWORD(v3) = -12632;
  HIWORD(v3) = (unsigned int)&unk_18C650 >> 16;
  v38 = a1;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 8)) )
  {
    LOWORD(v30) = -17048;
    HIWORD(v30) = (unsigned int)"489" >> 16;
    v31 = *v30;
    v32 = v30[1];
    v33 = v30[2];
    v34 = v30[3];
    v35 = v30[4];
    s = v31;
    v41 = v32;
    v42 = v33;
    v43 = v34;
    LOWORD(v44) = v35;
    BYTE2(v44) = BYTE2(v35);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v36) = -12376;
    HIWORD(v36) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v37) = -6796;
    HIWORD(v37) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v36, v37, 171, "i2c_read", 8, 179, 100, v46);
    return -1;
  }
  else
  {
    v6 = *(int **)(v3 + 4);
    v39 = 0;
    if ( find_c_map(v6, (int)&v38, &v39) == 1 )
    {
      v7 = v39;
      LOWORD(v8) = -12376;
      HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
      snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *v39, v39[1]);
      V_LOCK();
      logfmt_raw(v46, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v9) = -6796;
      HIWORD(v9) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v8, v9, 171, "i2c_read", 8, 186, 20, v46);
      v10 = (*v7 << 26) | 0x2000000 | (v7[1] >> 4 << 20) | (v7[1] << 15) & 0x70000;
      if ( a3 )
      {
        v11 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_BB720() )
          {
            free(v39);
            LOWORD(v13) = -6524;
            HIWORD(v13) = (unsigned int)&unk_1597B4 >> 16;
            v14 = *v13;
            v15 = v13[1];
            v16 = v13[2];
            v17 = v13[3];
            v13 += 4;
            s = v14;
            v41 = v15;
            v42 = v16;
            v43 = v17;
            v18 = v13[1];
            v44 = *v13;
            v45 = v18;
            V_LOCK();
            logfmt_raw(v46, 0x1000u, 0, &s);
            V_UNLOCK();
            LOWORD(v19) = -6796;
            HIWORD(v19) = (unsigned int)&unk_1596A4 >> 16;
            zlog(*v8, v19, 171, "i2c_read", 8, 204, 100, v46);
            pthread_mutex_unlock(&stru_18CEB0);
            return -2;
          }
          fpga_write(48, v10);
          v12 = a2++;
          if ( !sub_BB77C(v12) )
            break;
          if ( a2 == v11 )
            goto LABEL_9;
        }
        free(v39);
        LOWORD(v21) = -6500;
        HIWORD(v21) = (unsigned int)&unk_1597CC >> 16;
        v22 = *v21;
        v23 = v21[1];
        v24 = v21[2];
        v25 = v21[3];
        v21 += 4;
        s = v22;
        v41 = v23;
        v42 = v24;
        v43 = v25;
        v26 = v21[1];
        v44 = *v21;
        v45 = v26;
        V_LOCK();
        logfmt_raw(v46, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v27) = -6796;
        HIWORD(v27) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v8, v27, 171, "i2c_read", 8, 216, 100, v46);
        pthread_mutex_unlock(&stru_18CEB0);
        return -3;
      }
      else
      {
LABEL_9:
        free(v39);
        pthread_mutex_unlock(&stru_18CEB0);
        return a3;
      }
    }
    else
    {
      snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read", v38);
      V_LOCK();
      logfmt_raw(v46, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v28) = -12376;
      HIWORD(v28) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v29) = -6796;
      HIWORD(v29) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v28, v29, 171, "i2c_read", 8, 223, 100, v46);
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
      return -2;
    }
  }
}
