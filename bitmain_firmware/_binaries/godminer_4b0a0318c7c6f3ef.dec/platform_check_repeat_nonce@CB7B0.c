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
  const char *v17; // r7
  char *v18; // r8
  int v19; // t1
  char *v20; // r0
  char *v21; // r0
  char *v22; // r0
  char *v23; // r1
  _DWORD *v24; // r3
  int v25; // r1
  size_t v26; // [sp+3Ch] [bp-1040h]
  void *v27; // [sp+40h] [bp-103Ch]
  void *ptr; // [sp+44h] [bp-1038h]
  void *v29; // [sp+48h] [bp-1034h]
  char *v30; // [sp+4Ch] [bp-1030h]
  _DWORD v32[7]; // [sp+58h] [bp-1024h] BYREF
  int v33; // [sp+74h] [bp-1008h]
  char v34[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = a1[213];
  v5 = a1[125];
  v7 = v3 * 2 * a2;
  v8 = (const void *)(v5 + v7);
  v26 = v3 + v7;
  if ( memcmp((const void *)(v5 + v7), s2, v3) )
  {
    v9 = (void *)(v5 + v3 + v7);
    if ( memcmp(v9, s2, v3) )
    {
      memcpy(v9, v8, v3);
      memcpy((void *)(a1[125] + v7), s2, v3);
      return 0;
    }
  }
  v10 = (char *)calloc(2 * v3 + 1, 1u);
  v29 = v10;
  v11 = (char *)calloc(2 * v3 + 1, 1u);
  v27 = v11;
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
    free(v27);
    goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_18;
  if ( v3 )
  {
    v15 = s2 - 1;
    LOWORD(v17) = 19284;
    v16 = &s2[v3 - 1];
    HIWORD(v17) = (unsigned int)"ner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    v18 = (char *)v12;
    v30 = v16;
    do
    {
      v19 = (unsigned __int8)*++v15;
      v20 = v10;
      v10 += 2;
      sprintf(v20, v17, v19);
      v21 = v11;
      v11 += 2;
      sprintf(v21, v17, *(unsigned __int8 *)(a1[125] + v7 + v15 - s2));
      v22 = v18;
      v18 += 2;
      sprintf(v22, v17, *(unsigned __int8 *)(a1[125] + v26 + v15 - s2));
    }
    while ( v15 != v30 );
  }
  V_LOCK();
  LOWORD(v23) = 27372;
  HIWORD(v23) = (unsigned int)":" >> 16;
  V_INT((int)v32, v23, a1[64]);
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
    "asic %d repeat nonce %s %s %s",
    a2,
    v29,
    v27,
    ptr);
  V_UNLOCK();
  LOWORD(v24) = 20532;
  HIWORD(v24) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v25) = 31772;
  HIWORD(v25) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  zlog(*v24, v25, 150, "platform_check_repeat_nonce", 27, 101, 20, v34);
LABEL_17:
  free(ptr);
  if ( v27 )
    goto LABEL_18;
LABEL_9:
  if ( v29 )
    free(v29);
  return 4;
}
