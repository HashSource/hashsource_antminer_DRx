int get_total_nonce_rate()
{
  int v0; // r4
  int result; // r0
  float v2; // s16
  int v3; // r0
  int v4; // [sp+0h] [bp-8h] BYREF
  float v5; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v4 = 0;
  get_all_created_runtime(&v4);
  result = is_eeprom_loaded();
  if ( result && v4 > 0 )
  {
    v2 = 0.0;
    do
    {
      v3 = v0;
      v5 = 0.0;
      ++v0;
      result = api_get_eeprom_nonce_response_rate(v3, &v5);
      if ( !result )
        v2 = v2 + v5;
    }
    while ( v4 > v0 );
  }
  return result;
}
