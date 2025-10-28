unsigned int __fastcall sub_2DDBC(unsigned int result, const char *a2)
{
  unsigned int v2; // r5
  FILE *v4; // r8
  unsigned int v5; // r7
  const char *v6; // r10
  const char *v7; // r0
  int v8[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = result;
  if ( dword_CB588 )
  {
    sub_4CBA8(v8);
    sub_1DAE8((int)&dword_80020, v8[0]);
    v4 = (FILE *)dword_80020;
    result = v8[0] % 0x15180u;
    v5 = v8[0] / 0x15180u + 15020;
    v8[0] %= 0x15180u;
    if ( dword_80020 )
    {
      v6 = (const char *)sub_4F124(result, v8[1], 0, 3, 0);
      v7 = (const char *)sub_50CD0(v2);
      fprintf(v4, "%lu %s %s %s\n", v5, v6, v7, a2);
      return fflush((FILE *)dword_80020);
    }
  }
  return result;
}
