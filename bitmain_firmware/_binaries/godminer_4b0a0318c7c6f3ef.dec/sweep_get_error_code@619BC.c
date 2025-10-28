int __fastcall sweep_get_error_code(_DWORD *a1)
{
  int v2; // r9
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r11
  const char *v8; // r10
  _BYTE *v9; // r8
  _BYTE *v10; // r9
  int i; // r7
  const char *v12; // r10
  _BYTE *v13; // r9
  int j; // r7
  const char *v15; // r10
  _BYTE *v16; // r7
  int k; // r9
  const char *v18; // r9
  int m; // r7
  char *v20; // r1
  char *v22; // r1
  char *v23; // r1
  char *v24; // r1
  char *v25; // r1
  char *v26; // r1
  time_t v27; // [sp+0h] [bp-30Ch]
  time_t v28; // [sp+4h] [bp-308h]
  time_t v29; // [sp+8h] [bp-304h]
  time_t v30; // [sp+Ch] [bp-300h]
  time_t v31; // [sp+10h] [bp-2FCh]
  time_t v32; // [sp+14h] [bp-2F8h]
  char s[256]; // [sp+18h] [bp-2F4h] BYREF
  _BYTE dest[500]; // [sp+118h] [bp-1F4h] BYREF

  memcpy(dest, &byte_196BC8, 0x1F0u);
  v2 = (unsigned __int8)byte_196BC8;
  v3 = (unsigned __int8)byte_196BD0;
  v29 = dword_196BCC;
  v4 = (unsigned __int8)byte_196BD8;
  v5 = (unsigned __int8)byte_196DA0;
  v30 = dword_196BD4;
  v6 = (unsigned __int8)byte_196DA8;
  v7 = (unsigned __int8)byte_196DB0;
  v28 = dword_196BDC;
  v31 = dword_196DA4;
  v32 = dword_196DAC;
  v27 = dword_196DB4;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v2 )
  {
    LOWORD(v26) = -32416;
    HIWORD(v26) = (unsigned int)"n't spport" >> 16;
    set_json_info_by_errorcode_and_time(a1, v26, v29);
  }
  if ( v3 )
  {
    LOWORD(v25) = -32264;
    HIWORD(v25) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v25, v30);
  }
  if ( v4 )
  {
    LOWORD(v24) = -32260;
    HIWORD(v24) = (unsigned int)"uildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v24, v28);
  }
  LOWORD(v8) = -32412;
  v9 = dest;
  v10 = dest;
  for ( i = 0; i != 8; ++i )
  {
    while ( !v10[24] )
    {
      ++i;
      v10 += 8;
      if ( i == 8 )
        goto LABEL_11;
    }
    HIWORD(v8) = (unsigned int)"spport" >> 16;
    snprintf(s, 0x100u, v8, i, v27);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v10 + 7));
    v10 += 8;
  }
LABEL_11:
  LOWORD(v12) = -32492;
  v13 = dest;
  for ( j = 0; j != 16; ++j )
  {
    while ( !v13[88] )
    {
      ++j;
      v13 += 8;
      if ( j == 16 )
        goto LABEL_15;
    }
    HIWORD(v12) = (unsigned int)"ice %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
    snprintf(s, 0x100u, v12, j);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v13 + 23));
    v13 += 8;
  }
LABEL_15:
  LOWORD(v15) = -32404;
  v16 = dest;
  for ( k = 0; k != 16; ++k )
  {
    while ( !v16[216] )
    {
      ++k;
      v16 += 8;
      if ( k == 16 )
        goto LABEL_19;
    }
    HIWORD(v15) = (unsigned int)"doesn't support sn set in Release mode" >> 16;
    snprintf(s, 0x100u, v15, k);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v16 + 55));
    v16 += 8;
  }
LABEL_19:
  LOWORD(v18) = -32484;
  for ( m = 0; m != 16; ++m )
  {
    while ( !v9[344] )
    {
      ++m;
      v9 += 8;
      if ( m == 16 )
        goto LABEL_23;
    }
    HIWORD(v18) = (unsigned int)"live chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
    snprintf(s, 0x100u, v18, m);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v9 + 87));
    v9 += 8;
  }
LABEL_23:
  if ( v5 )
  {
    LOWORD(v23) = -32256;
    HIWORD(v23) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v23, v31);
  }
  if ( v6 )
  {
    LOWORD(v22) = -32252;
    HIWORD(v22) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v22, v32);
  }
  if ( v7 )
  {
    LOWORD(v20) = -32248;
    HIWORD(v20) = (unsigned int)"/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    set_json_info_by_errorcode_and_time(a1, v20, v27);
  }
  return pthread_mutex_unlock(&miner_6060info_lock);
}
