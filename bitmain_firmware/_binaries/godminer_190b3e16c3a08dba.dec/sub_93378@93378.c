unsigned int __fastcall sub_93378(int a1, int a2, void *a3)
{
  int v3; // r4
  _DWORD *v6; // r8
  unsigned int v7; // r10
  _DWORD *v8; // r5
  unsigned int v9; // r2
  int v12; // [sp+44h] [bp-1038h] BYREF
  _DWORD v13[2]; // [sp+48h] [bp-1034h] BYREF
  __int16 v14; // [sp+50h] [bp-102Ch]
  __int16 v15; // [sp+52h] [bp-102Ah]
  int v16; // [sp+54h] [bp-1028h]
  _DWORD v17[7]; // [sp+58h] [bp-1024h] BYREF
  int v18; // [sp+74h] [bp-1008h]
  char v19[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = 0;
  v14 = 1;
  v13[1] = 0;
  v16 = 0;
  v12 = 0;
  v13[0] = 0;
  v15 = a2;
  v6 = calloc(0x60u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 260))(a1, v13, 8, v6, &v12);
  v7 = v12;
  if ( v12 > 0 )
  {
    v8 = v6;
    do
    {
      while ( 1 )
      {
        ++v3;
        if ( *((unsigned __int16 *)v8 + 3) == a2 )
          break;
        v7 = v12;
        v8 += 3;
        if ( v12 <= v3 )
          goto LABEL_6;
      }
      V_LOCK();
      v8 += 3;
      V_INT((int)v17, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v19,
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
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v8 - 8),
        *((unsigned __int16 *)v8 - 3),
        *(v8 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_chip_status_RVN",
        31,
        1161,
        20,
        v19);
      v7 = v12;
    }
    while ( v12 > v3 );
  }
LABEL_6:
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 392);
    if ( v7 < v9 )
      v9 = v7;
    memcpy(a3, v6, 12 * v9);
  }
  free(v6);
  return v7;
}
