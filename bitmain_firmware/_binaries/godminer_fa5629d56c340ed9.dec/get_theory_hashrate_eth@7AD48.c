int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  double v4; // r0
  float v5; // s14
  double v6; // d7
  float v8; // [sp+2Ch] [bp-1048h] BYREF
  _DWORD v9[7]; // [sp+30h] [bp-1044h] BYREF
  int v10; // [sp+4Ch] [bp-1028h]
  _DWORD v11[7]; // [sp+50h] [bp-1024h] BYREF
  int v12; // [sp+6Ch] [bp-1008h]
  char v13[4100]; // [sp+70h] [bp-1004h] BYREF

  v8 = 1.0;
  if ( is_eeprom_loaded() )
  {
    LODWORD(v4) = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 252), &v8);
    if ( LODWORD(v4) )
    {
      v8 = 1.0;
      V_LOCK();
      V_INT((int)v11, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v13,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "get nonce resp error for getting theory_hashrate_eth!");
      V_UNLOCK();
      LODWORD(v4) = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                      171,
                      "get_theory_hashrate_eth",
                      23,
                      1518,
                      100,
                      v13);
      v5 = v8 * 1920.0;
    }
    else
    {
      if ( v8 == 0.0 )
      {
        v6 = 1900000000.0;
        goto LABEL_6;
      }
      v5 = (float)(v8 / 100.0) * 1920.0;
    }
    floor(v4);
    v6 = (double)(50 * (unsigned int)(v5 / 50.0)) * 1000.0 * 1000.0;
LABEL_6:
    *a2 = v6;
    return 0;
  }
  *a2 = 1.0;
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "load eeprom error for getting theory_hashrate_eth!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "get_theory_hashrate_eth",
    23,
    1509,
    100,
    v13);
  return 32;
}
