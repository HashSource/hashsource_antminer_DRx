int __fastcall sub_10A34(const char *a1)
{
  FILE *v2; // r4

  v2 = fopen((const char *)dword_1C3D0, "rb+");
  if ( !v2 )
    puts("open error");
  fwrite("config cgminer 'default'\n", 1u, 0x19u, v2);
  fprintf(v2, "  option pool1url  '%s'\n", a1 + 4);
  fprintf(v2, "\toption pool1user '%s'\n", a1 + 84);
  fprintf(v2, "\toption pool1pw   '%s'\n", a1 + 124);
  fprintf(v2, "\toption pool2url  '%s'\n", a1 + 168);
  fprintf(v2, "\toption pool2user '%s'\n", a1 + 248);
  fprintf(v2, "\toption pool2pw   '%s'\n", a1 + 288);
  fprintf(v2, "\toption pool3url  '%s'\n", a1 + 332);
  fprintf(v2, "\toption pool3user '%s'\n", a1 + 412);
  fprintf(v2, "\toption pool3pw   '%s'\n", a1 + 452);
  fprintf(v2, "\toption api_allow  '%s'\n", a1 + 492);
  fprintf(v2, "\toption more_options '%s'\n", a1 + 512);
  fprintf(v2, "\toption freq   '%s'\n", a1 + 522);
  fprintf(v2, "\toption voltage   '%s'\n", a1 + 537);
  fprintf(v2, "\toption pool_balance '%s'\n", a1 + 547);
  fprintf(v2, "\toption bitmain_nobeeper   '%s'\n", a1 + 557);
  fprintf(v2, "\toption bitmain_notempoverctrl '%s'\n", a1 + 567);
  fwrite("\t           ", 1u, 0xCu, v2);
  return fclose(v2);
}
