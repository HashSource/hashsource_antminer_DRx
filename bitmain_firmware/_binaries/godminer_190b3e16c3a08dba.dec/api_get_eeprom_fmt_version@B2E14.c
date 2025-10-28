int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_18C508[0] && *(_BYTE *)(dword_18C508[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_18C508[0] + 4 * dword_18C508[a1 + 2]) + 2);
  sub_AF7D8();
  return 0;
}
