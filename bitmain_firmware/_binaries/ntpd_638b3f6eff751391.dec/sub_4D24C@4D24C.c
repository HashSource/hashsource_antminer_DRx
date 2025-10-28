int __fastcall sub_4D24C(char *s2, int a2)
{
  int v4; // r4

  v4 = 0;
  while ( ((a2 >> v4) & 1) == 0 || strcmp(off_7BCF4[v4], s2) )
  {
    if ( ++v4 == 25 )
      return -1;
  }
  return v4;
}
