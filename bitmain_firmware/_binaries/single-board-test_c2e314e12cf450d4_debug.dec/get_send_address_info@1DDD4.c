int __fastcall get_send_address_info(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v7; // [sp+14h] [bp+14h]

  v7 = 0;
  if ( platform_is_t9 )
  {
    switch ( a1 )
    {
      case 0:
        *a2 = 24;
        *a3 = dword_355FC;
        *a4 = dword_3560C;
        *a5 = dword_35618;
        break;
      case 1:
        *a2 = 16;
        *a3 = dword_355FC;
        *a4 = dword_35614;
        *a5 = dword_35618;
        break;
      case 2:
        *a2 = 8;
        *a3 = dword_355FC;
        *a4 = dword_3561C;
        *a5 = dword_35620;
        break;
      case 3:
        *a2 = 0;
        *a3 = dword_355FC;
        *a4 = dword_35624;
        *a5 = dword_35628;
        break;
      case 4:
        *a2 = 24;
        *a3 = dword_35600;
        *a4 = dword_3562C;
        *a5 = dword_35630;
        break;
      case 5:
        *a2 = 16;
        *a3 = dword_35600;
        *a4 = dword_35634;
        *a5 = dword_35638;
        break;
      case 6:
        *a2 = 8;
        *a3 = dword_35600;
        *a4 = dword_3563C;
        *a5 = dword_35640;
        break;
      case 7:
        *a2 = 0;
        *a3 = dword_35600;
        *a4 = dword_35644;
        *a5 = dword_35648;
        break;
      case 8:
        *a2 = 24;
        *a3 = dword_35604;
        *a4 = dword_3564C;
        *a5 = dword_35650;
        break;
      case 9:
        *a2 = 16;
        *a3 = dword_35604;
        *a4 = dword_35654;
        *a5 = dword_35658;
        break;
      case 10:
        *a2 = 8;
        *a3 = dword_35604;
        *a4 = dword_356C8;
        *a5 = dword_356CC;
        break;
      case 11:
        *a2 = 0;
        *a3 = dword_35604;
        *a4 = dword_356D0;
        *a5 = dword_356D4;
        break;
      case 12:
        *a2 = 24;
        *a3 = dword_35608;
        *a4 = dword_356D8;
        *a5 = dword_356DC;
        break;
      case 13:
        *a2 = 16;
        *a3 = dword_35608;
        *a4 = dword_356E0;
        *a5 = dword_356E4;
        break;
      default:
        printf("%s:%d", "get_send_address_info", 124);
        printf("%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
        v7 = -1;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        *a2 = 24;
        *a3 = dword_35890;
        *a4 = dword_358A0;
        *a5 = dword_358A4;
        break;
      case 1:
        *a2 = 16;
        *a3 = dword_35890;
        *a4 = dword_358A8;
        *a5 = dword_358AC;
        break;
      case 2:
        *a2 = 8;
        *a3 = dword_35890;
        *a4 = dword_358B0;
        *a5 = dword_358B4;
        break;
      case 3:
        *a2 = 0;
        *a3 = dword_35890;
        *a4 = dword_358B8;
        *a5 = dword_358BC;
        break;
      case 4:
        *a2 = 24;
        *a3 = dword_35894;
        *a4 = dword_358C0;
        *a5 = dword_358C4;
        break;
      case 5:
        *a2 = 16;
        *a3 = dword_35894;
        *a4 = dword_358C8;
        *a5 = dword_358CC;
        break;
      case 6:
        *a2 = 8;
        *a3 = dword_35894;
        *a4 = dword_358D0;
        *a5 = dword_358D4;
        break;
      case 7:
        *a2 = 0;
        *a3 = dword_35894;
        *a4 = dword_358D8;
        *a5 = dword_358DC;
        break;
      case 8:
        *a2 = 24;
        *a3 = dword_35898;
        *a4 = dword_358E0;
        *a5 = dword_358E4;
        break;
      case 9:
        *a2 = 16;
        *a3 = dword_35898;
        *a4 = dword_358E8;
        *a5 = dword_358EC;
        break;
      default:
        printf("%s:%d", "get_send_address_info", 201);
        printf("%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
        v7 = -1;
        break;
    }
  }
  return v7;
}
