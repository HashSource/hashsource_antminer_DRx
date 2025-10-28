int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int *all_created_runtime; // r9
  int v4; // r11
  int *v5; // r3
  int v6; // t1
  int v7; // r2
  int v8; // r3
  char *v9; // r5
  char *v10; // r8
  int v11; // r4
  int v12; // t1
  char *v13; // r1
  int v14; // r0
  char *v15; // r12
  int v16; // r8
  _DWORD *v17; // r5
  int v18; // r4
  int v19; // r2
  int v20; // r7
  char *v21; // r1
  int v22; // r11
  int v23; // r2
  int v24; // r0
  int v25; // r1
  char *v26; // r7
  char *v27; // r3
  int *v28; // r0
  int v29; // r2
  _DWORD *v30; // r1
  int v31; // r9
  int v32; // r8
  int v33; // r3
  _DWORD *v34; // r5
  int v35; // r4
  int v36; // r2
  int v37; // r3
  __int64 v38; // r0
  int v39; // r3
  bool v40; // cc
  int result; // r0
  __int64 v42; // r0
  int v43; // r2
  int v44; // r0
  int v45; // r1
  char *v46; // r3
  int v47; // r1
  const char *v48; // r0
  int v49; // [sp+28h] [bp-12DCh]
  char *v50; // [sp+2Ch] [bp-12D8h]
  int *v51; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  char *sa; // [sp+30h] [bp-12D4h]
  char *v54; // [sp+34h] [bp-12D0h]
  char *v55; // [sp+34h] [bp-12D0h]
  int v56; // [sp+38h] [bp-12CCh]
  int v57; // [sp+3Ch] [bp-12C8h]
  int v58; // [sp+3Ch] [bp-12C8h]
  int v59; // [sp+40h] [bp-12C4h]
  _DWORD *v60; // [sp+40h] [bp-12C4h]
  int v61; // [sp+44h] [bp-12C0h]
  int v62; // [sp+48h] [bp-12BCh]
  char *ptr; // [sp+4Ch] [bp-12B8h]
  int v66; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v67[7]; // [sp+60h] [bp-12A4h] BYREF
  int v68; // [sp+7Ch] [bp-1288h]
  _DWORD v69[7]; // [sp+80h] [bp-1284h] BYREF
  int v70; // [sp+9Ch] [bp-1268h]
  _DWORD v71[7]; // [sp+A0h] [bp-1264h] BYREF
  int v72; // [sp+BCh] [bp-1248h]
  _DWORD v73[7]; // [sp+C0h] [bp-1244h] BYREF
  int v74; // [sp+DCh] [bp-1228h]
  _DWORD v75[7]; // [sp+E0h] [bp-1224h] BYREF
  int v76; // [sp+FCh] [bp-1208h]
  char v77; // [sp+100h] [bp-1204h] BYREF
  char v78; // [sp+200h] [bp-1104h] BYREF
  char v79[4100]; // [sp+300h] [bp-1004h] BYREF

  v66 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v66);
  if ( v66 > 0 )
  {
    v5 = all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 412);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( &all_created_runtime[v66] != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  ptr = (char *)calloc(v66 * v4, 8u);
  if ( ptr )
  {
    v8 = v66;
    if ( v66 <= 0 )
    {
      if ( v4 > 0 )
      {
        v61 = 8 * v4;
        goto LABEL_14;
      }
    }
    else
    {
      v9 = ptr;
      v10 = (char *)(all_created_runtime - 1);
      v11 = 0;
      v61 = 8 * v4;
      do
      {
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        ++v11;
        v9 += 8 * v4;
        (*(void (**)(void))(v12 + 216))();
        usleep((__useconds_t)&loc_7A120);
        v8 = v66;
      }
      while ( v66 > v11 );
      if ( v4 > 0 )
      {
LABEL_14:
        LOWORD(v13) = 27372;
        v62 = v4;
        LOWORD(v14) = -11468;
        LOWORD(v15) = 20532;
        v57 = 24 * v4;
        v16 = 0;
        HIWORD(v13) = (unsigned int)":" >> 16;
        HIWORD(v14) = (unsigned int)"string = J%d:4." >> 16;
        HIWORD(v15) = (unsigned int)&g_fan_zc >> 16;
        v49 = 0;
        v56 = 0;
        s = v13;
        v59 = v14;
        v54 = v15;
        v50 = ptr;
        while ( v8 <= 0 )
        {
LABEL_23:
          v16 += 24;
          v50 += 8;
          if ( v57 == v16 )
          {
            v4 = v62;
            goto LABEL_25;
          }
        }
        v17 = v50;
        v18 = 0;
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 != -64 )
          {
            v20 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v18] + 404) + v16 + 12);
            if ( !v20 )
            {
              v21 = &v79[4 * v49++];
              *((_DWORD *)v21 - 128) = v19;
              V_LOCK();
              V_INT((int)v67, s, *(int *)(all_created_runtime[v18] + 256));
              LOWORD(v22) = -11484;
              HIWORD(v22) = (unsigned int)"r." >> 16;
              logfmt_raw(v79, 0x1000u, 0, v68, v67[0], v67[1], v67[2], v67[3], v67[4], v67[5], v67[6], v68, v22, *v17);
              V_UNLOCK();
              v23 = 704;
              v24 = *(_DWORD *)v54;
LABEL_22:
              LOWORD(v25) = -11848;
              HIWORD(v25) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
              zlog(v24, v25, 166, "check_temperature_base", 22, v23, 20, v79);
              goto LABEL_18;
            }
            if ( v20 == 1 )
            {
              v46 = &v79[4 * v56++];
              *((_DWORD *)v46 - 64) = v19;
              V_LOCK();
              V_INT((int)v69, s, *(int *)(all_created_runtime[v18] + 256));
              logfmt_raw(v79, 0x1000u, 0, v70, v69[0], v69[1], v69[2], v69[3], v69[4], v69[5], v69[6], v70, v59, *v17);
              V_UNLOCK();
              v23 = 707;
              v24 = *(_DWORD *)v54;
              goto LABEL_22;
            }
          }
LABEL_18:
          v8 = v66;
          ++v18;
          v17 = (_DWORD *)((char *)v17 + v61);
          if ( v66 <= v18 )
            goto LABEL_23;
        }
      }
      v49 = 0;
      v56 = 0;
LABEL_25:
      if ( v8 > 0 )
      {
        v26 = ptr;
        LOWORD(v27) = 27372;
        v28 = all_created_runtime - 1;
        HIWORD(v27) = (unsigned int)":" >> 16;
        LOWORD(v29) = -11448;
        LOWORD(v30) = 20532;
        v31 = 255;
        v32 = -64;
        v55 = v27;
        HIWORD(v29) = (unsigned int)"r! EEPROM data corrupted. pls check it" >> 16;
        HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
        v51 = v28;
        v58 = v29;
        v60 = v30;
        sa = 0;
        while ( 1 )
        {
          v33 = v51[1];
          ++v51;
          if ( v4 > 0 )
            break;
LABEL_39:
          v40 = v66 <= (int)++sa;
          v26 += v61;
          if ( v40 )
            goto LABEL_41;
        }
        v34 = (_DWORD *)(*(_DWORD *)(v33 + 404) + 20);
        v35 = 0;
        while ( 1 )
        {
          v36 = *(_DWORD *)&v26[8 * v35];
          if ( v36 == -64 )
            break;
          v37 = *(v34 - 2);
          if ( !v37 )
          {
            HIDWORD(v38) = v49;
            LODWORD(v38) = &v77;
            if ( !check_value_valid_with_stdd(v38, v36) )
            {
              V_LOCK();
              V_INT((int)v73, v55, *(int *)(*v51 + 256));
              logfmt_raw(v79, 0x1000u, 0, v74, v73[0], v73[1], v73[2], v73[3], v73[4], v73[5], v73[6], v74, v58, *v34);
              V_UNLOCK();
              v43 = 725;
              v44 = *v60;
              goto LABEL_45;
            }
            goto LABEL_34;
          }
          if ( v37 == 1 )
          {
            HIDWORD(v42) = v56;
            LODWORD(v42) = &v78;
            if ( !check_value_valid_with_stdd(v42, v36) )
            {
              V_LOCK();
              V_INT((int)v75, v55, *(int *)(*v51 + 256));
              logfmt_raw(v79, 0x1000u, 0, v76, v75[0], v75[1], v75[2], v75[3], v75[4], v75[5], v75[6], v76, v58, *v34);
              V_UNLOCK();
              v43 = 734;
              v44 = *v60;
LABEL_45:
              LOWORD(v45) = -11848;
              HIWORD(v45) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
              zlog(v44, v45, 166, "check_temperature_base", 22, v43, 100, v79);
            }
LABEL_34:
            v39 = *(_DWORD *)&v26[8 * v35++];
            v34 += 6;
            if ( v31 >= v39 )
              v31 = v39;
            if ( v32 < v39 )
              v32 = v39;
            if ( v4 == v35 )
              goto LABEL_39;
          }
          else
          {
LABEL_30:
            ++v35;
            v34 += 6;
            if ( v4 == v35 )
              goto LABEL_39;
          }
        }
        V_LOCK();
        V_INT((int)v71, v55, *(int *)(*v51 + 256));
        logfmt_raw(v79, 0x1000u, 0, v72, v71[0], v71[1], v71[2], v71[3], v71[4], v71[5], v71[6], v72, v58, *v34);
        V_UNLOCK();
        zlog(
          *v60,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "check_temperature_base",
          22,
          718,
          100,
          v79);
        goto LABEL_30;
      }
    }
    v31 = 255;
    v32 = -64;
LABEL_41:
    free(ptr);
    result = 0;
    *a2 = v31;
    *a3 = v32;
  }
  else
  {
    LOWORD(v47) = -11500;
    LOWORD(v48) = 32240;
    HIWORD(v47) = (unsigned int)"load EEPROM error." >> 16;
    HIWORD(v48) = (unsigned int)"n%d_voladded=%d;" >> 16;
    printf(v48, v47);
    return 3;
  }
  return result;
}
