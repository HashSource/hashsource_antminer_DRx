int __fastcall eeprom_trans_raw2layout(_BYTE *a1, int a2)
{
  return -((unsigned __int8)sub_B0188(a1, a2) ^ 1);
}
