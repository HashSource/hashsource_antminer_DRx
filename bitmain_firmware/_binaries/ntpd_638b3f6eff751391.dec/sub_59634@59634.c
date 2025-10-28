int __fastcall sub_59634(_DWORD *a1)
{
  DIR *v2; // r0

  if ( !a1 || *a1 != 1145655850 || (v2 = (DIR *)a1[322]) == 0 )
  {
    off_7C9FC(
      "./../lib/isc/unix/dir.c",
      148,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
    v2 = (DIR *)a1[322];
  }
  rewinddir(v2);
  return 0;
}
