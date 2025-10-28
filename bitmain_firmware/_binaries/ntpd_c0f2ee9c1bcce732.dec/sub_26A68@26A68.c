void __fastcall sub_26A68(int a1, int a2, char *a3)
{
  double v3; // d0

  if ( dword_7CF4C > 1 )
    printf("proto_config: code %d value %lu dvalue %lf\n", a1, a2, v3);
  switch ( a1 )
  {
    case 1:
      dword_CB4F4 = a2;
      if ( a2 )
        sub_14BD0();
      else
        sub_14D20();
      break;
    case 3:
      dword_CB46C = a2;
      break;
    case 4:
      dbl_CB488 = v3;
      break;
    case 6:
      if ( a3 )
        sub_14DE8(a3);
      dword_CB4F4 = 1;
      break;
    case 7:
      if ( a3 )
        sub_151FC((unsigned __int16 *)a3);
      break;
    case 8:
      dword_7A19C = a2;
      break;
    case 9:
      dword_7A198 = a2;
      break;
    case 10:
      if ( a2 )
        sub_20D7C(1);
      else
        sub_20DFC((int *)1);
      break;
    case 11:
      dword_CB588 = a2;
      break;
    case 12:
      dword_CABC4 = a2;
      break;
    case 13:
      dword_CB508 = a2;
      break;
    case 14:
      dword_7A2B8 = (int)v3;
      break;
    case 15:
      dword_7A2BC = (int)v3;
      break;
    case 16:
      dword_7A2B4 = (int)v3;
      break;
    case 17:
      dword_7FB08 = (int)v3;
      break;
    case 18:
      dword_7A2A0 = (int)v3;
      break;
    case 19:
      LODWORD(flt_7FB38) = (int)v3;
      break;
    case 20:
      return;
    case 21:
      dbl_7A298 = v3;
      break;
    case 22:
      dbl_7A2A8 = v3;
      break;
    case 23:
      dbl_C9AD8 = v3;
      break;
    case 25:
      LODWORD(flt_7A2C0) = (int)v3;
      break;
    case 26:
      dword_7A2B0 = (int)v3;
      break;
    default:
      sub_4FE78(5, "proto: unsupported option %d", a1);
      break;
  }
}
