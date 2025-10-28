int __fastcall sub_56EEC(const char *a1, const char *a2, FILE **a3)
{
  FILE *v4; // r0
  int *v6; // r0

  v4 = fopen(a1, a2);
  if ( v4 )
  {
    *a3 = v4;
    return 0;
  }
  else
  {
    v6 = _errno_location();
    return sub_598C0(*v6);
  }
}
