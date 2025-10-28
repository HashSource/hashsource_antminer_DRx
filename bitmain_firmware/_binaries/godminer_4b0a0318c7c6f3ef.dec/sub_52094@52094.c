unsigned int __fastcall sub_52094(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  unsigned int v8; // r6
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "calc_voltage_bias_ltc_1489() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "calc_voltage_bias_ltc_1489",
    26,
    13,
    40,
    v10);
  if ( a3 >= a4 )
  {
    dword_1934A0 = 0;
    goto LABEL_10;
  }
  if ( dword_1934A0 > 120 )
  {
    dword_1934A0 = 0;
    goto LABEL_10;
  }
  if ( !dword_1934A0 )
  {
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v7 = dword_1934A0 + 1;
  if ( !a2 )
  {
LABEL_8:
    v8 = 20;
    dword_1934A0 = v7;
    goto LABEL_11;
  }
  ++dword_1934A0;
  v8 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v7 )
  {
    ++v7;
    goto LABEL_8;
  }
LABEL_11:
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "calc_voltage_bias_ltc_1489() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "calc_voltage_bias_ltc_1489",
    26,
    33,
    40,
    v10);
  return v8;
}
