int __fastcall get_read_address_info(int a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // [sp+14h] [bp+14h]

  v5 = 0;
  if ( platform_is_t9 )
  {
    switch ( a1 )
    {
      case 0:
        *a2 = dword_35678;
        *a3 = dword_3567C;
        break;
      case 1:
        *a2 = dword_35680;
        *a3 = dword_35684;
        break;
      case 2:
        *a2 = dword_35688;
        *a3 = dword_3568C;
        break;
      case 3:
        *a2 = dword_35690;
        *a3 = dword_35694;
        break;
      case 8:
        *a2 = dword_356B8;
        *a3 = dword_356BC;
        break;
      case 9:
        *a2 = dword_356C0;
        *a3 = dword_356C4;
        break;
      case 10:
        *a2 = dword_356E8;
        *a3 = dword_356EC;
        break;
      case 11:
        *a2 = dword_356F0;
        *a3 = dword_356F4;
        break;
      case 12:
        *a2 = dword_356F8;
        *a3 = dword_356FC;
        break;
      case 13:
        *a2 = dword_35700;
        *a3 = dword_35704;
        break;
      default:
        printf("%s:%d", "get_read_address_info", 268);
        printf("%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
        v5 = -1;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        *a2 = dword_3590C;
        *a3 = dword_35910;
        break;
      case 1:
        *a2 = dword_35914;
        *a3 = dword_35918;
        break;
      case 2:
        *a2 = dword_3591C;
        *a3 = dword_35920;
        break;
      case 3:
        *a2 = dword_35924;
        *a3 = dword_35928;
        break;
      case 4:
        *a2 = dword_3592C;
        *a3 = dword_35930;
        break;
      case 5:
        *a2 = dword_35934;
        *a3 = dword_35938;
        break;
      case 6:
        *a2 = dword_3593C;
        *a3 = dword_35940;
        break;
      case 7:
        *a2 = dword_35944;
        *a3 = dword_35948;
        break;
      case 8:
        *a2 = dword_3594C;
        *a3 = dword_35950;
        break;
      case 9:
        *a2 = dword_35954;
        *a3 = dword_35958;
        break;
      default:
        printf("%s:%d", "get_read_address_info", 326);
        printf("%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
        v5 = -1;
        break;
    }
  }
  return v5;
}
