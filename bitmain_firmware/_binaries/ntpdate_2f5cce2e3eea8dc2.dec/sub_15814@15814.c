bool __fastcall sub_15814(_BYTE *a1)
{
  if ( !a1 )
    off_21DCC("./../lib/isc/unix/file.c", 349, 0, "filename != ((void *)0)");
  return *a1 == 46 && a1[1] == 0;
}
