int __fastcall sub_59C04(const char *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r5
  struct stat v8; // [sp+0h] [bp-5Ch] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 104, 0, "file != ((void *)0)");
  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/file.c", 105, 0, "time != ((void *)0)");
  v6 = sub_59B74(a1, &v8, a3, a4);
  if ( !v6 )
    sub_57264(a2, v8.st_mtim.tv_sec, 0);
  return v6;
}
