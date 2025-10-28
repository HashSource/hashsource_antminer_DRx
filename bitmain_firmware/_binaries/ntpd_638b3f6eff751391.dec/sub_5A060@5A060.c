int __fastcall sub_5A060(const char *a1, FILE **a2)
{
  const char *v4; // r3
  char *v5; // r4
  _BYTE *v6; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r4
  char *v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  _BYTE *v15; // r4
  char *v16; // r0
  int v17; // t1
  int v18; // r5
  FILE *v20; // r0
  int *v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  unsigned int v25; // [sp+Ch] [bp-8h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 256, 0, "templet != ((void *)0)");
  if ( !a2 || *a2 )
    off_7C9FC("./../lib/isc/unix/file.c", 257, 0, "fp != ((void *)0) && *fp == ((void *)0)");
  if ( !*a1 )
    return 25;
  v4 = a1;
  do
  {
    v5 = (char *)v4++;
    v6 = v4;
  }
  while ( v5[1] );
  if ( a1 == v4 )
    return 25;
  if ( a1 <= v5 && *(v4 - 1) == 88 )
  {
    do
    {
      v6 = v5;
      sub_5A788(&v25);
      *v5 = aAbcdefghijklmn[v25 % 0x3E];
      if ( v5 == a1 )
        break;
      v7 = (unsigned __int8)*--v5;
    }
    while ( v7 == 88 );
  }
  while ( 1 )
  {
    v8 = open(a1, 194, 438);
    v9 = v8;
    if ( v8 != -1 )
      break;
    v10 = (char *)*_errno_location();
    if ( v10 != (char *)17 )
      return sub_598C0(v10, v11, v12, v13);
    v14 = (unsigned __int8)*v6;
    if ( !*v6 )
      return 25;
    v15 = v6;
    while ( 1 )
    {
      v16 = strchr(aAbcdefghijklmn, v14);
      if ( v16 )
      {
        if ( v16[1] )
          break;
      }
      *v15 = aAbcdefghijklmn[0];
      v17 = (unsigned __int8)*++v15;
      v14 = v17;
      if ( !v17 )
        return 25;
    }
    *v15 = v16[1];
  }
  v20 = fdopen(v8, "w+");
  if ( v20 )
  {
    *a2 = v20;
    return 0;
  }
  else
  {
    v21 = _errno_location();
    v18 = sub_598C0((char *)*v21, v22, v23, v24);
    if ( remove(a1) < 0 )
      sub_548C4(dword_C9C5C, (int)&off_7CA10, (int)&off_7CA40, -4, "remove '%s': failed", a1);
    close(v9);
  }
  return v18;
}
