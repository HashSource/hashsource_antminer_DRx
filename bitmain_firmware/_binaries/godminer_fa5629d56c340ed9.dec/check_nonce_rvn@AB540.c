int __fastcall check_nonce_rvn(int a1, _DWORD *a2)
{
  int v3; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // t1
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r1
  unsigned __int8 *v20; // r3
  _BYTE *v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // t1
  unsigned int v24; // t1
  bool v25; // cf
  unsigned __int8 *v26; // r3
  _BYTE *v27; // r2
  unsigned int v28; // r0
  unsigned int v29; // t1
  unsigned int v30; // t1
  bool v31; // cf
  _DWORD v33[8]; // [sp+10h] [bp-1084h] BYREF
  int v34[8]; // [sp+30h] [bp-1064h] BYREF
  _BYTE v35[32]; // [sp+50h] [bp-1044h] BYREF
  _BYTE v36[32]; // [sp+70h] [bp-1024h] BYREF
  _DWORD v37[8]; // [sp+90h] [bp-1004h] BYREF
  _BYTE v38[4068]; // [sp+B0h] [bp-FE4h] BYREF

  v4 = (_DWORD *)((char *)a2 + 34);
  v3 = *(_DWORD *)((char *)a2 + 34);
  v5 = a2;
  v7 = *(_DWORD *)((char *)a2 + 38);
  v8 = v4[2];
  v9 = v4[3];
  v33[0] = v3;
  v33[1] = v7;
  v33[2] = v8;
  v33[3] = v9;
  v10 = v4[5];
  v11 = v4[6];
  v12 = v4[7];
  v33[4] = v4[4];
  v33[5] = v10;
  v33[6] = v11;
  v33[7] = v12;
  v13 = *(_DWORD *)((char *)v5 + 98);
  v5 = (_DWORD *)((char *)v5 + 98);
  v14 = v5[1];
  v15 = v5[2];
  v16 = v5[3];
  v34[0] = v13;
  v34[1] = v14;
  v34[2] = v15;
  v34[3] = v16;
  v17 = v5[6];
  v18 = v5[7];
  v19 = v5[5];
  v34[4] = v5[4];
  v34[5] = v19;
  v34[6] = v17;
  v34[7] = v18;
  ethash_get_expected_difficulty(v35, *(_DWORD *)(a1 + 456));
  ethash_get_expected_difficulty(v36, 9u);
  ethash_quick_hash(v37, (int)v33, *(_DWORD *)((char *)a2 + 26), *(_DWORD *)((char *)a2 + 30), v34);
  v20 = v36;
  v21 = v37;
  while ( 1 )
  {
    v23 = (unsigned __int8)*v21++;
    v22 = v23;
    v24 = *v20++;
    v25 = v22 >= v24;
    if ( v22 != v24 )
      break;
    if ( v21 == v38 )
      goto LABEL_4;
  }
  if ( v25 )
  {
    V_LOCK();
    logfmt_raw((char *)v37, 0x1000u, 0, "HW Error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "check_nonce_rvn",
      15,
      1838,
      40,
      v37);
    return 2;
  }
LABEL_4:
  ethash_quick_hash(v37, (int)v33, *(_DWORD *)((char *)a2 + 26), *(_DWORD *)((char *)a2 + 30), v34);
  v26 = v35;
  v27 = v37;
  while ( 1 )
  {
    v29 = (unsigned __int8)*v27++;
    v28 = v29;
    v30 = *v26++;
    v31 = v28 >= v30;
    if ( v28 != v30 )
      break;
    if ( v27 == v38 )
      return 0;
  }
  if ( !v31 )
    return 0;
  V_LOCK();
  logfmt_raw((char *)v37, 0x1000u, 0, "SW Error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "check_nonce_rvn",
    15,
    1843,
    40,
    v37);
  return 1;
}
