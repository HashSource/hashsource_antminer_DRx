int sub_16060()
{
  int v0; // r3
  int result; // r0

  v0 = dword_CA610;
  for ( dword_CA604 = 0; dword_CA610; v0 = dword_CA610 )
    result = sub_10F54(*(_DWORD *)(v0 + 4));
  return result;
}
