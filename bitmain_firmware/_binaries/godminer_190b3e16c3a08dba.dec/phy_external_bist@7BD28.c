int __fastcall phy_external_bist(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
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
  int v20; // r8
  char *v21; // r4
  int v22; // r0
  char *v23; // r5
  char *v24; // r2
  unsigned __int16 v25; // r3
  int v26; // r1
  int v27; // r12
  unsigned __int16 v28; // t1
  unsigned __int16 v29; // r6
  char *v30; // r4
  int v31; // r0
  char *v32; // r5
  char *v33; // r2
  unsigned __int16 v34; // r3
  int v35; // r1
  int v36; // r12
  unsigned int v37; // r5
  __int64 v38; // r0
  unsigned int *v39; // r12
  __int64 v40; // r2
  unsigned int *i; // lr
  unsigned int v42; // t1
  unsigned int v43; // t1
  int v45; // [sp+24h] [bp-1168h]
  int v46; // [sp+24h] [bp-1168h]
  unsigned __int8 *v47; // [sp+3Ch] [bp-1150h]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v50; // [sp+48h] [bp-1144h]
  int v51; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v52; // [sp+50h] [bp-113Ch]
  unsigned __int8 *v53; // [sp+5Ch] [bp-1130h]
  _DWORD v54[7]; // [sp+68h] [bp-1124h] BYREF
  int v55; // [sp+84h] [bp-1108h]
  _DWORD v56[7]; // [sp+88h] [bp-1104h] BYREF
  int v57; // [sp+A4h] [bp-10E8h]
  _DWORD v58[7]; // [sp+A8h] [bp-10E4h] BYREF
  int v59; // [sp+C4h] [bp-10C8h]
  _DWORD v60[7]; // [sp+C8h] [bp-10C4h] BYREF
  int v61; // [sp+E4h] [bp-10A8h]
  _DWORD v62[7]; // [sp+E8h] [bp-10A4h] BYREF
  int v63; // [sp+104h] [bp-1088h]
  int v64; // [sp+108h] [bp-1084h] BYREF
  _DWORD v65[6]; // [sp+10Ch] [bp-1080h] BYREF
  int v66; // [sp+124h] [bp-1068h]
  int v67; // [sp+128h] [bp-1064h] BYREF
  _DWORD v68[6]; // [sp+12Ch] [bp-1060h] BYREF
  int v69; // [sp+144h] [bp-1048h]
  _DWORD s[8]; // [sp+148h] [bp-1044h] BYREF
  _DWORD v71[8]; // [sp+168h] [bp-1024h] BYREF
  char v72[4100]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v54, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v72,
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
    1097,
    60,
    v72);
  memset(s, 0, sizeof(s));
  memset(v71, 0, sizeof(v71));
  ptr = (char *)malloc(0x600u);
  if ( a4 )
  {
    v8 = a3;
    v52 = a3 - 1;
    v51 = (unsigned __int8)(a4 - 1);
    v9 = &a3[v51];
    v10 = v52;
    v47 = v8;
    do
    {
      while ( 1 )
      {
        v11 = *++v10;
        if ( check_core_reg_with_expect_data(a1, a2, v11, 64, 0xFF000100) )
          break;
        if ( v10 == v9 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v56, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v72,
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
        "%s PHY core %02x pcs lock failed!",
        "phy_external_bist",
        *v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        1229,
        100,
        v72);
    }
    while ( v10 != v9 );
LABEL_6:
    v12 = v52;
    v13 = v52;
    do
    {
      v14 = *++v13;
      sub_74494(a1, v14, 133, 0xFFFF);
      sub_74494(a1, *v13, 134, 1342177279);
    }
    while ( v10 != v13 );
    sub_74450(a1, 132, -2147483647);
    sleep(0xAu);
    do
    {
      while ( 1 )
      {
        v15 = *++v12;
        if ( check_core_reg_with_expect_data(a1, a2, v15, 139, 0xFF0000FF) )
          break;
        if ( v13 == v12 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v58, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v72,
        0x1000u,
        0,
        v59,
        v58[0],
        v58[1],
        v58[2],
        v58[3],
        v58[4],
        v58[5],
        v58[6],
        v59,
        "%s PHY core %02x mac bist failed!",
        "phy_external_bist",
        *v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        174,
        "phy_external_bist",
        17,
        1251,
        100,
        v72);
    }
    while ( v13 != v12 );
LABEL_12:
    v53 = &a3[v51 + 1];
    v16 = a1;
    do
    {
      v17 = 128;
      v64 = -2088599168;
      v18 = v16;
      v19 = (int *)((char *)&v64 + 1);
      v20 = v18;
      while ( 1 )
      {
        v21 = ptr;
        v22 = sub_744E8(v20, *v47, v17, ptr);
        if ( v22 )
        {
          v23 = &ptr[12 * v22];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v21 + 3)) != v17 )
            {
              v21 += 12;
              if ( v23 == v21 )
                goto LABEL_21;
            }
            V_LOCK();
            v21 += 12;
            V_INT((int)v60, "chain", *(int *)(v20 + 224));
            logfmt_raw(
              v72,
              0x1000u,
              0,
              v61,
              v60[0],
              v60[1],
              v60[2],
              v60[3],
              v60[4],
              v60[5],
              v60[6],
              v61,
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v21 - 8),
              (unsigned __int8)*(v21 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v21 - 3)),
              bswap32(*((_DWORD *)v21 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              1267,
              20,
              v72);
            v24 = &v72[4 * (unsigned __int8)*(v21 - 8)];
            v25 = bswap32(*((_DWORD *)v21 - 3));
            v26 = *((_DWORD *)v24 - 8);
            v27 = v25;
            if ( v25 )
              v27 = 1;
            dword_18BF50 += 2 * v27;
            *((_DWORD *)v24 - 8) = v26 + 2 * v25;
          }
          while ( v23 != v21 );
        }
LABEL_21:
        if ( v65 == v19 )
          break;
        v28 = *(unsigned __int8 *)v19;
        v19 = (_DWORD *)((char *)v19 + 1);
        v17 = v28;
      }
      v16 = v20;
      v29 = 135;
      v50 = (int *)((char *)&v67 + 1);
      v67 = -1970698105;
      while ( 1 )
      {
        v30 = ptr;
        v31 = sub_744E8(v20, *v47, v29, ptr);
        if ( v31 )
        {
          v32 = &ptr[12 * v31];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v30 + 3)) != v29 )
            {
              v30 += 12;
              if ( v32 == v30 )
                goto LABEL_31;
            }
            V_LOCK();
            v30 += 12;
            V_INT((int)v62, "chain", *(int *)(v20 + 224));
            logfmt_raw(
              v72,
              0x1000u,
              0,
              v63,
              v62[0],
              v62[1],
              v62[2],
              v62[3],
              v62[4],
              v62[5],
              v62[6],
              v63,
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v30 - 8),
              (unsigned __int8)*(v30 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v30 - 3)),
              bswap32(*((_DWORD *)v30 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              174,
              "phy_external_bist",
              17,
              1285,
              20,
              v72);
            v33 = &v72[4 * (unsigned __int8)*(v30 - 8)];
            v34 = bswap32(*((_DWORD *)v30 - 3));
            v35 = *((_DWORD *)v33 - 16);
            v36 = v34;
            if ( v34 )
              v36 = 1;
            dword_18BF54 += 2 * v36;
            *((_DWORD *)v33 - 16) = v35 + 2 * v34;
          }
          while ( v32 != v30 );
        }
LABEL_31:
        if ( v68 == v50 )
          break;
        v29 = *(unsigned __int8 *)v50;
        v50 = (_DWORD *)((char *)v50 + 1);
      }
      ++v47;
    }
    while ( v47 != v53 );
    v37 = s[0];
    a4 = v71[0];
    a1 = v20;
  }
  else
  {
    sub_74450(a1, 132, -2147483647);
    v37 = 0;
    sleep(0xAu);
  }
  free(ptr);
  v38 = *(_QWORD *)&dword_18BF58;
  v39 = &s[1];
  v40 = *(_QWORD *)&dword_18BF60;
  for ( i = &v71[1]; ; ++i )
  {
    v38 += v37;
    v40 += a4;
    if ( v39 == v71 )
      break;
    v42 = *v39++;
    v37 = v42;
    v43 = *i;
    a4 = v43;
  }
  *(_QWORD *)&dword_18BF58 = v38;
  *(_QWORD *)&dword_18BF60 = v40;
  V_LOCK();
  V_INT((int)&v64, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v72,
    0x1000u,
    0,
    v66,
    v64,
    v65[0],
    v65[1],
    v65[2],
    v65[3],
    v65[4],
    v65[5],
    v66,
    "[PHY BIST ERR NUM] total 0x%llx",
    v45,
    dword_18BF58,
    dword_18BF5C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    1301,
    60,
    v72);
  V_LOCK();
  V_INT((int)&v67, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v72,
    0x1000u,
    0,
    v69,
    v67,
    v68[0],
    v68[1],
    v68[2],
    v68[3],
    v68[4],
    v68[5],
    v69,
    "[PHY BIST LOST NUM] total 0x%llx",
    v46,
    dword_18BF60,
    dword_18BF64);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist",
    17,
    1302,
    60,
    v72);
  return 0;
}
