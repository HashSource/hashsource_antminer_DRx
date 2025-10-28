unsigned int __fastcall sub_50308(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r3
  int v8; // r3
  unsigned int v9; // r5
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v6) = (unsigned __int16)&dword_194484;
  if ( a3 >= a4 )
  {
    HIWORD(v6) = (unsigned int)&dword_194484 >> 16;
    *(_DWORD *)(v6 + 8) = 0;
    goto LABEL_10;
  }
  HIWORD(v6) = (unsigned int)&dword_194484 >> 16;
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 > 120 )
  {
    *(_DWORD *)(v6 + 8) = 0;
    goto LABEL_10;
  }
  if ( !v7 )
  {
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  v8 = v7 + 1;
  if ( !a2 )
  {
LABEL_8:
    v9 = 20;
    *(_DWORD *)(v6 + 8) = v8;
    goto LABEL_11;
  }
  *(_DWORD *)(v6 + 8) = v8;
  v9 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v8 )
  {
    ++v8;
    goto LABEL_8;
  }
LABEL_11:
  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "initial_cnt:%d, temp_max:%d, target_temp:%d, voltage_bias:%d",
    *(_DWORD *)(v6 + 8),
    a3,
    a4,
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "calc_voltage_bias_kas_2380",
    26,
    117,
    20,
    v11);
  return v9;
}
