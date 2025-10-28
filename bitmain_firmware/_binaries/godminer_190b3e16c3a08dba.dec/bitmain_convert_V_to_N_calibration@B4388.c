int bitmain_convert_V_to_N_calibration()
{
  double v0; // d0
  int v1; // s13
  double *v2; // r1
  int *v3; // r12
  int *v4; // r3
  double v5; // d5
  double v6; // d7

  if ( dword_18C658 > 1 )
  {
    v2 = (double *)&unk_18C608;
    v3 = (int *)((char *)&unk_18C5E7 + dword_18C658);
    v4 = &dword_18C5E8;
    v1 = -1;
    while ( 1 )
    {
      v6 = *v2++;
      if ( v6 <= v0 )
      {
        v5 = *v2;
        if ( *v2 > v0 )
          goto LABEL_5;
      }
      if ( v6 <= v0 )
        goto LABEL_6;
      v5 = *v2;
      if ( *v2 <= v0 )
      {
LABEL_5:
        v1 = (int)((double)*((unsigned __int8 *)v4 + 16)
                 + (double)(*((unsigned __int8 *)v4 + 17) - *((unsigned __int8 *)v4 + 16)) / (v5 - v6) * (v0 - v6));
LABEL_6:
        v4 = (int *)((char *)v4 + 1);
        if ( v4 == v3 )
          return v1;
      }
      else
      {
        v4 = (int *)((char *)v4 + 1);
        if ( v4 == v3 )
          return v1;
      }
    }
  }
  return -1;
}
