int __fastcall sub_425B4(FILE *stream, int a2, const char *a3)
{
  const char *v6; // r2
  char *v7; // r5

  if ( (*(_DWORD *)(a2 + 16) & 0x20) != 0 && *(unsigned __int16 *)(a2 + 8) == 0x8000 )
    v6 = *(const char **)(a2 + 56);
  else
    v6 = *(const char **)(a2 + 52);
  fprintf(stream, "%-18s", v6);
  if ( (unsigned __int16)*(_DWORD *)(a2 + 16) >> 12 == 5 )
    return fprintf(stream, "  %d\n", a3);
  if ( a3 )
  {
    fputc(32, stream);
    fputc(32, stream);
    while ( 1 )
    {
      v7 = strchr(a3, 10);
      if ( !v7 )
        break;
      fwrite(a3, v7 - a3, 1u, stream);
      a3 = v7 + 1;
      fwrite("\\\n", 1u, 2u, stream);
    }
    fputs(a3, stream);
  }
  return fputc(10, stream);
}
