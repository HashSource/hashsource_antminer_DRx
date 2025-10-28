int __fastcall i2c_read_reg(void *a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v6; // r5
  _DWORD *v7; // r6
  _DWORD *v8; // r10
  int v9; // r1
  char *v10; // r3
  int v11; // r11
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r1
  int *v27; // r12
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r1
  _DWORD *v34; // r3
  int v35; // r1
  int *v36; // r12
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r1
  int v46; // r2
  int v47; // r3
  _DWORD *v48; // r3
  int v49; // r1
  int *v50; // lr
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // lr
  _DWORD *v56; // r3
  int v57; // r1
  char *format; // [sp+18h] [bp-808h]
  void *ptr; // [sp+1Ch] [bp-804h] BYREF
  _DWORD *v62; // [sp+24h] [bp-7FCh] BYREF
  int s; // [sp+28h] [bp-7F8h] BYREF
  int v64; // [sp+2Ch] [bp-7F4h]
  int v65; // [sp+30h] [bp-7F0h]
  int v66; // [sp+34h] [bp-7ECh]
  int v67; // [sp+38h] [bp-7E8h]
  int v68; // [sp+3Ch] [bp-7E4h]
  int v69; // [sp+40h] [bp-7E0h]
  int v70; // [sp+44h] [bp-7DCh]
  int v71; // [sp+48h] [bp-7D8h]
  int v72; // [sp+4Ch] [bp-7D4h]
  int v73; // [sp+50h] [bp-7D0h]
  int v74; // [sp+54h] [bp-7CCh]
  char _828[4120]; // [sp+828h] [bp+8h] BYREF

  ptr = a1;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    LOWORD(v36) = -6420;
    HIWORD(v36) = (unsigned int)&unk_15981C >> 16;
    v37 = *v36;
    v38 = v36[1];
    v39 = v36[2];
    v40 = v36[3];
    v36 += 4;
    s = v37;
    v64 = v38;
    v65 = v39;
    v66 = v40;
    v41 = *v36;
    v42 = v36[1];
    v43 = v36[2];
    v44 = v36[3];
    v36 += 4;
    v67 = v41;
    v68 = v42;
    v69 = v43;
    v70 = v44;
    v45 = v36[1];
    v46 = v36[2];
    v47 = v36[3];
    v71 = *v36;
    v72 = v45;
    v73 = v46;
    v74 = v47;
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v48) = -12376;
    HIWORD(v48) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v49) = -6796;
    HIWORD(v49) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v48, v49, 171, "i2c_read_reg", 12, 298, 100, _828);
    return -3;
  }
  else
  {
    v6 = pthread_mutex_lock(&stru_18CEB0);
    if ( v6 )
    {
      LOWORD(v50) = -17048;
      HIWORD(v50) = (unsigned int)"489" >> 16;
      v51 = *v50;
      v52 = v50[1];
      v53 = v50[2];
      v54 = v50[3];
      v55 = v50[4];
      s = v51;
      v64 = v52;
      v65 = v53;
      v66 = v54;
      LOWORD(v67) = v55;
      BYTE2(v67) = BYTE2(v55);
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v56) = -12376;
      HIWORD(v56) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v57) = -6796;
      HIWORD(v57) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v56, v57, 171, "i2c_read_reg", 12, 302, 100, _828);
      return -1;
    }
    else
    {
      v62 = 0;
      if ( find_c_map((int *)dword_18CEAC, (int)&ptr, &v62) == 1 )
      {
        v7 = v62;
        LOWORD(v8) = -12376;
        HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
        snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *v62, v62[1]);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v9) = -6796;
        HIWORD(v9) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v8, v9, 171, "i2c_read_reg", 12, 309, 20, _828);
        if ( a5 )
        {
          LOWORD(v10) = -6372;
          LOWORD(v11) = -6796;
          HIWORD(v10) = (unsigned int)&unk_15984C >> 16;
          format = v10;
          while ( 1 )
          {
            v13 = v7[1];
            v14 = v13 >> 4 << 20;
            v15 = *v7 << 26;
            v16 = (v13 << 15) & 0x70000;
            if ( a3 == 2 )
              v17 = v15 | 0x3000000;
            else
              v17 = v15 | 0x3080000;
            v18 = v17 | v14 | v16 | ((*a2 + v6) << 8);
            if ( !sub_BB720() )
            {
              LOWORD(v19) = -6524;
              HIWORD(v19) = (unsigned int)&unk_1597B4 >> 16;
              v20 = *v19;
              v21 = v19[1];
              v22 = v19[2];
              v23 = v19[3];
              v19 += 4;
              s = v20;
              v64 = v21;
              v65 = v22;
              v66 = v23;
              v24 = v19[1];
              v67 = *v19;
              LOWORD(v68) = v24;
              V_LOCK();
              logfmt_raw(_828, 0x1000u, 0, &s);
              V_UNLOCK();
              LOWORD(v25) = -6796;
              HIWORD(v25) = (unsigned int)&unk_1596A4 >> 16;
              zlog(*v8, v25, 171, "i2c_read_reg", 12, 331, 100, _828);
              free(v62);
              pthread_mutex_unlock(&stru_18CEB0);
              return -2;
            }
            fpga_write(48, v18);
            snprintf((char *)&s, 0x800u, format, *v7, v7[1], v18);
            V_LOCK();
            logfmt_raw(_828, 0x1000u, 0, &s);
            V_UNLOCK();
            HIWORD(v11) = (unsigned int)&unk_1596A4 >> 16;
            zlog(*v8, v11, 171, "i2c_read_reg", 12, 337, 20, _828);
            v12 = sub_BB77C((_BYTE *)(a4 + v6));
            v6 += a3 + 1;
            if ( !v12 )
              break;
            if ( a5 <= v6 )
              goto LABEL_13;
          }
          LOWORD(v27) = -6324;
          HIWORD(v27) = (unsigned int)&unk_15987C >> 16;
          v28 = *v27;
          v29 = v27[1];
          v30 = v27[2];
          v31 = v27[3];
          v27 += 4;
          s = v28;
          v64 = v29;
          v65 = v30;
          v66 = v31;
          v32 = v27[1];
          v67 = *v27;
          v68 = v32;
          V_LOCK();
          logfmt_raw(_828, 0x1000u, 0, &s);
          V_UNLOCK();
          LOWORD(v33) = -6796;
          HIWORD(v33) = (unsigned int)&unk_1596A4 >> 16;
          zlog(*v8, v33, 171, "i2c_read_reg", 12, 344, 100, _828);
          free(v62);
          pthread_mutex_unlock(&stru_18CEB0);
          return -3;
        }
        else
        {
LABEL_13:
          free(v62);
          pthread_mutex_unlock(&stru_18CEB0);
          return a5;
        }
      }
      else
      {
        snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_reg", ptr);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v34) = -12376;
        HIWORD(v34) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v35) = -6796;
        HIWORD(v35) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v34, v35, 171, "i2c_read_reg", 12, 352, 100, _828);
        pthread_mutex_unlock(&stru_18CEB0);
        return -2;
      }
    }
  }
}
