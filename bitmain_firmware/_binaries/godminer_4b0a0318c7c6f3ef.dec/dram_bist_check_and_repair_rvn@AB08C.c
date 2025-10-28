void __fastcall __noreturn dram_bist_check_and_repair_rvn(int a1, int a2, char *a3)
{
  char *v3; // r4
  int v4; // r5
  int v6; // r3
  _DWORD *v7; // r9
  int v8; // r1
  int v9; // r7
  int v10; // r4
  _WORD *v11; // r7
  int v12; // r10
  _WORD *v13; // r5
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // [sp+4h] [bp-1088h]
  int v19; // [sp+3Ch] [bp-1050h]
  char *s; // [sp+40h] [bp-104Ch]
  int v21; // [sp+44h] [bp-1048h]
  void *dest; // [sp+48h] [bp-1044h]
  int v24; // [sp+54h] [bp-1038h] BYREF
  _DWORD v25[2]; // [sp+58h] [bp-1034h] BYREF
  int v26; // [sp+60h] [bp-102Ch]
  int v27; // [sp+64h] [bp-1028h]
  _DWORD v28[7]; // [sp+68h] [bp-1024h] BYREF
  int v29; // [sp+84h] [bp-1008h]
  char v30[4100]; // [sp+88h] [bp-1004h] BYREF

  v3 = a3;
  v4 = a2;
  LOWORD(v7) = 20532;
  V_LOCK();
  LOWORD(v6) = 10120;
  HIWORD(v6) = (unsigned int)"xternal_loop_ate_setup_rvn" >> 16;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v30, 0x1000u, 0, v6, "dram_bist_check_and_repair_rvn", v4, v3);
  V_UNLOCK();
  LOWORD(v8) = 9076;
  HIWORD(v8) = (unsigned int)"" >> 16;
  LOWORD(v4) = 10152;
  LOWORD(v3) = 27372;
  LOWORD(v9) = -23880;
  zlog(*v7, v8, 171, "dram_bist_check_and_repair_rvn", 30, 2590, 40, v30);
  HIWORD(v4) = (unsigned int)"internal_bist_rvn" >> 16;
  v19 = v4;
  dest = malloc(0xCu);
  HIWORD(v3) = (unsigned int)":" >> 16;
  s = v3;
  HIWORD(v9) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  v21 = v9;
  while ( 1 )
  {
    v10 = 0;
    sleep(0xAu);
    v26 = 6356992;
    v25[0] = 0;
    v25[1] = 0;
    v24 = 0;
    BYTE1(v26) = (_BYTE)a3;
    v27 = 0;
    v11 = calloc(0x60u, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, _WORD *, int *, int, int, _DWORD))(a1 + 296))(
      a1,
      v25,
      8,
      v11,
      &v24,
      v17,
      2000,
      0);
    v12 = v24;
    if ( v24 > 0 )
    {
      v13 = v11;
      do
      {
        while ( 1 )
        {
          ++v10;
          if ( v13[3] == 97 )
            break;
          v12 = v24;
          v13 += 6;
          if ( v10 >= v24 )
            goto LABEL_7;
        }
        V_LOCK();
        v13 += 6;
        V_INT((int)v28, s, *(int *)(a1 + 256));
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
          v19,
          *((unsigned __int8 *)v13 - 8),
          (unsigned __int16)*(v13 - 3),
          *((_DWORD *)v13 - 3));
        V_UNLOCK();
        zlog(*v7, v21, 150, "ChipSetting_get_chip_status_rvn_RVN", 35, 1671, 40, v30);
        v12 = v24;
      }
      while ( v10 < v24 );
    }
LABEL_7:
    if ( dest )
    {
      if ( v12 >= 8 )
        v14 = 8;
      else
        v14 = v12;
      memcpy(dest, v11, 12 * v14);
    }
    free(v11);
    if ( !v12 )
    {
      V_LOCK();
      LOWORD(v15) = 10200;
      HIWORD(v15) = (unsigned int)"external_bist_init_rvn" >> 16;
      logfmt_raw(v30, 0x1000u, 0, v15, "dram_bist_check_and_repair_rvn", a2, a3);
      V_UNLOCK();
      LOWORD(v16) = 9076;
      HIWORD(v16) = (unsigned int)"" >> 16;
      zlog(*v7, v16, 171, "dram_bist_check_and_repair_rvn", 30, 2646, 40, v30);
    }
  }
}
