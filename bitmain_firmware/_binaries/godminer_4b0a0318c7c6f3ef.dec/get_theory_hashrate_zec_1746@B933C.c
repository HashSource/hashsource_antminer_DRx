int __fastcall get_theory_hashrate_zec_1746(int a1, double *a2)
{
  double v4; // d6
  float v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = 0.0;
  if ( is_eeprom_loaded() )
  {
    if ( api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 248), v6) )
    {
      v4 = v6[0];
    }
    else if ( v6[0] < 98.0 )
    {
      if ( v6[0] >= 96.0 )
        v4 = 0.980000019;
      else
        v4 = (float)((float)(int)((((int)v6[0] + ((unsigned int)(int)v6[0] >> 31)) & 0xFFFFFFFE) + 2) / 100.0);
    }
    else
    {
      v4 = 1.0;
    }
    *a2 = *(float *)(a1 + 996) * 6.0 * 61.11 * v4;
    return 0;
  }
  else
  {
    *a2 = 0.0;
    return 32;
  }
}
