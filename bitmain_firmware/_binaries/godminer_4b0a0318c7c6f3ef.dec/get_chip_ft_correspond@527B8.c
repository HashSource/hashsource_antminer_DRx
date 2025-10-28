int __fastcall get_chip_ft_correspond(char ***a1, _DWORD *a2)
{
  char **v2; // r3

  if ( opt_algo == 11 )
    v2 = &off_1934A4;
  else
    v2 = &off_1935D0;
  *a1 = v2;
  *a2 = 25;
  return 0;
}
