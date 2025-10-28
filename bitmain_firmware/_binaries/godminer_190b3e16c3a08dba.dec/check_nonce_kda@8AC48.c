int __fastcall check_nonce_kda(int a1, int a2)
{
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r6
  int *v6; // r3
  int *p_src; // r2
  int v8; // r1
  char v9; // r1
  char *v10; // r3
  char *v11; // r2
  char v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r7
  unsigned int v15; // r3
  int v16; // lr
  int *v17; // r4
  char *v18; // r12
  char *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  char v27; // r3
  char *v28; // r2
  char *v29; // r3
  char v30; // r1
  char *v31; // r3
  char *v32; // r2
  unsigned int v33; // r0
  unsigned int v34; // t1
  unsigned int v35; // t1
  bool v36; // cf
  int v38; // [sp+Ch] [bp-1174h]
  int src; // [sp+10h] [bp-1170h] BYREF
  int v40; // [sp+14h] [bp-116Ch] BYREF
  _DWORD v41[7]; // [sp+18h] [bp-1168h] BYREF
  int v42; // [sp+34h] [bp-114Ch] BYREF
  _DWORD v43[7]; // [sp+38h] [bp-1148h] BYREF
  int v44; // [sp+54h] [bp-112Ch] BYREF
  char dest[288]; // [sp+58h] [bp-1128h] BYREF
  _DWORD v46[7]; // [sp+178h] [bp-1008h] BYREF
  int v47; // [sp+194h] [bp-FECh] BYREF
  char v48; // [sp+198h] [bp-FE8h] BYREF
  _BYTE v49[189]; // [sp+11B7h] [bp+37h] BYREF

  v3 = *(_DWORD *)(a1 + 784);
  v4 = *(unsigned __int8 *)(a2 + 89);
  v5 = *(_DWORD *)(v3 + 4 * (v4 + 11552));
  memcpy(dest, (const void *)(v3 + 286 * v4 + 9216), 0x11Eu);
  v6 = (int *)((char *)&v40 + 3);
  p_src = &src;
  v8 = *(_DWORD *)(a2 + 84);
  src = *(_DWORD *)(a2 + 80);
  v40 = v8;
  do
  {
    v9 = *(_BYTE *)p_src;
    *(_BYTE *)p_src = *(_BYTE *)v6;
    p_src = (int *)((char *)p_src + 1);
    *(_BYTE *)v6 = v9;
    v6 = (int *)((char *)v6 - 1);
  }
  while ( p_src < v6 );
  blake2s_init((int *)((unsigned int)v49 & 0xFFFFFFC0), 32);
  blake2s_update((_DWORD *)((unsigned int)v49 & 0xFFFFFFC0), dest, 0x116u);
  blake2s_update((_DWORD *)((unsigned int)v49 & 0xFFFFFFC0), (char *)&src, 8u);
  blake2s_final((unsigned int)v49 & 0xFFFFFFC0, v41, 0x20u);
  v10 = (char *)&v42 + 3;
  v11 = (char *)v41;
  do
  {
    v12 = *v11;
    *v11++ = *v10;
    *v10-- = v12;
  }
  while ( v11 < v10 );
  v13 = target_to_diff_kda(v41);
  v14 = v13;
  if ( v13 <= 0x27 )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v46,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d ticket_mask %d",
      v14,
      *(unsigned __int8 *)(a2 + 88),
      40,
      v38,
      src,
      v40);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "check_nonce_kda",
      15,
      609,
      20,
      v46);
    return 2;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 88);
    if ( v15 == v13 )
    {
      if ( v5 > v15 )
      {
LABEL_20:
        V_LOCK();
        logfmt_raw((char *)v46, 0x1000u, 0, "diff not enough (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 88), v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
          171,
          "check_nonce_kda",
          15,
          623,
          20,
          v46);
        return 1;
      }
LABEL_8:
      v16 = *(unsigned __int8 *)(a2 + 89);
      v43[0] = v41[0];
      v43[1] = v41[1];
      v43[2] = v41[2];
      v43[3] = v41[3];
      v17 = (int *)(v3 + 32 * (v16 + 1460));
      v18 = (char *)&v44 + 3;
      v19 = (char *)v43;
      v43[4] = v41[4];
      v43[5] = v41[5];
      v43[6] = v41[6];
      v44 = v42;
      v20 = *v17;
      v21 = v17[1];
      v22 = v17[2];
      v23 = v17[3];
      v17 += 4;
      v46[0] = v20;
      v46[1] = v21;
      v46[2] = v22;
      v46[3] = v23;
      v24 = v17[1];
      v25 = v17[2];
      v26 = v17[3];
      v46[4] = *v17;
      v46[5] = v24;
      v46[6] = v25;
      v47 = v26;
      do
      {
        v27 = *v19;
        *v19++ = *v18;
        *v18-- = v27;
      }
      while ( v19 < v18 );
      v28 = (char *)&v47 + 3;
      v29 = (char *)v46;
      do
      {
        v30 = *v29;
        *v29++ = *v28;
        *v28-- = v30;
      }
      while ( v29 < v28 );
      v31 = dest;
      v32 = &v48;
      while ( 1 )
      {
        v34 = *((_DWORD *)v31 - 1);
        v31 -= 4;
        v33 = v34;
        v35 = *((_DWORD *)v32 - 1);
        v32 -= 4;
        v36 = v33 >= v35;
        if ( v33 > v35 )
          break;
        if ( !v36 || v43 == (_DWORD *)v31 )
          return 0;
      }
      goto LABEL_20;
    }
    if ( v5 <= v13 )
      goto LABEL_8;
    V_LOCK();
    logfmt_raw(
      (char *)v46,
      0x1000u,
      0,
      "diff not match (%d!=%d) expected diff %d",
      v14,
      *(unsigned __int8 *)(a2 + 88),
      v5,
      v38,
      src,
      v40);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "check_nonce_kda",
      15,
      618,
      20,
      v46);
    return 3;
  }
}
