FILE *sub_387C8(int a1, int a2, ...)
{
  int v2; // r3
  int v3; // r4
  FILE *result; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r0
  FILE *v8; // r0
  char s[52]; // [sp+8h] [bp-28h] BYREF
  const char *varg_r1; // [sp+3Ch] [bp+Ch]
  va_list varg_r2; // [sp+40h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = *(FILE **)(v3 + 24);
  v5 = (*(unsigned __int8 *)(v2 + 752) >> 1) & 1;
  v6 = (int)result;
  if ( result )
    v6 = 1;
  if ( v5 != v6 )
  {
    if ( !v5 )
    {
      result = (FILE *)fclose(result);
      *(_DWORD *)(v3 + 24) = 0;
      return result;
    }
    snprintf(s, 0x28u, "/tmp/true%d.debug", *(_DWORD *)(v3 + 20));
    v7 = open(s, 193, 384);
    if ( v7 >= 0 )
    {
      v8 = fdopen(v7, "r+");
      *(_DWORD *)(v3 + 24) = v8;
      if ( v8 )
        setvbuf(v8, buf, 1, 0x2000u);
    }
    result = *(FILE **)(v3 + 24);
  }
  if ( result )
  {
    fprintf(result, "true%d: ", *(_DWORD *)(v3 + 20));
    return (FILE *)vfprintf(*(FILE **)(v3 + 24), varg_r1, varg_r2);
  }
  return result;
}
