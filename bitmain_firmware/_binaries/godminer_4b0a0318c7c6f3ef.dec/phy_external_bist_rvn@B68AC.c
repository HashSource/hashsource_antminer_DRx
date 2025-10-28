int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  char *v8; // r1
  int v9; // r5
  int v10; // r1
  char *v11; // r1
  unsigned __int8 *v12; // r3
  char *v13; // r10
  unsigned __int8 *v14; // r6
  unsigned __int8 *v15; // r4
  unsigned __int16 v16; // t1
  unsigned __int8 *v17; // r5
  unsigned __int8 *v18; // r6
  unsigned __int8 v19; // t1
  int v20; // r10
  char *v21; // r3
  unsigned __int16 v22; // t1
  char *v23; // r1
  int v24; // r0
  int v25; // r8
  int v26; // r10
  unsigned __int16 v27; // r6
  int v28; // r3
  _DWORD *v29; // r10
  char *v30; // r4
  int v31; // r0
  char *v32; // r5
  char *v33; // r2
  unsigned __int16 v34; // r3
  int v35; // r1
  int v36; // r12
  unsigned __int16 v37; // t1
  int v38; // r3
  unsigned __int16 v39; // r6
  char *v40; // r4
  int v41; // r0
  char *v42; // r5
  char *v43; // r2
  unsigned __int16 v44; // r3
  int v45; // r1
  int v46; // r12
  unsigned int v47; // r5
  __int64 v48; // r0
  unsigned int *v49; // r12
  __int64 v50; // r2
  unsigned int *i; // lr
  unsigned int v52; // t1
  unsigned int v53; // t1
  char *v54; // r1
  int v55; // r1
  char *v56; // r1
  int v57; // r1
  int v59; // [sp+24h] [bp-1168h]
  int v60; // [sp+24h] [bp-1168h]
  unsigned __int8 *v61; // [sp+3Ch] [bp-1150h]
  char *v62; // [sp+40h] [bp-114Ch]
  char *v63; // [sp+40h] [bp-114Ch]
  char *v64; // [sp+40h] [bp-114Ch]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v67; // [sp+48h] [bp-1144h]
  int v68; // [sp+4Ch] [bp-1140h]
  int v69; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v70; // [sp+50h] [bp-113Ch]
  int v71; // [sp+54h] [bp-1138h]
  unsigned __int8 *v72; // [sp+5Ch] [bp-1130h]
  _DWORD v73[7]; // [sp+68h] [bp-1124h] BYREF
  int v74; // [sp+84h] [bp-1108h]
  _DWORD v75[7]; // [sp+88h] [bp-1104h] BYREF
  int v76; // [sp+A4h] [bp-10E8h]
  _DWORD v77[7]; // [sp+A8h] [bp-10E4h] BYREF
  int v78; // [sp+C4h] [bp-10C8h]
  _DWORD v79[7]; // [sp+C8h] [bp-10C4h] BYREF
  int v80; // [sp+E4h] [bp-10A8h]
  _DWORD v81[7]; // [sp+E8h] [bp-10A4h] BYREF
  int v82; // [sp+104h] [bp-1088h]
  int v83; // [sp+108h] [bp-1084h] BYREF
  _DWORD v84[6]; // [sp+10Ch] [bp-1080h] BYREF
  int v85; // [sp+124h] [bp-1068h]
  int v86; // [sp+128h] [bp-1064h] BYREF
  _DWORD v87[6]; // [sp+12Ch] [bp-1060h] BYREF
  int v88; // [sp+144h] [bp-1048h]
  _DWORD s[8]; // [sp+148h] [bp-1044h] BYREF
  _DWORD v90[8]; // [sp+168h] [bp-1024h] BYREF
  char v91[4100]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  V_INT((int)v73, v8, *(int *)(a1 + 256));
  LOWORD(v9) = -14460;
  HIWORD(v9) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(
    v91,
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
    v9,
    "phy_external_bist_rvn");
  V_UNLOCK();
  LOWORD(v10) = 11320;
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v10, 174, "phy_external_bist_rvn", 21, 1095, 60, v91);
  memset(s, 0, sizeof(s));
  memset(v90, 0, sizeof(v90));
  ptr = (char *)malloc(0x1800u);
  if ( a4 )
  {
    LOWORD(v11) = -8392;
    v12 = a3;
    v70 = a3 - 1;
    LOWORD(v13) = 27372;
    HIWORD(v11) = (unsigned int)"" >> 16;
    v68 = (unsigned __int8)(a4 - 1);
    v14 = &a3[v68];
    v15 = v70;
    v62 = v11;
    v61 = v12;
    do
    {
      while ( 1 )
      {
        v16 = *++v15;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v16, 64, 0xFF000100) )
          break;
        if ( v15 == v14 )
          goto LABEL_6;
      }
      V_LOCK();
      HIWORD(v13) = (unsigned int)":" >> 16;
      V_INT((int)v75, v13, *(int *)(a1 + 256));
      logfmt_raw(
        v91,
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
        v62,
        "phy_external_bist_rvn",
        *v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v91);
    }
    while ( v15 != v14 );
LABEL_6:
    v17 = v70;
    v18 = v70;
    do
    {
      v19 = *++v18;
      sub_AEAEC(a1, v19, 133, 0xFFFF);
      sub_AEAEC(a1, *v18, 134, 1342177279);
    }
    while ( v15 != v18 );
    sub_AEAA8(a1, 132, -2147483647);
    LOWORD(v20) = -8356;
    sleep(0xAu);
    LOWORD(v21) = 27372;
    HIWORD(v21) = (unsigned int)":" >> 16;
    v63 = v21;
    do
    {
      while ( 1 )
      {
        v22 = *++v17;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v22, 139, 0xFF0000FF) )
          break;
        if ( v18 == v17 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v77, v63, *(int *)(a1 + 256));
      HIWORD(v20) = (unsigned int)"1 rx is invalid!" >> 16;
      logfmt_raw(
        v91,
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
        v20,
        "phy_external_bist_rvn",
        *v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v91);
    }
    while ( v18 != v17 );
LABEL_12:
    LOWORD(v25) = 16368;
    LOWORD(v23) = 27372;
    LOWORD(v24) = -8260;
    HIWORD(v25) = (unsigned int)&dword_1B3FF8 >> 16;
    v26 = a1;
    v72 = &a3[v68 + 1];
    HIWORD(v23) = (unsigned int)":" >> 16;
    HIWORD(v24) = (unsigned int)" invalid!" >> 16;
    v64 = v23;
    v71 = v24;
    do
    {
      v27 = 128;
      v83 = -2088599168;
      v28 = v26;
      v29 = (int *)((char *)&v83 + 1);
      a1 = v28;
      while ( 1 )
      {
        v30 = ptr;
        v31 = sub_AEB3C(a1, *v61, v27, ptr);
        if ( v31 )
        {
          v32 = &ptr[12 * v31];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v30 + 3)) != v27 )
            {
              v30 += 12;
              if ( v32 == v30 )
                goto LABEL_21;
            }
            V_LOCK();
            v30 += 12;
            V_INT((int)v79, v64, *(int *)(a1 + 256));
            logfmt_raw(
              v91,
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
              v71,
              (unsigned __int8)*(v30 - 8),
              (unsigned __int8)*(v30 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v30 - 3)),
              bswap32(*((_DWORD *)v30 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v91);
            v33 = &v91[4 * (unsigned __int8)*(v30 - 8)];
            v34 = bswap32(*((_DWORD *)v30 - 3));
            v35 = *((_DWORD *)v33 - 8);
            v36 = v34;
            if ( v34 )
              v36 = 1;
            *(_DWORD *)v25 += 2 * v36;
            *((_DWORD *)v33 - 8) = v35 + 2 * v34;
          }
          while ( v32 != v30 );
        }
LABEL_21:
        if ( v84 == v29 )
          break;
        v37 = *(unsigned __int8 *)v29;
        v29 = (_DWORD *)((char *)v29 + 1);
        v27 = v37;
      }
      LOWORD(v38) = -8320;
      HIWORD(v38) = (unsigned int)" rx ack de-assert!" >> 16;
      v26 = a1;
      v69 = v38;
      v39 = 135;
      v67 = (int *)((char *)&v86 + 1);
      v86 = -1970698105;
      while ( 1 )
      {
        v40 = ptr;
        v41 = sub_AEB3C(a1, *v61, v39, ptr);
        if ( v41 )
        {
          v42 = &ptr[12 * v41];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v40 + 3)) != v39 )
            {
              v40 += 12;
              if ( v42 == v40 )
                goto LABEL_31;
            }
            V_LOCK();
            v40 += 12;
            V_INT((int)v81, v64, *(int *)(a1 + 256));
            logfmt_raw(
              v91,
              0x1000u,
              0,
              v82,
              v81[0],
              v81[1],
              v81[2],
              v81[3],
              v81[4],
              v81[5],
              v81[6],
              v82,
              v69,
              (unsigned __int8)*(v40 - 8),
              (unsigned __int8)*(v40 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v40 - 3)),
              bswap32(*((_DWORD *)v40 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              174,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v91);
            v43 = &v91[4 * (unsigned __int8)*(v40 - 8)];
            v44 = bswap32(*((_DWORD *)v40 - 3));
            v45 = *((_DWORD *)v43 - 16);
            v46 = v44;
            if ( v44 )
              v46 = 1;
            *(_DWORD *)(v25 + 4) += 2 * v46;
            *((_DWORD *)v43 - 16) = v45 + 2 * v44;
          }
          while ( v42 != v40 );
        }
LABEL_31:
        if ( v87 == v67 )
          break;
        v39 = *(unsigned __int8 *)v67;
        v67 = (_DWORD *)((char *)v67 + 1);
      }
      ++v61;
    }
    while ( v61 != v72 );
    v47 = s[0];
    a4 = v90[0];
  }
  else
  {
    LOWORD(v25) = 16368;
    sub_AEAA8(a1, 132, -2147483647);
    v47 = 0;
    sleep(0xAu);
    HIWORD(v25) = (unsigned int)&dword_1B3FF8 >> 16;
  }
  free(ptr);
  v48 = *(_QWORD *)(v25 + 8);
  v49 = &s[1];
  v50 = *(_QWORD *)(v25 + 0x10);
  for ( i = &v90[1]; ; ++i )
  {
    v48 += v47;
    v50 += a4;
    if ( v49 == v90 )
      break;
    v52 = *v49++;
    v47 = v52;
    v53 = *i;
    a4 = v53;
  }
  *(_QWORD *)(v25 + 8) = v48;
  *(_QWORD *)(v25 + 0x10) = v50;
  V_LOCK();
  LOWORD(v54) = 27372;
  HIWORD(v54) = (unsigned int)":" >> 16;
  V_INT((int)&v83, v54, *(int *)(a1 + 256));
  logfmt_raw(
    v91,
    0x1000u,
    0,
    v85,
    v83,
    v84[0],
    v84[1],
    v84[2],
    v84[3],
    v84[4],
    v84[5],
    v85,
    "[PHY BIST ERR NUM] total 0x%llx",
    v59,
    *(_DWORD *)(v25 + 8),
    *(_DWORD *)(v25 + 8 + 4));
  V_UNLOCK();
  LOWORD(v55) = 11320;
  HIWORD(v55) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v55, 174, "phy_external_bist_rvn", 21, 1299, 60, v91);
  V_LOCK();
  LOWORD(v56) = 27372;
  HIWORD(v56) = (unsigned int)":" >> 16;
  V_INT((int)&v86, v56, *(int *)(a1 + 256));
  logfmt_raw(
    v91,
    0x1000u,
    0,
    v88,
    v86,
    v87[0],
    v87[1],
    v87[2],
    v87[3],
    v87[4],
    v87[5],
    v88,
    "[PHY BIST LOST NUM] total 0x%llx",
    v60,
    *(_DWORD *)(v25 + 0x10),
    *(_DWORD *)(v25 + 0x10 + 4));
  V_UNLOCK();
  LOWORD(v57) = 11320;
  HIWORD(v57) = (unsigned int)&unk_172FF8 >> 16;
  zlog(g_zc, v57, 174, "phy_external_bist_rvn", 21, 1300, 60, v91);
  return 0;
}
