_DWORD *sub_10D34()
{
  _DWORD *result; // r0

  result = malloc(8u);
  if ( !result )
    exit(0);
  result[1] = 0;
  dword_1D440 = 0;
  dword_1D420 = (int)result;
  return result;
}
