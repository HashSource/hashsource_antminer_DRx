unsigned int __fastcall sub_2E018(unsigned int result)
{
  const char *v1; // r4
  FILE *v2; // r7
  unsigned int v3; // r6
  const char *v4; // r0
  int v5[3]; // [sp+8h] [bp-Ch] BYREF

  v1 = (const char *)result;
  if ( dword_CB588 )
  {
    sub_4CBA8(v5);
    sub_1DAE8((int)&dword_8005C, v5[0]);
    v2 = (FILE *)dword_8005C;
    result = v5[0] % 0x15180u;
    v3 = v5[0] / 0x15180u + 15020;
    v5[0] %= 0x15180u;
    if ( dword_8005C )
    {
      v4 = (const char *)sub_4F124(result, v5[1], 0, 3, 0);
      fprintf(v2, "%lu %s %s\n", v3, v4, v1);
      return fflush((FILE *)dword_8005C);
    }
  }
  return result;
}
