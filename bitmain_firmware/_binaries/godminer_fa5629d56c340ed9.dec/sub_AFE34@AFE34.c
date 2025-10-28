int __fastcall sub_AFE34(int a1, char a2, int a3, __int16 a4, void *a5)
{
  bool v5; // zf
  int v6; // r6
  unsigned __int8 v7; // r4
  size_t v8; // r2
  int v10; // r9
  int v11; // r10
  _DWORD *v12; // r4
  _DWORD *src; // [sp+48h] [bp-1044h]
  size_t n; // [sp+4Ch] [bp-1040h]
  int v16; // [sp+54h] [bp-1038h] BYREF
  _DWORD v17[2]; // [sp+58h] [bp-1034h] BYREF
  int v18; // [sp+60h] [bp-102Ch]
  int v19; // [sp+64h] [bp-1028h]
  _DWORD v20[7]; // [sp+68h] [bp-1024h] BYREF
  int v21; // [sp+84h] [bp-1008h]
  char v22[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = a3 == 255;
  v6 = 0;
  v7 = a3;
  if ( a3 == 255 )
    v8 = 768;
  else
    v8 = 12;
  v18 = 0;
  BYTE1(v18) = a2;
  if ( v5 )
    v10 = 64;
  else
    v10 = 1;
  n = v8;
  v17[1] = 0;
  v16 = 0;
  v17[0] = 0;
  v19 = v7;
  HIWORD(v18) = a4;
  src = calloc(v8, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 320))(a1, v17, v10, src, &v16);
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "%s core_no %d response_num %d", "ChipSetting_get_single_chip_core_status_RVN", v10, v16);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_single_chip_core_status_RVN",
    43,
    2056,
    40,
    v22);
  v11 = v16;
  if ( v16 > 0 )
  {
    v12 = src;
    do
    {
      V_LOCK();
      ++v6;
      v12 += 3;
      V_INT((int)v20, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v22,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v12 - 8),
        *((unsigned __int8 *)v12 - 4),
        *((unsigned __int16 *)v12 - 3),
        *(v12 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_single_chip_core_status_RVN",
        43,
        2059,
        40,
        v22);
      v11 = v16;
    }
    while ( v16 > v6 );
  }
  if ( a5 )
    memcpy(a5, src, n);
  free(src);
  return v11;
}
