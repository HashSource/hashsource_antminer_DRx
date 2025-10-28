size_t __cdecl utf8_check_first(char byte)
{
  if ( byte >= 0 )
    return 1;
  if ( (unsigned __int8)byte <= 0xBFu )
    return 0;
  if ( (unsigned __int8)byte == 192 || (unsigned __int8)byte == 193 )
    return 0;
  if ( (unsigned __int8)byte > 0xC1u && (unsigned __int8)byte <= 0xDFu )
    return 2;
  if ( (unsigned __int8)byte > 0xDFu && (unsigned __int8)byte <= 0xEFu )
    return 3;
  if ( (unsigned __int8)byte <= 0xEFu || (unsigned __int8)byte > 0xF4u )
    return 0;
  return 4;
}
