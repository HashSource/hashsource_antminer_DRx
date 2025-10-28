int __fastcall sub_14920(_DWORD *a1)
{
  struct dirent *v2; // r0
  char *d_name; // r6
  size_t v4; // r0
  size_t v5; // r5
  DIR *v7; // r0

  if ( !a1 || *a1 != 1145655850 || (v7 = (DIR *)a1[322]) == 0 )
    off_21DCC(
      "./../lib/isc/unix/dir.c",
      106,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
  v2 = readdir(v7);
  if ( !v2 )
    return 29;
  d_name = v2->d_name;
  v4 = strlen(v2->d_name);
  v5 = v4;
  if ( v4 > 0xFF )
    return 34;
  memcpy(a1 + 257, d_name, v4 + 1);
  a1[321] = v5;
  return 0;
}
