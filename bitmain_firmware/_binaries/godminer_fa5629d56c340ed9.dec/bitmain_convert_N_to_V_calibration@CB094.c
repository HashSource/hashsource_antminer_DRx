void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_1B5744 > 1 )
  {
    v0 = (char *)&unk_1B5749;
    v1 = &dbl_1B5798;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_1B5748[dword_1B5744] != v0 );
  }
}
