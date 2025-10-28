int calculate_timeout_and_baud()
{
  int result; // r0
  int v1; // [sp+Ch] [bp+Ch]

  v1 = 0;
  printf("\n%s\n", "calculate_timeout_and_baud");
  result = calculate_core_number(dword_33684C);
  switch ( pattern_test_time )
  {
    case 0:
      v1 = dword_336824;
      break;
    case 1:
      v1 = dword_336828;
      break;
    case 2:
      v1 = dword_33682C;
      break;
    case 3:
      v1 = dword_336830;
      break;
    case 4:
      v1 = dword_336834;
      break;
    case 5:
      v1 = dword_336838;
      break;
    case 6:
      v1 = dword_33683C;
      break;
    case 7:
      v1 = dword_336840;
      break;
    case 8:
      v1 = dword_336844;
      break;
    default:
      result = printf(
                 "%s: pattern_test_time = %d, error!!! \n",
                 "calculate_timeout_and_baud",
                 (unsigned __int8)pattern_test_time);
      break;
  }
  LODWORD(flt_336820) = v1;
  dword_3368E0 = 0;
  return result;
}
