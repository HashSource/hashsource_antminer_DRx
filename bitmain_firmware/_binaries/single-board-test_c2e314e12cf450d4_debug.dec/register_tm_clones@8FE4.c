__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &stdin;
  HIDWORD(result) = 0;
  return result;
}
