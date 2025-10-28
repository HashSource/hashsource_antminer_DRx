int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r4
  int v8; // r10
  int *v9; // r0
  _DWORD *v10; // r5
  _DWORD *v11; // r9
  int v12; // r1
  int v13; // r6
  int v14; // t1
  int v15; // r2
  int v16; // r4
  int *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r1
  int *v25; // r12
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  _DWORD *v37; // r3
  int v38; // r1
  _DWORD *v39; // r3
  int v40; // r1
  int *v41; // lr
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // lr
  _DWORD *v47; // r3
  int v48; // r1
  int v49; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v52; // [sp+24h] [bp-17FCh]
  int v53; // [sp+28h] [bp-17F8h]
  int v54; // [sp+2Ch] [bp-17F4h]
  int v55; // [sp+30h] [bp-17F0h]
  int v56; // [sp+34h] [bp-17ECh]
  int v57; // [sp+38h] [bp-17E8h]
  int v58; // [sp+3Ch] [bp-17E4h]
  int v59; // [sp+40h] [bp-17E0h]
  int v60; // [sp+44h] [bp-17DCh]
  int v61; // [sp+48h] [bp-17D8h]
  int v62; // [sp+4Ch] [bp-17D4h]
  char v63[4096]; // [sp+820h] [bp-1000h] BYREF

  v49 = a1;
  if ( a3 == 1 )
  {
    LOWORD(v7) = -12632;
    HIWORD(v7) = (unsigned int)&unk_18C650 >> 16;
    v8 = pthread_mutex_lock((pthread_mutex_t *)(v7 + 8));
    if ( v8 )
    {
      LOWORD(v41) = -17048;
      HIWORD(v41) = (unsigned int)"489" >> 16;
      v42 = *v41;
      v43 = v41[1];
      v44 = v41[2];
      v45 = v41[3];
      v46 = v41[4];
      s = v42;
      v52 = v43;
      v53 = v44;
      v54 = v45;
      LOWORD(v55) = v46;
      BYTE2(v55) = BYTE2(v46);
      V_LOCK();
      logfmt_raw(v63, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v47) = -12376;
      HIWORD(v47) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v48) = -6796;
      HIWORD(v48) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v47, v48, 171, "i2c_write_reg", 13, 378, 100, v63);
      return -1;
    }
    else
    {
      v9 = *(int **)(v7 + 4);
      ptr = 0;
      if ( find_c_map(v9, (int)&v49, &ptr) == 1 )
      {
        v10 = ptr;
        LOWORD(v11) = -12376;
        HIWORD(v11) = (unsigned int)&unk_18C750 >> 16;
        snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v63, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v12) = -6796;
        HIWORD(v12) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v11, v12, 171, "i2c_write_reg", 13, 385, 20, v63);
        if ( a5 )
        {
          v13 = a4 - 1;
          while ( 1 )
          {
            v14 = *(unsigned __int8 *)++v13;
            v15 = *a2 + v8++;
            v16 = (*v10 << 26) | 0x1000000 | (v10[1] >> 4 << 20) | v14 | (v10[1] << 15) & 0x70000 | (v15 << 8);
            if ( !sub_BB720() )
              break;
            fpga_write(48, v16);
            if ( a5 == v8 )
              goto LABEL_9;
          }
          LOWORD(v17) = -6444;
          HIWORD(v17) = (unsigned int)&unk_159804 >> 16;
          v18 = *v17;
          v19 = v17[1];
          v20 = v17[2];
          v21 = v17[3];
          v17 += 4;
          s = v18;
          v52 = v19;
          v53 = v20;
          v54 = v21;
          v22 = v17[1];
          v55 = *v17;
          LOWORD(v56) = v22;
          V_LOCK();
          logfmt_raw(v63, 0x1000u, 0, &s);
          V_UNLOCK();
          LOWORD(v23) = -6796;
          HIWORD(v23) = (unsigned int)&unk_1596A4 >> 16;
          zlog(*v11, v23, 171, "i2c_write_reg", 13, 401, 100, v63);
          free(ptr);
          pthread_mutex_unlock(&stru_18CEB0);
          return -2;
        }
        else
        {
LABEL_9:
          free(ptr);
          pthread_mutex_unlock(&stru_18CEB0);
          return a5;
        }
      }
      else
      {
        snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write_reg", v49);
        V_LOCK();
        logfmt_raw(v63, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v39) = -12376;
        HIWORD(v39) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v40) = -6796;
        HIWORD(v40) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v39, v40, 171, "i2c_write_reg", 13, 412, 100, v63);
        pthread_mutex_unlock((pthread_mutex_t *)(v7 + 8));
        return -2;
      }
    }
  }
  else
  {
    LOWORD(v25) = -6420;
    HIWORD(v25) = (unsigned int)&unk_15981C >> 16;
    v26 = *v25;
    v27 = v25[1];
    v28 = v25[2];
    v29 = v25[3];
    v25 += 4;
    s = v26;
    v52 = v27;
    v53 = v28;
    v54 = v29;
    v30 = *v25;
    v31 = v25[1];
    v32 = v25[2];
    v33 = v25[3];
    v25 += 4;
    v55 = v30;
    v56 = v31;
    v57 = v32;
    v58 = v33;
    v34 = v25[1];
    v35 = v25[2];
    v36 = v25[3];
    v59 = *v25;
    v60 = v34;
    v61 = v35;
    v62 = v36;
    V_LOCK();
    logfmt_raw(v63, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v37) = -12376;
    HIWORD(v37) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v38) = -6796;
    HIWORD(v38) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v37, v38, 171, "i2c_write_reg", 13, 374, 100, v63);
    return -3;
  }
}
