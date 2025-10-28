int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  int v2; // r7
  int v4; // r4
  unsigned int v6; // r8
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r9
  unsigned int v10; // r7
  unsigned __int8 *v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // t1
  unsigned int v17; // t1
  bool v18; // cc
  char *v19; // r1
  int v20; // r4
  _DWORD *v21; // r3
  int v22; // r1
  char *v24; // r1
  int v25; // r4
  int v26; // r5
  _DWORD *v27; // r3
  int v28; // lr
  int v29; // r1
  char *v30; // r1
  _DWORD *v31; // r3
  int v32; // r1
  char *v33; // r1
  int v34; // r5
  char *v35; // r1
  int v36; // r5
  _DWORD v37[7]; // [sp+38h] [bp-1818h] BYREF
  int v38; // [sp+54h] [bp-17FCh]
  _DWORD v39[7]; // [sp+58h] [bp-17F8h] BYREF
  int v40; // [sp+74h] [bp-17DCh]
  _DWORD v41[7]; // [sp+78h] [bp-17D8h] BYREF
  int v42; // [sp+94h] [bp-17BCh]
  _DWORD v43[7]; // [sp+98h] [bp-17B8h] BYREF
  int v44; // [sp+B4h] [bp-179Ch]
  _DWORD v45[7]; // [sp+B8h] [bp-1798h] BYREF
  int v46; // [sp+D4h] [bp-177Ch]
  _BYTE v47[32]; // [sp+D8h] [bp-1778h] BYREF
  char v48[32]; // [sp+F8h] [bp-1758h] BYREF
  char v49[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  char v51[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v4 = *(_DWORD *)(a1 + 840);
  v6 = *(_DWORD *)(v4 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v4 + 140 * v2 + 5120), 0x88u);
  v7 = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  s[34] = v7;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v49, 0xC8u, 9);
  equihash_blake2b_update((int)v49, (char *)s, 140);
  Sha256_Onestep((char *)s, 1487, (int)v48);
  Sha256_Onestep(v48, 32, (int)v47);
  reverse_hex((int)v47, 0x20u);
  v8 = target_to_diff_zec((int)v47);
  v9 = *(unsigned __int8 *)(a2 + 52);
  v10 = v8;
  if ( v9 != v8 )
  {
    V_LOCK();
    LOWORD(v30) = 27372;
    HIWORD(v30) = (unsigned int)":" >> 16;
    V_INT((int)v37, v30, *(int *)(a1 + 256));
    logfmt_raw(
      v51,
      0x1000u,
      0,
      v38,
      v37[0],
      v37[1],
      v37[2],
      v37[3],
      v37[4],
      v37[5],
      v37[6],
      v38,
      "hw error, type %d, calculate diff %d, chip return diff %d,",
      3,
      v10,
      *(unsigned __int8 *)(a2 + 52));
    V_UNLOCK();
    LOWORD(v31) = 20532;
    HIWORD(v31) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v32) = 18512;
    HIWORD(v32) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    zlog(*v31, v32, 171, "check_nonce_zec_1746", 20, 886, 20, v51);
    return 3;
  }
  if ( v9 <= 0x11 )
  {
    V_LOCK();
    LOWORD(v24) = 27372;
    HIWORD(v24) = (unsigned int)":" >> 16;
    v25 = 2;
    V_INT((int)v39, v24, *(int *)(a1 + 256));
    LOWORD(v26) = 18960;
    HIWORD(v26) = (unsigned int)" fd %d" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v40, v39[0], v39[1], v39[2], v39[3], v39[4], v39[5], v39[6], v40, v26, 2, v9, 18);
    V_UNLOCK();
    LOWORD(v27) = 20532;
    HIWORD(v27) = (unsigned int)&g_fan_zc >> 16;
    v28 = 892;
LABEL_11:
    LOWORD(v29) = 18512;
    HIWORD(v29) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    zlog(*v27, v29, 171, "check_nonce_zec_1746", 20, v28, 20, v51);
    return v25;
  }
  if ( IsValidSolution(v49, a2 + 54) )
  {
    V_LOCK();
    LOWORD(v35) = 27372;
    HIWORD(v35) = (unsigned int)":" >> 16;
    v25 = 2;
    V_INT((int)v41, v35, *(int *)(a1 + 256));
    LOWORD(v36) = 19004;
    HIWORD(v36) = (unsigned int)"cmd" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v42, v41[0], v41[1], v41[2], v41[3], v41[4], v41[5], v41[6], v42, v36, 2);
    V_UNLOCK();
    LOWORD(v27) = 20532;
    HIWORD(v27) = (unsigned int)&g_fan_zc >> 16;
    v28 = 899;
    goto LABEL_11;
  }
  if ( v10 < v6 )
  {
LABEL_13:
    V_LOCK();
    LOWORD(v33) = 27372;
    HIWORD(v33) = (unsigned int)":" >> 16;
    v25 = 1;
    V_INT((int)v43, v33, *(int *)(a1 + 256));
    LOWORD(v34) = 19048;
    HIWORD(v34) = (unsigned int)"te_app_program" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v44, v43[0], v43[1], v43[2], v43[3], v43[4], v43[5], v43[6], v44, v34, 1, v10, v6);
    V_UNLOCK();
    LOWORD(v27) = 20532;
    HIWORD(v27) = (unsigned int)&g_fan_zc >> 16;
    v28 = 927;
    goto LABEL_11;
  }
  v11 = v47;
  v12 = v4 + 32 * (*(unsigned __int8 *)(a2 + 53) + 736);
  v13 = v12 - 1;
  v14 = v12 + 31;
  do
  {
    v16 = *v11++;
    v15 = v16;
    v17 = *(unsigned __int8 *)++v13;
    v18 = v15 > v17;
    if ( v15 < v17 )
      break;
    if ( v18 )
      goto LABEL_13;
  }
  while ( v13 != v14 );
  memcpy((void *)(a2 + 1398), s, 0x5CFu);
  V_LOCK();
  LOWORD(v19) = 27372;
  HIWORD(v19) = (unsigned int)":" >> 16;
  V_INT((int)v45, v19, *(int *)(a1 + 256));
  LOWORD(v20) = 19100;
  HIWORD(v20) = (unsigned int)"oltage" >> 16;
  logfmt_raw(v51, 0x1000u, 0, v46, v45[0], v45[1], v45[2], v45[3], v45[4], v45[5], v45[6], v46, v20);
  V_UNLOCK();
  LOWORD(v21) = 20532;
  HIWORD(v21) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v22) = 18512;
  HIWORD(v22) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  zlog(*v21, v22, 171, "check_nonce_zec_1746", 20, 932, 20, v51);
  return 0;
}
