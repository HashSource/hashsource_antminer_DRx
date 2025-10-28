int __fastcall eeprom_verify_fixture_crc(_BYTE *a1, unsigned __int8 *a2)
{
  return -(sub_C5590(a1, a2) == 0);
}
