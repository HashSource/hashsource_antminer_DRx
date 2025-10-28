int sub_504EC()
{
  int v0; // r0
  int result; // r0
  int *v2; // r2
  int *v3; // r12
  int *v4; // r1
  unsigned int v5; // r0
  int *v6; // r2

  if ( dword_7BEA4 )
  {
    v2 = off_7BEB4;
    v3 = (int *)off_7BEB8;
    v4 = off_7BEA8 + 1;
    v5 = *off_7BEB4 + *off_7BEA8;
    *off_7BEB4 = v5;
    v6 = v2 + 1;
    result = v5 >> 1;
    if ( v6 >= v3 )
    {
      v6 = off_7BEA0;
    }
    else if ( v3 <= v4 )
    {
      v4 = off_7BEA0;
    }
    off_7BEB4 = v6;
    off_7BEA8 = v4;
  }
  else
  {
    v0 = -2836 * (*off_7BEA0 / 127773) + 16807 * (*off_7BEA0 % 127773);
    if ( v0 <= 0 )
      v0 += 0x7FFFFFFF;
    result = v0 & 0x7FFFFFFF;
    *off_7BEA0 = result;
  }
  return result;
}
