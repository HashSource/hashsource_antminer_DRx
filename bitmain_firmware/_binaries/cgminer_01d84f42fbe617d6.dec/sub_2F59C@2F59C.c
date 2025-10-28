int __fastcall sub_2F59C(int a1, char a2)
{
  int v3; // r1
  unsigned int v4; // r1
  unsigned int v5; // r1
  unsigned int v6; // r1
  unsigned int v7; // r1

  switch ( a1 )
  {
    case 1:
      return 1;
    case 2:
      if ( (a2 & 0x80) == 0 )
        return 1;
      return 2;
    case 4:
      v3 = a2 & 0xC0;
      switch ( v3 )
      {
        case 128:
          return 3;
        case 192:
          return 4;
        case 64:
          return 2;
        default:
          return 1;
      }
    case 8:
      v4 = a2 & 0xE0;
      if ( v4 == 128 )
        return 5;
      if ( v4 > 0x80 )
      {
        if ( v4 == 192 )
          return 7;
        if ( v4 == 224 )
          return 8;
        if ( v4 != 160 )
          return 1;
        return 6;
      }
      if ( v4 == 64 )
        return 3;
      if ( v4 == 96 )
        return 4;
      if ( v4 != 32 )
        return 1;
      return 2;
    case 16:
      v5 = a2 & 0xF0;
      if ( v5 == 128 )
        return 9;
      if ( v5 <= 0x80 )
      {
        if ( v5 == 64 )
        {
          return 5;
        }
        else if ( v5 > 0x40 )
        {
          switch ( v5 )
          {
            case '`':
              return 7;
            case 'p':
              return 8;
            case 'P':
              return 6;
            default:
              return 1;
          }
        }
        else
        {
          switch ( v5 )
          {
            case 0x20u:
              return 3;
            case 0x30u:
              return 4;
            case 0x10u:
              return 2;
            default:
              return 1;
          }
        }
      }
      else if ( v5 == 192 )
      {
        return 13;
      }
      else if ( v5 > 0xC0 )
      {
        switch ( v5 )
        {
          case 0xE0u:
            return 15;
          case 0xF0u:
            return 16;
          case 0xD0u:
            return 14;
          default:
            return 1;
        }
      }
      else
      {
        switch ( v5 )
        {
          case 0xA0u:
            return 11;
          case 0xB0u:
            return 12;
          case 0x90u:
            return 10;
          default:
            return 1;
        }
      }
    case 32:
      v6 = (unsigned __int8)((a2 & 0xF8) - 8);
      if ( v6 > 0xF0 )
        return 1;
      return *((char *)&dword_51788[474] + v6);
    case 64:
      v7 = (unsigned __int8)((a2 & 0xFC) - 4);
      if ( v7 > 0xF8 )
        return 1;
      return *((char *)&dword_51788[535] + v7);
    default:
      return 0;
  }
}
