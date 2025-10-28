int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  float v2; // s13
  float v3; // s14
  float v4; // s15
  double v7; // r0
  float v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = 0.0;
  if ( is_eeprom_loaded() )
  {
    LODWORD(v7) = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 220), v9);
    if ( LODWORD(v7) )
    {
      v3 = v9[0];
    }
    else
    {
      v2 = v9[0];
      v4 = 100.0;
    }
    if ( !LODWORD(v7) )
      v3 = v2 / v4;
    floor(v7);
    *a2 = (double)(50 * (unsigned int)((float)(v3 * 1920.0) / 50.0)) * 1000.0 * 1000.0;
    return 0;
  }
  else
  {
    *a2 = 0.0;
    return 32;
  }
}
