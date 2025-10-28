size_t __fastcall sub_34700(const char *a1, unsigned int a2)
{
  struct tm *v4; // r0
  size_t result; // r0
  FILE *v6; // r0
  FILE *v7; // r4
  time_t v8; // [sp+0h] [bp-24h] BYREF
  char s[32]; // [sp+4h] [bp-20h] BYREF

  time(&v8);
  v4 = localtime(&v8);
  result = strftime(s, 0x1Au, "%Y-%m-%d %H:%M:%S", v4);
  if ( dword_6D360 > a2 )
  {
    v6 = fopen(a1, "a+");
    v7 = v6;
    if ( v6 )
      fprintf(v6, "%s ", s);
    return fclose(v7);
  }
  return result;
}
