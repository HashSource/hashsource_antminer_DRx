size_t __fastcall sub_3F61C(const char *a1, unsigned int a2)
{
  struct tm *v4; // r0
  size_t result; // r0
  FILE *v6; // r0
  FILE *v7; // r4
  char v8[28]; // [sp+0h] [bp-24h] BYREF
  time_t timer; // [sp+1Ch] [bp-8h] BYREF

  time(&timer);
  v4 = localtime(&timer);
  result = strftime(v8, 0x1Au, "%Y-%m-%d %H:%M:%S", v4);
  if ( dword_7A530 > a2 )
  {
    v6 = fopen(a1, "a+");
    v7 = v6;
    if ( v6 )
      fprintf(v6, "%s ", v8);
    return fclose(v7);
  }
  return result;
}
