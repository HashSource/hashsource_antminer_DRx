bool __fastcall sub_15770(const char *a1, int a2, int a3, int a4)
{
  struct stat v6; // [sp+0h] [bp-58h] BYREF

  if ( !a1 )
    off_21DCC("./../lib/isc/unix/file.c", 336, 0, "pathname != ((void *)0)");
  return sub_14F7C(a1, &v6, a3, a4) == 0;
}
