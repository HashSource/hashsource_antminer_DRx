int __fastcall top_init_kas(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r0
  int v5; // r1
  char v6; // r3
  int v7; // r1
  int v8; // r4
  void *v9; // r8
  unsigned int *v10; // r5
  int v11; // r8
  int v13; // [sp+4h] [bp-9Ch]
  void *ptr; // [sp+3Ch] [bp-64h]
  int v15; // [sp+4Ch] [bp-54h] BYREF
  _DWORD v16[4]; // [sp+50h] [bp-50h] BYREF
  _DWORD v17[7]; // [sp+60h] [bp-40h] BYREF
  int v18; // [sp+7Ch] [bp-24h]
  _DWORD v19[7]; // [sp+80h] [bp-20h] BYREF
  int v20; // [sp+9Ch] [bp-4h]
  char v21[4100]; // [sp+A0h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s start",
    "top_init_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "top_init_kas",
    12,
    1076,
    60,
    v21);
  v2 = *(_DWORD *)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 512);
  v4 = sub_146690(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v3 - 1 + (unsigned __int8)v2 != v5 );
    v3 = *(_DWORD *)(a1 + 512);
    v2 = *(_DWORD *)(a1 + 356);
  }
  v7 = v3;
  *(_DWORD *)(a1 + 452) = v4;
  v8 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 272))(a1, v7, v2);
  v16[0] = 0;
  v16[2] = 1;
  v16[1] = 0;
  v15 = 0;
  v16[3] = 0;
  v9 = calloc(0x450u, 1u);
  ptr = v9;
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    v16,
    92,
    v9,
    &v15,
    v13,
    2000,
    0);
  if ( v15 > 0 )
  {
    v10 = (unsigned int *)v9;
    do
    {
      v11 = *((unsigned __int16 *)v10 + 3);
      if ( !*((_WORD *)v10 + 3) )
      {
        V_LOCK();
        V_INT((int)v19, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v21,
          0x1000u,
          v11,
          v20,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v20,
          "[Chip-%d status] asic %02x, reg_addr %04x reg_data %08x",
          v8,
          *((unsigned __int8 *)v10 + 4),
          *((unsigned __int16 *)v10 + 3),
          bswap32(*v10));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_get_chip_status_KAS_2380",
          36,
          1618,
          20,
          v21);
      }
      ++v8;
      v10 += 3;
    }
    while ( v8 < v15 );
  }
  free(ptr);
  set_core_enable_kas(a1, 23130);
  sub_923BC((int *)a1, 127);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_93DDC((int *)a1);
  return 0;
}
