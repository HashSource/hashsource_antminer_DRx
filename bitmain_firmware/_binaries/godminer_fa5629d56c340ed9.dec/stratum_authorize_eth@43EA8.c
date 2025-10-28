int __fastcall stratum_authorize_eth(int a1, int *a2)
{
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r1
  char *v7; // r11
  const char *v8; // r10
  size_t v9; // r6
  size_t v10; // r0
  char *v11; // r0
  const char *v12; // r1
  char *v13; // r9
  int v14; // r10
  void *v16; // r6
  int v17; // r3
  int v18; // r1
  int v19; // r0
  time_t *v20; // r3
  time_t v21; // r1
  const char *v22; // r1
  double *v23; // r5
  char *v24; // r1
  int v25; // r0
  char *v26; // r1
  _DWORD *v27; // r11
  int v28; // r0
  char *v29; // r1
  _DWORD *v30; // r6
  int v31; // r0
  char *v32; // r1
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  int v35; // r1
  unsigned int *v36; // r3
  unsigned int v37; // r2
  unsigned int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r1
  const char *v43; // r1
  const char *v44; // [sp+2Ch] [bp-1128h]
  _DWORD v45[7]; // [sp+30h] [bp-1124h] BYREF
  int v46; // [sp+4Ch] [bp-1108h]
  _DWORD s[23]; // [sp+54h] [bp-1100h] BYREF
  _BYTE v48[160]; // [sp+B0h] [bp-10A4h] BYREF
  time_t v49; // [sp+150h] [bp-1004h] BYREF
  char v50; // [sp+154h] [bp-1000h]
  unsigned __int8 v51; // [sp+162h] [bp-FF2h]
  unsigned __int8 v52; // [sp+163h] [bp-FF1h]
  unsigned __int8 v53; // [sp+164h] [bp-FF0h]
  unsigned __int8 v54; // [sp+165h] [bp-FEFh]
  unsigned __int8 v55; // [sp+166h] [bp-FEEh]
  unsigned __int8 v56; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK();
    LOWORD(v4) = -14212;
    HIWORD(v4) = (unsigned int)"age after format string" >> 16;
    LOWORD(v5) = 24916;
    HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
    logfmt_raw((char *)&v49, 0x1000u, 0, v4, a2[6]);
    V_UNLOCK();
    LOWORD(v6) = -15212;
    HIWORD(v6) = (unsigned int)"<stdin>" >> 16;
    zlog(*v5, v6, 164, "stratum_authorize_eth", 21, 379, 20, &v49);
    v7 = (char *)a2[6];
    goto LABEL_3;
  }
  LOWORD(v5) = 24916;
  V_LOCK();
  LOWORD(v17) = -14348;
  HIWORD(v17) = (unsigned int)"ect value" >> 16;
  HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
  logfmt_raw((char *)&v49, 0x1000u, 0, v17);
  V_UNLOCK();
  LOWORD(v18) = -15212;
  HIWORD(v18) = (unsigned int)"<stdin>" >> 16;
  zlog(*v5, v18, 164, "stratum_authorize_eth", 21, 361, 20, &v49);
  memset(s, 0, 32);
  v19 = socket(2, 1, 0);
  if ( v19 < 0 )
  {
    perror("socket");
  }
  else
  {
    LOWORD(v20) = -14296;
    HIWORD(v20) = (unsigned int)" to array" >> 16;
    v21 = v20[1];
    v49 = *v20;
    v50 = v21;
    if ( ioctl(v19, 0x8927u, &v49) >= 0 )
    {
      LOWORD(v22) = -14280;
      HIWORD(v22) = (unsigned int)"ng" >> 16;
      sprintf((char *)s, v22, v51, v52, v53, v54, v55, v56);
      v7 = _strdup((const char *)s);
      a2[6] = (int)v7;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  LOWORD(v41) = -14252;
  HIWORD(v41) = (unsigned int)"alue" >> 16;
  logfmt_raw((char *)&v49, 0x1000u, 0, v41);
  V_UNLOCK();
  LOWORD(v42) = -15212;
  HIWORD(v42) = (unsigned int)"<stdin>" >> 16;
  zlog(*v5, v42, 164, "stratum_authorize_eth", 21, 370, 20, &v49);
  time(&v49);
  LOWORD(v43) = -32540;
  HIWORD(v43) = (unsigned int)&loc_146EC4 >> 16;
  sprintf((char *)s, v43, v49);
  v7 = _strdup((const char *)s);
  a2[6] = (int)v7;
LABEL_3:
  v8 = (const char *)a2[4];
  v9 = strlen(v8);
  v44 = (const char *)a2[5];
  v10 = strlen(v44);
  v11 = (char *)malloc(v9 + v10 + 128);
  LOWORD(v12) = -14184;
  v13 = v11;
  HIWORD(v12) = (unsigned int)"t>" >> 16;
  sprintf(v11, v12, v7, v8, v44, 2);
  v14 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v13);
  if ( !v14 )
  {
LABEL_4:
    free(v13);
    return v14;
  }
  while ( 1 )
  {
    v16 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    if ( !v16 )
    {
      v14 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v16);
  }
  v23 = json_loads((int)v16, 0, (char *)s);
  free(v16);
  if ( !v23 )
  {
    V_LOCK();
    LOWORD(v39) = -18376;
    HIWORD(v39) = (unsigned int)"url: %s" >> 16;
    v14 = 0;
    logfmt_raw((char *)&v49, 0x1000u, 0, v39, s[0], v48);
    V_UNLOCK();
    LOWORD(v40) = -15212;
    HIWORD(v40) = (unsigned int)"<stdin>" >> 16;
    zlog(*v5, v40, 164, "stratum_authorize_eth", 21, 404, 100, &v49);
    free(v13);
    return v14;
  }
  LOWORD(v24) = -18332;
  HIWORD(v24) = (unsigned int)"" >> 16;
  v25 = json_object_get(v23, v24);
  LOWORD(v26) = -28892;
  v27 = (_DWORD *)v25;
  HIWORD(v26) = (unsigned int)"teideal" >> 16;
  v28 = json_object_get(v23, v26);
  LOWORD(v29) = -28340;
  v30 = (_DWORD *)v28;
  HIWORD(v29) = (unsigned int)"_avg" >> 16;
  v31 = json_object_get(v23, v29);
  json_integer_value(v31);
  if ( v27 && *v27 != 6 && (!v30 || *v30 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK();
    LOWORD(v32) = -26296;
    HIWORD(v32) = (unsigned int)"" >> 16;
    v14 = 0;
    V_INT((int)v45, v32, *a2);
    v33 = json_array_get(v30, 1u);
    v34 = json_string_value(v33);
    logfmt_raw(
      (char *)&v49,
      0x1000u,
      0,
      v46,
      v45[0],
      v45[1],
      v45[2],
      v45[3],
      v45[4],
      v45[5],
      v45[6],
      v46,
      "authorize failed reason: %s",
      v34);
    V_UNLOCK();
    LOWORD(v35) = -15212;
    HIWORD(v35) = (unsigned int)"<stdin>" >> 16;
    zlog(*v5, v35, 164, "stratum_authorize_eth", 21, 415, 80, &v49);
  }
  free(v13);
  if ( *((_DWORD *)v23 + 1) == -1 )
    return v14;
  v36 = (unsigned int *)v23 + 1;
  __dmb(0xBu);
  do
  {
    v37 = __ldrex(v36);
    v38 = v37 - 1;
  }
  while ( __strex(v38, v36) );
  if ( v38 )
    return v14;
  json_delete(v23);
  return v14;
}
