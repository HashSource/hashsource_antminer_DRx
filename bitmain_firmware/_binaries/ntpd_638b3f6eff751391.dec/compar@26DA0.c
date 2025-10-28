int __fastcall compar(double *a1, double *a2)
{
  if ( *a1 < *a2 )
    return -1;
  else
    return *a1 > *a2;
}
