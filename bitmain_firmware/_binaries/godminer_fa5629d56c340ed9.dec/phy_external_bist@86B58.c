int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v8; // r4
  int v9; // r0
  int v10; // r2
  unsigned __int16 v11; // t1
  unsigned __int8 *v12; // r6
  unsigned __int8 v13; // t1
  unsigned __int8 *v14; // r4
  unsigned __int16 v15; // t1
  unsigned __int16 v16; // r6
  int v17; // r1
  int v18; // r0
  char *v19; // r4
  char *v20; // r5
  char *v21; // r2
  unsigned int v22; // r3
  int v23; // r1
  unsigned int v24; // r3
  unsigned __int16 v25; // r6
  int v26; // r0
  char *v27; // r4
  char *v28; // r5
  char *v29; // r2
  unsigned int v30; // r3
  int v31; // r1
  unsigned int v32; // r3
  unsigned __int16 v33; // r6
  int v34; // r0
  char *v35; // r4
  char *v36; // r5
  char *v37; // r2
  unsigned int v38; // r3
  int v39; // r1
  unsigned int v40; // r3
  unsigned int v41; // r6
  unsigned int v42; // r9
  unsigned int v43; // r11
  int v44; // r5
  int v46; // [sp+24h] [bp-1278h]
  int v47; // [sp+24h] [bp-1278h]
  int v48; // [sp+24h] [bp-1278h]
  int v49; // [sp+24h] [bp-1278h]
  unsigned __int8 *v50; // [sp+40h] [bp-125Ch]
  unsigned __int8 *v51; // [sp+48h] [bp-1254h]
  int v52; // [sp+50h] [bp-124Ch]
  _DWORD *v53; // [sp+50h] [bp-124Ch]
  _DWORD *v54; // [sp+50h] [bp-124Ch]
  unsigned __int8 *v55; // [sp+68h] [bp-1234h]
  char *ptr; // [sp+74h] [bp-1228h]
  _DWORD v57[7]; // [sp+78h] [bp-1224h] BYREF
  int v58; // [sp+94h] [bp-1208h]
  _DWORD v59[7]; // [sp+98h] [bp-1204h] BYREF
  int v60; // [sp+B4h] [bp-11E8h]
  _DWORD v61[7]; // [sp+B8h] [bp-11E4h] BYREF
  int v62; // [sp+D4h] [bp-11C8h]
  _DWORD v63[7]; // [sp+D8h] [bp-11C4h] BYREF
  int v64; // [sp+F4h] [bp-11A8h]
  _DWORD v65[7]; // [sp+F8h] [bp-11A4h] BYREF
  int v66; // [sp+114h] [bp-1188h]
  _DWORD v67[7]; // [sp+118h] [bp-1184h] BYREF
  int v68; // [sp+134h] [bp-1168h]
  _DWORD v69[7]; // [sp+138h] [bp-1164h] BYREF
  int v70; // [sp+154h] [bp-1148h]
  _DWORD v71[7]; // [sp+158h] [bp-1144h] BYREF
  int v72; // [sp+174h] [bp-1128h]
  _DWORD v73[7]; // [sp+178h] [bp-1124h] BYREF
  int v74; // [sp+194h] [bp-1108h]
  _DWORD v75[7]; // [sp+198h] [bp-1104h] BYREF
  int v76; // [sp+1B4h] [bp-10E8h]
  _DWORD v77[7]; // [sp+1B8h] [bp-10E4h] BYREF
  int v78; // [sp+1D4h] [bp-10C8h]
  _DWORD v79[7]; // [sp+1D8h] [bp-10C4h] BYREF
  int v80; // [sp+1F4h] [bp-10A8h]
  int v81; // [sp+1F8h] [bp-10A4h] BYREF
  _DWORD v82[6]; // [sp+1FCh] [bp-10A0h] BYREF
  int v83; // [sp+214h] [bp-1088h]
  int v84; // [sp+218h] [bp-1084h] BYREF
  _DWORD v85[6]; // [sp+21Ch] [bp-1080h] BYREF
  int v86; // [sp+234h] [bp-1068h]
  _DWORD s[8]; // [sp+238h] [bp-1064h] BYREF
  _DWORD v88[8]; // [sp+258h] [bp-1044h] BYREF
  _DWORD v89[8]; // [sp+278h] [bp-1024h] BYREF
  char v90[4100]; // [sp+298h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v57, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v90,
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
    "%s start",
    "phy_external_bist");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    2037,
    60,
    v90);
  memset(s, 0, sizeof(s));
  memset(v88, 0, sizeof(v88));
  memset(v89, 0, sizeof(v89));
  if ( a4 )
  {
    v50 = (unsigned __int8 *)(a3 - 1);
    v51 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    v8 = (unsigned __int8 *)(a3 - 1);
    do
    {
      v11 = *++v8;
      if ( check_core_reg_with_expect_data_eth(a1, a2, v11, 64, 0xFF000100) )
      {
        V_LOCK();
        V_INT((int)v59, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v90,
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
          "%s pcs lock failed!",
          "phy_external_bist");
        V_UNLOCK();
        v9 = g_zc;
        v10 = 2181;
      }
      else
      {
        V_LOCK();
        V_INT((int)v61, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v90,
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
          "%s PHY core-%02x pcs lock successed!",
          "phy_external_bist",
          *v8);
        V_UNLOCK();
        v9 = g_zc;
        v10 = 2183;
      }
      zlog(
        v9,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        v10,
        100,
        v90);
    }
    while ( v51 != v8 );
    v12 = v50;
    do
    {
      v13 = *++v12;
      sub_80904(a1, v13, 133, 0xFFFF);
      sub_80904(a1, *v12, 134, 1342177279);
    }
    while ( v8 != v12 );
    v55 = v12;
    sub_808C0(a1, 132, -2147483647);
    sleep(0xAu);
    ptr = (char *)malloc(0x600u);
    v14 = v50;
    do
    {
      while ( 1 )
      {
        v15 = *++v14;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v15, 139, 0xFF0000FF) )
          break;
        if ( v12 == v14 )
          goto LABEL_13;
      }
      V_LOCK();
      V_INT((int)v63, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v90,
        0x1000u,
        0,
        v64,
        v63[0],
        v63[1],
        v63[2],
        v63[3],
        v63[4],
        v63[5],
        v63[6],
        v64,
        "%s mac bist failed!",
        "phy_external_bist");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        2217,
        100,
        v90);
    }
    while ( v12 != v14 );
    do
    {
LABEL_13:
      v16 = 67;
      v52 = 0;
      v17 = *++v50;
      sub_80954(a1, v17, 132, ptr);
      LOWORD(v79[0]) = 17475;
      while ( 1 )
      {
        v18 = sub_80954(a1, *v50, v16, ptr);
        if ( v18 )
        {
          v19 = ptr;
          v20 = &ptr[12 * v18];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v19 + 3)) == v16 )
              {
                v21 = &v90[4 * (unsigned __int8)v19[4]];
                v22 = bswap32(*(_DWORD *)v19);
                v23 = (unsigned __int16)v22;
                v24 = HIWORD(v22);
                *((_DWORD *)v21 - 8) += v23 + v24;
                if ( v23 )
                {
                  ++dword_1A4F04;
                  V_LOCK();
                  V_INT((int)v65, "chain", *(int *)(a1 + 260));
                  logfmt_raw(
                    v90,
                    0x1000u,
                    0,
                    v66,
                    v65[0],
                    v65[1],
                    v65[2],
                    v65[3],
                    v65[4],
                    v65[5],
                    v65[6],
                    v66,
                    "[PHY BIST UNLOCK NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v19[4],
                    (unsigned __int8)v19[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v19 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v19));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2254,
                    40,
                    v90);
                  v24 = bswap32(*(_DWORD *)v19) >> 16;
                }
                if ( v24 )
                  break;
              }
              v19 += 12;
              if ( v20 == v19 )
                goto LABEL_22;
            }
            v19 += 12;
            ++dword_1A4F04;
            V_LOCK();
            V_INT((int)v67, "chain", *(int *)(a1 + 260));
            logfmt_raw(
              v90,
              0x1000u,
              0,
              v68,
              v67[0],
              v67[1],
              v67[2],
              v67[3],
              v67[4],
              v67[5],
              v67[6],
              v68,
              "[PHY BIST UNLOCK NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v19 - 8),
              (unsigned __int8)*(v19 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v19 - 3)),
              bswap32(*((_DWORD *)v19 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2259,
              40,
              v90);
          }
          while ( v20 != v19 );
        }
LABEL_22:
        if ( v52 == 1 )
          break;
        v16 = BYTE1(v79[0]);
        v52 = 1;
      }
      v25 = 128;
      v53 = (int *)((char *)&v81 + 1);
      v81 = -2088599168;
      while ( 1 )
      {
        v26 = sub_80954(a1, *v50, v25, ptr);
        if ( v26 )
        {
          v27 = ptr;
          v28 = &ptr[12 * v26];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v27 + 3)) == v25 )
              {
                v29 = &v90[4 * (unsigned __int8)v27[4]];
                v30 = bswap32(*(_DWORD *)v27);
                v31 = (unsigned __int16)v30;
                v32 = HIWORD(v30);
                *((_DWORD *)v29 - 16) += v31 + v32;
                if ( v31 )
                {
                  ++dword_1A4F08;
                  V_LOCK();
                  V_INT((int)v69, "chain", *(int *)(a1 + 260));
                  logfmt_raw(
                    v90,
                    0x1000u,
                    0,
                    v70,
                    v69[0],
                    v69[1],
                    v69[2],
                    v69[3],
                    v69[4],
                    v69[5],
                    v69[6],
                    v70,
                    "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v27[4],
                    (unsigned __int8)v27[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v27 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v27));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2288,
                    40,
                    v90);
                  v32 = bswap32(*(_DWORD *)v27) >> 16;
                }
                if ( v32 )
                  break;
              }
              v27 += 12;
              if ( v28 == v27 )
                goto LABEL_33;
            }
            v27 += 12;
            ++dword_1A4F08;
            V_LOCK();
            V_INT((int)v71, "chain", *(int *)(a1 + 260));
            logfmt_raw(
              v90,
              0x1000u,
              0,
              v72,
              v71[0],
              v71[1],
              v71[2],
              v71[3],
              v71[4],
              v71[5],
              v71[6],
              v72,
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v27 - 8),
              (unsigned __int8)*(v27 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v27 - 3)),
              bswap32(*((_DWORD *)v27 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2293,
              40,
              v90);
          }
          while ( v28 != v27 );
        }
LABEL_33:
        if ( v82 == v53 )
          break;
        v25 = *(unsigned __int8 *)v53;
        v53 = (_DWORD *)((char *)v53 + 1);
      }
      v33 = 135;
      v54 = (int *)((char *)&v84 + 1);
      v84 = -1970698105;
      while ( 1 )
      {
        v34 = sub_80954(a1, *v50, v33, ptr);
        if ( v34 )
        {
          v35 = ptr;
          v36 = &ptr[12 * v34];
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v35 + 3)) == v33 )
              {
                v37 = &v90[4 * (unsigned __int8)v35[4]];
                v38 = bswap32(*(_DWORD *)v35);
                v39 = (unsigned __int16)v38;
                v40 = HIWORD(v38);
                *((_DWORD *)v37 - 24) += v39 + v40;
                if ( v39 )
                {
                  ++dword_1A4F0C;
                  V_LOCK();
                  V_INT((int)v73, "chain", *(int *)(a1 + 260));
                  logfmt_raw(
                    v90,
                    0x1000u,
                    0,
                    v74,
                    v73[0],
                    v73[1],
                    v73[2],
                    v73[3],
                    v73[4],
                    v73[5],
                    v73[6],
                    v74,
                    "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
                    (unsigned __int8)v35[4],
                    (unsigned __int8)v35[8],
                    (unsigned __int16)__rev16(*((unsigned __int16 *)v35 + 3)),
                    (unsigned __int16)bswap32(*(_DWORD *)v35));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    174,
                    "phy_external_bist",
                    17,
                    2322,
                    40,
                    v90);
                  v40 = bswap32(*(_DWORD *)v35) >> 16;
                }
                if ( v40 )
                  break;
              }
              v35 += 12;
              if ( v36 == v35 )
                goto LABEL_44;
            }
            v35 += 12;
            ++dword_1A4F0C;
            V_LOCK();
            V_INT((int)v75, "chain", *(int *)(a1 + 260));
            logfmt_raw(
              v90,
              0x1000u,
              0,
              v76,
              v75[0],
              v75[1],
              v75[2],
              v75[3],
              v75[4],
              v75[5],
              v75[6],
              v76,
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %04x",
              (unsigned __int8)*(v35 - 8),
              (unsigned __int8)*(v35 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v35 - 3)),
              bswap32(*((_DWORD *)v35 - 3)) >> 16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              2327,
              40,
              v90);
          }
          while ( v36 != v35 );
        }
LABEL_44:
        if ( v85 == v54 )
          break;
        v33 = *(unsigned __int8 *)v54;
        v54 = (_DWORD *)((char *)v54 + 1);
      }
    }
    while ( v50 != v55 );
    v41 = s[0];
    v42 = v88[0];
    v43 = v89[0];
  }
  else
  {
    v43 = 0;
    sub_808C0(a1, 132, -2147483647);
    sleep(0xAu);
    v42 = 0;
    ptr = (char *)malloc(0x600u);
    v41 = 0;
  }
  v44 = 0;
  free(ptr);
  while ( 1 )
  {
    *(_QWORD *)&dword_1A4F18 += v42;
    *(_QWORD *)&dword_1A4F10 += v41;
    *(_QWORD *)&dword_1A4F20 += v43;
    V_LOCK();
    V_INT((int)v77, "chain", *(int *)(a1 + 260));
    v46 = v44++;
    logfmt_raw(
      v90,
      0x1000u,
      0,
      v78,
      v77[0],
      v77[1],
      v77[2],
      v77[3],
      v77[4],
      v77[5],
      v77[6],
      v78,
      "[PHY BIST RESULT CHIP-%d] phy_err: 0x%x, phy_lost: 0x%x, phy_unlock: 0x%x",
      v46,
      v41,
      v42,
      v43);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_bist",
      17,
      2345,
      60,
      v90);
    if ( v44 == 8 )
      break;
    v41 = s[v44];
    v42 = v88[v44];
    v43 = v89[v44];
  }
  V_LOCK();
  V_INT((int)v79, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v80,
    v79[0],
    v79[1],
    v79[2],
    v79[3],
    v79[4],
    v79[5],
    v79[6],
    v80,
    "[PHY BIST ERR NUM TOTAL] phy_err: 0x%llx, lane_err: %u",
    v47,
    dword_1A4F10,
    dword_1A4F14,
    dword_1A4F0C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    2348,
    60,
    v90);
  V_LOCK();
  V_INT((int)&v81, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v83,
    v81,
    v82[0],
    v82[1],
    v82[2],
    v82[3],
    v82[4],
    v82[5],
    v83,
    "[PHY BIST LOST NUM TOTAL] phy_lost: 0x%llx, lane_lost: %u",
    v48,
    dword_1A4F18,
    dword_1A4F1C,
    dword_1A4F08);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    2349,
    60,
    v90);
  V_LOCK();
  V_INT((int)&v84, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v90,
    0x1000u,
    0,
    v86,
    v84,
    v85[0],
    v85[1],
    v85[2],
    v85[3],
    v85[4],
    v85[5],
    v86,
    "[PHY BIST UNLOCK NUM TOTAL] phy_unlock: 0x%llx, lane_unlock: %u",
    v49,
    dword_1A4F20,
    dword_1A4F24,
    dword_1A4F04);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    2350,
    60,
    v90);
  dword_1A4F04 = 0;
  dword_1A4F08 = 0;
  dword_1A4F0C = 0;
  *(_QWORD *)&dword_1A4F20 = 0;
  *(_QWORD *)&dword_1A4F18 = 0;
  *(_QWORD *)&dword_1A4F10 = 0;
  return 0;
}
