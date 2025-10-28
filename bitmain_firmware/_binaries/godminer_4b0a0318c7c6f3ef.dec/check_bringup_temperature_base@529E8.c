int __fastcall check_bringup_temperature_base(int a1)
{
  int *all_created_runtime; // r9
  int v2; // r7
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r3
  int v7; // r10
  char *v8; // r6
  char *v9; // r11
  int v10; // r4
  int v11; // t1
  char *v12; // r1
  char *v13; // r1
  int v14; // r0
  int *v15; // r12
  int v16; // r8
  _DWORD *v17; // r6
  int v18; // r4
  int v19; // r2
  int v20; // r7
  char *v21; // r1
  int v22; // r11
  int v23; // r2
  int v24; // r0
  int v25; // r1
  char *v27; // r9
  char *v28; // r2
  int v29; // r1
  int *v30; // r11
  char *v31; // r10
  int v32; // t1
  int v33; // r6
  _DWORD *v34; // r6
  int v35; // r4
  int v36; // r2
  int v37; // r3
  __int64 v38; // r0
  int v39; // r3
  bool v40; // cc
  int result; // r0
  __int64 v42; // r0
  int v43; // r0
  int v44; // r2
  int v45; // r1
  char *v46; // r3
  int v47; // r3
  _DWORD *v48; // r3
  int v49; // r1
  int v50; // r1
  const char *v51; // r0
  int v53; // [sp+28h] [bp-12DCh]
  char *ptr; // [sp+2Ch] [bp-12D8h]
  int v55; // [sp+30h] [bp-12D4h]
  char *v56; // [sp+34h] [bp-12D0h]
  int v57; // [sp+34h] [bp-12D0h]
  char *s; // [sp+38h] [bp-12CCh]
  char *sa; // [sp+38h] [bp-12CCh]
  int *v60; // [sp+3Ch] [bp-12C8h]
  int v61; // [sp+3Ch] [bp-12C8h]
  char *v62; // [sp+40h] [bp-12C4h]
  char *v63; // [sp+40h] [bp-12C4h]
  bool v64; // [sp+44h] [bp-12C0h]
  int v65; // [sp+44h] [bp-12C0h]
  int v66; // [sp+48h] [bp-12BCh]
  int v67; // [sp+48h] [bp-12BCh]
  int v68; // [sp+4Ch] [bp-12B8h]
  int v70; // [sp+54h] [bp-12B0h]
  int v71; // [sp+54h] [bp-12B0h]
  int v72; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v73[7]; // [sp+60h] [bp-12A4h] BYREF
  int v74; // [sp+7Ch] [bp-1288h]
  _DWORD v75[7]; // [sp+80h] [bp-1284h] BYREF
  int v76; // [sp+9Ch] [bp-1268h]
  _DWORD v77[7]; // [sp+A0h] [bp-1264h] BYREF
  int v78; // [sp+BCh] [bp-1248h]
  _DWORD v79[7]; // [sp+C0h] [bp-1244h] BYREF
  int v80; // [sp+DCh] [bp-1228h]
  _DWORD v81[7]; // [sp+E0h] [bp-1224h] BYREF
  int v82; // [sp+FCh] [bp-1208h]
  char v83; // [sp+100h] [bp-1204h] BYREF
  char v84; // [sp+200h] [bp-1104h] BYREF
  char v85[4100]; // [sp+300h] [bp-1004h] BYREF

  v72 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v72);
  if ( v72 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 412);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( &all_created_runtime[v72] != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = (char *)calloc(v72 * v2, 8u);
  if ( ptr )
  {
    v6 = v72;
    if ( v72 > 0 )
    {
      v8 = ptr;
      v7 = 8 * v2;
      v9 = (char *)(all_created_runtime - 1);
      v62 = (char *)(all_created_runtime - 1);
      v10 = 0;
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        v12 = v8;
        ++v10;
        v8 += v7;
        (*(void (__fastcall **)(int, char *))(v11 + 216))(v11, v12);
        usleep((__useconds_t)&loc_7A120);
        v6 = v72;
      }
      while ( v72 > v10 );
    }
    else
    {
      v7 = 8 * v2;
      v62 = (char *)(all_created_runtime - 1);
    }
    v64 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v6 != 1 || v2 > 5 )
      {
        v55 = 0;
        v53 = 0;
        goto LABEL_29;
      }
      goto LABEL_57;
    }
    LOWORD(v13) = 27372;
    LOWORD(v14) = -11468;
    v70 = v2;
    LOWORD(v15) = 20532;
    v16 = 0;
    v66 = 24 * v2;
    HIWORD(v13) = (unsigned int)":" >> 16;
    HIWORD(v14) = (unsigned int)"string = J%d:4." >> 16;
    HIWORD(v15) = (unsigned int)&g_fan_zc >> 16;
    v53 = 0;
    v55 = 0;
    s = v13;
    v68 = v14;
    v60 = v15;
    v56 = ptr;
    while ( v6 <= 0 )
    {
LABEL_24:
      v16 += 24;
      v56 += 8;
      if ( v66 == v16 )
      {
        v2 = v70;
        if ( v6 != 1 || !v64 )
        {
LABEL_29:
          if ( v6 > 0 )
          {
            LOWORD(v30) = 20532;
            v27 = ptr;
            LOWORD(v28) = 27372;
            LOWORD(v29) = -11448;
            v71 = v7;
            HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
            v31 = v62;
            sa = 0;
            v57 = 0;
            HIWORD(v28) = (unsigned int)":" >> 16;
            v67 = 0;
            HIWORD(v29) = (unsigned int)"r! EEPROM data corrupted. pls check it" >> 16;
            v63 = v28;
            v65 = v29;
            v61 = 255;
            while ( 1 )
            {
              v32 = *((_DWORD *)v31 + 1);
              v31 += 4;
              v33 = *(_DWORD *)(v32 + 404);
              if ( v2 > 0 )
                break;
LABEL_41:
              v40 = v72 <= ++v67;
              v27 += v71;
              if ( v40 )
              {
                free(ptr);
                v40 = v57 <= 0;
                if ( v57 > 0 )
                  v40 = (int)sa <= 0;
                result = v40;
                if ( !v40 )
                {
                  *(_DWORD *)(a1 + 92) = v61;
                  return result;
                }
LABEL_58:
                V_LOCK();
                LOWORD(v47) = -11424;
                HIWORD(v47) = (unsigned int)". pls check it" >> 16;
                logfmt_raw(v85, 0x1000u, 0, v47);
                V_UNLOCK();
                LOWORD(v48) = 20532;
                HIWORD(v48) = (unsigned int)&g_fan_zc >> 16;
                LOWORD(v49) = -11848;
                HIWORD(v49) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
                zlog(*v48, v49, 166, "check_bringup_temperature_base", 30, 273, 100, v85);
                while ( 1 )
                  ;
              }
            }
            v34 = (_DWORD *)(v33 + 20);
            v35 = 0;
            while ( 1 )
            {
LABEL_35:
              v36 = *(_DWORD *)&v27[8 * v35];
              if ( v36 == -64 )
              {
                V_LOCK();
                V_INT((int)v77, v63, *(int *)(*(_DWORD *)v31 + 256));
                logfmt_raw(v85, 0x1000u, 0, v78, v77[0], v77[1], v77[2], v77[3], v77[4], v77[5], v77[6], v78, v65, *v34);
                V_UNLOCK();
                v43 = *v30;
                v44 = 246;
                goto LABEL_53;
              }
              v37 = *(v34 - 2);
              if ( v37 )
                break;
              HIDWORD(v38) = v53;
              LODWORD(v38) = &v83;
              if ( !check_value_valid_with_stdd(v38, v36) )
              {
                V_LOCK();
                V_INT((int)v79, v63, *(int *)(*(_DWORD *)v31 + 256));
                logfmt_raw(v85, 0x1000u, 0, v80, v79[0], v79[1], v79[2], v79[3], v79[4], v79[5], v79[6], v80, v65, *v34);
                V_UNLOCK();
                v43 = *v30;
                v44 = 253;
                goto LABEL_53;
              }
              v34 += 6;
              v39 = *(_DWORD *)&v27[8 * v35++];
              ++sa;
              if ( v61 < v39 )
                v39 = v61;
              v61 = v39;
              if ( v2 == v35 )
                goto LABEL_41;
            }
            if ( v37 == 1 )
            {
              HIDWORD(v42) = v55;
              LODWORD(v42) = &v84;
              if ( check_value_valid_with_stdd(v42, v36) )
              {
                ++v57;
              }
              else
              {
                V_LOCK();
                V_INT((int)v81, v63, *(int *)(*(_DWORD *)v31 + 256));
                logfmt_raw(v85, 0x1000u, 0, v82, v81[0], v81[1], v81[2], v81[3], v81[4], v81[5], v81[6], v82, v65, *v34);
                V_UNLOCK();
                v43 = *v30;
                v44 = 261;
LABEL_53:
                LOWORD(v45) = -11848;
                HIWORD(v45) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
                zlog(v43, v45, 166, "check_bringup_temperature_base", 30, v44, 100, v85);
              }
            }
            ++v35;
            v34 += 6;
            if ( v2 == v35 )
              goto LABEL_41;
            goto LABEL_35;
          }
        }
LABEL_57:
        free(ptr);
        goto LABEL_58;
      }
    }
    v17 = v56;
    v18 = 0;
    while ( 1 )
    {
      v19 = *v17;
      if ( *v17 != -64 )
      {
        v20 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v18] + 404) + v16 + 12);
        if ( !v20 )
        {
          v21 = &v85[4 * v53++];
          *((_DWORD *)v21 - 128) = v19;
          V_LOCK();
          V_INT((int)v73, s, *(int *)(all_created_runtime[v18] + 256));
          LOWORD(v22) = -11484;
          HIWORD(v22) = (unsigned int)"r." >> 16;
          logfmt_raw(v85, 0x1000u, 0, v74, v73[0], v73[1], v73[2], v73[3], v73[4], v73[5], v73[6], v74, v22, *v17);
          V_UNLOCK();
          v23 = 221;
          v24 = *v60;
LABEL_23:
          LOWORD(v25) = -11848;
          HIWORD(v25) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
          zlog(v24, v25, 166, "check_bringup_temperature_base", 30, v23, 40, v85);
          goto LABEL_19;
        }
        if ( v20 == 1 )
        {
          v46 = &v85[4 * v55++];
          *((_DWORD *)v46 - 64) = v19;
          V_LOCK();
          V_INT((int)v75, s, *(int *)(all_created_runtime[v18] + 256));
          logfmt_raw(v85, 0x1000u, 0, v76, v75[0], v75[1], v75[2], v75[3], v75[4], v75[5], v75[6], v76, v68, *v17);
          V_UNLOCK();
          v23 = 224;
          v24 = *v60;
          goto LABEL_23;
        }
      }
LABEL_19:
      v6 = v72;
      ++v18;
      v17 = (_DWORD *)((char *)v17 + v7);
      if ( v72 <= v18 )
        goto LABEL_24;
    }
  }
  LOWORD(v50) = -11500;
  LOWORD(v51) = 32240;
  HIWORD(v50) = (unsigned int)"load EEPROM error." >> 16;
  HIWORD(v51) = (unsigned int)"n%d_voladded=%d;" >> 16;
  printf(v51, v50);
  return 3;
}
