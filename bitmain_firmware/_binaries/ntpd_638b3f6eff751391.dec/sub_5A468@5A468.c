bool __fastcall sub_5A468(_BYTE *a1)
{
  if ( !a1 )
  {
    off_7C9FC("./../lib/isc/unix/file.c", 355, 0, "filename != ((void *)0)");
    off_7C9FC("./../lib/isc/unix/file.c", 343, 0, "filename != ((void *)0)");
  }
  return *a1 == 47 || sub_5A40C(a1);
}
