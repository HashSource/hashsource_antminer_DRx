int __fastcall top_init_kas(int a1)
{
  int v2; // r4
  char *v3; // r1
  _DWORD *v4; // r9
  int v5; // r1
  int v6; // r8
  int v7; // r4
  int v8; // r0
  int v9; // r1
  char v10; // r3
  int v11; // r1
  int v12; // r4
  unsigned int *v13; // r8
  char *v14; // r3
  int v15; // r11
  unsigned int *v16; // r5
  int v17; // r1
  int v19; // [sp+4h] [bp-9Ch]
  char *s; // [sp+40h] [bp-60h]
  int v21; // [sp+4Ch] [bp-54h] BYREF
  _DWORD v22[4]; // [sp+50h] [bp-50h] BYREF
  _DWORD v23[7]; // [sp+60h] [bp-40h] BYREF
  int v24; // [sp+7Ch] [bp-24h]
  _DWORD v25[7]; // [sp+80h] [bp-20h] BYREF
  int v26; // [sp+9Ch] [bp-4h]
  char v27[4100]; // [sp+A0h] [bp+0h] BYREF

  LOWORD(v2) = -14460;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v23, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(v27, 0x1000u, 0, v24, v23[0], v23[1], v23[2], v23[3], v23[4], v23[5], v23[6], v24, v2, "top_init_kas");
  V_UNLOCK();
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v4, v5, 171, "top_init_kas", 12, 1076, 60, v27);
  v6 = *(_DWORD *)(a1 + 352);
  v7 = *(_DWORD *)(a1 + 504);
  v8 = sub_1451E0(256, (unsigned __int8)v6);
  if ( (_BYTE)v6 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v7 - 1 + (unsigned __int8)v6 != v9 );
    v7 = *(_DWORD *)(a1 + 504);
    v6 = *(_DWORD *)(a1 + 352);
  }
  v11 = v7;
  *(_DWORD *)(a1 + 444) = v8;
  v12 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 268))(a1, v11, v6);
  v22[0] = 0;
  v22[2] = 1;
  v22[1] = 0;
  v21 = 0;
  v22[3] = 0;
  v13 = (unsigned int *)calloc(0x450u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned int *, int *, int, int, _DWORD))(a1 + 296))(
    a1,
    v22,
    92,
    v13,
    &v21,
    v19,
    2000,
    0);
  if ( v21 > 0 )
  {
    LOWORD(v14) = 27372;
    LOWORD(v15) = -14056;
    HIWORD(v14) = (unsigned int)":" >> 16;
    s = v14;
    v16 = v13;
    do
    {
      if ( !*((_WORD *)v16 + 3) )
      {
        V_LOCK();
        V_INT((int)v25, s, *(int *)(a1 + 256));
        HIWORD(v15) = (unsigned int)" resp_num: %d" >> 16;
        logfmt_raw(
          v27,
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
          v15,
          v12,
          *((unsigned __int8 *)v16 + 4),
          *((unsigned __int16 *)v16 + 3),
          bswap32(*v16));
        V_UNLOCK();
        LOWORD(v17) = -23880;
        HIWORD(v17) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
        zlog(*v4, v17, 150, "ChipSetting_get_chip_status_KAS_2380", 36, 1617, 20, v27);
      }
      ++v12;
      v16 += 3;
    }
    while ( v12 < v21 );
  }
  free(v13);
  set_core_enable_kas(a1, 23130);
  sub_9131C((int *)a1, 127);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_92D3C((int *)a1);
  return 0;
}
