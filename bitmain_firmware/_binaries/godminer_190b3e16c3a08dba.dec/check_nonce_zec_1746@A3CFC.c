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
  int v20; // r4
  int v21; // lr
  _DWORD v22[7]; // [sp+38h] [bp-1818h] BYREF
  int v23; // [sp+54h] [bp-17FCh]
  _DWORD v24[7]; // [sp+58h] [bp-17F8h] BYREF
  int v25; // [sp+74h] [bp-17DCh]
  _DWORD v26[7]; // [sp+78h] [bp-17D8h] BYREF
  int v27; // [sp+94h] [bp-17BCh]
  _DWORD v28[7]; // [sp+98h] [bp-17B8h] BYREF
  int v29; // [sp+B4h] [bp-179Ch]
  _DWORD v30[7]; // [sp+B8h] [bp-1798h] BYREF
  int v31; // [sp+D4h] [bp-177Ch]
  _BYTE v32[32]; // [sp+D8h] [bp-1778h] BYREF
  char v33[32]; // [sp+F8h] [bp-1758h] BYREF
  char v34[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  char v36[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v4 = *(_DWORD *)(a1 + 784);
  v6 = *(_DWORD *)(v4 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v4 + 140 * v2 + 5120), 0x88u);
  v7 = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  s[34] = v7;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v34, 0xC8u, 9);
  equihash_blake2b_update((int)v34, (char *)s, 140);
  Sha256_Onestep((char *)s, 1487, (int)v33);
  Sha256_Onestep(v33, 32, (int)v32);
  reverse_hex((int)v32, 0x20u);
  v8 = target_to_diff_zec((int)v32);
  v9 = *(unsigned __int8 *)(a2 + 52);
  v10 = v8;
  if ( v9 != v8 )
  {
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "hw error, type %d, calculate diff %d, chip return diff %d,",
      3,
      v10,
      *(unsigned __int8 *)(a2 + 52));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      171,
      "check_nonce_zec_1746",
      20,
      885,
      20,
      v36);
    return 3;
  }
  if ( v9 <= 0x11 )
  {
    V_LOCK();
    v20 = 2;
    V_INT((int)v24, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "hw error, type %d, diff %d, ticket mask %d",
      2,
      v9,
      18);
    V_UNLOCK();
    v21 = 891;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      171,
      "check_nonce_zec_1746",
      20,
      v21,
      20,
      v36);
    return v20;
  }
  if ( IsValidSolution(v34, a2 + 54) )
  {
    V_LOCK();
    v20 = 2;
    V_INT((int)v26, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "hw error, type %d, solution verify failed",
      2);
    V_UNLOCK();
    v21 = 898;
    goto LABEL_11;
  }
  if ( v10 < v6 )
  {
LABEL_13:
    V_LOCK();
    v20 = 1;
    V_INT((int)v28, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "hw error, type %d, this diff(%d) not reach pool(%d)",
      1,
      v10,
      v6);
    V_UNLOCK();
    v21 = 926;
    goto LABEL_11;
  }
  v11 = v32;
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
  V_INT((int)v30, "chain", *(int *)(a1 + 224));
  logfmt_raw(v36, 0x1000u, 0, v31, v30[0], v30[1], v30[2], v30[3], v30[4], v30[5], v30[6], v31, "hw no error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "check_nonce_zec_1746",
    20,
    931,
    20,
    v36);
  return 0;
}
