int __fastcall sub_152B4(const char *a1, char *to)
{
  char *v4; // r3
  char *v5; // r4
  char *v6; // r5
  int v7; // r3
  char *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  char *v13; // r4
  char *v14; // r0
  int v15; // t1
  unsigned int v17; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    off_21DCC("./../lib/isc/unix/file.c", 208, 0, "file != ((void *)0)");
  if ( !to )
    off_21DCC("./../lib/isc/unix/file.c", 209, 0, "templet != ((void *)0)");
  if ( !*to )
    return 25;
  v4 = to;
  do
  {
    v5 = v4++;
    v6 = v4;
  }
  while ( v5[1] );
  if ( to == v4 )
    return 25;
  if ( v5 >= to && *(v4 - 1) == 88 )
  {
    do
    {
      v6 = v5;
      sub_15B90(&v17);
      *v5 = aAbcdefghijklmn[v17 % 0x3E];
      if ( v5 == to )
        break;
      v7 = (unsigned __int8)*--v5;
    }
    while ( v7 == 88 );
  }
  while ( link(a1, to) == -1 )
  {
    v8 = (char *)*_errno_location();
    if ( v8 != (char *)17 )
      return sub_14CC8(v8, v9, v10, v11);
    v12 = (unsigned __int8)*v6;
    if ( !*v6 )
      return 25;
    v13 = v6;
    while ( 1 )
    {
      v14 = strchr(aAbcdefghijklmn, v12);
      if ( v14 )
      {
        if ( v14[1] )
          break;
      }
      *v13 = aAbcdefghijklmn[0];
      v15 = (unsigned __int8)*++v13;
      v12 = v15;
      if ( !v15 )
        return 25;
    }
    *v13 = v14[1];
  }
  if ( unlink(a1) < 0 )
  {
    v8 = (char *)*_errno_location();
    if ( v8 != (char *)2 )
      return sub_14CC8(v8, v9, v10, v11);
  }
  return 0;
}
