int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  const char *v2; // r3
  unsigned int v3; // r2
  int v4; // r4
  int v5; // r5
  unsigned int v6; // t1
  void (__fastcall *v7)(int, _DWORD *); // r3
  _DWORD v9[1025]; // [sp+10h] [bp-1004h] BYREF

  v2 = "d";
  v3 = 100;
  v4 = -2145385919;
  v5 = 100;
  while ( (float)v3 <= v1 )
  {
    v5 = v3;
    v4 = *((_DWORD *)v2 + 1);
    if ( v2 == (const char *)&unk_158FC0 )
      break;
    v6 = *((_DWORD *)v2 + 2);
    v2 += 8;
    v3 = v6;
  }
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  v9[0] = v4;
  v9[2] = 786433;
  v9[3] = 0;
  v9[1] = 0;
  v7(a1, v9);
  V_LOCK();
  logfmt_raw((char *)v9, 0x1000u, 0, "target_freq: %.2f actual_freq: %d, reg_value: %08x", v1, v5, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "set_frequency_zec_1746",
    22,
    636,
    40,
    v9);
  return 0;
}
