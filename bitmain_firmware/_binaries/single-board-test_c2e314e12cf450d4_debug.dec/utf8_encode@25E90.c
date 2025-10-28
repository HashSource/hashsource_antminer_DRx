int __cdecl utf8_encode(int32_t codepoint, char *buffer, size_t *size)
{
  if ( codepoint >= 0 )
  {
    if ( codepoint > 127 )
    {
      if ( codepoint > 2047 )
      {
        if ( codepoint > 0xFFFF )
        {
          if ( codepoint > 1114111 )
            return -1;
          *buffer = ((codepoint & 0x1C0000) >> 18) - 16;
          buffer[1] = ((codepoint & 0x3F000) >> 12) + 0x80;
          buffer[2] = ((codepoint & 0xFC0) >> 6) + 0x80;
          buffer[3] = (codepoint & 0x3F) + 0x80;
          *size = 4;
        }
        else
        {
          *buffer = ((codepoint & 0xF000) >> 12) - 32;
          buffer[1] = ((codepoint & 0xFC0) >> 6) + 0x80;
          buffer[2] = (codepoint & 0x3F) + 0x80;
          *size = 3;
        }
      }
      else
      {
        *buffer = ((codepoint & 0x7C0) >> 6) - 64;
        buffer[1] = (codepoint & 0x3F) + 0x80;
        *size = 2;
      }
    }
    else
    {
      *buffer = codepoint;
      *size = 1;
    }
    return 0;
  }
  return -1;
}
