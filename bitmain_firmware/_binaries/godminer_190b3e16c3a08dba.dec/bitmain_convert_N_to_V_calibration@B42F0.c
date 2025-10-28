void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_18C658 > 1 )
  {
    v0 = (char *)&unk_18C5F9;
    v1 = (char *)&unk_18C608;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_18C5F8[dword_18C658] != v0 );
  }
}
