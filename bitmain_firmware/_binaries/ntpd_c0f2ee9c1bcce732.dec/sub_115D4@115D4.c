int __fastcall sub_115D4(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r2
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r5

  if ( a1 < 0 )
    off_7C9FC("ntp_io.c", 414, 0, "(int)fd >= 0");
  if ( dword_794F8 == -1 )
  {
    if ( getdtablesize() > 25 || getdtablesize() > 9 )
    {
      if ( getdtablesize() <= 25 )
        v6 = getdtablesize() - 10;
      else
        v6 = 16;
    }
    else
    {
      v6 = 0;
    }
    dword_794F8 = v6;
    v7 = getdtablesize();
    sub_4FE78(7, "ntp_io: estimated max descriptors: %d, initial socket boundary: %d", v7, v6);
  }
  if ( a1 < 0 || a1 >= dword_794F8 )
    return a1;
  while ( 1 )
  {
    v2 = fcntl(a1, 0);
    v3 = 0;
    v4 = v2;
    if ( v2 != -1 )
      break;
    if ( dword_794F8 > 9 )
      v3 = dword_794F8 - 10;
    dword_794F8 = v3;
    sub_4FE78(7, "ntp_io: selecting new socket boundary: %d", v3);
    if ( dword_794F8 <= 0 || a1 >= dword_794F8 )
      return a1;
  }
  v8 = a1;
  v9 = v4;
  close(v8);
  return v9;
}
