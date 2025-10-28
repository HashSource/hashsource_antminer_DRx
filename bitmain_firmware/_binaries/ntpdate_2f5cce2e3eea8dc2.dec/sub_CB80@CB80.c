int *sub_CB80()
{
  int *result; // r0
  int *v1; // r2
  int v2; // r1
  bool v3; // zf

  result = (int *)calloc(0xCu, 0x58u);
  if ( result )
  {
    v1 = result;
    v2 = dword_241C0;
    do
    {
      *v1 = v2;
      v3 = v1 + 22 == result + 264;
      v2 = (int)v1;
      v1 += 22;
    }
    while ( !v3 );
    dword_241C0 = (int)(result + 242);
    result = (int *)(dword_241C8 + 12);
    dword_241C8 += 12;
  }
  return result;
}
