int __fastcall sub_16120(FILE *a1, int a2)
{
  if ( a2 > 170 )
    fprintf(a1, "nterm %s (", (&off_5DE80)[a2]);
  else
    fprintf(a1, "token %s (", (&off_5DE80)[a2]);
  return fputc(41, a1);
}
