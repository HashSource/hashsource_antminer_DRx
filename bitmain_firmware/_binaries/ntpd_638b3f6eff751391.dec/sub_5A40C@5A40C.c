bool __fastcall sub_5A40C(_BYTE *a1)
{
  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 349, 0, "filename != ((void *)0)");
  return *a1 == 46 && a1[1] == 0;
}
