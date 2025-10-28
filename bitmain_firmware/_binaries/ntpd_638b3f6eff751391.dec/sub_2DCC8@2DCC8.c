unsigned int __fastcall sub_2DCC8(unsigned int result)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  unsigned int v5; // r4
  FILE *v6; // r7
  unsigned int v7; // r6
  const char *v8; // r0
  int v9[3]; // [sp+28h] [bp-Ch] BYREF

  v5 = result;
  if ( dword_CB588 )
  {
    sub_4CBA8(v9);
    sub_1DAE8((int)&dword_8000C, v9[0]);
    v6 = (FILE *)dword_8000C;
    result = v9[0] % 0x15180u;
    v7 = v9[0] / 0x15180u + 15020;
    v9[0] %= 0x15180u;
    if ( dword_8000C )
    {
      v8 = (const char *)sub_4F124(result, v9[1], 0, 3, 0);
      fprintf(v6, "%lu %s %.9f %.3f %.9f %.6f %d\n", v7, v8, v1, v2 * 1000000.0, v3, v4 * 1000000.0, v5);
      return fflush((FILE *)dword_8000C);
    }
  }
  return result;
}
