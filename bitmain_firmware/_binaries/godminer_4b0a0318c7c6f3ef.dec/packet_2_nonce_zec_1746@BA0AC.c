int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r4
  unsigned int v11; // r0
  unsigned int v12; // r9
  int v13; // r6
  int v14; // r4
  int v15; // r10
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // r4
  int v20; // r6
  unsigned __int8 *v21; // r8
  int v22; // r3
  _DWORD *v23; // r3
  int v24; // r1
  int v25; // r2
  char *v26; // r1
  int i; // r4
  char v28; // r3
  int v29; // r3
  _DWORD *v30; // r3
  int v31; // r2
  int v32; // r1
  int v33; // r3
  int v34; // r4
  int v35; // r0
  int v36; // r1
  int v37; // r3
  int v38; // r3
  int v39; // r4
  int v40; // r0
  int v41; // r1
  int v42; // r3
  int v43; // r3
  int v44; // r0
  int v45; // r4
  int v46; // r3
  int v47; // r4
  char *v48; // r5
  char *v49; // r11
  char *v50; // r0
  int v51; // r3
  char v52; // r2
  int v53; // r2
  int v55; // [sp+14h] [bp-1018h]
  int v56; // [sp+18h] [bp-1014h]
  int v57; // [sp+1Ch] [bp-1010h]
  unsigned __int16 v58; // [sp+26h] [bp-1006h]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v11 = (unsigned int)(unsigned __int8)a2[3] / *(_DWORD *)(a1 + 444);
  v12 = v11;
  if ( v11 > 5 )
  {
    V_LOCK();
    LOWORD(v16) = 19120;
    HIWORD(v16) = (unsigned int)"all_voltage" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v16, "packet_2_nonce_zec_1746", v12);
    V_UNLOCK();
    LOWORD(v17) = 20532;
    LOWORD(v18) = 18512;
    HIWORD(v17) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v18) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    zlog(*v17, v18, 171, "packet_2_nonce_zec_1746", 23, 394, 80, var1004);
    return 14;
  }
  else
  {
    v13 = 1456 * v11;
    v14 = v7 & 0xF;
    v15 = *(_DWORD *)(a1 + 840);
    v56 = (unsigned __int8)a2[4];
    memcpy((void *)(v15 + 91 * (__int16)v14 + 1456 * v11 + 27649), a2 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v19 = 0;
      v20 = v15 + 27649 + v13;
      v21 = (unsigned __int8 *)v20;
      do
      {
        v58 = __rev16(BM_CRC16(v21, 89));
        if ( __PAIR64__(HIBYTE(v58), (unsigned __int8)v58) != __PAIR64__(v21[90], v21[89]) )
        {
          V_LOCK();
          LOWORD(v22) = 19144;
          HIWORD(v22) = (unsigned int)"an_voltage2" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v22,
            v58,
            *(unsigned __int8 *)(v20 + 91 * v19 + 89),
            *(unsigned __int8 *)(v20 + 91 * v19 + 90));
          V_UNLOCK();
          LOWORD(v23) = 20532;
          HIWORD(v23) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v24) = 18512;
          HIWORD(v24) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
          zlog(*v23, v24, 171, "verify_nonce_integrality_zec_1746", 33, 294, 20, var1004);
          return 11;
        }
        ++v19;
        v21 += 91;
        v25 = 0;
      }
      while ( v19 != 16 );
      v26 = (char *)v20;
      for ( i = 0; i != 16; ++i )
      {
        v28 = *v26;
        v26 += 91;
        if ( (v28 & 0xF) != i )
        {
          V_LOCK();
          LOWORD(v29) = 19192;
          HIWORD(v29) = (unsigned int)"enkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
          logfmt_raw(var1004, 0x1000u, 0, v29, i);
          V_UNLOCK();
          LOWORD(v30) = 20532;
          HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
          v31 = 303;
LABEL_15:
          LOWORD(v32) = 18512;
          HIWORD(v32) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
          zlog(*v30, v32, 171, "verify_nonce_integrality_zec_1746", 33, v31, 20, var1004);
          return 47;
        }
      }
      v33 = v20;
      v34 = 0;
      do
      {
        v35 = *(unsigned __int8 *)(v33 + 92);
        v36 = v34 + 1;
        v33 += 91;
        if ( v35 != *(unsigned __int8 *)(v20 + 1) )
        {
          V_LOCK();
          LOWORD(v37) = 19220;
          HIWORD(v37) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v37,
            *(unsigned __int8 *)(v20 + 91 * v34 + 1),
            *(unsigned __int8 *)(v20 + 91 * (v34 + 1) + 1));
          V_UNLOCK();
          LOWORD(v30) = 20532;
          HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
          v31 = 312;
          goto LABEL_15;
        }
        ++v34;
      }
      while ( v36 != 15 );
      v38 = v20;
      v39 = 0;
      do
      {
        v40 = *(unsigned __int8 *)(v38 + 93);
        v41 = v39 + 1;
        v38 += 91;
        if ( v40 != *(unsigned __int8 *)(v20 + 2) )
        {
          V_LOCK();
          LOWORD(v42) = 19256;
          HIWORD(v42) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v42,
            *(unsigned __int8 *)(v20 + 91 * v39 + 2),
            *(unsigned __int8 *)(v20 + 91 * (v39 + 1) + 2));
          V_UNLOCK();
          LOWORD(v30) = 20532;
          HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
          v31 = 321;
          goto LABEL_15;
        }
        ++v39;
      }
      while ( v41 != 15 );
      v43 = v20;
      do
      {
        v44 = *(unsigned __int8 *)(v43 + 94);
        v45 = v25 + 1;
        v43 += 91;
        if ( v44 != *(unsigned __int8 *)(v20 + 3) )
        {
          v55 = v25;
          V_LOCK();
          LOWORD(v46) = 19292;
          HIWORD(v46) = (unsigned int)"in_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            v46,
            *(unsigned __int8 *)(v20 + 91 * v55 + 3),
            *(unsigned __int8 *)(v20 + 91 * v45 + 3),
            v12);
          V_UNLOCK();
          LOWORD(v30) = 20532;
          HIWORD(v30) = (unsigned int)&g_fan_zc >> 16;
          v31 = 330;
          goto LABEL_15;
        }
        ++v25;
      }
      while ( v45 != 15 );
      v57 = 1357 * v12;
      v47 = v15 + 36385 + 1357 * v12;
      v48 = (char *)v47;
      v49 = (char *)(v20 + 4);
      do
      {
        v50 = v48;
        v48 += 85;
        memcpy(v50, v49, 0x55u);
        v49 += 91;
      }
      while ( (char *)(v47 + 1275) != v48 );
      memcpy((void *)(v47 + 1275), (const void *)(v20 + 1369), 0x45u);
      *(_DWORD *)(v47 + 1352) = *(_DWORD *)(v20 + 1450);
      *(_BYTE *)(v47 + 1344) = *(_BYTE *)(v20 + 1366);
      *(_BYTE *)(v47 + 1345) = *(_BYTE *)(v20 + 1367);
      *(_BYTE *)(v47 + 1346) = *(_BYTE *)(v20 + 1368);
      *(_BYTE *)(v47 + 1347) = *(_BYTE *)(v20 + 1441);
      *(_DWORD *)(v47 + 1348) = *(_DWORD *)(v20 + 1442);
      v51 = *(_DWORD *)(v15 + 8 * v56);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v15 + 8 * v56 + 4);
      *(_DWORD *)a3 = v51;
      *a7 = v51;
      strcpy((char *)(a3 + 16), (const char *)(v15 + 32 * (v56 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v15 + v57 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v15 + v57 + 36385), 0x540u);
      v52 = *(_BYTE *)(v15 + 1357 * v12 + 37732);
      *(_BYTE *)(a3 + 53) = v56;
      *(_BYTE *)(a3 + 52) = v52;
      *a6 = v12;
      v53 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v12;
      *a5 = v53;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}
