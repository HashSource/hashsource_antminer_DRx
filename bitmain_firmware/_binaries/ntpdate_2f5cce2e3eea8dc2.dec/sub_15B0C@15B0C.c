int __fastcall sub_15B0C(const char *a1, __off_t a2, int a3, int a4)
{
  int *v5; // r0
  int v6; // r1
  int v7; // r2

  if ( truncate(a1, a2) >= 0 )
    return 0;
  v5 = _errno_location();
  return sub_14CC8((char *)*v5, v6, v7, a4);
}
