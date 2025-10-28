int __fastcall sub_8FA4(int a1, unsigned __int16 a2)
{
  int v4; // r0
  int v5; // r0
  unsigned __int8 v6; // r4

  while ( 1 )
  {
    v5 = IO_getc((_IO_FILE *)stdin);
    v6 = v5;
    if ( v5 == -1 )
      break;
    if ( !dword_12228 )
      fputc(46, (FILE *)stderr);
    fflush((FILE *)stdout);
    v4 = sub_9414(a1, a2++, v6);
    sub_8DBC(v4, "write error", 162);
  }
  if ( !dword_12228 )
    fwrite("\n\n", 1u, 2u, (FILE *)stderr);
  return 0;
}
