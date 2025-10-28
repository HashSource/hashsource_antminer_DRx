int __fastcall sub_3E114(int result)
{
  if ( result != 1 && result != 2 )
  {
    if ( (unsigned int)(result - 3) <= 1 )
    {
      return 4;
    }
    else if ( (unsigned int)(result - 5) <= 3 )
    {
      return 8;
    }
    else if ( (unsigned int)(result - 9) <= 7 )
    {
      return 16;
    }
    else if ( (unsigned int)(result - 17) <= 0xF )
    {
      return 32;
    }
    else if ( (unsigned int)(result - 33) <= 0x1F )
    {
      return 64;
    }
    else if ( (unsigned int)(result - 65) <= 0x3F )
    {
      return 128;
    }
    else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      return sub_36B20(result);
    }
    else
    {
      return -1;
    }
  }
  return result;
}
