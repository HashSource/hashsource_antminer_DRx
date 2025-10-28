void __fastcall __noreturn dram_bist_check_and_repair_rvn(int a1, int a2, int a3)
{
  int v6; // r4
  _WORD *v7; // r7
  int v8; // r10
  _WORD *v9; // r5
  int v10; // r2
  int v11; // [sp+4h] [bp-1088h]
  void *dest; // [sp+48h] [bp-1044h]
  int v15; // [sp+54h] [bp-1038h] BYREF
  _DWORD v16[2]; // [sp+58h] [bp-1034h] BYREF
  int v17; // [sp+60h] [bp-102Ch]
  int v18; // [sp+64h] [bp-1028h]
  _DWORD v19[7]; // [sp+68h] [bp-1024h] BYREF
  int v20; // [sp+84h] [bp-1008h]
  char v21[4100]; // [sp+88h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "%s work_mode[%d], chip-%d...", "dram_bist_check_and_repair_rvn", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dram_bist_check_and_repair_rvn",
    30,
    2590,
    40,
    v21);
  dest = malloc(0xCu);
  while ( 1 )
  {
    v6 = 0;
    sleep(0xAu);
    v17 = 6356992;
    v16[0] = 0;
    v16[1] = 0;
    v15 = 0;
    BYTE1(v17) = a3;
    v18 = 0;
    v7 = calloc(0x60u, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, _WORD *, int *, int, int, _DWORD))(a1 + 300))(
      a1,
      v16,
      8,
      v7,
      &v15,
      v11,
      2000,
      0);
    v8 = v15;
    if ( v15 > 0 )
    {
      v9 = v7;
      do
      {
        while ( 1 )
        {
          ++v6;
          if ( v9[3] == 97 )
            break;
          v8 = v15;
          v9 += 6;
          if ( v6 >= v15 )
            goto LABEL_7;
        }
        V_LOCK();
        v9 += 6;
        V_INT((int)v19, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v21,
          0x1000u,
          0,
          v20,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v20,
          "[Chip status] asic %02x, reg %02x state %08x",
          *((unsigned __int8 *)v9 - 8),
          (unsigned __int16)*(v9 - 3),
          *((_DWORD *)v9 - 3));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_get_chip_status_rvn_RVN",
          35,
          1672,
          40,
          v21);
        v8 = v15;
      }
      while ( v6 < v15 );
    }
LABEL_7:
    if ( dest )
    {
      if ( v8 >= 8 )
        v10 = 8;
      else
        v10 = v8;
      memcpy(dest, v7, 12 * v10);
    }
    free(v7);
    if ( !v8 )
    {
      V_LOCK();
      logfmt_raw(
        v21,
        0x1000u,
        0,
        "%s work_mode[%d] chip-%d revice ltc status error!",
        "dram_bist_check_and_repair_rvn",
        a2,
        a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_and_repair_rvn",
        30,
        2646,
        40,
        v21);
    }
  }
}
