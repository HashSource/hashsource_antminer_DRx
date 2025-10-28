size_t __fastcall enable_read_temperature_from_asic_chain(size_t result, unsigned __int8 a2)
{
  if ( dword_336850 == 1722 )
    return set_BM1722_asic_register(result, a2, 0x1Cu, 0, (dword_3368E0 << 8) | 0x7006061);
  if ( dword_336850 == 1725 )
    return set_BM1725_asic_register(result, a2, 0x1Cu, 0, (dword_3368E0 << 8) | 0x7006061);
  return result;
}
