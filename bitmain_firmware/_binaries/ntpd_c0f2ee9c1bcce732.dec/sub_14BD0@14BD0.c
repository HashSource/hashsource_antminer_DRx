int sub_14BD0()
{
  int v0; // r4
  int v1; // r5
  int v2; // r3
  int result; // r0
  int v4; // r0

  sub_111CC(1);
  v0 = dword_CA654;
  if ( !dword_CA654 )
  {
    sub_111CC(0);
    return sub_4FE78(3, "Unable to listen for broadcasts, no broadcast interfaces available");
  }
  v1 = 0;
  do
  {
    v2 = *(_DWORD *)(v0 + 140);
    if ( (v2 & 0x84) == 0 && !*(_DWORD *)(v0 + 176) && (v2 & 8) != 0 )
    {
      if ( *(_WORD *)(v0 + 20) != 2 )
        off_7C9FC("ntp_io.c", 2624, 0, "(2 == ((&interf->sin)->sa.sa_family))");
      if ( (v2 & 0x20) != 0 )
      {
        ++v1;
      }
      else
      {
        *(_WORD *)(v0 + 136) = 2;
        v4 = sub_12CBC((unsigned __int16 *)(v0 + 76), 1, 0, v0);
        *(_DWORD *)(v0 + 12) = v4;
        if ( v4 != -1 || sub_112C0(v0, *(_DWORD *)(v0 + 8), (unsigned __int16 *)(v0 + 20)) )
        {
          sub_4FE78(
            6,
            "io_setbclient: Opened broadcast client on interface #%d %s",
            *(_DWORD *)(v0 + 16),
            (const char *)(v0 + 104));
          ++v1;
          *(_DWORD *)(v0 + 148) = sub_4D0B4(v0 + 20);
        }
      }
    }
    v0 = *(_DWORD *)v0;
  }
  while ( v0 );
  result = sub_111CC(0);
  if ( !v1 )
    return sub_4FE78(3, "Unable to listen for broadcasts, no broadcast interfaces available");
  if ( dword_7CF4C > 0 )
    return puts("io_setbclient: Opened broadcast clients");
  return result;
}
