void sub_207D8()
{
  int v0; // r5
  int v1; // r6
  double v2; // d16
  int v3; // r1
  double *v4; // r3
  double v5; // d17

  v0 = dword_7D5F0;
  if ( dword_7D5F0 )
  {
    v1 = dword_7D600;
    sub_5AA04(dword_7D5F4 + 1, dword_7D600);
    v2 = 1000000000.0;
    dbl_7D5F8 = 1000000000.0;
    dword_7D5F4 = v3;
    *(_QWORD *)(v0 + 8 * v3) = 0x41CDCD6500000000LL;
    if ( v1 > 0 )
    {
      v4 = (double *)v0;
      do
      {
        v5 = *v4++;
        if ( v5 < v2 )
          v2 = v5;
      }
      while ( v4 != (double *)(v0 + 8 * v1) );
      dbl_7D5F8 = v2;
    }
  }
}
