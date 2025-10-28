int sub_B9C4()
{
  int result; // r0
  int v1; // r4
  const char *v2; // r1
  const char *v3; // r2

  result = printf("g_var_num == %d\n", dword_1B3A0);
  if ( dword_1B3A0 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = &byte_24490[129 * v1];
      v3 = &byte_1F468[513 * v1++];
      result = printf("%s = %s\n", v2, v3);
    }
    while ( dword_1B3A0 > v1 );
  }
  return result;
}
