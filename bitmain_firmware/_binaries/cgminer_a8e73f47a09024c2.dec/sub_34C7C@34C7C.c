int __fastcall sub_34C7C(int a1, char a2)
{
  int result; // r0
  int v3; // r1
  unsigned int v4; // r1
  unsigned int v5; // r1

  switch ( a1 )
  {
    case 1:
      return 1;
    case 2:
      if ( a2 < 0 )
        return 2;
      else
        return 1;
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
      }
      return 1;
    case 8:
      v4 = a2 & 0xE0;
      if ( v4 == 128 )
        return 5;
      if ( v4 <= 0x80 )
      {
        switch ( v4 )
        {
          case '@':
            return 3;
          case '`':
            return 4;
          case ' ':
            return 2;
        }
        return 1;
      }
      if ( v4 != 192 )
      {
        if ( v4 == 224 )
          return 8;
        if ( v4 == 160 )
          return 6;
        return 1;
      }
      return 7;
    case 16:
      v5 = a2 & 0xF0;
      if ( v5 == 128 )
        return 9;
      if ( v5 <= 0x80 )
      {
        if ( v5 == 64 )
          return 5;
        if ( v5 > 0x40 )
        {
          switch ( v5 )
          {
            case '`':
              return 7;
            case 'p':
              return 8;
            case 'P':
              return 6;
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
          }
        }
        return 1;
      }
      if ( v5 == 192 )
        return 13;
      if ( v5 <= 0xC0 )
      {
        switch ( v5 )
        {
          case 0xA0u:
            return 11;
          case 0xB0u:
            return 12;
          case 0x90u:
            return 10;
        }
        return 1;
      }
      if ( v5 != 224 )
      {
        if ( v5 == 240 )
          return 16;
        if ( v5 == 208 )
          return 14;
        return 1;
      }
      return 15;
    case 32:
      switch ( a2 & 0xF8 )
      {
        case 8:
          result = 2;
          break;
        case 0x10:
          result = 3;
          break;
        case 0x18:
          result = 4;
          break;
        case 0x20:
          result = 5;
          break;
        case 0x28:
          result = 6;
          break;
        case 0x30:
          result = 7;
          break;
        case 0x38:
          result = 8;
          break;
        case 0x40:
          result = 9;
          break;
        case 0x48:
          result = 10;
          break;
        case 0x50:
          result = 11;
          break;
        case 0x58:
          result = 12;
          break;
        case 0x60:
          result = 13;
          break;
        case 0x68:
          result = 14;
          break;
        case 0x70:
          result = 15;
          break;
        case 0x78:
          result = 16;
          break;
        case 0x80:
          result = 17;
          break;
        case 0x88:
          result = 18;
          break;
        case 0x90:
          result = 19;
          break;
        case 0x98:
          result = 20;
          break;
        case 0xA0:
          result = 21;
          break;
        case 0xA8:
          result = 22;
          break;
        case 0xB0:
          result = 23;
          break;
        case 0xB8:
          result = 24;
          break;
        case 0xC0:
          result = 25;
          break;
        case 0xC8:
          result = 26;
          break;
        case 0xD0:
          result = 27;
          break;
        case 0xD8:
          result = 28;
          break;
        case 0xE0:
          result = 29;
          break;
        case 0xE8:
          result = 30;
          break;
        case 0xF0:
          result = 31;
          break;
        case 0xF8:
          result = 32;
          break;
        default:
          result = 1;
          break;
      }
      return result;
    case 64:
      switch ( a2 & 0xFC )
      {
        case 4:
          result = 2;
          break;
        case 8:
          result = 3;
          break;
        case 0xC:
          result = 4;
          break;
        case 0x10:
          result = 5;
          break;
        case 0x14:
          result = 6;
          break;
        case 0x18:
          result = 7;
          break;
        case 0x1C:
          result = 8;
          break;
        case 0x20:
          result = 9;
          break;
        case 0x24:
          result = 10;
          break;
        case 0x28:
          result = 11;
          break;
        case 0x2C:
          result = 12;
          break;
        case 0x30:
          result = 13;
          break;
        case 0x34:
          result = 14;
          break;
        case 0x38:
          result = 15;
          break;
        case 0x3C:
          result = 16;
          break;
        case 0x40:
          result = 17;
          break;
        case 0x44:
          result = 18;
          break;
        case 0x48:
          result = 19;
          break;
        case 0x4C:
          result = 20;
          break;
        case 0x50:
          result = 21;
          break;
        case 0x54:
          result = 22;
          break;
        case 0x58:
          result = 23;
          break;
        case 0x5C:
          result = 24;
          break;
        case 0x60:
          result = 25;
          break;
        case 0x64:
          result = 26;
          break;
        case 0x68:
          result = 27;
          break;
        case 0x6C:
          result = 28;
          break;
        case 0x70:
          result = 29;
          break;
        case 0x74:
          result = 30;
          break;
        case 0x78:
          result = 31;
          break;
        case 0x7C:
          result = 32;
          break;
        case 0x80:
          result = 33;
          break;
        case 0x84:
          result = 34;
          break;
        case 0x88:
          result = 35;
          break;
        case 0x8C:
          result = 36;
          break;
        case 0x90:
          result = 37;
          break;
        case 0x94:
          result = 38;
          break;
        case 0x98:
          result = 39;
          break;
        case 0x9C:
          result = 40;
          break;
        case 0xA0:
          result = 41;
          break;
        case 0xA4:
          result = 42;
          break;
        case 0xA8:
          result = 43;
          break;
        case 0xAC:
          result = 44;
          break;
        case 0xB0:
          result = 45;
          break;
        case 0xB4:
          result = 46;
          break;
        case 0xB8:
          result = 47;
          break;
        case 0xBC:
          result = 48;
          break;
        case 0xC0:
          result = 49;
          break;
        case 0xC4:
          result = 50;
          break;
        case 0xC8:
          result = 51;
          break;
        case 0xCC:
          result = 52;
          break;
        case 0xD0:
          result = 53;
          break;
        case 0xD4:
          result = 54;
          break;
        case 0xD8:
          result = 55;
          break;
        case 0xDC:
          result = 56;
          break;
        case 0xE0:
          result = 57;
          break;
        case 0xE4:
          result = 58;
          break;
        case 0xE8:
          result = 59;
          break;
        case 0xEC:
          result = 60;
          break;
        case 0xF0:
          result = 61;
          break;
        case 0xF4:
          result = 62;
          break;
        case 0xF8:
          result = 63;
          break;
        case 0xFC:
          result = 64;
          break;
        default:
          result = 1;
          break;
      }
      return result;
    default:
      return 0;
  }
}
