int __fastcall sub_339F0(int result)
{
  int v1; // r4
  char *v2; // r4

  v1 = result;
  if ( dword_7CF4C )
  {
    result = fwrite("leitch_poll()\n", 1u, 0xEu, (FILE *)stderr);
    if ( v1 > 0 )
      return result;
  }
  else if ( result > 0 )
  {
    return result;
  }
  v2 = (char *)&unk_800BC + 104 * v1;
  if ( *((_WORD *)v2 + 24) )
  {
    *((_WORD *)v2 + 24) = 0;
  }
  else
  {
    if ( dword_7CF4C )
      fprintf((FILE *)stderr, "write leitch %s\n", "D\r");
    result = write(*((_DWORD *)v2 + 6), "D\r", 3u);
    if ( result < 0 )
    {
      if ( dword_7CF4C )
        result = fprintf((FILE *)stderr, "leitch_send: unit %d send failed\n", (unsigned __int8)v2[32]);
      else
        result = sub_4FE78(3, "leitch_send: unit %d send failed %m", (unsigned __int8)v2[32]);
    }
    *((_WORD *)v2 + 24) = 1;
  }
  return result;
}
