int __fastcall sub_9999C(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r10
  unsigned __int8 v5; // r9
  int v6; // r7
  int v9; // r5
  void *v10; // r0
  int v11; // r2
  _DWORD *v12; // r10
  int v13; // r9
  int v14; // r1
  _DWORD *v15; // r7
  int v17; // [sp+4h] [bp-1088h]
  int v18; // [sp+3Ch] [bp-1050h]
  void *src; // [sp+44h] [bp-1048h]
  int n; // [sp+4Ch] [bp-1040h]
  int v22; // [sp+54h] [bp-1038h] BYREF
  _DWORD v23[2]; // [sp+58h] [bp-1034h] BYREF
  __int16 v24; // [sp+60h] [bp-102Ch]
  __int16 v25; // [sp+62h] [bp-102Ah]
  int v26; // [sp+64h] [bp-1028h]
  _DWORD v27[7]; // [sp+68h] [bp-1024h] BYREF
  int v28; // [sp+84h] [bp-1008h]
  char v29[4100]; // [sp+88h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 392);
  v5 = a2;
  LOWORD(v6) = (unsigned __int16)"ChipSetting_get_core_status_RVN";
  if ( a2 == 255 )
    v4 *= 8;
  HIWORD(v6) = (unsigned int)"ChipSetting_get_core_status_RVN" >> 16;
  v22 = 0;
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "%s core_no %d", v6, v4);
  v9 = 0;
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    v6 + 32,
    31,
    1277,
    20,
    v29);
  v24 = 1;
  v23[0] = 0;
  v23[1] = 0;
  n = 12 * v4;
  v10 = calloc(12 * v4, 1u);
  v25 = a3;
  v26 = v5;
  v11 = v4;
  src = v10;
  v12 = v10;
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v23,
    v11,
    v10,
    &v22,
    v17,
    2000,
    0);
  v13 = v22;
  if ( v22 > 0 )
  {
    v14 = v6 + 32;
    v15 = v12;
    v18 = v14;
    do
    {
      V_LOCK();
      ++v9;
      v15 += 3;
      V_INT((int)v27, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v29,
        0x1000u,
        0,
        v28,
        v27[0],
        v27[1],
        v27[2],
        v27[3],
        v27[4],
        v27[5],
        v27[6],
        v28,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v15 - 8),
        *((unsigned __int8 *)v15 - 4),
        *((unsigned __int16 *)v15 - 3),
        *(v15 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        v18,
        31,
        1289,
        20,
        v29);
      v13 = v22;
    }
    while ( v22 > v9 );
  }
  if ( a4 )
    memcpy(a4, src, n);
  free(src);
  return v13;
}
