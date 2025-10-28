int __fastcall sub_F7AC(char *errnum, char *a2, size_t a3, int a4)
{
  int v7; // r3
  bool v8; // zf
  const char *v9; // r2
  char *v10; // r3
  int result; // r0
  int v13; // [sp+0h] [bp-4h]

  if ( !a2 )
    off_21DCC("./../lib/isc/unix/strerror.c", 55, 0, "buf != ((void *)0)");
  if ( dword_2401C )
  {
    v8 = dword_24020 == 0;
    v7 = ++dword_24020;
    if ( !v8 )
      sub_FFB4("./../lib/isc/unix/strerror.c", 59, "((*((&isc_strerror_lock)))++ == 0 ? 0 : 34) == 0", v7);
  }
  else
  {
    dword_2401C = 1;
    dword_24020 = 1;
  }
  v10 = strerror((int)errnum);
  v8 = v10 == 0;
  if ( v10 )
    v9 = "%s";
  else
    v10 = errnum;
  if ( v8 )
    v9 = "Unknown error: %u";
  result = snprintf(a2, a3, v9, v10, a4);
  if ( --dword_24020 )
    sub_FFB4("./../lib/isc/unix/strerror.c", 65, "(--(*((&isc_strerror_lock))) == 0 ? 0 : 34) == 0", v13);
  return result;
}
