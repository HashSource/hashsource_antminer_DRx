int __fastcall sub_16478(const char *a1)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int result; // r0

  v2 = dword_CA668;
  v3 = *(_DWORD *)(dword_CA668 + 24);
  v4 = *(_DWORD *)(dword_CA668 + 20);
  *(_DWORD *)(dword_CA668 + 32) = v3;
  *(_DWORD *)(v2 + 28) = v4;
  result = sub_4FE78(3, "line %d column %d %s", v4, v3, a1);
  if ( !dword_794D8 )
  {
    result = snprintf(
               &byte_C9D70[dword_CA574 + 1024],
               1024 - dword_CA574,
               "column %d %s",
               *(_DWORD *)(dword_CA668 + 32),
               a1);
    if ( result > 0 )
    {
      result += dword_CA574;
      dword_CA574 = result;
    }
    ++dword_CA578;
  }
  return result;
}
