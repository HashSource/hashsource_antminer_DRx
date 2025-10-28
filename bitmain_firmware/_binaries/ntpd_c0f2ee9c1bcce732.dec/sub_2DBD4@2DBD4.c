unsigned int __fastcall sub_2DBD4(unsigned int result, int a2)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  unsigned int v6; // r5
  FILE *v8; // r8
  unsigned int v9; // r7
  const char *v10; // r10
  const char *v11; // r0
  int v12[3]; // [sp+28h] [bp-Ch] BYREF

  v6 = result;
  if ( dword_CB588 )
  {
    sub_4CBA8(v12);
    sub_1DAE8((int)&dword_7FFF8, v12[0]);
    v8 = (FILE *)dword_7FFF8;
    result = v12[0] % 0x15180u;
    v9 = v12[0] / 0x15180u + 15020;
    v12[0] %= 0x15180u;
    if ( dword_7FFF8 )
    {
      v10 = (const char *)sub_4F124(result, v12[1], 0, 3, 0);
      v11 = (const char *)sub_50CD0(v6);
      fprintf(v8, "%lu %s %s %x %.9f %.9f %.9f %.9f\n", v9, v10, v11, a2, v2, v3, v4, v5);
      return fflush((FILE *)dword_7FFF8);
    }
  }
  return result;
}
