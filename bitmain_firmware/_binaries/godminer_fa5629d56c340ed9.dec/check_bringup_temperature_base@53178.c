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
  int v12; // r8
  _DWORD *v13; // r6
  int v14; // r4
  int v15; // r2
  int v16; // r7
  char *v17; // r1
  int v18; // r2
  int v19; // r0
  char *v21; // r9
  char *v22; // r10
  int v23; // t1
  int v24; // r6
  _DWORD *v25; // r6
  int v26; // r4
  int v27; // r2
  int v28; // r3
  __int64 v29; // r0
  int v30; // r3
  bool v31; // cc
  int result; // r0
  __int64 v33; // r0
  int v34; // r0
  int v35; // r2
  char *v36; // r3
  int v38; // [sp+28h] [bp-12DCh]
  char *ptr; // [sp+2Ch] [bp-12D8h]
  int v40; // [sp+30h] [bp-12D4h]
  char *v41; // [sp+34h] [bp-12D0h]
  int v42; // [sp+34h] [bp-12D0h]
  char *s; // [sp+38h] [bp-12CCh]
  int v44; // [sp+3Ch] [bp-12C8h]
  char *v45; // [sp+40h] [bp-12C4h]
  bool v46; // [sp+44h] [bp-12C0h]
  int v47; // [sp+48h] [bp-12BCh]
  int v48; // [sp+48h] [bp-12BCh]
  int v50; // [sp+54h] [bp-12B0h]
  int v51; // [sp+54h] [bp-12B0h]
  int v52; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v53[7]; // [sp+60h] [bp-12A4h] BYREF
  int v54; // [sp+7Ch] [bp-1288h]
  _DWORD v55[7]; // [sp+80h] [bp-1284h] BYREF
  int v56; // [sp+9Ch] [bp-1268h]
  _DWORD v57[7]; // [sp+A0h] [bp-1264h] BYREF
  int v58; // [sp+BCh] [bp-1248h]
  _DWORD v59[7]; // [sp+C0h] [bp-1244h] BYREF
  int v60; // [sp+DCh] [bp-1228h]
  _DWORD v61[7]; // [sp+E0h] [bp-1224h] BYREF
  int v62; // [sp+FCh] [bp-1208h]
  char v63; // [sp+100h] [bp-1204h] BYREF
  char v64; // [sp+200h] [bp-1104h] BYREF
  char v65[4100]; // [sp+300h] [bp-1004h] BYREF

  v52 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v52);
  if ( v52 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 416);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( &all_created_runtime[v52] != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = (char *)calloc(v52 * v2, 8u);
  if ( ptr )
  {
    v6 = v52;
    if ( v52 > 0 )
    {
      v8 = ptr;
      v7 = 8 * v2;
      v9 = (char *)(all_created_runtime - 1);
      v45 = (char *)(all_created_runtime - 1);
      v10 = 0;
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        ++v10;
        v8 += v7;
        (*(void (**)(void))(v11 + 216))();
        usleep((__useconds_t)&loc_7A120);
        v6 = v52;
      }
      while ( v52 > v10 );
    }
    else
    {
      v7 = 8 * v2;
      v45 = (char *)(all_created_runtime - 1);
    }
    v46 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v6 != 1 || v2 > 5 )
      {
        v40 = 0;
        v38 = 0;
        goto LABEL_29;
      }
      goto LABEL_57;
    }
    v50 = v2;
    v12 = 0;
    v47 = 24 * v2;
    v38 = 0;
    v40 = 0;
    v41 = ptr;
    while ( v6 <= 0 )
    {
LABEL_24:
      v12 += 24;
      v41 += 8;
      if ( v47 == v12 )
      {
        v2 = v50;
        if ( v6 != 1 || !v46 )
        {
LABEL_29:
          if ( v6 > 0 )
          {
            v21 = ptr;
            v51 = v7;
            v22 = v45;
            s = 0;
            v42 = 0;
            v48 = 0;
            v44 = 255;
            while ( 1 )
            {
              v23 = *((_DWORD *)v22 + 1);
              v22 += 4;
              v24 = *(_DWORD *)(v23 + 408);
              if ( v2 > 0 )
                break;
LABEL_41:
              v31 = v52 <= ++v48;
              v21 += v51;
              if ( v31 )
              {
                free(ptr);
                v31 = v42 <= 0;
                if ( v42 > 0 )
                  v31 = (int)s <= 0;
                result = v31;
                if ( !v31 )
                {
                  *(_DWORD *)(a1 + 92) = v44;
                  return result;
                }
LABEL_58:
                V_LOCK();
                logfmt_raw(v65, 0x1000u, 0, "J0:6, temp sensor error, pls check it, and reboot system");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "check_bringup_temperature_base",
                  30,
                  317,
                  100,
                  v65);
                while ( 1 )
                  ;
              }
            }
            v25 = (_DWORD *)(v24 + 20);
            v26 = 0;
            while ( 1 )
            {
LABEL_35:
              v27 = *(_DWORD *)&v21[8 * v26];
              if ( v27 == -64 )
              {
                V_LOCK();
                V_INT((int)v57, "chain", *(int *)(*(_DWORD *)v22 + 260));
                logfmt_raw(
                  v65,
                  0x1000u,
                  0,
                  v58,
                  v57[0],
                  v57[1],
                  v57[2],
                  v57[3],
                  v57[4],
                  v57[5],
                  v57[6],
                  v58,
                  "sensor_addr %02x, J0:6",
                  *v25);
                V_UNLOCK();
                v34 = g_zc;
                v35 = 290;
                goto LABEL_53;
              }
              v28 = *(v25 - 2);
              if ( v28 )
                break;
              HIDWORD(v29) = v38;
              LODWORD(v29) = &v63;
              if ( !check_value_valid_with_stdd(v29, v27) )
              {
                V_LOCK();
                V_INT((int)v59, "chain", *(int *)(*(_DWORD *)v22 + 260));
                logfmt_raw(
                  v65,
                  0x1000u,
                  0,
                  v60,
                  v59[0],
                  v59[1],
                  v59[2],
                  v59[3],
                  v59[4],
                  v59[5],
                  v59[6],
                  v60,
                  "sensor_addr %02x, J0:6",
                  *v25);
                V_UNLOCK();
                v34 = g_zc;
                v35 = 297;
                goto LABEL_53;
              }
              v25 += 6;
              v30 = *(_DWORD *)&v21[8 * v26++];
              ++s;
              if ( v44 < v30 )
                v30 = v44;
              v44 = v30;
              if ( v2 == v26 )
                goto LABEL_41;
            }
            if ( v28 == 1 )
            {
              HIDWORD(v33) = v40;
              LODWORD(v33) = &v64;
              if ( check_value_valid_with_stdd(v33, v27) )
              {
                ++v42;
              }
              else
              {
                V_LOCK();
                V_INT((int)v61, "chain", *(int *)(*(_DWORD *)v22 + 260));
                logfmt_raw(
                  v65,
                  0x1000u,
                  0,
                  v62,
                  v61[0],
                  v61[1],
                  v61[2],
                  v61[3],
                  v61[4],
                  v61[5],
                  v61[6],
                  v62,
                  "sensor_addr %02x, J0:6",
                  *v25);
                V_UNLOCK();
                v34 = g_zc;
                v35 = 305;
LABEL_53:
                zlog(
                  v34,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "check_bringup_temperature_base",
                  30,
                  v35,
                  100,
                  v65);
              }
            }
            ++v26;
            v25 += 6;
            if ( v2 == v26 )
              goto LABEL_41;
            goto LABEL_35;
          }
        }
LABEL_57:
        free(ptr);
        goto LABEL_58;
      }
    }
    v13 = v41;
    v14 = 0;
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 != -64 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v14] + 408) + v12 + 12);
        if ( !v16 )
        {
          v17 = &v65[4 * v38++];
          *((_DWORD *)v17 - 128) = v15;
          V_LOCK();
          V_INT((int)v53, "chain", *(int *)(all_created_runtime[v14] + 260));
          logfmt_raw(
            v65,
            0x1000u,
            0,
            v54,
            v53[0],
            v53[1],
            v53[2],
            v53[3],
            v53[4],
            v53[5],
            v53[6],
            v54,
            "pcb temp in: %d",
            *v13);
          V_UNLOCK();
          v18 = 265;
          v19 = g_zc;
LABEL_23:
          zlog(
            v19,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "check_bringup_temperature_base",
            30,
            v18,
            40,
            v65);
          goto LABEL_19;
        }
        if ( v16 == 1 )
        {
          v36 = &v65[4 * v40++];
          *((_DWORD *)v36 - 64) = v15;
          V_LOCK();
          V_INT((int)v55, "chain", *(int *)(all_created_runtime[v14] + 260));
          logfmt_raw(
            v65,
            0x1000u,
            0,
            v56,
            v55[0],
            v55[1],
            v55[2],
            v55[3],
            v55[4],
            v55[5],
            v55[6],
            v56,
            "pcb temp out: %d",
            *v13);
          V_UNLOCK();
          v18 = 268;
          v19 = g_zc;
          goto LABEL_23;
        }
      }
LABEL_19:
      v6 = v52;
      ++v14;
      v13 = (_DWORD *)((char *)v13 + v7);
      if ( v52 <= v14 )
        goto LABEL_24;
    }
  }
  printf(aInvalidPointer, "sensor_status");
  return 3;
}
