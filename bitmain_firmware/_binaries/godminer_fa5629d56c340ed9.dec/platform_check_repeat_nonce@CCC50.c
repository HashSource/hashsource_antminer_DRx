int __fastcall platform_check_repeat_nonce(int *a1, int a2, char *s2)
{
  size_t v3; // r8
  int v5; // r5
  int v7; // r4
  const void *v8; // r7
  void *v9; // r5
  char *v10; // r9
  char *v11; // r11
  void *v12; // r0
  bool v13; // zf
  char *v15; // r5
  char *v16; // r2
  char *v17; // r8
  int v18; // t1
  char *v19; // r0
  char *v20; // r0
  char *v21; // r0
  size_t v22; // [sp+3Ch] [bp-1040h]
  void *v23; // [sp+40h] [bp-103Ch]
  void *ptr; // [sp+44h] [bp-1038h]
  void *v25; // [sp+48h] [bp-1034h]
  char *v26; // [sp+4Ch] [bp-1030h]
  _DWORD v28[7]; // [sp+58h] [bp-1024h] BYREF
  int v29; // [sp+74h] [bp-1008h]
  char v30[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = a1[215];
  v5 = a1[127];
  v7 = v3 * 2 * a2;
  v8 = (const void *)(v5 + v7);
  v22 = v3 + v7;
  if ( memcmp((const void *)(v5 + v7), s2, v3) )
  {
    v9 = (void *)(v5 + v3 + v7);
    if ( memcmp(v9, s2, v3) )
    {
      memcpy(v9, v8, v3);
      memcpy((void *)(a1[127] + v7), s2, v3);
      return 0;
    }
  }
  v10 = (char *)calloc(2 * v3 + 1, 1u);
  v25 = v10;
  v11 = (char *)calloc(2 * v3 + 1, 1u);
  v23 = v11;
  v12 = calloc(2 * v3 + 1, 1u);
  v13 = v10 == 0;
  if ( v10 )
    v13 = v11 == 0;
  ptr = v12;
  if ( v13 )
  {
    if ( v12 )
      goto LABEL_17;
    if ( !v11 )
      goto LABEL_9;
LABEL_18:
    free(v23);
    goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_18;
  if ( v3 )
  {
    v15 = s2 - 1;
    v16 = &s2[v3 - 1];
    v17 = (char *)v12;
    v26 = v16;
    do
    {
      v18 = (unsigned __int8)*++v15;
      v19 = v10;
      v10 += 2;
      sprintf(v19, "%02x", v18);
      v20 = v11;
      v11 += 2;
      sprintf(v20, "%02x", *(unsigned __int8 *)(a1[127] + v7 + v15 - s2));
      v21 = v17;
      v17 += 2;
      sprintf(v21, "%02x", *(unsigned __int8 *)(a1[127] + v22 + v15 - s2));
    }
    while ( v15 != v26 );
  }
  V_LOCK();
  V_INT((int)v28, "chain", a1[65]);
  logfmt_raw(
    v30,
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
    "asic %d repeat nonce %s %s %s",
    a2,
    v25,
    v23,
    ptr);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "platform_check_repeat_nonce",
    27,
    101,
    20,
    v30);
LABEL_17:
  free(ptr);
  if ( v23 )
    goto LABEL_18;
LABEL_9:
  if ( v25 )
    free(v25);
  return 4;
}
