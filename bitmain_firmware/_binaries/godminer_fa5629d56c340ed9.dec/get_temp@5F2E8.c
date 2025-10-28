signed int __fastcall get_temp(int a1)
{
  int v1; // r6
  int *v2; // r0
  int *v3; // r7
  int *v4; // r7
  signed int v5; // r4
  int v6; // t1
  signed int *v7; // r3
  signed int v8; // r2
  signed int v9; // t1
  signed int *v10; // r3
  signed int v11; // r2
  signed int v12; // t1
  int v13; // r7
  char *v14; // r0
  char *v15; // r11
  char *v16; // r8
  int k; // r4
  int v18; // t1
  size_t v19; // r0
  int *v20; // r9
  int v21; // r4
  int v22; // r6
  char *v23; // r7
  int v24; // t1
  int *v25; // r0
  int v26; // r8
  int v27; // r10
  int *v28; // r6
  int *v29; // r10
  int *v30; // r8
  int v31; // t1
  int v32; // r7
  char *v33; // r0
  char *v34; // r8
  char *v35; // r6
  int i; // r4
  int v37; // t1
  size_t v38; // r0
  int *v39; // r9
  int v40; // r4
  char *v41; // r8
  int j; // r6
  int v43; // t1
  int *v44; // r0
  int *v45; // r10
  int *v46; // r8
  int v47; // t1
  int v48; // r6
  int *all_created_runtime; // r0
  int *v50; // r7
  int *v51; // r7
  int v52; // t1
  signed int *v53; // r3
  signed int v54; // r2
  signed int v55; // t1
  signed int *v56; // r3
  signed int v57; // r2
  signed int v58; // t1
  int v60; // [sp+14h] [bp-10F0h]
  int v62; // [sp+24h] [bp-10E0h] BYREF
  const void *v63[6]; // [sp+28h] [bp-10DCh] BYREF
  int v64; // [sp+40h] [bp-10C4h]
  int v65; // [sp+44h] [bp-10C0h]
  signed int *v66; // [sp+100h] [bp-1004h] BYREF
  signed int *v67; // [sp+104h] [bp-1000h]
  signed int *v68; // [sp+108h] [bp-FFCh]
  signed int *v69; // [sp+10Ch] [bp-FF8h]
  int v70; // [sp+118h] [bp-FECh]
  int v71; // [sp+11Ch] [bp-FE8h]

  switch ( a1 )
  {
    case 0:
      v48 = 0;
      v63[0] = 0;
      all_created_runtime = (int *)get_all_created_runtime(v63);
      v50 = all_created_runtime;
      if ( (int)v63[0] > 0 )
      {
        read_status_from_monitor(&v66, *all_created_runtime);
        if ( (int)v63[0] > 0 )
        {
          v51 = v50 - 1;
          v5 = 0x80000000;
          do
          {
            v52 = v51[1];
            ++v51;
            read_status_from_monitor(&v66, v52);
            if ( v70 > 0 )
            {
              v53 = v66;
              do
              {
                v55 = *v53++;
                v54 = v55;
                if ( v5 < v55 )
                  v5 = v54;
              }
              while ( &v66[v70] != v53 );
            }
            if ( v71 > 0 )
            {
              v56 = v68;
              do
              {
                v58 = *v56++;
                v57 = v58;
                if ( v5 < v58 )
                  v5 = v57;
              }
              while ( &v68[v71] != v56 );
            }
            ++v48;
          }
          while ( v48 < (int)v63[0] );
          goto LABEL_64;
        }
      }
      v28 = &g_zc;
      v5 = 0x80000000;
      break;
    case 1:
      v32 = 0;
      v62 = 0;
      v33 = (char *)get_all_created_runtime(&v62);
      v34 = v33;
      if ( v62 <= 0 )
      {
        v38 = 0;
      }
      else
      {
        v35 = v33 - 4;
        for ( i = 0; i < v62; ++i )
        {
          v37 = *((_DWORD *)v35 + 1);
          v35 += 4;
          read_status_from_monitor(v63, v37);
          v32 += v64;
        }
        v38 = v32;
      }
      v39 = (int *)calloc(v38, 4u);
      if ( v39 )
      {
        if ( v62 > 0 )
        {
          v40 = 0;
          v41 = v34 - 4;
          for ( j = 0; j < v62; ++j )
          {
            v43 = *((_DWORD *)v41 + 1);
            v41 += 4;
            read_status_from_monitor(v63, v43);
            v44 = &v39[v40];
            v40 += v64;
            memcpy(v44, v63[0], 4 * v64);
          }
        }
        LOWORD(v28) = (unsigned __int16)&g_zc;
        if ( v32 <= 0 )
        {
          v5 = 0x7FFFFFFF;
          HIWORD(v28) = (unsigned int)&g_zc >> 16;
        }
        else
        {
          v45 = &v39[v32];
          HIWORD(v28) = (unsigned int)&g_zc >> 16;
          v46 = v39;
          v5 = 0x7FFFFFFF;
          do
          {
            while ( 1 )
            {
              v47 = *v46++;
              if ( check_value_valid_with_stdd(__SPAIR64__(v32, (unsigned int)v39), v47) )
                break;
              V_LOCK();
              logfmt_raw((char *)&v66, 0x1000u, 0, "%d C, most likely a bad sensor", *(v46 - 1));
              V_UNLOCK();
              zlog(
                *v28,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/set_pwm_by_temp.c",
                156,
                "get_min_pcb_temp",
                16,
                173,
                20,
                &v66);
              if ( v45 == v46 )
                goto LABEL_49;
            }
            if ( v5 >= *(v46 - 1) )
              v5 = *(v46 - 1);
          }
          while ( v45 != v46 );
        }
LABEL_49:
        free(v39);
        dword_19471C = v5;
        V_LOCK();
        logfmt_raw((char *)&v66, 0x1000u, 0, "min temp pcb: %d", v5);
        V_UNLOCK();
        zlog(
          *v28,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/set_pwm_by_temp.c",
          156,
          "get_min_pcb_temp",
          16,
          179,
          20,
          &v66);
      }
      else
      {
        printf(aInvalidPointer, "temp_in_pcb");
        v28 = &g_zc;
        v5 = dword_19471C;
      }
      break;
    case 2:
      v13 = 0;
      v62 = 0;
      v14 = (char *)get_all_created_runtime(&v62);
      v15 = v14;
      if ( v62 <= 0 )
      {
        v19 = 0;
      }
      else
      {
        v16 = v14 - 4;
        for ( k = 0; k < v62; ++k )
        {
          v18 = *((_DWORD *)v16 + 1);
          v16 += 4;
          read_status_from_monitor(v63, v18);
          v13 += v65 + v64;
        }
        v19 = v13;
      }
      v20 = (int *)calloc(v19, 4u);
      if ( v20 )
      {
        if ( v62 > 0 )
        {
          v21 = 0;
          v60 = v13;
          v22 = 0;
          v23 = v15 - 4;
          do
          {
            v24 = *((_DWORD *)v23 + 1);
            v23 += 4;
            read_status_from_monitor(v63, v24);
            v25 = &v20[v21];
            v26 = v65;
            ++v22;
            v27 = v64 + v21;
            v21 += v65 + v64;
            memcpy(v25, v63[1], 4 * v64);
            memcpy(&v20[v27], v63[3], 4 * v26);
          }
          while ( v22 < v62 );
          v13 = v60;
        }
        LOWORD(v28) = (unsigned __int16)&g_zc;
        if ( v13 <= 0 )
        {
          v5 = 0x80000000;
          HIWORD(v28) = (unsigned int)&g_zc >> 16;
        }
        else
        {
          v29 = &v20[v13];
          HIWORD(v28) = (unsigned int)&g_zc >> 16;
          v30 = v20;
          v5 = 0x80000000;
          do
          {
            while ( 1 )
            {
              v31 = *v30++;
              if ( check_value_valid_with_stdd(__SPAIR64__(v13, (unsigned int)v20), v31) )
                break;
              V_LOCK();
              logfmt_raw((char *)&v66, 0x1000u, 0, "%d C, most likely a bad sensor", *(v30 - 1));
              V_UNLOCK();
              zlog(
                *v28,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/set_pwm_by_temp.c",
                156,
                "get_max_chip_temp",
                17,
                65,
                20,
                &v66);
              if ( v29 == v30 )
                goto LABEL_33;
            }
            if ( v5 < *(v30 - 1) )
              v5 = *(v30 - 1);
          }
          while ( v29 != v30 );
        }
LABEL_33:
        free(v20);
        dword_194720 = v5;
        V_LOCK();
        logfmt_raw((char *)&v66, 0x1000u, 0, "max temp chip: %d", v5);
        V_UNLOCK();
        zlog(
          *v28,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/set_pwm_by_temp.c",
          156,
          "get_max_chip_temp",
          17,
          98,
          20,
          &v66);
      }
      else
      {
        printf(aInvalidPointer, "temp_check_chip");
        v28 = &g_zc;
        v5 = dword_194720;
      }
      break;
    case 3:
      v1 = 0;
      v63[0] = 0;
      v2 = (int *)get_all_created_runtime(v63);
      v3 = v2;
      if ( (int)v63[0] <= 0 || (read_status_from_monitor(&v66, *v2), (int)v63[0] <= 0) )
      {
        v28 = &g_zc;
        v5 = 0x7FFFFFFF;
      }
      else
      {
        v4 = v3 - 1;
        v5 = 0x7FFFFFFF;
        do
        {
          v6 = v4[1];
          ++v4;
          read_status_from_monitor(&v66, v6);
          if ( v70 > 0 )
          {
            v7 = v67;
            do
            {
              v9 = *v7++;
              v8 = v9;
              if ( v5 >= v9 )
                v5 = v8;
            }
            while ( &v67[v70] != v7 );
          }
          if ( v71 > 0 )
          {
            v10 = v69;
            do
            {
              v12 = *v10++;
              v11 = v12;
              if ( v5 >= v12 )
                v5 = v11;
            }
            while ( &v69[v71] != v10 );
          }
          ++v1;
        }
        while ( v1 < (int)v63[0] );
LABEL_64:
        v28 = &g_zc;
      }
      break;
    default:
      V_LOCK();
      v28 = &g_zc;
      logfmt_raw((char *)&v66, 0x1000u, 0, "%s unknow temp type %d", a1);
      v5 = 0x7FFFFFFF;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/set_pwm_by_temp.c",
        156,
        "get_temp",
        8,
        202,
        100,
        &v66);
      break;
  }
  V_LOCK();
  logfmt_raw((char *)&v66, 0x1000u, 0, "get temp %d", v5);
  V_UNLOCK();
  zlog(
    *v28,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "get_temp",
    8,
    206,
    20,
    &v66);
  return v5;
}
