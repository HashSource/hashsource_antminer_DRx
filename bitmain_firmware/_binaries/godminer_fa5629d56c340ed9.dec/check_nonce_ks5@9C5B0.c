int __fastcall check_nonce_ks5(int a1, int a2)
{
  unsigned int v2; // r3
  int v5; // r1
  int v6; // r8
  char *v7; // r3
  char *v8; // r2
  unsigned int v9; // r5
  char v10; // t1
  unsigned int v11; // r0
  unsigned int v12; // r6
  unsigned __int8 *v13; // r2
  int v14; // r12
  int v15; // r3
  int v16; // r12
  unsigned int v17; // r0
  unsigned int v18; // t1
  unsigned int v19; // t1
  bool v20; // cc
  int v22; // r2
  int v23; // r0
  int v24; // r1
  _DWORD v25[7]; // [sp+30h] [bp-10A0h] BYREF
  int v26; // [sp+4Ch] [bp-1084h]
  _DWORD v27[7]; // [sp+50h] [bp-1080h] BYREF
  int v28; // [sp+6Ch] [bp-1064h]
  _DWORD v29[7]; // [sp+70h] [bp-1060h] BYREF
  int v30; // [sp+8Ch] [bp-1044h] BYREF
  char v31; // [sp+AFh] [bp-1021h] BYREF
  _DWORD v32[7]; // [sp+B0h] [bp-1020h] BYREF
  int v33; // [sp+CCh] [bp-1004h]
  char v34[4096]; // [sp+D0h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 17);
  v5 = *(unsigned __int8 *)(a2 + 16);
  if ( v2 <= 0x23 )
  {
    V_LOCK();
    V_INT((int)v32, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v33,
      v32[0],
      v32[1],
      v32[2],
      v32[3],
      v32[4],
      v32[5],
      v32[6],
      v33,
      "ans diff %d TICKET_MASK_KS5_2382 %d",
      *(unsigned __int8 *)(a2 + 17),
      36);
    V_UNLOCK();
    v22 = 527;
    v23 = g_zc;
    LOWORD(v24) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c";
LABEL_13:
    HIWORD(v24) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c" >> 16;
    zlog(v23, v24, 171, "check_nonce_ks5", 15, v22, 20, v34);
    return 2;
  }
  v6 = *(_DWORD *)(a1 + 848);
  v7 = (char *)&v30 + 3;
  v8 = v34;
  v9 = *(unsigned __int8 *)(v6 + v5 + 0x2000);
  do
  {
    v10 = *++v7;
    *--v8 = v10;
  }
  while ( v7 != &v31 );
  v11 = target_to_diff_ks5((int)v32);
  v12 = v11;
  if ( v11 <= 0x23 )
  {
    V_LOCK();
    V_INT((int)v25, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v26,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v26,
      "hw error calculate diff %d ans diff %d TICKET_MASK_KS5_2382 %d",
      v12,
      *(unsigned __int8 *)(a2 + 17),
      36);
    V_UNLOCK();
    v23 = g_zc;
    v22 = 573;
    LOWORD(v24) = 7460;
    goto LABEL_13;
  }
  if ( v9 > v11 )
  {
LABEL_11:
    V_LOCK();
    V_INT((int)v27, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v28,
      v27[0],
      v27[1],
      v27[2],
      v27[3],
      v27[4],
      v27[5],
      v27[6],
      v28,
      "hw diff (%d<%d) not reach pool",
      v12,
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      171,
      "check_nonce_ks5",
      15,
      594,
      20,
      v34);
    return 1;
  }
  else
  {
    v13 = (unsigned __int8 *)v32;
    v14 = v6 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v15 = v14 - 1;
    v16 = v14 + 31;
    do
    {
      v18 = *v13++;
      v17 = v18;
      v19 = *(unsigned __int8 *)++v15;
      v20 = v17 > v19;
      if ( v17 < v19 )
        break;
      if ( v20 )
        goto LABEL_11;
    }
    while ( v16 != v15 );
    V_LOCK();
    V_INT((int)v29, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "Verification passed! diff %d expected_diff %d ",
      v12,
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      171,
      "check_nonce_ks5",
      15,
      597,
      20,
      v34);
    return 0;
  }
}
