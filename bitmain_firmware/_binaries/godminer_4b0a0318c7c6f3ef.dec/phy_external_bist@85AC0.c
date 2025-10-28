int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r6
  _DWORD *v10; // r6
  int v11; // r1
  char *v12; // r1
  int v13; // r0
  unsigned __int8 *v14; // r4
  int v15; // r0
  int v16; // r2
  int v17; // r1
  unsigned __int16 v18; // t1
  unsigned __int8 *v19; // r6
  unsigned __int8 v20; // t1
  char *v21; // r7
  int v22; // r11
  unsigned __int8 *v23; // r4
  unsigned __int16 v24; // t1
  char *v25; // r3
  int v26; // r2
  int v27; // r7
  unsigned __int16 v28; // r6
  int v29; // r1
  int v30; // r0
  char *v31; // r4
  char *v32; // r5
  char *v33; // r2
  unsigned int v34; // r3
  int v35; // r1
  unsigned int v36; // r3
  unsigned __int16 v37; // r6
  int v38; // r0
  char *v39; // r4
  char *v40; // r5
  char *v41; // r2
  unsigned int v42; // r3
  int v43; // r1
  unsigned int v44; // r3
  unsigned __int16 v45; // r6
  int v46; // r0
  char *v47; // r4
  char *v48; // r5
  char *v49; // r2
  unsigned int v50; // r3
  int v51; // r1
  unsigned int v52; // r3
  unsigned int v53; // r6
  unsigned int v54; // r9
  unsigned int v55; // r11
  int v56; // r3
  char *v57; // r2
  int v58; // r1
  int v59; // r5
  char *v60; // r1
  int v61; // r5
  int v62; // r1
  char *v63; // r1
  int v64; // r1
  char *v65; // r1
  int v66; // r1
  int v68; // [sp+20h] [bp-127Ch]
  int v69; // [sp+24h] [bp-1278h]
  int v70; // [sp+24h] [bp-1278h]
  int v71; // [sp+24h] [bp-1278h]
  int v72; // [sp+24h] [bp-1278h]
  _DWORD *v73; // [sp+3Ch] [bp-1260h]
  unsigned __int8 *v74; // [sp+40h] [bp-125Ch]
  __int64 v75; // [sp+40h] [bp-125Ch]
  unsigned __int8 *v76; // [sp+48h] [bp-1254h]
  char *v77; // [sp+48h] [bp-1254h]
  int v78; // [sp+50h] [bp-124Ch]
  _DWORD *v79; // [sp+50h] [bp-124Ch]
  _DWORD *v80; // [sp+50h] [bp-124Ch]
  int v81; // [sp+50h] [bp-124Ch]
  char *v82; // [sp+54h] [bp-1248h]
  char *v83; // [sp+54h] [bp-1248h]
  int v84; // [sp+58h] [bp-1244h]
  int v85; // [sp+58h] [bp-1244h]
  int v86; // [sp+60h] [bp-123Ch]
  unsigned __int8 *v87; // [sp+68h] [bp-1234h]
  char *ptr; // [sp+74h] [bp-1228h]
  _DWORD v89[7]; // [sp+78h] [bp-1224h] BYREF
  int v90; // [sp+94h] [bp-1208h]
  _DWORD v91[7]; // [sp+98h] [bp-1204h] BYREF
  int v92; // [sp+B4h] [bp-11E8h]
  _DWORD v93[7]; // [sp+B8h] [bp-11E4h] BYREF
  int v94; // [sp+D4h] [bp-11C8h]
  _DWORD v95[7]; // [sp+D8h] [bp-11C4h] BYREF
  int v96; // [sp+F4h] [bp-11A8h]
  _DWORD v97[7]; // [sp+F8h] [bp-11A4h] BYREF
  int v98; // [sp+114h] [bp-1188h]
  _DWORD v99[7]; // [sp+118h] [bp-1184h] BYREF
  int v100; // [sp+134h] [bp-1168h]
  _DWORD v101[7]; // [sp+138h] [bp-1164h] BYREF
  int v102; // [sp+154h] [bp-1148h]
  _DWORD v103[7]; // [sp+158h] [bp-1144h] BYREF
  int v104; // [sp+174h] [bp-1128h]
  _DWORD v105[7]; // [sp+178h] [bp-1124h] BYREF
  int v106; // [sp+194h] [bp-1108h]
  _DWORD v107[7]; // [sp+198h] [bp-1104h] BYREF
  int v108; // [sp+1B4h] [bp-10E8h]
  _DWORD v109[7]; // [sp+1B8h] [bp-10E4h] BYREF
  int v110; // [sp+1D4h] [bp-10C8h]
  _DWORD v111[7]; // [sp+1D8h] [bp-10C4h] BYREF
  int v112; // [sp+1F4h] [bp-10A8h]
  int v113; // [sp+1F8h] [bp-10A4h] BYREF
  _DWORD v114[6]; // [sp+1FCh] [bp-10A0h] BYREF
  int v115; // [sp+214h] [bp-1088h]
  int v116; // [sp+218h] [bp-1084h] BYREF
  _DWORD v117[6]; // [sp+21Ch] [bp-1080h] BYREF
  int v118; // [sp+234h] [bp-1068h]
  _DWORD s[8]; // [sp+238h] [bp-1064h] BYREF
  _DWORD v120[8]; // [sp+258h] [bp-1044h] BYREF
  _DWORD v121[8]; // [sp+278h] [bp-1024h] BYREF
  char v122[4100]; // [sp+298h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  V_INT((int)v89, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -14460;
  HIWORD(v9) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  v68 = v9;
  LOWORD(v10) = 20532;
  HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
  v73 = v10;
  logfmt_raw(
    v122,
    0x1000u,
    0,
    v90,
    v89[0],
    v89[1],
    v89[2],
    v89[3],
    v89[4],
    v89[5],
    v89[6],
    v90,
    v68,
    "phy_external_bist");
  V_UNLOCK();
  LOWORD(v11) = -11432;
  HIWORD(v11) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v10, v11, 174, "phy_external_bist", 17, 2037, 60, v122);
  memset(s, 0, sizeof(s));
  memset(v120, 0, sizeof(v120));
  memset(v121, 0, sizeof(v121));
  if ( a4 )
  {
    LOWORD(v12) = 27372;
    LOWORD(v13) = -8180;
    HIWORD(v12) = (unsigned int)":" >> 16;
    HIWORD(v13) = (unsigned int)"apt %s, main=%02d, pre=%02d, post=%02d" >> 16;
    v74 = (unsigned __int8 *)(a3 - 1);
    v76 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    v14 = (unsigned __int8 *)(a3 - 1);
    v82 = v12;
    v84 = v13;
    do
    {
      v18 = *++v14;
      if ( check_core_reg_with_expect_data_eth(a1, a2, v18, 64, 0xFF000100) )
      {
        V_LOCK();
        V_INT((int)v91, v82, *(int *)(a1 + 256));
        logfmt_raw(
          v122,
          0x1000u,
          0,
          v92,
          v91[0],
          v91[1],
          v91[2],
          v91[3],
          v91[4],
          v91[5],
          v91[6],
          v92,
          "%s pcs lock failed!",
          "phy_external_bist");
        V_UNLOCK();
        v15 = *v10;
        v16 = 2181;
      }
      else
      {
        V_LOCK();
        V_INT((int)v93, v82, *(int *)(a1 + 256));
        logfmt_raw(
          v122,
          0x1000u,
          0,
          v94,
          v93[0],
          v93[1],
          v93[2],
          v93[3],
          v93[4],
          v93[5],
          v93[6],
          v94,
          v84,
          "phy_external_bist",
          *v14);
        V_UNLOCK();
        v15 = *v10;
        v16 = 2183;
      }
      LOWORD(v17) = -11432;
      HIWORD(v17) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
      zlog(v15, v17, 174, "phy_external_bist", 17, v16, 100, v122);
    }
    while ( v76 != v14 );
    v19 = v74;
    do
    {
      v20 = *++v19;
      sub_7F86C(a1, v20, 133, 0xFFFF);
      sub_7F86C(a1, *v19, 134, 1342177279);
    }
    while ( v14 != v19 );
    v87 = v19;
    LOWORD(v21) = 27372;
    sub_7F828(a1, 132, -2147483647);
    sleep(0xAu);
    LOWORD(v22) = -8140;
    ptr = (char *)malloc(0x600u);
    v23 = v74;
    do
    {
      while ( 1 )
      {
        v24 = *++v23;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v24, 139, 0xFF0000FF) )
          break;
        if ( v19 == v23 )
          goto LABEL_13;
      }
      V_LOCK();
      HIWORD(v21) = (unsigned int)":" >> 16;
      V_INT((int)v95, v21, *(int *)(a1 + 256));
      HIWORD(v22) = (unsigned int)"disabled" >> 16;
      logfmt_raw(
        v122,
        0x1000u,
        0,
        v96,
        v95[0],
        v95[1],
        v95[2],
        v95[3],
        v95[4],
        v95[5],
        v95[6],
        v96,
        v22,
        "phy_external_bist");
      V_UNLOCK();
      zlog(
        *v73,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        2217,
        100,
        v122);
    }
    while ( v19 != v23 );
LABEL_13:
    LOWORD(v27) = 15840;
    LOWORD(v25) = 27372;
    LOWORD(v26) = -8120;
    HIWORD(v25) = (unsigned int)":" >> 16;
    HIWORD(v27) = (unsigned int)&dword_1A3DE8 >> 16;
    v77 = v25;
    HIWORD(v26) = (unsigned int)" %d" >> 16;
    v86 = v26;
    do
    {
      v28 = 67;
      v78 = 0;
      v29 = *++v74;
      sub_7F8BC(a1, v29, 132, ptr);
      LOWORD(v111[0]) = 17475;
      while ( 1 )
      {
        v30 = sub_7F8BC(a1, *v74, v28, ptr);
        if ( v30 )
        {
          v31 = ptr;
          v32 = &ptr[12 * v30];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v31 + 3)) == v28 )
              {
                v33 = &v122[4 * (unsigned __int8)v31[4]];
                v34 = bswap32(*(_DWORD *)v31);
                v35 = (unsigned __int16)v34;
                v36 = HIWORD(v34);
                *((_DWORD *)v33 - 8) += v35 + v36;
                if ( v35 )
                {
                  ++*(_DWORD *)(v27 + 4);
                  V_LOCK();
                  V_INT((int)v97, v77, *(int *)(a1 + 256));
                  logfmt_raw(
                    v122,
                    0x1000u,
                    0,
                    v98,
                    v97[0],
                    v97[1],
                    v97[2],
                    v97[3],
                    v97[4],
                    v97[5],
                    v97[6],
                    v98,
                    v86,
                    (unsigned __int8)v31[4],
                    (unsigned __int8)v31[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v31 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v31));
                  V_UNLOCK();
                  zlog(
                    *v73,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2254,
                    40,
                    v122);
                  v36 = bswap32(*(_DWORD *)v31) >> 16;
                }
                if ( v36 )
                  break;
              }
              v31 += 12;
              if ( v32 == v31 )
                goto LABEL_23;
            }
            v31 += 12;
            ++*(_DWORD *)(v27 + 4);
            V_LOCK();
            V_INT((int)v99, v77, *(int *)(a1 + 256));
            logfmt_raw(
              v122,
              0x1000u,
              0,
              v100,
              v99[0],
              v99[1],
              v99[2],
              v99[3],
              v99[4],
              v99[5],
              v99[6],
              v100,
              v86,
              (unsigned __int8)*(v31 - 8),
              (unsigned __int8)*(v31 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v31 - 3)),
              bswap32(*((_DWORD *)v31 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              *v73,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2259,
              40,
              v122);
          }
          while ( v32 != v31 );
        }
LABEL_23:
        if ( v78 == 1 )
          break;
        v28 = BYTE1(v111[0]);
        v78 = 1;
      }
      v37 = 128;
      v79 = (int *)((char *)&v113 + 1);
      v113 = -2088599168;
      while ( 1 )
      {
        v38 = sub_7F8BC(a1, *v74, v37, ptr);
        if ( v38 )
        {
          v39 = ptr;
          v40 = &ptr[12 * v38];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v39 + 3)) == v37 )
              {
                v41 = &v122[4 * (unsigned __int8)v39[4]];
                v42 = bswap32(*(_DWORD *)v39);
                v43 = (unsigned __int16)v42;
                v44 = HIWORD(v42);
                *((_DWORD *)v41 - 16) += v43 + v44;
                if ( v43 )
                {
                  ++*(_DWORD *)(v27 + 8);
                  V_LOCK();
                  V_INT((int)v101, v77, *(int *)(a1 + 256));
                  logfmt_raw(
                    v122,
                    0x1000u,
                    0,
                    v102,
                    v101[0],
                    v101[1],
                    v101[2],
                    v101[3],
                    v101[4],
                    v101[5],
                    v101[6],
                    v102,
                    "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v39[4],
                    (unsigned __int8)v39[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v39 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v39));
                  V_UNLOCK();
                  zlog(
                    *v73,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2288,
                    40,
                    v122);
                  v44 = bswap32(*(_DWORD *)v39) >> 16;
                }
                if ( v44 )
                  break;
              }
              v39 += 12;
              if ( v40 == v39 )
                goto LABEL_34;
            }
            v39 += 12;
            ++*(_DWORD *)(v27 + 8);
            V_LOCK();
            V_INT((int)v103, v77, *(int *)(a1 + 256));
            logfmt_raw(
              v122,
              0x1000u,
              0,
              v104,
              v103[0],
              v103[1],
              v103[2],
              v103[3],
              v103[4],
              v103[5],
              v103[6],
              v104,
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v39 - 8),
              (unsigned __int8)*(v39 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v39 - 3)),
              bswap32(*((_DWORD *)v39 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              *v73,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2293,
              40,
              v122);
          }
          while ( v40 != v39 );
        }
LABEL_34:
        if ( v114 == v79 )
          break;
        v37 = *(unsigned __int8 *)v79;
        v79 = (_DWORD *)((char *)v79 + 1);
      }
      v45 = 135;
      v80 = (int *)((char *)&v116 + 1);
      v116 = -1970698105;
      while ( 1 )
      {
        v46 = sub_7F8BC(a1, *v74, v45, ptr);
        if ( v46 )
        {
          v47 = ptr;
          v48 = &ptr[12 * v46];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v47 + 3)) == v45 )
              {
                v49 = &v122[4 * (unsigned __int8)v47[4]];
                v50 = bswap32(*(_DWORD *)v47);
                v51 = (unsigned __int16)v50;
                v52 = HIWORD(v50);
                *((_DWORD *)v49 - 24) += v51 + v52;
                if ( v51 )
                {
                  ++*(_DWORD *)(v27 + 0xC);
                  V_LOCK();
                  V_INT((int)v105, v77, *(int *)(a1 + 256));
                  logfmt_raw(
                    v122,
                    0x1000u,
                    0,
                    v106,
                    v105[0],
                    v105[1],
                    v105[2],
                    v105[3],
                    v105[4],
                    v105[5],
                    v105[6],
                    v106,
                    "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v47[4],
                    (unsigned __int8)v47[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v47 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v47));
                  V_UNLOCK();
                  zlog(
                    *v73,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2322,
                    40,
                    v122);
                  v52 = bswap32(*(_DWORD *)v47) >> 16;
                }
                if ( v52 )
                  break;
              }
              v47 += 12;
              if ( v48 == v47 )
                goto LABEL_45;
            }
            v47 += 12;
            ++*(_DWORD *)(v27 + 0xC);
            V_LOCK();
            V_INT((int)v107, v77, *(int *)(a1 + 256));
            logfmt_raw(
              v122,
              0x1000u,
              0,
              v108,
              v107[0],
              v107[1],
              v107[2],
              v107[3],
              v107[4],
              v107[5],
              v107[6],
              v108,
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v47 - 8),
              (unsigned __int8)*(v47 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v47 - 3)),
              bswap32(*((_DWORD *)v47 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              *v73,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2327,
              40,
              v122);
          }
          while ( v48 != v47 );
        }
LABEL_45:
        if ( v117 == v80 )
          break;
        v45 = *(unsigned __int8 *)v80;
        v80 = (_DWORD *)((char *)v80 + 1);
      }
    }
    while ( v74 != v87 );
    v53 = s[0];
    v54 = v120[0];
    v55 = v121[0];
  }
  else
  {
    v55 = 0;
    sub_7F828(a1, 132, -2147483647);
    LOWORD(v27) = 15840;
    sleep(0xAu);
    v54 = 0;
    ptr = (char *)malloc(0x600u);
    v53 = 0;
    HIWORD(v27) = (unsigned int)&dword_1A3DE8 >> 16;
  }
  LOWORD(v56) = -7936;
  LOWORD(v57) = 27372;
  LOWORD(v58) = -11432;
  HIWORD(v56) = (unsigned int)"adapt_7.ini" >> 16;
  HIWORD(v57) = (unsigned int)":" >> 16;
  HIWORD(v58) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  v59 = 0;
  v81 = v56;
  v83 = v57;
  v85 = v58;
  free(ptr);
  while ( 1 )
  {
    v75 = *(_QWORD *)(v27 + 0x10) + v53;
    *(_QWORD *)(v27 + 0x18) += v54;
    *(_QWORD *)(v27 + 0x10) = v75;
    *(_QWORD *)(v27 + 0x20) += v55;
    V_LOCK();
    V_INT((int)v109, v83, *(int *)(a1 + 256));
    v69 = v59++;
    logfmt_raw(
      v122,
      0x1000u,
      0,
      v110,
      v109[0],
      v109[1],
      v109[2],
      v109[3],
      v109[4],
      v109[5],
      v109[6],
      v110,
      v81,
      v69,
      v53,
      v54,
      v55);
    V_UNLOCK();
    zlog(*v73, v85, 174, "phy_external_bist", 17, 2345, 60, v122);
    if ( v59 == 8 )
      break;
    v53 = s[v59];
    v54 = v120[v59];
    v55 = v121[v59];
  }
  V_LOCK();
  LOWORD(v60) = 27372;
  HIWORD(v60) = (unsigned int)":" >> 16;
  LOWORD(v61) = -7860;
  V_INT((int)v111, v60, *(int *)(a1 + 256));
  HIWORD(v61) = (unsigned int)"t_10.ini" >> 16;
  logfmt_raw(
    v122,
    0x1000u,
    0,
    v112,
    v111[0],
    v111[1],
    v111[2],
    v111[3],
    v111[4],
    v111[5],
    v111[6],
    v112,
    v61,
    v70,
    *(_DWORD *)(v27 + 0x10),
    *(_DWORD *)(v27 + 0x10 + 4),
    *(_DWORD *)(v27 + 0xC));
  V_UNLOCK();
  LOWORD(v62) = -11432;
  HIWORD(v62) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v73, v62, 174, "phy_external_bist", 17, 2348, 60, v122);
  V_LOCK();
  LOWORD(v63) = 27372;
  HIWORD(v63) = (unsigned int)":" >> 16;
  V_INT((int)&v113, v63, *(int *)(a1 + 256));
  logfmt_raw(
    v122,
    0x1000u,
    0,
    v115,
    v113,
    v114[0],
    v114[1],
    v114[2],
    v114[3],
    v114[4],
    v114[5],
    v115,
    "[PHY BIST LOST NUM TOTAL] phy_lost: 0x%llx, lane_lost: %u",
    v71,
    *(_DWORD *)(v27 + 0x18),
    *(_DWORD *)(v27 + 0x18 + 4),
    *(_DWORD *)(v27 + 8));
  V_UNLOCK();
  LOWORD(v64) = -11432;
  HIWORD(v64) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v73, v64, 174, "phy_external_bist", 17, 2349, 60, v122);
  V_LOCK();
  LOWORD(v65) = 27372;
  HIWORD(v65) = (unsigned int)":" >> 16;
  V_INT((int)&v116, v65, *(int *)(a1 + 256));
  logfmt_raw(
    v122,
    0x1000u,
    0,
    v118,
    v116,
    v117[0],
    v117[1],
    v117[2],
    v117[3],
    v117[4],
    v117[5],
    v118,
    "[PHY BIST UNLOCK NUM TOTAL] phy_unlock: 0x%llx, lane_unlock: %u",
    v72,
    *(_DWORD *)(v27 + 0x20),
    *(_DWORD *)(v27 + 0x20 + 4),
    *(_DWORD *)(v27 + 4));
  V_UNLOCK();
  LOWORD(v66) = -11432;
  HIWORD(v66) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v73, v66, 174, "phy_external_bist", 17, 2350, 60, v122);
  *(_DWORD *)(v27 + 4) = 0;
  *(_DWORD *)(v27 + 8) = 0;
  *(_DWORD *)(v27 + 0xC) = 0;
  *(_QWORD *)(v27 + 0x20) = 0;
  *(_QWORD *)(v27 + 0x18) = 0;
  *(_QWORD *)(v27 + 0x10) = 0;
  return 0;
}
