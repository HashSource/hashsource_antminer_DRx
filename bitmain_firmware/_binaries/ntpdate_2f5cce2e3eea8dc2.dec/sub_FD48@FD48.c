const char *sub_FD48()
{
  struct tm *v0; // r4
  int v1; // r3
  bool v2; // cc
  char *v3; // r5
  time_t v5; // [sp+14h] [bp-8h] BYREF

  v5 = time(0);
  v0 = localtime(&v5);
  if ( !v0 )
    return "-- --- --:--:--";
  if ( !dword_23FD0 )
    sub_DAE4();
  v1 = 5 * dword_241DC;
  v2 = dword_241DC + 1 <= 199;
  if ( dword_241DC + 1 <= 199 )
    ++dword_241DC;
  v3 = (char *)&unk_241E0 + 16 * v1;
  if ( !v2 )
    dword_241DC = 0;
  memset(v3, 0, 0x50u);
  snprintf(v3, 0x50u, "%2d %s %02d:%02d:%02d", v0->tm_mday, off_21300[v0->tm_mon], v0->tm_hour, v0->tm_min, v0->tm_sec);
  return v3;
}
