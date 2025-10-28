void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_1B4624 > 1 )
  {
    v0 = (char *)&unk_1B4629;
    v1 = &dbl_1B4678;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_1B4628[dword_1B4624] != v0 );
  }
}
