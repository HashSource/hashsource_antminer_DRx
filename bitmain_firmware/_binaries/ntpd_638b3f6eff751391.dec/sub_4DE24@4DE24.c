int *sub_4DE24()
{
  int *result; // r0
  int *v1; // r2
  int v2; // r1
  bool v3; // zf

  result = (int *)calloc(0xCu, 0x58u);
  if ( result )
  {
    v1 = result;
    v2 = dword_CB858;
    do
    {
      *v1 = v2;
      v3 = v1 + 22 == result + 264;
      v2 = (int)v1;
      v1 += 22;
    }
    while ( !v3 );
    dword_CB858 = (int)(result + 242);
    result = (int *)(dword_CB860 + 12);
    dword_CB860 += 12;
  }
  return result;
}
