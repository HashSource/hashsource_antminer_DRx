int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int *v8; // r6
  int v9; // r3
  _DWORD *v11; // r12
  int v12; // r3
  _DWORD *v13; // r10
  int v14; // r1
  int v15; // r3
  int v16; // lr
  char *v17; // r4
  char *v18; // r11
  int v19; // r9
  int v20; // r8
  char *v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r11
  int *v26; // r9
  int v27; // r4
  int v29; // r3
  int v30; // [sp+4h] [bp-1080h]
  int v32; // [sp+34h] [bp-1050h]
  int v33; // [sp+34h] [bp-1050h]
  _DWORD *v34; // [sp+38h] [bp-104Ch]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v37; // [sp+44h] [bp-1040h]
  int v38; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v39[2]; // [sp+50h] [bp-1034h] BYREF
  int v40; // [sp+58h] [bp-102Ch]
  int v41; // [sp+5Ch] [bp-1028h]
  _DWORD v42[7]; // [sp+60h] [bp-1024h] BYREF
  int v43; // [sp+7Ch] [bp-1008h]
  char v44[4096]; // [sp+80h] [bp-1004h] BYREF

  v8 = a5;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a1 + 352);
  }
  else
  {
    v9 = 1;
    v5 = 4;
    v6 = 12;
    v32 = 1;
  }
  if ( a2 )
  {
    v32 = v9;
    v6 = 3 * v9;
    v5 = 4 * v9;
  }
  if ( a2 )
    v6 *= 4;
  v38 = 0;
  V_LOCK();
  LOWORD(v11) = 20532;
  LOWORD(v12) = 4320;
  HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v12) = (unsigned int)"vn" >> 16;
  v13 = v11;
  v34 = v11;
  logfmt_raw(v44, 0x1000u, 0, v12, a2, a3, a4);
  V_UNLOCK();
  LOWORD(v14) = 4072;
  HIWORD(v14) = (unsigned int)"VN" >> 16;
  zlog(*v13, v14, 176, "chip_setting_check_bist_ltc", 27, 188, 20, v44);
  ptr = (char *)calloc(v6, 1u);
  memset(a5, 0, v5);
  v15 = 0;
  v40 = 0;
  v39[0] = 0;
  v39[1] = 0;
  v41 = 0;
  if ( !a2 )
    v15 = *(_DWORD *)(a1 + 504);
  LOBYTE(v40) = a2;
  v16 = *(_DWORD *)(a1 + 356);
  if ( !a2 )
    LOBYTE(v15) = *(_BYTE *)(v15 + a3);
  BYTE1(v40) = v15;
  HIBYTE(v41) = a4;
  LOBYTE(v41) = a4;
  HIWORD(v40) = 6;
  BYTE1(v41) = v16;
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 316))(
    a1,
    v39,
    v32,
    ptr,
    &v38,
    v30,
    2000,
    0);
  v37 = v38;
  if ( v38 > 0 )
  {
    v17 = ptr;
    v18 = &ptr[12 * v38];
    do
    {
      v19 = 0;
      if ( *((_WORD *)v17 + 3) == 6 )
        v19 = v17[3] & 1;
      if ( a2 )
        a5[(unsigned int)(unsigned __int8)v17[4] / *(_DWORD *)(a1 + 444)] = v19;
      else
        *a5 = v19;
      v17 += 12;
    }
    while ( v17 != v18 );
  }
  if ( v32 <= v37 )
    goto LABEL_21;
  V_LOCK();
  LOWORD(v22) = 27372;
  HIWORD(v22) = (unsigned int)":" >> 16;
  V_INT((int)v42, v22, *(int *)(a1 + 256));
  logfmt_raw(
    v44,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    "detected core %d get check bist results less than expect num(%d < %d)",
    a4,
    v38,
    v32);
  V_UNLOCK();
  LOWORD(v23) = 4072;
  HIWORD(v23) = (unsigned int)"VN" >> 16;
  zlog(*v34, v23, 176, "chip_setting_check_bist_ltc", 27, 223, 80, v44);
  if ( v32 <= 0 )
  {
LABEL_21:
    v20 = 0;
  }
  else
  {
    LOWORD(v24) = 4072;
    v20 = 0;
    LOWORD(v25) = 4444;
    HIWORD(v24) = (unsigned int)"VN" >> 16;
    v26 = &a5[v32];
    v27 = 0;
    v33 = v24;
    do
    {
      if ( !*v8++ )
      {
        V_LOCK();
        v29 = a3;
        v20 = -1;
        if ( a2 )
          v29 = v27;
        HIWORD(v25) = (unsigned int)"ing_rvn" >> 16;
        logfmt_raw(v44, 0x1000u, 0, v25, v29, a4);
        V_UNLOCK();
        zlog(*v34, v33, 176, "chip_setting_check_bist_ltc", 27, 228, 80, v44);
      }
      ++v27;
    }
    while ( v26 != v8 );
  }
  free(ptr);
  return v20;
}
