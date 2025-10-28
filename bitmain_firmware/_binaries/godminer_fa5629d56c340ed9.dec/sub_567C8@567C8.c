int sub_567C8()
{
  int v0; // r5
  int v1; // r4
  int v2; // r0
  int v4; // [sp+4h] [bp-8h] BYREF

  get_all_created_runtime(&v4);
  if ( v4 <= 0 )
    return 0;
  v1 = 0;
  v0 = 0;
  do
  {
    v2 = v1++;
    if ( *(_BYTE *)api_get_eeprom_chip_marking(v2) == 83 )
      v0 = 60;
  }
  while ( v4 > v1 );
  return v0;
}
