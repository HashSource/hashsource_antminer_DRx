int __fastcall sub_595C8(_DWORD *a1)
{
  int result; // r0
  DIR *v3; // r0

  if ( !a1 || *a1 != 1145655850 || (v3 = (DIR *)a1[322]) == 0 )
    off_7C9FC(
      "./../lib/isc/unix/dir.c",
      137,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
  result = closedir(v3);
  a1[322] = 0;
  return result;
}
