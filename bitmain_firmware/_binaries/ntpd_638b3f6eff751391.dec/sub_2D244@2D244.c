void sub_2D244()
{
  int *v0; // r3
  int v1; // r2

  if ( !dword_CAA98 )
  {
    v0 = &dword_CB570;
    v1 = dword_CB570;
    if ( dword_CB570 )
      v0 = &dword_CB54C;
    else
      v1 = 1;
    if ( dword_CB570 )
      v1 = *v0 + 1;
    *v0 = v1;
  }
}
