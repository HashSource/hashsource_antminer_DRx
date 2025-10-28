int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r5
  unsigned int v16; // r3
  _BYTE *v17; // r5
  unsigned __int8 *v18; // r4
  int v19; // r12
  int v20; // t1
  int v21; // t1
  unsigned int v22; // r2
  unsigned int v23; // r3
  unsigned int v25; // [sp+14h] [bp-10E0h]
  _BYTE v26[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v28[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 848);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v25 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)(v4 + v2 + 5271);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v6;
  s[37] = v8;
  s[38] = v9;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  s[39] = *v7;
  s[40] = v10;
  s[41] = v11;
  s[42] = v12;
  v13 = v7[5];
  s[43] = v7[4];
  s[44] = v13;
  decred_hash((int)v26, (char *)s);
  v14 = target_to_diff_dcr((int)v26);
  v15 = v14;
  if ( v14 <= 0x26 )
  {
    V_LOCK();
    logfmt_raw(
      v28,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DCR_1727 %d",
      v15,
      *(unsigned __int8 *)(a2 + 64),
      39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "check_nonce_dcr",
      15,
      573,
      20,
      v28);
    return 2;
  }
  else
  {
    v16 = *(unsigned __int8 *)(a2 + 64);
    if ( v16 == v14 )
    {
      if ( v25 > v16 )
      {
LABEL_11:
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v25);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
          171,
          "check_nonce_dcr",
          15,
          591,
          20,
          v28);
        return 1;
      }
    }
    else if ( v25 > v14 )
    {
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v15, *(unsigned __int8 *)(a2 + 64), v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        171,
        "check_nonce_dcr",
        15,
        578,
        40,
        v28);
      return 3;
    }
    v17 = s;
    v18 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
    do
    {
      V_LOCK();
      v20 = (unsigned __int8)*--v17;
      v19 = v20;
      v21 = *--v18;
      logfmt_raw(v28, 0x1000u, 0, "%02x Vs %02x", v19, v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        171,
        "fulltest_dcr",
        12,
        488,
        20,
        v28);
      v22 = (unsigned __int8)*v17;
      v23 = *v18;
      if ( v22 < v23 )
        break;
      if ( v22 > v23 )
        goto LABEL_11;
    }
    while ( v26 != v17 );
    return 0;
  }
}
