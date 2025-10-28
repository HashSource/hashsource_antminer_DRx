int sub_E5A8()
{
  int v0; // r0
  int result; // r0
  int v2; // r2
  int *v3; // r12
  int *v4; // r1
  unsigned int v5; // r0
  int *v6; // r2

  if ( dword_21334 )
  {
    v2 = off_21344;
    v3 = (int *)off_21348;
    v4 = off_21338 + 1;
    v5 = *(_DWORD *)off_21344 + *off_21338;
    *(_DWORD *)off_21344 = v5;
    v6 = (int *)(v2 + 4);
    result = v5 >> 1;
    if ( v6 >= v3 )
    {
      v6 = off_21330;
    }
    else if ( v3 <= v4 )
    {
      v4 = off_21330;
    }
    off_21344 = (int)v6;
    off_21338 = v4;
  }
  else
  {
    v0 = -2836 * (*off_21330 / 127773) + 16807 * (*off_21330 % 127773);
    if ( v0 <= 0 )
      v0 += 0x7FFFFFFF;
    result = v0 & 0x7FFFFFFF;
    *off_21330 = result;
  }
  return result;
}
