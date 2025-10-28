int __fastcall sub_14814(_DWORD *a1, char *s, int a3, int a4)
{
  size_t v6; // r0
  char *v8; // r6
  _BYTE *v9; // r3
  DIR *v10; // r0
  int *v11; // r0

  if ( !a1 || *a1 != 1145655850 )
    off_21DCC(
      "./../lib/isc/unix/dir.c",
      63,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*')))))",
      a4);
  if ( !s )
    off_21DCC("./../lib/isc/unix/dir.c", 64, 0, "dirname != ((void *)0)");
  v6 = strlen(s);
  if ( v6 + 3 > 0x400 )
    return 19;
  v8 = (char *)a1 + v6;
  memcpy(a1 + 1, s, v6 + 1);
  v9 = v8 + 4;
  if ( a1 + 1 < (_DWORD *)v8 + 1 && v8[3] != 47 )
  {
    v9 = v8 + 5;
    v8[4] = 47;
  }
  *v9 = 42;
  v9[1] = 0;
  v10 = opendir(s);
  a1[322] = v10;
  if ( v10 )
    return 0;
  v11 = _errno_location();
  return sub_14CC8(*v11);
}
