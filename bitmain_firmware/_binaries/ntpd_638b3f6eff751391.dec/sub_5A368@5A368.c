bool __fastcall sub_5A368(const char *a1, int a2, int a3, int a4)
{
  struct stat v6; // [sp+0h] [bp-58h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 336, 0, "pathname != ((void *)0)");
  return sub_59B74(a1, &v6, a3, a4) == 0;
}
