const char *sub_57F14()
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
  if ( !dword_C9AF4 )
    sub_4F7C0();
  v1 = 5 * dword_CB86C;
  v2 = dword_CB86C + 1 <= 199;
  if ( dword_CB86C + 1 <= 199 )
    ++dword_CB86C;
  v3 = &byte_CB870[16 * v1];
  if ( !v2 )
    dword_CB86C = 0;
  memset(v3, 0, 0x50u);
  snprintf(v3, 0x50u, "%2d %s %02d:%02d:%02d", v0->tm_mday, off_7BE70[v0->tm_mon], v0->tm_hour, v0->tm_min, v0->tm_sec);
  return v3;
}
