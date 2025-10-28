size_t __fastcall hs_hex_decode_size(const char *a1)
{
  if ( a1 )
    return strlen(a1) >> 1;
  else
    return 0;
}
