int __fastcall crc_itu_t_byte(__int16 a1, char a2)
{
  return crc_itu_t_table[(unsigned __int8)(a2 ^ HIBYTE(a1))] ^ (unsigned __int16)(a1 << 8);
}
