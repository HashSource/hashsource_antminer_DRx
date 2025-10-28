int sub_270E4()
{
  char *v0; // r5
  int v1; // r4
  int v2; // t1
  int (*v3)(void); // r3
  int result; // r0

  if ( byte_7A600 )
  {
    v0 = "P";
    v1 = 0;
    do
    {
      v2 = *((_DWORD *)v0 + 1);
      v0 += 4;
      ++v1;
      v3 = *(int (**)(void))(v2 + 16);
      if ( v3 )
        result = v3();
    }
    while ( (unsigned __int8)byte_7A600 > v1 );
  }
  return result;
}
