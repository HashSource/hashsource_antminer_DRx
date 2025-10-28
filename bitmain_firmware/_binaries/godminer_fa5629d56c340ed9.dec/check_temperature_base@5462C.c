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
  int v13; // r8
  _DWORD *v14; // r5
  int v15; // r4
  int v16; // r2
  int v17; // r7
  char *v18; // r1
  int v19; // r2
  int v20; // r0
  char *v21; // r7
  int *v22; // r0
  int v23; // r9
  int v24; // r8
  int v25; // r3
  _DWORD *v26; // r5
  int v27; // r4
  int v28; // r2
  int v29; // r3
  __int64 v30; // r0
  int v31; // r3
  bool v32; // cc
  __int64 v34; // r0
  int v35; // r2
  int v36; // r0
  char *v37; // r3
  int v38; // [sp+28h] [bp-12DCh]
  char *v39; // [sp+2Ch] [bp-12D8h]
  int *v40; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  int v42; // [sp+38h] [bp-12CCh]
  int v43; // [sp+44h] [bp-12C0h]
  char *ptr; // [sp+4Ch] [bp-12B8h]
  int v47; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v48[7]; // [sp+60h] [bp-12A4h] BYREF
  int v49; // [sp+7Ch] [bp-1288h]
  _DWORD v50[7]; // [sp+80h] [bp-1284h] BYREF
  int v51; // [sp+9Ch] [bp-1268h]
  _DWORD v52[7]; // [sp+A0h] [bp-1264h] BYREF
  int v53; // [sp+BCh] [bp-1248h]
  _DWORD v54[7]; // [sp+C0h] [bp-1244h] BYREF
  int v55; // [sp+DCh] [bp-1228h]
  _DWORD v56[7]; // [sp+E0h] [bp-1224h] BYREF
  int v57; // [sp+FCh] [bp-1208h]
  char v58; // [sp+100h] [bp-1204h] BYREF
  char v59; // [sp+200h] [bp-1104h] BYREF
  char v60[4100]; // [sp+300h] [bp-1004h] BYREF

  v47 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v47);
  if ( v47 > 0 )
  {
    v5 = all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 416);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( &all_created_runtime[v47] != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  ptr = (char *)calloc(v47 * v4, 8u);
  if ( ptr )
  {
    v8 = v47;
    if ( v47 <= 0 )
    {
      if ( v4 > 0 )
      {
        v43 = 8 * v4;
        goto LABEL_14;
      }
    }
    else
    {
      v9 = ptr;
      v10 = (char *)(all_created_runtime - 1);
      v11 = 0;
      v43 = 8 * v4;
      do
      {
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        ++v11;
        v9 += 8 * v4;
        (*(void (**)(void))(v12 + 216))();
        usleep((__useconds_t)&loc_7A120);
        v8 = v47;
      }
      while ( v47 > v11 );
      if ( v4 > 0 )
      {
LABEL_14:
        v13 = 0;
        v38 = 0;
        v42 = 0;
        v39 = ptr;
        while ( v8 <= 0 )
        {
LABEL_23:
          v13 += 24;
          v39 += 8;
          if ( 24 * v4 == v13 )
            goto LABEL_24;
        }
        v14 = v39;
        v15 = 0;
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 != -64 )
          {
            v17 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v15] + 408) + v13 + 12);
            if ( !v17 )
            {
              v18 = &v60[4 * v38++];
              *((_DWORD *)v18 - 128) = v16;
              V_LOCK();
              V_INT((int)v48, "chain", *(int *)(all_created_runtime[v15] + 260));
              logfmt_raw(
                v60,
                0x1000u,
                0,
                v49,
                v48[0],
                v48[1],
                v48[2],
                v48[3],
                v48[4],
                v48[5],
                v48[6],
                v49,
                "pcb temp in: %d",
                *v14);
              V_UNLOCK();
              v19 = 747;
              v20 = g_zc;
LABEL_22:
              zlog(
                v20,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_temperature_base",
                22,
                v19,
                20,
                v60);
              goto LABEL_18;
            }
            if ( v17 == 1 )
            {
              v37 = &v60[4 * v42++];
              *((_DWORD *)v37 - 64) = v16;
              V_LOCK();
              V_INT((int)v50, "chain", *(int *)(all_created_runtime[v15] + 260));
              logfmt_raw(
                v60,
                0x1000u,
                0,
                v51,
                v50[0],
                v50[1],
                v50[2],
                v50[3],
                v50[4],
                v50[5],
                v50[6],
                v51,
                "pcb temp out: %d",
                *v14);
              V_UNLOCK();
              v19 = 750;
              v20 = g_zc;
              goto LABEL_22;
            }
          }
LABEL_18:
          v8 = v47;
          ++v15;
          v14 = (_DWORD *)((char *)v14 + v43);
          if ( v47 <= v15 )
            goto LABEL_23;
        }
      }
      v38 = 0;
      v42 = 0;
LABEL_24:
      if ( v8 > 0 )
      {
        v21 = ptr;
        v22 = all_created_runtime - 1;
        v23 = 255;
        v24 = -64;
        v40 = v22;
        s = 0;
        while ( 1 )
        {
          v25 = v40[1];
          ++v40;
          if ( v4 > 0 )
            break;
LABEL_38:
          v32 = v47 <= (int)++s;
          v21 += v43;
          if ( v32 )
            goto LABEL_40;
        }
        v26 = (_DWORD *)(*(_DWORD *)(v25 + 408) + 20);
        v27 = 0;
        while ( 1 )
        {
          v28 = *(_DWORD *)&v21[8 * v27];
          if ( v28 == -64 )
            break;
          v29 = *(v26 - 2);
          if ( !v29 )
          {
            HIDWORD(v30) = v38;
            LODWORD(v30) = &v58;
            if ( !check_value_valid_with_stdd(v30, v28) )
            {
              V_LOCK();
              V_INT((int)v54, "chain", *(int *)(*v40 + 260));
              logfmt_raw(
                v60,
                0x1000u,
                0,
                v55,
                v54[0],
                v54[1],
                v54[2],
                v54[3],
                v54[4],
                v54[5],
                v54[6],
                v55,
                "sensor_addr %02x, J0:6",
                *v26);
              V_UNLOCK();
              v35 = 768;
              v36 = g_zc;
              goto LABEL_43;
            }
            goto LABEL_33;
          }
          if ( v29 == 1 )
          {
            HIDWORD(v34) = v42;
            LODWORD(v34) = &v59;
            if ( !check_value_valid_with_stdd(v34, v28) )
            {
              V_LOCK();
              V_INT((int)v56, "chain", *(int *)(*v40 + 260));
              logfmt_raw(
                v60,
                0x1000u,
                0,
                v57,
                v56[0],
                v56[1],
                v56[2],
                v56[3],
                v56[4],
                v56[5],
                v56[6],
                v57,
                "sensor_addr %02x, J0:6",
                *v26);
              V_UNLOCK();
              v35 = 777;
              v36 = g_zc;
LABEL_43:
              zlog(
                v36,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_temperature_base",
                22,
                v35,
                100,
                v60);
            }
LABEL_33:
            v31 = *(_DWORD *)&v21[8 * v27++];
            v26 += 6;
            if ( v23 >= v31 )
              v23 = v31;
            if ( v24 < v31 )
              v24 = v31;
            if ( v4 == v27 )
              goto LABEL_38;
          }
          else
          {
LABEL_29:
            ++v27;
            v26 += 6;
            if ( v4 == v27 )
              goto LABEL_38;
          }
        }
        V_LOCK();
        V_INT((int)v52, "chain", *(int *)(*v40 + 260));
        logfmt_raw(
          v60,
          0x1000u,
          0,
          v53,
          v52[0],
          v52[1],
          v52[2],
          v52[3],
          v52[4],
          v52[5],
          v52[6],
          v53,
          "sensor_addr %02x, J0:6",
          *v26);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "check_temperature_base",
          22,
          761,
          100,
          v60);
        goto LABEL_29;
      }
    }
    v23 = 255;
    v24 = -64;
LABEL_40:
    free(ptr);
    *a2 = v23;
    *a3 = v24;
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "sensor_status");
    return 3;
  }
}
