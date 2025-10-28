int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r6
  unsigned __int8 *v10; // r4
  unsigned __int16 v11; // t1
  unsigned __int8 *v12; // r5
  unsigned __int8 *v13; // r6
  unsigned __int8 v14; // t1
  unsigned __int16 v15; // t1
  int v16; // r10
  unsigned __int16 v17; // r6
  int v18; // r3
  _DWORD *v19; // r10
  char *v20; // r4
  int v21; // r0
  char *v22; // r5
  char *v23; // r2
  unsigned __int16 v24; // r3
  int v25; // r1
  int v26; // r12
  unsigned __int16 v27; // t1
  unsigned __int16 v28; // r6
  char *v29; // r4
  int v30; // r0
  char *v31; // r5
  char *v32; // r2
  unsigned __int16 v33; // r3
  int v34; // r1
  int v35; // r12
  unsigned int v36; // r5
  __int64 v37; // r0
  unsigned int *v38; // r12
  __int64 v39; // r2
  unsigned int *i; // lr
  unsigned int v41; // t1
  unsigned int v42; // t1
  int v44; // [sp+24h] [bp-1168h]
  int v45; // [sp+24h] [bp-1168h]
  unsigned __int8 *v46; // [sp+3Ch] [bp-1150h]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v49; // [sp+48h] [bp-1144h]
  int v50; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v51; // [sp+50h] [bp-113Ch]
  unsigned __int8 *v52; // [sp+5Ch] [bp-1130h]
  _DWORD v53[7]; // [sp+68h] [bp-1124h] BYREF
  int v54; // [sp+84h] [bp-1108h]
  _DWORD v55[7]; // [sp+88h] [bp-1104h] BYREF
  int v56; // [sp+A4h] [bp-10E8h]
  _DWORD v57[7]; // [sp+A8h] [bp-10E4h] BYREF
  int v58; // [sp+C4h] [bp-10C8h]
  _DWORD v59[7]; // [sp+C8h] [bp-10C4h] BYREF
  int v60; // [sp+E4h] [bp-10A8h]
  _DWORD v61[7]; // [sp+E8h] [bp-10A4h] BYREF
  int v62; // [sp+104h] [bp-1088h]
  int v63; // [sp+108h] [bp-1084h] BYREF
  _DWORD v64[6]; // [sp+10Ch] [bp-1080h] BYREF
  int v65; // [sp+124h] [bp-1068h]
  int v66; // [sp+128h] [bp-1064h] BYREF
  _DWORD v67[6]; // [sp+12Ch] [bp-1060h] BYREF
  int v68; // [sp+144h] [bp-1048h]
  _DWORD s[8]; // [sp+148h] [bp-1044h] BYREF
  _DWORD v70[8]; // [sp+168h] [bp-1024h] BYREF
  char v71[4100]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v53, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v71,
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
    "%s start",
    "phy_external_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v71);
  memset(s, 0, sizeof(s));
  memset(v70, 0, sizeof(v70));
  ptr = (char *)malloc(0x300u);
  if ( a4 )
  {
    v8 = a3;
    v51 = a3 - 1;
    v50 = (unsigned __int8)(a4 - 1);
    v9 = &a3[v50];
    v10 = v51;
    v46 = v8;
    do
    {
      while ( 1 )
      {
        v11 = *++v10;
        if ( check_core_reg_with_expect_data_rvn_0(a1, a2, v11, 64, 0xFF000100) )
          break;
        if ( v10 == v9 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v55, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v71,
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
        "%s PHY core %02x pcs lock failed!",
        "phy_external_bist_rvn",
        *v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v71);
    }
    while ( v10 != v9 );
LABEL_6:
    v12 = v51;
    v13 = v51;
    do
    {
      v14 = *++v13;
      sub_99948(a1, v14, 133, 0xFFFF);
      sub_99948(a1, *v13, 134, 1342177279);
    }
    while ( v10 != v13 );
    sub_99904(a1, 132, -2147483647);
    sleep(0xAu);
    do
    {
      while ( 1 )
      {
        v15 = *++v12;
        if ( check_core_reg_with_expect_data_rvn_0(a1, a2, v15, 139, 0xFF0000FF) )
          break;
        if ( v13 == v12 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v57, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v71,
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
        "%s PHY core %02x mac bist failed!",
        "phy_external_bist_rvn",
        *v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v71);
    }
    while ( v13 != v12 );
LABEL_12:
    v16 = a1;
    v52 = &a3[v50 + 1];
    do
    {
      v17 = 128;
      v63 = -2088599168;
      v18 = v16;
      v19 = (int *)((char *)&v63 + 1);
      a1 = v18;
      while ( 1 )
      {
        v20 = ptr;
        v21 = sub_9999C(a1, *v46, v17, ptr);
        if ( v21 )
        {
          v22 = &ptr[12 * v21];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v20 + 3)) != v17 )
            {
              v20 += 12;
              if ( v22 == v20 )
                goto LABEL_21;
            }
            V_LOCK();
            v20 += 12;
            V_INT((int)v59, "chain", *(int *)(a1 + 224));
            logfmt_raw(
              v71,
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
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v20 - 8),
              (unsigned __int8)*(v20 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v20 - 3)),
              bswap32(*((_DWORD *)v20 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v71);
            v23 = &v71[4 * (unsigned __int8)*(v20 - 8)];
            v24 = bswap32(*((_DWORD *)v20 - 3));
            v25 = *((_DWORD *)v23 - 8);
            v26 = v24;
            if ( v24 )
              v26 = 1;
            dword_18BFC8 += 2 * v26;
            *((_DWORD *)v23 - 8) = v25 + 2 * v24;
          }
          while ( v22 != v20 );
        }
LABEL_21:
        if ( v64 == v19 )
          break;
        v27 = *(unsigned __int8 *)v19;
        v19 = (_DWORD *)((char *)v19 + 1);
        v17 = v27;
      }
      v16 = a1;
      v28 = 135;
      v49 = (int *)((char *)&v66 + 1);
      v66 = -1970698105;
      while ( 1 )
      {
        v29 = ptr;
        v30 = sub_9999C(a1, *v46, v28, ptr);
        if ( v30 )
        {
          v31 = &ptr[12 * v30];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v29 + 3)) != v28 )
            {
              v29 += 12;
              if ( v31 == v29 )
                goto LABEL_31;
            }
            V_LOCK();
            v29 += 12;
            V_INT((int)v61, "chain", *(int *)(a1 + 224));
            logfmt_raw(
              v71,
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
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v29 - 8),
              (unsigned __int8)*(v29 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v29 - 3)),
              bswap32(*((_DWORD *)v29 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v71);
            v32 = &v71[4 * (unsigned __int8)*(v29 - 8)];
            v33 = bswap32(*((_DWORD *)v29 - 3));
            v34 = *((_DWORD *)v32 - 16);
            v35 = v33;
            if ( v33 )
              v35 = 1;
            dword_18BFCC += 2 * v35;
            *((_DWORD *)v32 - 16) = v34 + 2 * v33;
          }
          while ( v31 != v29 );
        }
LABEL_31:
        if ( v67 == v49 )
          break;
        v28 = *(unsigned __int8 *)v49;
        v49 = (_DWORD *)((char *)v49 + 1);
      }
      ++v46;
    }
    while ( v46 != v52 );
    v36 = s[0];
    a4 = v70[0];
  }
  else
  {
    sub_99904(a1, 132, -2147483647);
    v36 = 0;
    sleep(0xAu);
  }
  free(ptr);
  v37 = *(_QWORD *)&dword_18BFD0;
  v38 = &s[1];
  v39 = *(_QWORD *)&dword_18BFD8;
  for ( i = &v70[1]; ; ++i )
  {
    v37 += v36;
    v39 += a4;
    if ( v38 == v70 )
      break;
    v41 = *v38++;
    v36 = v41;
    v42 = *i;
    a4 = v42;
  }
  *(_QWORD *)&dword_18BFD0 = v37;
  *(_QWORD *)&dword_18BFD8 = v39;
  V_LOCK();
  V_INT((int)&v63, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v71,
    0x1000u,
    0,
    v65,
    v63,
    v64[0],
    v64[1],
    v64[2],
    v64[3],
    v64[4],
    v64[5],
    v65,
    "[PHY BIST ERR NUM] total 0x%llx",
    v44,
    dword_18BFD0,
    dword_18BFD4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1299,
    60,
    v71);
  V_LOCK();
  V_INT((int)&v66, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v71,
    0x1000u,
    0,
    v68,
    v66,
    v67[0],
    v67[1],
    v67[2],
    v67[3],
    v67[4],
    v67[5],
    v68,
    "[PHY BIST LOST NUM] total 0x%llx",
    v45,
    dword_18BFD8,
    dword_18BFDC);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v71);
  return 0;
}
