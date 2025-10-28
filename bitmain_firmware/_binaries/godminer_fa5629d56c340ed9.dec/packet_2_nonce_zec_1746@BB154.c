int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r4
  unsigned int v11; // r0
  unsigned int v12; // r9
  int v13; // r6
  int v14; // r4
  int v15; // r10
  int v16; // r4
  int v17; // r6
  unsigned __int8 *v18; // r8
  int v19; // r2
  char *v20; // r1
  int i; // r4
  char v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r0
  int v27; // r1
  int v28; // r3
  int v29; // r4
  int v30; // r0
  int v31; // r1
  int v32; // r3
  int v33; // r0
  int v34; // r4
  int v35; // r4
  char *v36; // r5
  char *v37; // r11
  char *v38; // r0
  int v39; // r3
  char v40; // r2
  int v41; // r2
  int v43; // [sp+14h] [bp-1018h]
  int v44; // [sp+18h] [bp-1014h]
  int v45; // [sp+1Ch] [bp-1010h]
  unsigned __int16 v46; // [sp+26h] [bp-1006h]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v11 = (unsigned int)(unsigned __int8)a2[3] / *(_DWORD *)(a1 + 452);
  v12 = v11;
  if ( v11 > 5 )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s chip %d is not exist", "packet_2_nonce_zec_1746", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      171,
      "packet_2_nonce_zec_1746",
      23,
      394,
      80,
      var1004);
    return 14;
  }
  else
  {
    v13 = 1456 * v11;
    v14 = v7 & 0xF;
    v15 = *(_DWORD *)(a1 + 848);
    v44 = (unsigned __int8)a2[4];
    memcpy((void *)(v15 + 91 * (__int16)v14 + 1456 * v11 + 27649), a2 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v16 = 0;
      v17 = v15 + 27649 + v13;
      v18 = (unsigned __int8 *)v17;
      do
      {
        v46 = __rev16(BM_CRC16(v18, 89));
        if ( __PAIR64__(HIBYTE(v46), (unsigned __int8)v46) != __PAIR64__(v18[90], v18[89]) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "nonce crc error, calc %04x, expected %02x%02x",
            v46,
            *(unsigned __int8 *)(v17 + 91 * v16 + 89),
            *(unsigned __int8 *)(v17 + 91 * v16 + 90));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            171,
            "verify_nonce_integrality_zec_1746",
            33,
            294,
            20,
            var1004);
          return 11;
        }
        ++v16;
        v18 += 91;
        v19 = 0;
      }
      while ( v16 != 16 );
      v20 = (char *)v17;
      for ( i = 0; i != 16; ++i )
      {
        v22 = *v20;
        v20 += 91;
        if ( (v22 & 0xF) != i )
        {
          V_LOCK();
          logfmt_raw(var1004, 0x1000u, 0, "nonce is not continous i=%d", i);
          V_UNLOCK();
          v23 = 303;
LABEL_15:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            171,
            "verify_nonce_integrality_zec_1746",
            33,
            v23,
            20,
            var1004);
          return 47;
        }
      }
      v24 = v17;
      v25 = 0;
      do
      {
        v26 = *(unsigned __int8 *)(v24 + 92);
        v27 = v25 + 1;
        v24 += 91;
        if ( v26 != *(unsigned __int8 *)(v17 + 1) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "chip_addr is different %02x != %02x",
            *(unsigned __int8 *)(v17 + 91 * v25 + 1),
            *(unsigned __int8 *)(v17 + 91 * (v25 + 1) + 1));
          V_UNLOCK();
          v23 = 312;
          goto LABEL_15;
        }
        ++v25;
      }
      while ( v27 != 15 );
      v28 = v17;
      v29 = 0;
      do
      {
        v30 = *(unsigned __int8 *)(v28 + 93);
        v31 = v29 + 1;
        v28 += 91;
        if ( v30 != *(unsigned __int8 *)(v17 + 2) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "workID is different %02x != %02x",
            *(unsigned __int8 *)(v17 + 91 * v29 + 2),
            *(unsigned __int8 *)(v17 + 91 * (v29 + 1) + 2));
          V_UNLOCK();
          v23 = 321;
          goto LABEL_15;
        }
        ++v29;
      }
      while ( v31 != 15 );
      v32 = v17;
      do
      {
        v33 = *(unsigned __int8 *)(v32 + 94);
        v34 = v19 + 1;
        v32 += 91;
        if ( v33 != *(unsigned __int8 *)(v17 + 3) )
        {
          v43 = v19;
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "nonceID is different %02x != %02x chipid=%d",
            *(unsigned __int8 *)(v17 + 91 * v43 + 3),
            *(unsigned __int8 *)(v17 + 91 * v34 + 3),
            v12);
          V_UNLOCK();
          v23 = 330;
          goto LABEL_15;
        }
        ++v19;
      }
      while ( v34 != 15 );
      v45 = 1357 * v12;
      v35 = v15 + 36385 + 1357 * v12;
      v36 = (char *)v35;
      v37 = (char *)(v17 + 4);
      do
      {
        v38 = v36;
        v36 += 85;
        memcpy(v38, v37, 0x55u);
        v37 += 91;
      }
      while ( (char *)(v35 + 1275) != v36 );
      memcpy((void *)(v35 + 1275), (const void *)(v17 + 1369), 0x45u);
      *(_DWORD *)(v35 + 1352) = *(_DWORD *)(v17 + 1450);
      *(_BYTE *)(v35 + 1344) = *(_BYTE *)(v17 + 1366);
      *(_BYTE *)(v35 + 1345) = *(_BYTE *)(v17 + 1367);
      *(_BYTE *)(v35 + 1346) = *(_BYTE *)(v17 + 1368);
      *(_BYTE *)(v35 + 1347) = *(_BYTE *)(v17 + 1441);
      *(_DWORD *)(v35 + 1348) = *(_DWORD *)(v17 + 1442);
      v39 = *(_DWORD *)(v15 + 8 * v44);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v15 + 8 * v44 + 4);
      *(_DWORD *)a3 = v39;
      *a7 = v39;
      strcpy((char *)(a3 + 16), (const char *)(v15 + 32 * (v44 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v15 + v45 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v15 + v45 + 36385), 0x540u);
      v40 = *(_BYTE *)(v15 + 1357 * v12 + 37732);
      *(_BYTE *)(a3 + 53) = v44;
      *(_BYTE *)(a3 + 52) = v40;
      *a6 = v12;
      v41 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v12;
      *a5 = v41;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}
