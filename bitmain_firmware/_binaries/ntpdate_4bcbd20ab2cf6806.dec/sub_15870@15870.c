bool __fastcall sub_15870(_BYTE *a1)
{
  if ( !a1 )
  {
    off_21DCC("./../lib/isc/unix/file.c", 355, 0, "filename != ((void *)0)");
    off_21DCC("./../lib/isc/unix/file.c", 343, 0, "filename != ((void *)0)");
  }
  return *a1 == 47 || sub_15814(a1);
}
